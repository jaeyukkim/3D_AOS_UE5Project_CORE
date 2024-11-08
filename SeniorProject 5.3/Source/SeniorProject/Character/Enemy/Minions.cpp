// Fill out your copyright notice in the Description page of Project Settings.


#include "Minions.h"

#include "EngineUtils.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"

#include "SeniorProject/DefaultBase/MinionAnimInstance.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

#include "SeniorProject/AI/AIControllerBase.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"



// Sets default values
AMinions::AMinions()
{
	Tags.Add(TEXT("Minion"));

	PrimaryActorTick.bCanEverTick = false;
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");


	HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarWidget->SetupAttachment(GetRootComponent());
	HealthBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	HealthBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	

	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Character"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));



	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 800.0f, 0.0f);
	
	GetCharacterMovement()->bRequestedMoveUseAcceleration = true;
	

	GetCharacterMovement()->bUseRVOAvoidance = true;
	GetCharacterMovement()->AvoidanceWeight = 2.0f;
	
}

void AMinions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMinions, TeamName);
	DOREPLIFETIME(AMinions, CombatTarget);
	
}
void AMinions::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if(!HasAuthority()) return;
	
	AIControllerBase = Cast<AAIControllerBase>(NewController);
	AIControllerBase->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	AIControllerBase->RunBehaviorTree(BehaviorTree);
	AIControllerBase->GetBlackboardComponent()->SetValueAsBool("HitReacting", false);
	AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("RangedAttacker"), CharacterClass != ECharacterClass::Minion_Melee);
	AIControllerBase->InitTeamAndLineTag(TeamName, LineTag);
	AIControllerBase->UpdateMinionTargetTurret();
}

// Called when the game starts or when spawned
void AMinions::BeginPlay()
{
	Super::BeginPlay();

	//MinionEnforceTime 경과에 따라 미니언 레벨 증가 최대 18 레벨까지만
	Level = FMath::Clamp(GetWorld()->GetTimeSeconds()/MinionEnforceTime, 1, 18); // 최대 60%로 제한
	InitAbilityActorInfo();

	
	if(HasAuthority())
	{
		UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent, CharacterClass);
	}
	
	AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Effects_HitReact, EGameplayTagEventType::NewOrRemoved).AddUObject(this,&AMinions::HitReactTagChanged);

	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBarWidget->GetUserWidgetObject()))
	{
		OverlayUserWidget->SetWidgetController(this);
	}

	if (const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMovementSpeedAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
			}
		);

		OnHealthChanged.Broadcast(AS->GetHealth());
		OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	}

	BindCallbackTargetCharacter();
	
}




void AMinions::BindCallbackTargetCharacter()
{
	if(AIControllerBase != nullptr)
	{
		UBlackboardComponent* BlackboardComp = AIControllerBase->GetBlackboardComponent();
		if (BlackboardComp)
		{
			// "Target" 키의 ID 가져오기
			const FBlackboard::FKey TargetKeyID = BlackboardComp->GetKeyID("Target");
			

			// Target 값이 변경될 때마다 OnBlackboardTargetChanged 호출
			BlackboardComp->RegisterObserver(TargetKeyID, this,
				FOnBlackboardChangeNotification::CreateUObject(this, &AMinions::OnBlackboardTargetChanged));
		}
	}
}



EBlackboardNotificationResult AMinions::OnBlackboardTargetChanged(const UBlackboardComponent& BlackboardComp,
                                                                  FBlackboard::FKey KeyID)
{
	
	if(HasAuthority())
	{
		UObject* InTargetCharacter = BlackboardComp.GetValueAsObject("Target");
		if(IsValid(InTargetCharacter))
		{
			CombatTarget = CastChecked<APawn>(InTargetCharacter);
		}
		else
		{
			CombatTarget = nullptr;
		}
	}
	
	// EBlackboardNotificationResult::Continue를 반환하여 델리게이트가 계속 유효하도록 함
	return EBlackboardNotificationResult::ContinueObserving;
}




// Called every frame




void AMinions::Die_Implementation()
{
	SetLifeSpan(LifeSpanTime);
	AIControllerBase->StopAI();
	HealthBarWidget->SetVisibility(false);

	if(HasAuthority())
	{
		AIControllerBase->GetBlackboardComponent()->SetValueAsObject(FName("Target"),nullptr);
	}
	
	Super::Die_Implementation();
}


AActor* AMinions::GetCombatTarget_Implementation() const
{
	return CombatTarget;
}



void AMinions::SetTargetPlayer_Implementation(AActor* Target)
{
	if(AIControllerBase != nullptr)
	{
		AIControllerBase->GetBlackboardComponent()->SetValueAsObject(FName("TargetPlayer"),Target);
	}
	
}

void AMinions::SetCurrentWayPoint_Implementation(AActor* InCurrentWayPoint)
{
	Super::SetCurrentWayPoint_Implementation(InCurrentWayPoint);

	
}



void AMinions::InitAbilityActorInfo()
{
	
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	Cast<UAbilitySystemComponentBase>(AbilitySystemComponent)->AbilityActorInfoSet();
	if(HasAuthority())
	{
		InitializeDefaultAttributes();
	}
	OnAscRegistered.Broadcast(AbilitySystemComponent);
	AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Debuff_Type_Stun,
		EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AMinions::Stunned);
	
}



void AMinions::InitializeDefaultAttributes() const
{
	UBlueprintFunctionLibraryBase::InitializeDefaultAttributes(this, CharacterClass, Level, AbilitySystemComponent);
}


void AMinions::HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	Super::HitReactTagChanged(CallbackTag, NewCount);
	if(AIControllerBase && AIControllerBase->GetBlackboardComponent())
		AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), bHitReacting);

}




void AMinions::Stunned(const FGameplayTag CallbackTag, int32 NewCount)
{
	
	if(AIControllerBase && AIControllerBase->GetBlackboardComponent())
	{
		if(NewCount > 0)
		{
			AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("Stunned"), true);
			bIsStunned = true;
		}
		else
		{
			AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("Stunned"), false);
			bIsStunned = false;

		}
		
	}
		
}

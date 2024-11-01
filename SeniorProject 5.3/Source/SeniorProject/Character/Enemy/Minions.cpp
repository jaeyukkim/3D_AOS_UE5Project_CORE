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
#include "SeniorProject/Actor/Gameplay/WayPoint.h"


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
	DOREPLIFETIME(AMinions, LineTag);
	DOREPLIFETIME(AMinions, CombatTarget);
	DOREPLIFETIME(AMinions, WayPoints);

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
	
}

// Called when the game starts or when spawned
void AMinions::BeginPlay()
{
	Super::BeginPlay();

	
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

	// 타워는 웨이 포인트 저장할 필요 x 클라이언트는 미니언의 경로 지정 권한이 없으므로 실행이유x
	if(!ActorHasTag("Turret") || !HasAuthority())
		GetWorldTimerManager().SetTimer(InitWayPointTimerHandle, this, &AMinions::InitWayPoint, InitWayPointLoop, true);
	
}

//각자 라인에 맞는 웨이포인트를 저장하는 함수, 라인이 초기화되어있지 않으면 다시 Loop
void AMinions::InitWayPoint()
{
	if(!HasAuthority()) return;
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_NONE) || LineTag.MatchesTagExact(TagsBase.GameRule_Line_NONE) || AIControllerBase == nullptr) return;

	//팀 설정이 끝났으면 비동기 초기화 루프 제거
	GetWorldTimerManager().ClearTimer(InitWayPointTimerHandle);


	AActor* FirstWayPoint = nullptr;
	float MinDistance = INFINITY;
	for(TActorIterator<AWayPoint> It(GetWorld()) ; It ; ++It)
	{
		AWayPoint* Way = *It;

		float DistanceToWayPoint = FVector::Distance(Way->GetActorLocation(), GetActorLocation());
		if(Way->LineTag.MatchesTagExact(LineTag))
		{
			WayPoints.AddUnique(Way);
		}
		if(MinDistance > DistanceToWayPoint)
		{
			MinDistance = DistanceToWayPoint;
			FirstWayPoint = Way;
		}
	}
	
	AIControllerBase->GetBlackboardComponent()->SetValueAsObject("WayPoint", FirstWayPoint);
	
	
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

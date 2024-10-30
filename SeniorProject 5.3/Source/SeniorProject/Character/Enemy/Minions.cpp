// Fill out your copyright notice in the Description page of Project Settings.


#include "Minions.h"

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

	BlueTeamMesh = CreateDefaultSubobject<USkeletalMesh>("BlueTeamMesh");
	RedTeamMesh = CreateDefaultSubobject<USkeletalMesh>("RedTeamMesh");


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

}

void AMinions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMinions, bIsMeshChanged);
	DOREPLIFETIME(AMinions, TeamName);
	DOREPLIFETIME(AMinions, LineTag);

	
}


// Called every frame




void AMinions::Die_Implementation()
{
	SetLifeSpan(LifeSpan);
	AIControllerBase->StopAI();
	HealthBarWidget->SetVisibility(false);
	
	Super::Die_Implementation();
}

void AMinions::SetCombatTarget_Implementation(AActor* InCombatTarget)
{
	CombatTarget = InCombatTarget;
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

void AMinions::SetTeamNameByTag_Implementation(FGameplayTag NewTeamName)
{
	Super::SetTeamNameByTag_Implementation(NewTeamName);

	if(BlueTeamMesh == nullptr || RedTeamMesh == nullptr) return;
	
	if(HasAuthority())
	{
		TeamName = NewTeamName;
		if (TeamName == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam)
		{
			GetMesh()->SetSkeletalMesh(BlueTeamMesh);
		}
		else if (TeamName == FGameplayTagsBase::Get().GameRule_TeamName_RedTeam)
		{
			GetMesh()->SetSkeletalMesh(RedTeamMesh);
		}
	}

}

void AMinions::OnRep_Mesh()
{
	if(BlueTeamMesh == nullptr || RedTeamMesh == nullptr) return;

	
	if (TeamName == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam)
	{
		GetMesh()->SetSkeletalMesh(BlueTeamMesh);
	}
	else if (TeamName == FGameplayTagsBase::Get().GameRule_TeamName_RedTeam)
	{
		GetMesh()->SetSkeletalMesh(RedTeamMesh);
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
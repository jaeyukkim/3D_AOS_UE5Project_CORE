// Fill out your copyright notice in the Description page of Project Settings.


#include "Minions.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
#include "SeniorProject/DefaultBase/MinionAnimInstance.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

#include "SeniorProject/AI/AIControllerBase.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AMinions::AMinions()
{
	Tags.Add(TEXT("Minion"));

	PrimaryActorTick.bCanEverTick = false;

	BlueTeamMesh = CreateDefaultSubobject<USkeletalMesh>("BlueTeamMesh");
	BlueTeamMesh = CreateDefaultSubobject<USkeletalMesh>("RedTeamMesh");


	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetRootComponent());
	HealthBar->SetWidgetSpace(EWidgetSpace::World);
	HealthBar->SetDrawSize(FVector2D(150.0f, 50.0f));
	HealthBar->SetCullDistance(3000.f);
	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Character"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));



	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 800.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
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

	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBar->GetUserWidgetObject()))
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

		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Effects_HitReact, EGameplayTagEventType::NewOrRemoved).AddUObject(this,&AMinions::HitReactTagChanged);
		
		
		OnHealthChanged.Broadcast(AS->GetHealth());
		OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	}
	
	

}

void AMinions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMinions, bIsMeshChanged);

	
}


// Called every frame




void AMinions::Die()
{
	SetLifeSpan(LifeSpan);
	AIControllerBase->StopAI();
	
	Super::Die();
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

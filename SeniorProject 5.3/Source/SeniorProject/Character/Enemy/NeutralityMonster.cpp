// Fill out your copyright notice in the Description page of Project Settings.


#include "NeutralityMonster.h"

#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AI/AIControllerBase.h"

ANeutralityMonster::ANeutralityMonster()
{
	TeamName = FGameplayTagsBase::Get().GameRule_TeamName_NeutralityTeam;
	Tags.Reset();
	Tags.Add("Buff");


	PerceptionSystem = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	Sight->SightRadius = DetectRadius;
	Sight->LoseSightRadius = DetectRadius;
	//전 방향 감지
	Sight->PeripheralVisionAngleDegrees = 360.0f;

	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectFriendlies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = true;

	
	PerceptionSystem->ConfigureSense(*Sight);
	PerceptionSystem->SetDominantSense(Sight->GetSenseImplementation());
}

void ANeutralityMonster::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AIControllerBase = Cast<AAIControllerBase>(NewController);
	if (AIControllerBase)
	{
		AIControllerBase->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
		AIControllerBase->RunBehaviorTree(BehaviorTree);
		AIControllerBase->GetBlackboardComponent()->SetValueAsBool("CombatState", false);
		AIControllerBase->GetBlackboardComponent()->SetValueAsBool("bOutOfRange", false);
		AIControllerBase->GetBlackboardComponent()->SetValueAsVector("HomePos", GetActorLocation());


	}
}



void ANeutralityMonster::BeginPlay()
{
	Super::BeginPlay();
	if(!HasAuthority())	return;
	
	// CombatState를 관리하는 델리게이트 바인딩
	BindCombatState();
	PerceptionSystem->OnPerceptionUpdated.AddDynamic(this, &ANeutralityMonster::DetectEnemyPlayer);

	// 체력 리젠 이벤트 RegenerationPeriod마다 체력 리젠
	GetWorldTimerManager().SetTimer(RegenerationTimerHandle, this, &ANeutralityMonster::Regeneration, RegenerationPeriod, true);

	
}


TArray<TSubclassOf<UGameplayEffect>> ANeutralityMonster::GetBuffEffect_Implementation()
{
	return BuffEffect;
}

void ANeutralityMonster::OutCombatState()
{
	if (!HasAuthority() || AIControllerBase == nullptr || AbilitySystemComponent == nullptr || bDead) return;

	AIControllerBase->GetBlackboardComponent()->SetValueAsBool("CombatState", false);

}

void ANeutralityMonster::BindCombatState()
{
	UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet);
	if (!HasAuthority() || AIControllerBase == nullptr || AbilitySystemComponent == nullptr || AS == nullptr) return;

	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetIncomingDamageAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			if (!HasAuthority() || AIControllerBase == nullptr || AbilitySystemComponent == nullptr|| bDead) return;

			AIControllerBase->GetBlackboardComponent()->SetValueAsBool("CombatState", true);
		
			
			GetWorldTimerManager().ClearTimer(CombatTimerHandle);
			GetWorldTimerManager().SetTimer(CombatTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				if(bDead) return;
				OutCombatState();
			}), CombatForgetTime, false);
		}
	);
	
	
}

void ANeutralityMonster::Regeneration()
{
	UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet);
	if (!HasAuthority() || AIControllerBase == nullptr || AS == nullptr) return;

	bool IsCombatState = AIControllerBase->GetBlackboardComponent()->GetValueAsBool("CombatState");
	bool IsOutHomeRange = AIControllerBase->GetBlackboardComponent()->GetValueAsBool("bOutOfRange");

	if (!IsCombatState || IsOutHomeRange)
	{
		AS->SetHealth((AS->GetMaxHealth() * RegenerationRate) + AS->GetHealth());
	}
}


void ANeutralityMonster::SaveAttacker(AActor* Attacker)
{
	Super::SaveAttacker(Attacker);
	if (AIControllerBase == nullptr) return;
	
	//피격 당했을 때 SaveAttacker가 실행되고 가장 가까운 어태커를 Target으로 함.
	float NearestPlayerDistance = INFINITY;
	for (AActor* Player : RecentAttackers)
	{
		if(Player != nullptr)
		{
			float DistToPlayer = FVector::Distance(Player->GetActorLocation(), GetActorLocation());
			if (DistToPlayer < NearestPlayerDistance)
			{
				AIControllerBase->GetBlackboardComponent()->SetValueAsBool("CombatState", true);
				AIControllerBase->GetBlackboardComponent()->SetValueAsObject("Target", Player);
				NearestPlayerDistance = DistToPlayer;
			}
		}
	}

}


void ANeutralityMonster::MulticastHandleDeath()
{
	Super::MulticastHandleDeath();
}

void ANeutralityMonster::Die_Implementation()
{
	Super::Die_Implementation();

	// 스포너에게 죽었다고 알림
	if(HasAuthority())
	{
		BuffDeadDelegate.Broadcast();
		GetWorldTimerManager().ClearTimer(CombatTimerHandle);
		GetWorldTimerManager().ClearTimer(RegenerationTimerHandle);
	}
}


// 감지된 플레이어중 가장 가까운 플레이어를 Target으로 설정합니다.
void ANeutralityMonster::DetectEnemyPlayer(const TArray<AActor*>& Actors)
{

	if (!HasAuthority() || AIControllerBase == nullptr) return;

	
	TArray<AActor*> PerceivedActors;
	TArray<AActor*> PerceivedPlayers;
	PerceptionSystem->GetCurrentlyPerceivedActors(nullptr, PerceivedActors);

	for (AActor* InActor : PerceivedActors)
	{
		if (InActor != nullptr && InActor->ActorHasTag("Player"))
		{
			PerceivedPlayers.AddUnique(InActor);
		}
	}
	
	float NearestPlayerDistance = INFINITY;
	for (AActor* Player : PerceivedPlayers)
	{
		if(Player != nullptr)
		{
			float DistToPlayer = FVector::Distance(Player->GetActorLocation(), GetActorLocation());
			if (DistToPlayer < NearestPlayerDistance)
			{
				AIControllerBase->GetBlackboardComponent()->SetValueAsObject("Target", Player);
				NearestPlayerDistance = DistToPlayer;
			}
		}
	}

/*	if (PerceivedPlayers.Num() <= 0)
	{
		AIControllerBase->GetBlackboardComponent()->SetValueAsObject("Target", nullptr);
	}
*/	
	
}

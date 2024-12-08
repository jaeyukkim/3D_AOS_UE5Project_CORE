// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerBase.h"

#include "EngineUtils.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Actor/Gameplay/AllWayPoint.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"



AAIControllerBase::AAIControllerBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	
	UCrowdFollowingComponent* CrowdFollowingComponent = FindComponentByClass<UCrowdFollowingComponent>();

	if(CrowdFollowingComponent)
	{
		CrowdFollowingComponent->SetCrowdSeparation(true);
		CrowdFollowingComponent->SetCrowdSeparationWeight(200.f);
		CrowdFollowingComponent->SetCrowdAvoidanceRangeMultiplier(1.1f);
		CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);
		CrowdFollowingComponent->SetCrowdAnticipateTurns(true);
	}

	
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
}

void AAIControllerBase::BeginPlay()
{
	Super::BeginPlay();

	if(!HasAuthority()) return;

	
}

void AAIControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(!InPawn->ActorHasTag("Turret"))
		
	if(AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		MyGameModeBase->UpdateMinionTargets.AddDynamic(this, &AAIControllerBase::UpdateMinionTargetTurret);
	}
	
	GetWorldTimerManager().SetTimer(InitMinionTargetTimerHandle, this, &AAIControllerBase::UpdateMinionTargetTurret, InitMinionTargetLoop, true);
}



void AAIControllerBase::UpdateMinionTargetTurret()
{
	
	if(!HasAuthority()) return;

	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if(ACoreGameState* CoreGameState = Cast<ACoreGameState>(GetWorld()->GetGameState()))
	{
		
		const FGameplayTag TargetLevel = CoreGameState->GetValidTargetTurret(TeamTag, LineTag);

		if(TeamTag.MatchesTagExact(TagsBase.GameRule_TeamName_NONE) || LineTag.MatchesTagExact(TagsBase.GameRule_Line_NONE))
		{
			return;
		}

		
		for (TActorIterator<ATurret> It(GetWorld()); It; ++It)
		{
			ATurret* Turret = *It;
			const FGameplayTag TurretTeam = Turret->TeamName;
			const FGameplayTag TurretLine = Turret->LineTag;
			const FGameplayTag TurretLevel = Turret->TurretLevelTag;

			
			if(!TargetLevel.MatchesTagExact(TurretLevel) || TeamTag.MatchesTagExact(TurretTeam)) continue;
		
			// 다음 타겟이 넥서스이고 상대팀일 경우
			if(TargetLevel.MatchesTagExact(TagsBase.GameRule_Turret_Nexus) && !TeamTag.MatchesTagExact(TurretTeam))
			{
				if(Blackboard)
				{
					GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TargetLevel.ToString());
					Blackboard->SetValueAsVector("TargetTurret", Turret->GetActorLocation());
					GetWorldTimerManager().ClearTimer(InitMinionTargetTimerHandle);
					return;
				}
				return;
			}

			//월드상에서 모든 포탑을 가져와서 다음 타겟포탑과 라인 태그가 맞지 않거나 같은 팀 포탑일 경우는 제외한다.
			// 미니언과 동일한 라인이 맞고 다음 타겟 타워이고 같은팀이 아니면 새로운 타겟 타워로 설정합니다.
			if(LineTag.MatchesTagExact(TurretLine) && TargetLevel.MatchesTagExact(TurretLevel) && !TeamTag.MatchesTagExact(TurretTeam))
			{
				if(Blackboard)
				{
					Blackboard->SetValueAsVector("TargetTurret", Turret->GetActorLocation());
					GetWorldTimerManager().ClearTimer(InitMinionTargetTimerHandle);
				}
			}

		}
		
	}
}



void AAIControllerBase::StopAI()
{
	if(BehaviorTreeComponent != nullptr)
		BehaviorTreeComponent->StopTree(EBTStopMode::Safe);
}

void AAIControllerBase::InitTeamAndLineTag(FGameplayTag& InTeamTag, FGameplayTag& InLineTag)
{
	TeamTag = InTeamTag;
	LineTag = InLineTag;
	
}


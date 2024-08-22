// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"


const FName AMinionAIController::HomePosKey(TEXT("HomePos"));
const FName AMinionAIController::PatrolPosKey(TEXT("PatrolPos"));
const FName AMinionAIController::TargetKey(TEXT("Target"));
const FName AMinionAIController::IsOutOfRangeKey(TEXT("IsOutOfRange"));

AMinionAIController::AMinionAIController()
{

	//블랙보드 할당
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/AI/BB_MINION'"));
	if (BBAsset.Succeeded())
	{
		BBMonster = BBAsset.Object;
	}
	//비헤이비어 트리 할당
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/AI/BT_MINION'"));
	if (BTAsset.Succeeded())
	{
		BTMonster = BTAsset.Object;
	}


	BlackboardComp = Blackboard;

	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	Sight->SightRadius = 800.0f;	//시야거리 800
	Sight->LoseSightRadius = Sight->SightRadius + 300.0f;	//대상을 잃는 시야범위
	Sight->PeripheralVisionAngleDegrees = 180.0f;		//주변 시야각

	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectFriendlies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = true;

	AIPerceptionComponent->ConfigureSense(*Sight);
	AIPerceptionComponent->SetDominantSense(Sight->GetSenseImplementation());

}


void AMinionAIController::OnPossess(APawn* InPawn)
{

	Super::OnPossess(InPawn);

	
}

// 몬스터의 본래 위치를 반환
FVector AMinionAIController::GetHomePosKey()
{
	return Blackboard->GetValueAsVector(HomePosKey);
}

// 몬스터를 감지
void AMinionAIController::OnSensed(const TArray<AActor*>& UpdatedActors)
{



	for (int i = 0; i < UpdatedActors.Num(); i++)
	{
		//플레이어 태그를 가지고있으면 블랙보드에 값 저장
		if (UpdatedActors[i]->ActorHasTag("Player") && Blackboard->GetValueAsObject(TargetKey) == NULL)
		{
			Blackboard->SetValueAsObject(TargetKey, UpdatedActors[i]);
		}
		else
		{
			//Blackboard->SetValueAsObject(TargetKey, NULL);
		}


	}



}

// Blackboard 자산을 Blackboard 구성 요소에 성공적으로 연결한 경우 몬스터의 홈 위치 선정
void AMinionAIController::RunAI()
{
	if (UseBlackboard(BBMonster, BlackboardComp))
	{
		BlackboardComp->SetValueAsVector(HomePosKey, GetPawn()->GetActorLocation());
		if (!RunBehaviorTree(BTMonster))
		{
			UE_LOG(LogTemp, Warning, TEXT("AiController not run"));
			return;
		}
	}

	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AMinionAIController::OnSensed);
}

// 몬스터의 비헤이비어 트리 정지함수
void AMinionAIController::StopAI()
{
	auto AIBehaviorTree = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (AIBehaviorTree == nullptr) return;

	AIBehaviorTree->StopTree(EBTStopMode::Safe);

}



// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AISetting/KwangAiController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"


const FName AKwangAiController::HomePosKey(TEXT("HomePos"));
const FName AKwangAiController::PatrolPosKey(TEXT("PatrolPos"));
const FName AKwangAiController::TargetKey(TEXT("Target"));
const FName AKwangAiController::IsOutOfRangeKey(TEXT("IsOutOfRange"));

AKwangAiController::AKwangAiController()
{
	
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/AI/BB_AiMonster'"));
	if (BBAsset.Succeeded())
	{
		BBMonster = BBAsset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/AI/BT_AiMonster'"));
	if (BTAsset.Succeeded())
	{
		BTMonster = BTAsset.Object;
	}
	

	BlackboardComp = Blackboard;

	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	Sight->SightRadius = 800.0f;
	Sight->LoseSightRadius = Sight->SightRadius + 300.0f;
	Sight->PeripheralVisionAngleDegrees = 180.0f;

	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectFriendlies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = true;

	AIPerceptionComponent->ConfigureSense(*Sight);
	AIPerceptionComponent->SetDominantSense(Sight->GetSenseImplementation());

	
}


void AKwangAiController::OnPossess(APawn* InPawn)
{
	
	Super::OnPossess(InPawn);
	
	
}


FVector AKwangAiController::GetHomePosKey()
{
	return Blackboard->GetValueAsVector(HomePosKey);
}


//감지된 액터 중 플레이어 태그를 가지고 있으면 블랙보드값에 타겟으로 지정
void AKwangAiController::OnSensed(const TArray<AActor*>& UpdatedActors)
{
		


		for (int i = 0; i < UpdatedActors.Num(); i++)
		{
	
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

//ai 가동 시작
void AKwangAiController::RunAI()
{
	if (UseBlackboard(BBMonster, BlackboardComp))
	{
		BlackboardComp->SetValueAsVector(HomePosKey, GetPawn()->GetActorLocation());
		if (!RunBehaviorTree(BTMonster))
		{
			UE_LOG(LogTemp, Warning, TEXT("AiController not run"));
		}
	}

	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AKwangAiController::OnSensed);
}

// ai 가동 중지
void AKwangAiController::StopAI()
{
	auto AIBehaviorTree = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (AIBehaviorTree == nullptr) return;

	AIBehaviorTree->StopTree(EBTStopMode::Safe);

}



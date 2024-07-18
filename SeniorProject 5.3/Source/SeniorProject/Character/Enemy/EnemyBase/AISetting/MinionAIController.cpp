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

	//������ �Ҵ�
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/AI/BB_MINION'"));
	if (BBAsset.Succeeded())
	{
		BBMonster = BBAsset.Object;
	}
	//�����̺�� Ʈ�� �Ҵ�
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/AI/BT_MINION'"));
	if (BTAsset.Succeeded())
	{
		BTMonster = BTAsset.Object;
	}


	BlackboardComp = Blackboard;

	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	Sight->SightRadius = 800.0f;	//�þ߰Ÿ� 800
	Sight->LoseSightRadius = Sight->SightRadius + 300.0f;	//����� �Ҵ� �þ߹���
	Sight->PeripheralVisionAngleDegrees = 180.0f;		//�ֺ� �þ߰�

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

// ������ ���� ��ġ�� ��ȯ
FVector AMinionAIController::GetHomePosKey()
{
	return Blackboard->GetValueAsVector(HomePosKey);
}

// ���͸� ����
void AMinionAIController::OnSensed(const TArray<AActor*>& UpdatedActors)
{



	for (int i = 0; i < UpdatedActors.Num(); i++)
	{
		//�÷��̾� �±׸� ������������ �����忡 �� ����
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

// Blackboard �ڻ��� Blackboard ���� ��ҿ� ���������� ������ ��� ������ Ȩ ��ġ ����
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

// ������ �����̺�� Ʈ�� �����Լ�
void AMinionAIController::StopAI()
{
	auto AIBehaviorTree = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (AIBehaviorTree == nullptr) return;

	AIBehaviorTree->StopTree(EBTStopMode::Safe);

}



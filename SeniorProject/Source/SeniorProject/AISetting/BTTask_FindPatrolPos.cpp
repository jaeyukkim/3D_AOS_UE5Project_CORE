// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AISetting/BTTask_FindPatrolPos.h"
#include "KwangAiController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "SeniorProject/AIMinions/MinionAIController.h"


UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
	NodeName = TEXT("FindPatrolPos");
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto Monster = OwnerComp.GetAIOwner()->GetPawn();

	if (Monster == nullptr)
		return EBTNodeResult::Failed;

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(Monster->GetWorld());

	if (Monster->ActorHasTag(TEXT("MyCharacterClass")))
	{
		FVector OriginPos = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AKwangAiController::HomePosKey);
		FNavLocation NextPatrol;

		if (NavSystem->GetRandomPointInNavigableRadius(OriginPos, 600.0f, NextPatrol))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(AKwangAiController::PatrolPosKey, NextPatrol.Location);
			return EBTNodeResult::Succeeded;
		}
	}


	else if (Monster->ActorHasTag(TEXT("KallariClass")))
	{
		FVector OriginPos = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AKwangAiController::HomePosKey);
		FNavLocation NextPatrol;

		if (NavSystem->GetRandomPointInNavigableRadius(OriginPos, 600.0f, NextPatrol))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(AKwangAiController::PatrolPosKey, NextPatrol.Location);
			return EBTNodeResult::Succeeded;
		}
	}



	else if (Monster->ActorHasTag(TEXT("MinionClass")))
	{
		FVector OriginPos = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AMinionAIController::HomePosKey);
		FNavLocation NextPatrol;

		if (NavSystem->GetRandomPointInNavigableRadius(OriginPos, 600.0f, NextPatrol))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(AMinionAIController::PatrolPosKey, NextPatrol.Location);
			return EBTNodeResult::Succeeded;
		}
	}
	


	return EBTNodeResult::Failed;
}




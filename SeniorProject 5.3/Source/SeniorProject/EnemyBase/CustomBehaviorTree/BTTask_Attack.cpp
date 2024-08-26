// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack.h"
#include "SeniorProject/Character/Enemy/Monster/Minions.h"
#include "SeniorProject/EnemyBase/AISetting/MinionAIController.h"




UBTTask_Attack::UBTTask_Attack()
{
	bNotifyTick = true;
	IsAttacking = false;
}

// ���� ���� �ȿ� ���� �� ���� Ŭ������ ���� ������ ������
EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	
	auto Minion = Cast<AMinions>(OwnerComp.GetAIOwner()->GetPawn());
	if (Minion == nullptr) return EBTNodeResult::Failed;

	
	


	return EBTNodeResult::InProgress;
}

void UBTTask_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (!IsAttacking)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
	
}

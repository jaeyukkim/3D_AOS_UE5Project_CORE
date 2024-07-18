// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack.h"
#include "SeniorProject/Character/Enemy/Monster/Minions.h"
#include "SeniorProject/Character/Enemy/EnemyBase/AISetting/MinionAIController.h"




UBTTask_Attack::UBTTask_Attack()
{
	bNotifyTick = true;
	IsAttacking = false;
}

// 공격 범위 안에 들어올 시 각각 클래스에 대해 공격을 진행함
EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	
	auto Minion = Cast<AMinions>(OwnerComp.GetAIOwner()->GetPawn());
	if (Minion == nullptr) return EBTNodeResult::Failed;

	Minion->Attack();
	IsAttacking = true;
	Minion->OnAttackEnd.AddLambda([this]()	-> void { IsAttacking = false; });
	


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

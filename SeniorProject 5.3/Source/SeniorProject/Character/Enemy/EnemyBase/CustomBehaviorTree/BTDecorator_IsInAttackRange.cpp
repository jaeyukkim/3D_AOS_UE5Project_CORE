// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsInAttackRange.h"
#include "SeniorProject/Character/Enemy/EnemyBase/AISetting/MinionAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange()
{
	NodeName = TEXT("CanAttack");
	AttackRange = 350.0f;
}

//������ �÷��̾ ���� �� ���ݹ��� �ȿ� �������� �����ϴ� �Լ�
bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;



	auto Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMinionAIController::TargetKey));
	if (Target == nullptr)
		return false;

	if (bResult != NULL)
	{
		bResult = (Target->GetDistanceTo(ControllingPawn) <= AttackRange);
		return bResult;
	}

	return false;

}

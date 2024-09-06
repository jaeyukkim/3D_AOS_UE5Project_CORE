// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInAttackRange.generated.h"

/**
	���� ������ ���Դ��� �Ǵ�
 */
UCLASS()
class SENIORPROJECT_API UBTDecorator_IsInAttackRange : public UBTDecorator
{
	GENERATED_BODY()


public:
	UBTDecorator_IsInAttackRange();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AttackRange;

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory) const override;
	
};

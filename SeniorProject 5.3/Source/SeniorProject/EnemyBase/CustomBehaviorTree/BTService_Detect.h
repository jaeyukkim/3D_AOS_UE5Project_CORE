// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "BehaviorTree/BTService.h"
#include "BTService_Detect.generated.h"

/**
//Ȩ �������� ����� �ٽ� ������ġ�� ���ư��� Ÿ�ټ����� �ʱ�ȭ
 */
UCLASS()
class SENIORPROJECT_API UBTService_Detect : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_Detect();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
		float DeltaSeconds) override;


};

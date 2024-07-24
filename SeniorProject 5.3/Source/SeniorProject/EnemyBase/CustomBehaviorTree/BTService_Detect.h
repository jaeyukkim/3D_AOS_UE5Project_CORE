// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "BehaviorTree/BTService.h"
#include "BTService_Detect.generated.h"

/**
//홈 범위에서 벗어나면 다시 원래위치로 돌아가고 타겟설정을 초기화
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

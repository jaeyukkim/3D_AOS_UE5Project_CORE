// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_Buff.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UBTS_Buff : public UBTService
{
	GENERATED_BODY()

public:
	UBTS_Buff();
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	UPROPERTY(EditAnywhere)
	float HomeArea = 3000.f;
	
	UPROPERTY(EditAnywhere)
	float LostTargetDistance = 1500.f;
	
};

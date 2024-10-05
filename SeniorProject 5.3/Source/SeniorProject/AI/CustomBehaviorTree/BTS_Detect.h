// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_Detect.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UBTS_Detect : public UBTService
{
	GENERATED_BODY()

public:
	
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DetectRange = 1200.f;
   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float losingTargetRange = 1000.f;
};

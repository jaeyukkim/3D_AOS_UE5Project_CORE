// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIControllerBase.generated.h"

class AMinions;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AAIControllerBase : public AAIController
{
	GENERATED_BODY()
public:
	AAIControllerBase(const FObjectInitializer& ObjectInitializer);
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	
	void StopAI();
	
	UFUNCTION()
	void UpdateMinionTargetTurret();

	UPROPERTY()
	TObjectPtr<AMinions> ControlledMinion;
	
protected:
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	FTimerHandle InitMinionTargetTimerHandle;
	const float InitMinionTargetLoop = 0.3f;
};

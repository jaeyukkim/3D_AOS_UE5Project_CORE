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
	void InitTeamAndLineTag(FGameplayTag& InTeamTag, FGameplayTag& InLineTag);
	UFUNCTION(BlueprintCallable)
	void UpdateMinionTargetTurret();

	UPROPERTY()
	TObjectPtr<AMinions> ControlledMinion;
	FGameplayTag TeamTag;
	FGameplayTag LineTag;
protected:
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	FTimerHandle InitMinionTargetTimerHandle;
	const float InitMinionTargetLoop = 0.3f;

private:
	
};

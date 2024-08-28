// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "UObject/Interface.h"

#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SENIORPROJECT_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetCombatTarget(AActor* InCombatTarget);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AActor* GetCombatTarget() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetPlayerTeamName(APlayerState* PS);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE FGameplayTag GetTeamName() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetMinionTeamName(FGameplayTag NewTeamName);
	
};

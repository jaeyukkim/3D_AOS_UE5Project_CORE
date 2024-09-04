// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameRuleInterface.generated.h"


UINTERFACE(MinimalAPI)
class UGameRuleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SENIORPROJECT_API IGameRuleInterface
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE FGameplayTag GetTeamName() const;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetTeamNameByPlayerState(APlayerState* PS);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetTeamNameByTag(FGameplayTag NewTeamName);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE FGameplayTag GetLineTag() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE void SetLineTag(FGameplayTag NewLineTag);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FORCEINLINE FGameplayTag GetTurretLevelTag() const;
};

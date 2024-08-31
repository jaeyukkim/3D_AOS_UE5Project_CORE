// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayAbilityBase.generated.h"

/**
 * 
 */

UCLASS()
class SENIORPROJECT_API UGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	FGameplayTag StartupInputTag;
	
	
};

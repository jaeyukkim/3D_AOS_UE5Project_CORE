// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemGlobalsBase.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAbilitySystemGlobalsBase : public UAbilitySystemGlobals
{
	GENERATED_BODY()
	
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
	
};

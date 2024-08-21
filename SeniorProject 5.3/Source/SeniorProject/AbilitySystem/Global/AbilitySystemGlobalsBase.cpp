// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemGlobalsBase.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"

FGameplayEffectContext* UAbilitySystemGlobalsBase::AllocGameplayEffectContext() const
{
	return new FGameplayEffectBaseContext();
}

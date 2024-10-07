// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemAbility.h"
#include "AbilitySystemComponent.h"

void UItemAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                   const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}


FString UItemAbility::GetDescription_Implementation(int32 Level)
{
	return FString();
}

void UItemAbility::ActivateItemEffect()
{
	if(GetAvatarActorFromActorInfo()->HasAuthority())
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(ItemEffect, 1);
		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		MulticastActivateItemEffect();
	}
	
}

void UItemAbility::MulticastActivateItemEffect_Implementation()
{
	FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(ItemEffect, 1);
	GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
}

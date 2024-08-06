// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponentBase.h"
#include "SeniorProject/GameplayTagsBase.h"

void UAbilitySystemComponentBase::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAbilitySystemComponentBase::EffectApplied);

	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	GEngine->AddOnScreenDebugMessage(
		-1,
		10.f,
		FColor::Orange,
		FString::Printf(TEXT("Tag: %s"), *GameplayTags.Attributes_Secondary_Armor.ToString())
		);
	
}

void UAbilitySystemComponentBase::AddCharacterAbility(TArray<TSubclassOf<UGameplayAbility>>& CharacterAbility)
{
	for(TSubclassOf<UGameplayAbility> ability : CharacterAbility)
	{
		FGameplayAbilitySpec AbilitySpe = FGameplayAbilitySpec(ability, 1);
		//GiveAbility(AbilitySpe);
		GiveAbilityAndActivateOnce(AbilitySpe);
	}
}

void UAbilitySystemComponentBase::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer TagContainer;
	//EffectSpec.GetAllAssetTags(TagContainer);
	EffectSpec.GetAllGrantedTags(TagContainer);
	EffectAssetTags.Broadcast(TagContainer);
}

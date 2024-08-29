// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemComponentBase.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FEffectAssetTags, const FGameplayTagContainer& /*AssetTags*/);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackEndSignatures);
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAbilitySystemComponentBase : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	void AbilityActorInfoSet();
	FEffectAssetTags EffectAssetTags;
	
	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnAttackEndSignatures AttackEndSignature;
	
	
	void AddCharacterAbility(TArray<TSubclassOf<UGameplayAbility>>& CharacterAbility);
	void AbilityInputTagHeld(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);
protected:

    UFUNCTION(Client, Reliable)
	void ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BroadCastAttackEnd();
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemComponentBase.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FEffectAssetTags, const FGameplayTagContainer& /*AssetTags*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FAbilitiesGiven, UAbilitySystemComponentBase*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackEndSignatures);
DECLARE_DELEGATE_OneParam(FForEachAbility, const FGameplayAbilitySpec&);
DECLARE_MULTICAST_DELEGATE_TwoParams(FAbilityLevelChanged, const FGameplayTag& /*AbilityTag*/, int32 /*AbilityLevel*/);

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAbilitySystemComponentBase : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	void AbilityActorInfoSet();
	
	
	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnAttackEndSignatures AttackEndSignature;
	FEffectAssetTags EffectAssetTags;
	FAbilityLevelChanged AbilityLevelChanged;
	FAbilitiesGiven AbilitiesGivenDelegate;
	
	

	
	void AddCharacterAbility(TArray<TSubclassOf<UGameplayAbility>>& CharacterAbility);
	void AddCharacterPassiveAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupPassiveAbilities);
	
	void AbilityInputTagHeld(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);
	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	
	void ForEachAbility(const FForEachAbility& Delegate);

	static FGameplayTag GetAbilityTagFromSpec(const FGameplayAbilitySpec& AbilitySpec);
	static FGameplayTag GetInputTagFromSpec(const FGameplayAbilitySpec& AbilitySpec);
	static FGameplayTag GetStatusFromSpec(const FGameplayAbilitySpec& AbilitySpec);

	virtual void OnRep_ActivateAbilities() override;

	UFUNCTION(BlueprintCallable, Category="Abilities")
	int32 GetAbilityLevel(FGameplayTag AbilityTag);
	
	UFUNCTION()
	void ApplyDebuffEffectSelf(TSubclassOf<UGameplayEffect> DebuffEffectClass, const FGameplayTag& DebuffTag, const float DebuffCoefficient, const float DebuffDuration, const float DebuffFrequency);
	
	UFUNCTION(Server, Reliable)
	void ServerSpendSpellPoint(const FGameplayTag& AbilityTag);

	TArray<FGameplayAbilitySpec*> GetSpecFromAbilityTag(const FGameplayTag& AbilityTag);
	
	bool bStartupAbilitiesGiven = false;
protected:

    UFUNCTION(Client, Reliable)
	void ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle);

	UFUNCTION(Client, Reliable)
	void ClientUpdateAbilityLevel(const FGameplayTag& AbilityTag, int32 AbilityLevel);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BroadCastAttackEnd();
	
};

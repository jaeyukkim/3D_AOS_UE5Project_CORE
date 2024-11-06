// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayAbilityBase.generated.h"

/**
 * 
 */
struct FScalableFloat;

UCLASS()
class SENIORPROJECT_API UGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()
public:

	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual bool CommitAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, FGameplayTagContainer* OptionalRelevantTags) override;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	FGameplayTag StartupInputTag;
	
	UPROPERTY(EditDefaultsOnly, Category="Casting")
	float CastingTime = 0.f;

	UPROPERTY(EditDefaultsOnly, Category="Casting")
	bool IsNeedCasting = false;

	UPROPERTY(EditDefaultsOnly, Category="Casting")
	TSubclassOf<UGameplayEffect> CastingEffect;

	UFUNCTION(BlueprintCallable)
	void ActivateCasting();

	
	UFUNCTION(BlueprintCallable)
	void SpawnParticleAtLocation(FVector Location, UParticleSystem* ParticleSystem);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void MulticastSpawnParticleAtLocation(const FVector& Location, UParticleSystem* ParticleSystem);
	

	UPROPERTY(EditDefaultsOnly, Category = Cooldowns)
	TSubclassOf<class UGameplayEffect> CustomCooldownGameplayEffectClass;

	UFUNCTION(BlueprintCallable)
	void ApplyCustomCooldownClass(const FGameplayAbilitySpecHandle Handle);

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag CooldownTag;

	UPROPERTY(EditDefaultsOnly)
	FScalableFloat Cooldown;
	
};

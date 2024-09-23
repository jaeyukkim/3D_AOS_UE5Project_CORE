// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "DamageGameplayAbilityBase.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UDamageGameplayAbilityBase : public UGameplayAbilityBase
{
	GENERATED_BODY()
public:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	UFUNCTION(BlueprintCallable)
	void CauseDamage(AActor* TargetActor);
	
	UFUNCTION(BlueprintPure)
	FDamageEffectParams MakeDamageEffectParamsFromClassDefaults (AActor* TargetActor = nullptr) const;
	
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FGameplayTag DamageType;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FScalableFloat BaseDamage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float APCoefficient = 0.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ADCoefficient = 0.f;
	
	
	
};

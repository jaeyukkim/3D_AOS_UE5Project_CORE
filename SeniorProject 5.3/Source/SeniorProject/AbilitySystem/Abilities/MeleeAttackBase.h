// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageGameplayAbilityBase.h"
#include "MeleeAttackBase.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMeleeAttackBase : public UDamageGameplayAbilityBase
{
	GENERATED_BODY()
public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  Category="Attack")
	TArray<TObjectPtr<UAnimMontage>> AttackMontage;
	

	UFUNCTION(BlueprintCallable)
	UAnimMontage* GetAttackAnim(int32 Combo);

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageGameplayAbilityBase.h"
#include "ProjectileSpellBase.generated.h"

class AProjectileBase;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UProjectileSpellBase : public UDamageGameplayAbilityBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		float AbilityDistance;

	
	
protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable)
	void SpawnProjectile(const FVector& AimLocation);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AProjectileBase> ProjectileClass;
	
	

	
	
};

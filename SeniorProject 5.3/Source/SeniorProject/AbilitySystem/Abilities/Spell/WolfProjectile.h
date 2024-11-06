// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileSpellBase.h"
#include "SeniorProject/AbilitySystem/Abilities/Spell/ProjectileSpellBase.h"
#include "WolfProjectile.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UWolfProjectile : public UProjectileSpellBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SpawnWolf(const FVector& ProjectileTargetLocation);
	UFUNCTION(BlueprintCallable)
	void SpawnRMBWolf(const FVector& ProjectileTargetLocation);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float PlusSpawnLocationFromOwner = 250.f;
private:
	
};

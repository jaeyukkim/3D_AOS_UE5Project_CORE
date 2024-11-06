// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "SeniorProject/Actor/Projectile/ProjectileBase.h"
#include "ShinbiWolf.generated.h"

/**
 * 
 */

class USkeletalMeshComponent;
class UParticleSystemComponent;
class UAudioComponent;

UCLASS()
class SENIORPROJECT_API AShinbiWolf : public AProjectileBase
{
	GENERATED_BODY()

public:

	AShinbiWolf();
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<USkeletalMeshComponent> Wolf;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UParticleSystemComponent> WolfParticle;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UParticleSystemComponent> AttackParticle;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAudioComponent> AttackAudio;

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void MulticastPlaySoundAndParticle();
	
};


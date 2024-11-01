// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Particles/ParticleSystemComponent.h"
#include "DebuffParticleComponent.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UDebuffParticleComponent : public UParticleSystemComponent
{
	GENERATED_BODY()

public:
	UDebuffParticleComponent();

	UPROPERTY(VisibleAnywhere)
	FGameplayTag DebuffTag;

protected:
	virtual void BeginPlay() override;
	void DebuffTagChanged(const FGameplayTag CallbackTag, int32 NewCount);

private:
	int32 PrevCount = 0;
};

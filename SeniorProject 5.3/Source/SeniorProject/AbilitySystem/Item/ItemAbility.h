// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ItemAbility.generated.h"

/**
 * 
 */




UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UItemAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	

	UFUNCTION(BlueprintNativeEvent)
	FString GetDescription(int32 Level);
	virtual FString GetDescription_Implementation(int32 Level);
	
	UFUNCTION(BlueprintCallable)
	void ActivateItemEffect();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastActivateItemEffect();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bIsActivableItem = false;
	
	UPROPERTY(EditDefaultsOnly, Category="Casting")
	TSubclassOf<UGameplayEffect> ItemEffect;

	
};

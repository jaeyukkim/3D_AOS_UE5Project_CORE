// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "TargetDataAim.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAimTargetDataSignature, const FGameplayAbilityTargetDataHandle&, DataHandle);
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UTargetDataAim : public UAbilityTask
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (DisplayName = "TargetDataAim", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"))
	static UTargetDataAim* CreateTargetDataAim(UGameplayAbility* OwningAbility);

	UPROPERTY(BlueprintAssignable)
	FAimTargetDataSignature ValidData;

	UPROPERTY(EditAnywhere)
	float AimDistance = 1500.0f;
private:

	virtual void Activate() override;
	void SendAimData();

	void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& DataHandle, FGameplayTag ActivationTag);
};
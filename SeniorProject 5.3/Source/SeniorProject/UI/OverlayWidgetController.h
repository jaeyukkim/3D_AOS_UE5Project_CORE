// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "DefaultWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealtChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealtChangedSignature, float, NewMaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExpChangedSignature, float, NewExp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNextExpChangedSignature, float, NewNextExp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelChangedSignature, int32, NewLevel);




/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UOverlayWidgetController : public UDefaultWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnHealtChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnHealtChangedSignature OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnExpChangedSignature OnExpChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnNextExpChangedSignature OnNextExpChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnLevelChangedSignature OnLevelChanged;

protected:
	void HealthChanged(const FOnAttributeChangeData& Data) const;
	void MaxHealthChanged(const FOnAttributeChangeData& Data) const;
	void NextExpChanged(const FOnAttributeChangeData& Data) const;
	void ExpChanged(const FOnAttributeChangeData& Data) const;
	void LevelChanged(const FOnAttributeChangeData& Data) const;

	
};

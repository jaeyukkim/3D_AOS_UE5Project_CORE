// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/UI/DefaultWidgetController.h"
#include "GameplayTags.h"
#include "SpellMenuWidgetController.generated.h"

struct FAbilityInfoBase;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpellPointChangedDelegate, int32, NewSpellPoint);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityInfoDelegate, const FAbilityInfoBase&, Info);

class UAbilityInfo;
class UAbilitySystemComponentBase;

UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API USpellMenuWidgetController : public UDefaultWidgetController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual void BroadcastInitialValues() override;
	
	virtual void BindCallbacksToDependencies() override;

	
	UPROPERTY(BlueprintAssignable, Category = "GAS|Spell")
	FOnSpellPointChangedDelegate SpellPointsChanged;

	UPROPERTY(BlueprintAssignable, Category="GAS|Spell")
	FAbilityInfoDelegate AbilityInfoDelegate;

	
protected:
	
	void OnInitializeStartupAbilities(UAbilitySystemComponentBase* AbilitySystemComponentBase);

	UFUNCTION(BlueprintCallable)
	void UpgradeSpell(const FGameplayTag& AbilityTag);

	UFUNCTION(BlueprintCallable, Category="Abilities")
	bool CanUpgradeSpell(FGameplayTag AbilityTag);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widget Data")
	TObjectPtr<UAbilityInfo> AbilityInfo;
	
};

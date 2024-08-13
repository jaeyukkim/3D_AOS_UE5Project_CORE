// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SeniorProject/UI/AttributeMenuWidgetController.h"
#include "SeniorProject/UI/OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "BlueprintFunctionLibraryBase.generated.h"

class UAbilitySystemComponent;

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UBlueprintFunctionLibraryBase : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintPure, Category="AbilitySystemLibraryBase|WidgetController")
	static UOverlayWidgetController* GetOverlayWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="AbilitySystemLibraryBase|WidgetController")
	static UAttributeMenuWidgetController* GetUAttributeMenuWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="AuraAbilitySystemLibrary|CharacterClassDefaults")
	static void InitializeDefaultAttributes(const UObject* WorldContextObject, ECharacterClass CharacterClass, float Level, UAbilitySystemComponent* ASC);
	
};

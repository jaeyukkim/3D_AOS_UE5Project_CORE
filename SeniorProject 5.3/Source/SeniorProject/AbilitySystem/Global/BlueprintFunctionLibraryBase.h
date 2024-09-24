// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SeniorProject/UI/AttributeMenu/AttributeMenuWidgetController.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
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
	static UCharacterClassInfo* GetCharacterClassInfo(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="AbilitySystemLibraryBase|CharacterClassDefaults")
	static void InitializeDefaultAttributes(const UObject* WorldContextObject, ECharacterClass CharacterClass, float Level, UAbilitySystemComponent* ASC);

	UFUNCTION(BlueprintCallable, Category="AbilitySystemLibraryBase|CharacterClassDefaults")
	static void GiveStartupAbilities(const UObject* WorldContextObject, UAbilitySystemComponent* ASC, ECharacterClass CharacterClass);


	
	UFUNCTION(BlueprintPure, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static bool IsCriticalHit(const FGameplayEffectContextHandle& EffectContextHandle);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static void SetIsCriticalHit(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, bool bInIsCriticalHit);

	UFUNCTION(BlueprintPure, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static bool IsMagicalDamage(const FGameplayEffectContextHandle& EffectContextHandle);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static void SetIsMagicalDamage(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, bool bInIsCriticalHit);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static void GetLivePlayersWithinRadius(const UObject* WorldContextObject,TArray<AActor*>& OutOverlappingActors,
		const TArray<AActor*>& ActorsToIgnore, float Radius, const FVector& SphereOrigin);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static bool IsFriends(AActor* FirstActor, AActor* SecondActor);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static AActor* GetOwnerActorFromSpecHandle(const FGameplayEffectSpecHandle& SpecHandle);

	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|DamageEffect")
	static FGameplayEffectContextHandle ApplyDamageEffect(const FDamageEffectParams& DamageEffectParams);

	static int32 GetXPRewardForClassAndLevel(const UObject* WorldContextObject, ECharacterClass CharacterClass, int32 CharacterLevel);
	
};

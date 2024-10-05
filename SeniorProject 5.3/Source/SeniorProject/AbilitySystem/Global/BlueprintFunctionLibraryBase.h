// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SeniorProject/UI/AttributeMenu/AttributeMenuWidgetController.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
#include "SeniorProject/UI/SpellMenu/SpellMenuWidgetController.h"
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

	UFUNCTION(BlueprintPure, Category="AbilitySystemLibraryBase|WidgetController")
	static USpellMenuWidgetController* GetSpellMenuWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="AbilitySystemLibraryBase|WidgetController")
	static UItemMenuWidgetController* GetItemMenuWidgetController(const UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category="AuraAbilitySystemLibrary|CharacterClassDefaults")
	static UCharacterClassInfo* GetCharacterClassInfo(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="AbilitySystemLibraryBase|CharacterClassDefaults")
	static void InitializeDefaultAttributes(const UObject* WorldContextObject, ECharacterClass CharacterClass, float Level, UAbilitySystemComponent* ASC);

	UFUNCTION(BlueprintCallable, Category="AbilitySystemLibraryBase|CharacterClassDefaults")
	static void GiveStartupAbilities(const UObject* WorldContextObject, UAbilitySystemComponent* ASC, ECharacterClass CharacterClass);


	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static void SetIsCriticalHit(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, bool bInIsCriticalHit);
	
	UFUNCTION(BlueprintCallable, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static void SetIsMagicalDamage(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, bool bInIsCriticalHit);

	UFUNCTION(BlueprintCallable, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static void SetDebuffValid(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, bool InDebuffValid);
	
	UFUNCTION(BlueprintCallable, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static void SetDebuffType(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, const FGameplayTag& InDebuffType);
	
	UFUNCTION(BlueprintCallable, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static void SetDebuffCoefficient(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, float InDebuffCoefficient);
	
	UFUNCTION(BlueprintCallable, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static void SetDebuffDuration(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, float InDuration);
	
	UFUNCTION(BlueprintCallable, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static void SetDebuffFrequency(UPARAM(ref) FGameplayEffectContextHandle& EffectContextHandle, float InFrequency);

	
	UFUNCTION(BlueprintPure, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static bool IsMagicalDamage(const FGameplayEffectContextHandle& EffectContextHandle);

	UFUNCTION(BlueprintPure, Category = "AbilitySystemLibraryBase|GameplayEffects")
	static bool IsCriticalHit(const FGameplayEffectContextHandle& EffectContextHandle);
	
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static FGameplayTag GetDebuffType(const FGameplayEffectContextHandle& EffectContextHandle);

	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static bool GetIsDebuffValid(const FGameplayEffectContextHandle& EffectContextHandle);
	
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static float GetDebuffCoefficient(const FGameplayEffectContextHandle& EffectContextHandle);
	
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static float GetDebuffDuration(const FGameplayEffectContextHandle& EffectContextHandle);
	
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|GameplayEffects")
	static float GetDebuffFrequency(const FGameplayEffectContextHandle& EffectContextHandle);
	

	
	
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
	static int32 GetGoldRewardForClassAndLevel(const UObject* WorldContextObject, ECharacterClass CharacterClass);

	
};

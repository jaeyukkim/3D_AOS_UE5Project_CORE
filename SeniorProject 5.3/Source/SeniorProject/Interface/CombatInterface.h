// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "AbilitySystemComponent.h"
#include "CombatInterface.generated.h"

class UAnimMontage;
class UAbilitySystemComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnASCRegistered, UAbilitySystemComponent*);

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UCombatInterface : public UInterface
{
	GENERATED_BODY()
	
};

/**
 * 
 */
class SENIORPROJECT_API ICombatInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	int32 GetPlayerLevel();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void GetAimHitResult(float AbilityDistance ,FHitResult& HitResult);


	FORCEINLINE virtual void SetCurrentCombo(int32 NewCurrentCombo) {return;}
	FORCEINLINE virtual void SetMaxAttackCombo(int32 NewMaxAttackCombo) {return;}
	FORCEINLINE virtual int32 GetCurrentCombo() const {return 1;}
	FORCEINLINE virtual int32 GetMaxAttackCombo() const {return 1;}
	FORCEINLINE virtual int32 GetAttackRange() const {return 100;}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ApplyDebuffEffect(const FGameplayTag& DebuffTag, const float DebuffCoefficient, const float DebuffDuration, const float DebuffFrequency);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FVector GetCombatSocketLocation(const FGameplayTag& MontageTag);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimMontage* GetHitReactMontage();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimMontage* GetAttackMontage();
	

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsDead() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsInvincibility() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsInvincibility(const bool InIsInvincibility);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* GetAvatar();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsAttacking();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsAttacking(bool bIsAttacking);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	ECharacterClass GetCharacterClass();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Die();
	
	virtual FOnASCRegistered& GetOnASCRegisteredDelegate() = 0;
	
};

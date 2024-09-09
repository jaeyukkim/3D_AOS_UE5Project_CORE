// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatInterface.generated.h"

class UAnimMontage;


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
	FORCEINLINE virtual int32 GetPlayerLevel() {return 1;}
	FORCEINLINE virtual void GetAimHitResult(float AbilityDistance ,FHitResult& HitResult) {HitResult = FHitResult(); return;}

	
	FORCEINLINE virtual void SetCurrentCombo(int32 NewCurrentCombo) {return;}
	FORCEINLINE virtual void SetMaxAttackCombo(int32 NewMaxAttackCombo) {return;}
	FORCEINLINE virtual int32 GetCurrentCombo() const {return 1;}
	FORCEINLINE virtual int32 GetMaxAttackCombo() const {return 1;}
	FORCEINLINE virtual int32 GetAttackRange() const {return 100;}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FVector GetCombatSocketLocation(const FGameplayTag& MontageTag);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimMontage* GetHitReactMontage();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimMontage* GetAttackMontage();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimationAsset* GetDieAnimationAsset();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsDead() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* GetAvatar();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsAttacking();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsAttacking(bool bIsAttacking);
	
	virtual void Die() = 0;

	
	
};

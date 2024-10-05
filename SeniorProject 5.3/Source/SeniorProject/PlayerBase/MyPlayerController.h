// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "MyPlayerController.generated.h"



/**
 * 
 */
class UInputActionData;
class UAbilitySystemComponentBase;
class UDamageTextComponent;
class UGoldRewardWidgetComponent;

UCLASS()
class SENIORPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();

	
	virtual void OnPossess(APawn* InPawn) override;

	UAbilitySystemComponentBase* GetASC();

	UFUNCTION(Client, Reliable)
	void ShowDamageNumber(float DamageAmount, ACharacter* TargetCharacter, bool bCriticalHit, bool bMagicalDamage);
	UFUNCTION(Client, Reliable)
	void ShowGoldAmount(int32 GoldAmount, AActor* TargetCharacter);

	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;


	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UDamageTextComponent> DamageTextComponentClass;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UGoldRewardWidgetComponent> GoldRewardWidgetClass;

private:
	

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputActionData> InputData;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponentBase> AbilityComponentBase;

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	void OnGamePause();

	
};

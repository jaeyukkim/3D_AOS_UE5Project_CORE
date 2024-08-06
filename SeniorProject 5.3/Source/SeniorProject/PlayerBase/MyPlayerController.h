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

UCLASS()
class SENIORPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();

	void NPCKill(class AController* KilledNPC, int32 Exp) const;
	void ChangeInputMode(bool bGameMode = true);
	virtual void OnPossess(APawn* InPawn) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UMyMenuWidget> MenuWidgetClass;



private:

	UPROPERTY(EditDefaultsOnly)
		class UMyMenuWidget* MenuWidget;


	UPROPERTY(EditDefaultsOnly)
		class AMyPlayerState* MyPlayerState;


	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputActionData> InputData;

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	void OnGamePause();
};

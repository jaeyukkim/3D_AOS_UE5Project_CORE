// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ReturnToMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UReturnToMainMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	
	void MenuSetup();

	UFUNCTION(BlueprintCallable)
	void MenuTearDown();

	UFUNCTION(BlueprintNativeEvent)
	void CreateEndGameWidget(bool bDefeat);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ReturnButtonClicked();
protected:
	virtual bool Initialize() override;

	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
	void OnPlayerLeftGame();
	
	
private:
	UPROPERTY(meta = (BindWidget))
	class UButton* ReturnButton;

	

	UPROPERTY()
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	UPROPERTY()
	class APlayerController* PlayerController;
	
};

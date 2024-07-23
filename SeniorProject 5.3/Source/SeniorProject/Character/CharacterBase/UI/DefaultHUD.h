// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "MyCharacterWidgetController.h"
#include "GameFramework/HUD.h"
#include "DefaultHUD.generated.h"

struct FWidgetControllerParams;
class UAttributeSet;
class UAbilitySystemComponent;
class UMyCharacterWidgetController;
class UMyHUDWidget;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ADefaultHUD : public AHUD
{
	GENERATED_BODY()
	

public:

	UPROPERTY()
		TObjectPtr<UMyHUDWidget>  MyHudWidget;

	UMyCharacterWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);



private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UMyHUDWidget> MyHudWidgetClass;

	UPROPERTY()
		TObjectPtr<UMyCharacterWidgetController> MyCharacterWidgetController;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UMyCharacterWidgetController> MyCharacterWidgetControllerClass;

};

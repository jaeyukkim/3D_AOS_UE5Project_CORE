// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "DefaultWidgetController.h"
#include "GameFramework/HUD.h"
#include "DefaultHUD.generated.h"

struct FWidgetControllerParams;
class UAttributeSet;
class UAbilitySystemComponent;
class UOverlayWidgetController;
class UOverlayWidget;
class UAttributeMenuWidgetController;

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ADefaultHUD : public AHUD
{
	GENERATED_BODY()
	

public:

	UPROPERTY()
		TObjectPtr<UOverlayWidget>  OverlayWidget;

	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);
	UAttributeMenuWidgetController* GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams);
	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);


private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UOverlayWidget> OverlayWidgetClass;

	UPROPERTY()
		TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;

	UPROPERTY()
		TObjectPtr<UAttributeMenuWidgetController> AttributeMenuWidgetController;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UAttributeMenuWidgetController> AttributeMenuWidgetControllerClass;

};

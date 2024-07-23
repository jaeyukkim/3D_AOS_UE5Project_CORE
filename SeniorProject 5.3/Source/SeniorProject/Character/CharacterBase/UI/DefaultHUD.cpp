// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultHUD.h"
#include "MyHUDWidget.h"
#include "AbilitySystemComponent.h"

UMyCharacterWidgetController* ADefaultHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (MyCharacterWidgetController == nullptr)
	{
		MyCharacterWidgetController = NewObject<UMyCharacterWidgetController>(this, MyCharacterWidgetControllerClass);
		MyCharacterWidgetController->SetWidgetControllerParams(WCParams);

		return MyCharacterWidgetController;
	}
	return MyCharacterWidgetController;
}

void ADefaultHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(MyHudWidgetClass, TEXT("Overlay Widget Class uninitialized, please fill out BP_AuraHUD"));
	checkf(MyCharacterWidgetControllerClass, TEXT("Overlay Widget Controller Class uninitialized, please fill out BP_AuraHUD"));

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), MyHudWidgetClass);
	MyHudWidget = Cast<UMyHUDWidget>(Widget);

	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UMyCharacterWidgetController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);

	MyHudWidget->SetWidgetController(WidgetController);

	Widget->AddToViewport();
}



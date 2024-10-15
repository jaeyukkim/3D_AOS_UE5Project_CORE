// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultHUD.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/Character/Player/LobbyCharacter.h"
#include "SeniorProject/UI/AttributeMenu/AttributeMenuWidgetController.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
#include "SeniorProject/UI/SpellMenu/SpellMenuWidgetController.h"

UOverlayWidgetController* ADefaultHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	
	if (OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(WCParams);
		OverlayWidgetController->BindCallbacksToDependencies();

	}
	return OverlayWidgetController;
	
}

UAttributeMenuWidgetController* ADefaultHUD::GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (AttributeMenuWidgetController == nullptr)
	{
		AttributeMenuWidgetController = NewObject<UAttributeMenuWidgetController>(this, AttributeMenuWidgetControllerClass);
		AttributeMenuWidgetController->SetWidgetControllerParams(WCParams);
		AttributeMenuWidgetController->BindCallbacksToDependencies();

	}
	return AttributeMenuWidgetController;
}

USpellMenuWidgetController* ADefaultHUD::GetSpellMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (SpellMenuWidgetController == nullptr)
	{
		SpellMenuWidgetController = NewObject<USpellMenuWidgetController>(this, SpellMenuWidgetControllerClass);
		SpellMenuWidgetController->SetWidgetControllerParams(WCParams);
		SpellMenuWidgetController->BindCallbacksToDependencies();

	}
	return SpellMenuWidgetController;
}

UItemMenuWidgetController* ADefaultHUD::GetItemMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	
	if (ItemMenuWidgetController == nullptr)
	{
		ItemMenuWidgetController = NewObject<UItemMenuWidgetController>(this, ItemMenuWidgetControllerClass);
		ItemMenuWidgetController->SetWidgetControllerParams(WCParams);
		ItemMenuWidgetController->BindCallbacksToDependencies();

	}
	return ItemMenuWidgetController;
}


void ADefaultHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	
	checkf(OverlayWidgetClass, TEXT("Overlay Widget Class uninitialized, please fill out BP_DefaultHUD"));
	checkf(OverlayWidgetControllerClass, TEXT("Overlay Widget Controller Class uninitialized, please fill out BP_DefaultHUD"));

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<UOverlayWidget>(Widget);

	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);
	

	OverlayWidget->SetWidgetController(WidgetController);
	WidgetController->BroadcastInitialValues();
	Widget->AddToViewport();
}

void ADefaultHUD::InitCharacterSelectWidget(ALobbyCharacter* LobbyCharacter)
{
	checkf(CharacterSelectWidgetClass, TEXT("CharacterSelect uninitialized, please fill out BP_DefaultHUD"));
	if(LobbyCharacter == nullptr) return;
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), CharacterSelectWidgetClass);
	CharacterSelectWidget = Cast<UOverlayWidget>(Widget);
	LobbyCharacter->BindCallbacksToDependencies();
	
	CharacterSelectWidget->SetWidgetController(LobbyCharacter);
	CharacterSelectWidget->AddToViewport();

	if (CharacterSelectWidget)
	{
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(CharacterSelectWidget->TakeWidget());
		GetOwningPlayerController()->SetInputMode(InputMode);
		GetOwningPlayerController()->bShowMouseCursor = true;
	
	}
	
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "SeniorProject/GameSetting/MyHUDWidget.h"
#include "MyPlayerState.h"


AMyPlayerController::AMyPlayerController()
{
	static ConstructorHelpers::FClassFinder<UMyHUDWidget> UI_HUD_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_HUD'"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	HUDWidget = CreateWidget<UMyHUDWidget>(this, HUDWidgetClass);
	HUDWidget->AddToViewport();

	MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	HUDWidget->BindPlayerState(MyPlayerState);
	MyPlayerState->OnPlayerStateChanged.Broadcast();
}

UMyHUDWidget* AMyPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

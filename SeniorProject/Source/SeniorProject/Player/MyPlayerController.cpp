// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "SeniorProject/GameSetting/MyHUDWidget.h"
#include "MyPlayerState.h"
#include "MyCharacter.h"


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

	if(HUDWidget)
		HUDWidget->BindPlayerState(MyPlayerState);

	if (MyPlayerState)
		MyPlayerState->OnPlayerStateChanged.Broadcast();



}


void AMyPlayerController::NPCKill(AController* KilledNPC, int32 Exp) const
{
	if (MyPlayerState->AddExp(Exp))
	{
		auto MyCharacter = Cast<AMyCharacter>(KilledNPC->GetPawn());
		MyCharacter->UpdateCharacterStat();
	}
}


UMyHUDWidget* AMyPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

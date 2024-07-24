// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "SeniorProject/PlayerBase/MyCharacter.h"
#include "SeniorProject/UI/MyMenuWidget.h"



AMyPlayerController::AMyPlayerController()
{


	static ConstructorHelpers::FClassFinder<UMyMenuWidget> UI_MENU_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_Pause'"));
	if (UI_MENU_C.Succeeded())
	{
		MenuWidgetClass = UI_MENU_C.Class;
	}
	


	bReplicates = true;

}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();



	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	ChangeInputMode(true);
		
	
	MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	

	if (MyPlayerState != nullptr)
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

void AMyPlayerController::ChangeInputMode(bool bGameMode)
{
	if (bGameMode)
	{
		SetInputMode(GameInputMode);
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(UIInputMode);
		bShowMouseCursor = true;
	}
}




void AMyPlayerController::OnGamePause()
{
	MenuWidget = CreateWidget<UMyMenuWidget>(this, MenuWidgetClass);
	
	if (MenuWidget)
	{
		MenuWidget->SetUserFocus(this);
		MenuWidget->AddToViewport(3);
		SetPause(true);
		ChangeInputMode(false);
	}
	
}


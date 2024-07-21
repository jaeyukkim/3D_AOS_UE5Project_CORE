// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "SeniorProject/Character/CharacterBase/UI/MyHUDWidget.h"
#include "MyPlayerState.h"
#include "SeniorProject/Character/Player/Character/MyCharacter.h"
#include "SeniorProject/Character/CharacterBase/UI/MyMenuWidget.h"



AMyPlayerController::AMyPlayerController()
{

	static ConstructorHelpers::FClassFinder<UMyHUDWidget> UI_HUD_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_HUD'"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}

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

	HUDWidget = CreateWidget<UMyHUDWidget>(this, HUDWidgetClass);
	if (HUDWidget)
	{
		HUDWidget->SetUserFocus(this);
		HUDWidget->AddToViewport(1);

	}
}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();



	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	ChangeInputMode(true);
		
	
	MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	
	if(HUDWidget != nullptr)
		HUDWidget->BindPlayerState(MyPlayerState);

	if (MyPlayerState != nullptr)
		MyPlayerState->OnPlayerStateChanged.Broadcast();

		
	
}





/*
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction(TEXT("GamePause"), 
		EInputEvent::IE_Pressed, this, &AMyPlayerController::OnGamePause);
}
*/





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

UMyHUDWidget* AMyPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

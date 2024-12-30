// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "MultiplayerSessionsSubsystem.h"

AMainMenuGameMode::AMainMenuGameMode()
{
	bUseSeamlessTravel = true;
}

void AMainMenuGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "SeniorProject/Player/MyCharacter.h"
#include "SeniorProject/Player/Kallari.h"
#include "SeniorProject/Player/MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AKallari::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();

}
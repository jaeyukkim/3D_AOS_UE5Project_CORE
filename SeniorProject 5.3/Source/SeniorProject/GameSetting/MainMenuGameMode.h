// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AMainMenuGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AMainMenuGameMode();
	virtual void PostLogin(APlayerController* NewPlayer) override;
};

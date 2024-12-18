// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LobbyGameMode.generated.h"

class ACoreGameState;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ALobbyGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	ALobbyGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	void SetUpPlayerTeam(APlayerController* NewPlayer);
	virtual void ServerTravelToBattlefield();

	UPROPERTY()
	TObjectPtr<ACoreGameState> CoreGameState;
};

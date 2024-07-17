// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */


DECLARE_MULTICAST_DELEGATE(FOnPlayerStateChangedDelegate);
UCLASS()
class SENIORPROJECT_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()


public:
	AMyPlayerState();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	int32 GetCharacterLevel() const;
	float GetExpRatio() const;
	FString SaveSlotName;

	UFUNCTION()
	bool AddExp(int32 IncomeExp);
	

	void InitPlayerData();
	void SavePlayerData();

	FOnPlayerStateChangedDelegate OnPlayerStateChanged;
	

protected:

		int32 CharacterLevel;

		int32 Exp;

private:
	void LevelUp(int32 NewCharacterLevel);
	struct FMyCharacterData* CurrentStatData;
};

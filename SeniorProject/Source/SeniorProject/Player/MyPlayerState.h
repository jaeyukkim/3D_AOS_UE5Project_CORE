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

	int32 GetCharacterLevel() const;
	float GetExpRatio() const;
	bool AddExp(int32 IncomeExp);


	void InitPlayerData();

	FOnPlayerStateChangedDelegate OnPlayerStateChanged;

protected:


	UPROPERTY(Transient)
		int32 CharacterLevel;

	UPROPERTY(Transient)
		int32 Exp;

private:
	void SetLevel(int32 NewCharacterLevel);
	struct FMyCharacterData* CurrentStatData;
};

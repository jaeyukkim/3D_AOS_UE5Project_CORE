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

	UFUNCTION()
	bool AddExp(int32 IncomeExp);
	

	void InitPlayerData();

	FOnPlayerStateChangedDelegate OnPlayerStateChanged;
	//FMobExpDrop OnMobDropExp;

protected:


	UPROPERTY(EditAnywhere, Category = "Level")
		int32 CharacterLevel;

	UPROPERTY(Transient)
		int32 Exp;

private:
	void LevelUp(int32 NewCharacterLevel);
	struct FMyCharacterData* CurrentStatData;
};

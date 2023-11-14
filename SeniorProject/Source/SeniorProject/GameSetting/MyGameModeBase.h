// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "EngineMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE(FMobDeletedDelegate);

UCLASS()
class SENIORPROJECT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();
	virtual void StartPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

	enum class EStage : uint8
	{
		STAGE1 = 0,
		STAGE2,
		STAGE3
	};

	UFUNCTION()
		void ResetNumberOfMob();

	FMobDeletedDelegate OnMobDeleted;
	EStage CurrentStage;

private:

	UPROPERTY()
		int32 MonsterCount;
	UFUNCTION()
		void OpenPotal1();
	UFUNCTION()
		void OpenPotal2();
	UFUNCTION()
		void OpenPotal3();
	UPROPERTY()
		TArray<AActor*> AllActors;
	void SetNumberOfMonster();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "EngineMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

struct FGameplayTag;

class UCharacterClassInfo;
/**
 * 
 */



UCLASS()
class SENIORPROJECT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();

	// 타워 상태를 저장하는 비트마스크
	uint16 BlueTeamTowerStates = 0;
	uint16 RedTeamTowerStates = 0;

	UFUNCTION()
	void OnTowerDestroyed(const FGameplayTag LineTag, const FGameplayTag TowerLevelTag, const FGameplayTag TeamTag);
	
	
	UPROPERTY(EditDefaultsOnly, Category = "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;

protected:
	virtual void BeginPlay() override;
	
};

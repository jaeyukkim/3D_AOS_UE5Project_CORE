// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreGameState.h"
#include "EngineMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/GameMode.h"
#include "SeniorProject/Actor/PlayerStart/TeamPlayerStart.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "MyGameModeBase.generated.h"

class AMyPlayerController;
class AMyCharacter;
class UCharacterClassInfo;
class ATurret;
class USpawnerDataAsset;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateMinionTargetsSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSelectedCharacterDelegate, APlayerStateBase*, PS);
DECLARE_MULTICAST_DELEGATE(FStartGameDelegate);


UCLASS()
class SENIORPROJECT_API AMyGameModeBase : public AGameMode
{
	GENERATED_BODY()
public:
	AMyGameModeBase();
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual void StartPlay() override;
	virtual void StartMatch() override;
	virtual void Tick(float DeltaSeconds) override;
	void EndGame(const FGameplayTag& DefeatedTeamName);
	virtual void GenericPlayerInitialization(AController* C) override;
	void SetupPlayerCharacterClass(APlayerController* NewPlayer);
	
	UFUNCTION()
	void OnTurretSpawned(ATurret* SpawnedTurret);
	UFUNCTION()
	void OnTurretDestroyed(FGameplayTag& LineTag, FGameplayTag& TurretLevelTag, FGameplayTag& TeamTag);
	UFUNCTION()
	void InitWayPoint();

public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawner Class Defaults")
	TObjectPtr<USpawnerDataAsset> SpawnerDataAsset;
	UPROPERTY(BlueprintAssignable, Category="GameRule")
	FUpdateMinionTargetsSignature UpdateMinionTargets;
	
protected:
	virtual void BeginPlay() override;

	
protected:
	UPROPERTY()
	TObjectPtr<ACoreGameState> CoreGameState;
	float UpdateMinionTargetDelay = 0.5f;

	// WayPoint 초기화 함수
	float InitWayPointTime = 5.f;

	
private:
	
	FTimerHandle UpdateMinionTargetTimerHandle;
	FTimerHandle InitWayPointTimerHandle;
	//FTimerHandle InitialSpawnTimerHandle;
	//FTimerHandle RecurringSpawnTimerHandle;
};


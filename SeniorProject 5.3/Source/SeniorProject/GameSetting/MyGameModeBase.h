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
	virtual void ServerTravelToBattlefield();
	virtual void PostSeamlessTravel() override;
	virtual void GenericPlayerInitialization(AController* C) override;
	
	void SetupPlayerCharacterClass(APlayerController* NewPlayer);
	void SetUpPlayerTeam(APlayerController* NewPlayer);
	
	UPROPERTY(EditDefaultsOnly, Category = "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;
	UPROPERTY(BlueprintAssignable, Category="GameRule")
	FUpdateMinionTargetsSignature UpdateMinionTargets;

	UFUNCTION()
	void OnTurretSpawned(ATurret* SpawnedTurret);
	UFUNCTION()
	void OnTurretDestroyed(FGameplayTag& LineTag, FGameplayTag& TurretLevelTag, FGameplayTag& TeamTag);
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);

	
protected:
	virtual void BeginPlay() override;

	//첫 미니언 스폰 타임
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float InitialSpawnTime = 90.f;

	// 미니언 스폰 타임 주기
	const float RecurringSpawnTime = 30.f;

	//공성 미니언 스폰 카운터
	const int32 SiegeMinionSpawnCycle = 3;
	int32 SiegeMinionSpawnCount = 0;

	UPROPERTY()
	TObjectPtr<ACoreGameState> CoreGameState;

	int32 RedTeamPlayerNumber = 0;
	int32 BlueTeamPlayerNumber = 0;
	
private:
	
	// 일정 시간마다 미니언 스폰하는 함수
	UFUNCTION()
	void SpawnMinion();

	
	FTimerHandle InitialSpawnTimerHandle;
	FTimerHandle RecurringSpawnTimerHandle;
};


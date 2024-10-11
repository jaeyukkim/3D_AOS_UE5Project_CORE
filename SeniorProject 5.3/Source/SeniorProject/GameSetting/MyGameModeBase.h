// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreGameState.h"
#include "EngineMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/GameMode.h"
#include "MyGameModeBase.generated.h"

class UCharacterClassInfo;
class ATurret;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateMinionTargetsSignature);



UCLASS()
class SENIORPROJECT_API AMyGameModeBase : public AGameMode
{
	GENERATED_BODY()
public:
	AMyGameModeBase();
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual void StartPlay() override;
	
	
	UPROPERTY(EditDefaultsOnly, Category = "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;

	

	UPROPERTY(BlueprintAssignable, Category="GameRule")
	FUpdateMinionTargetsSignature UpdateMinionTargets;

	UFUNCTION()
	void OnTurretSpawned(ATurret* SpawnedTurret);
	UFUNCTION()
	void OnTurretDestroyed(const FGameplayTag LineTag, const FGameplayTag TurretLevelTag, const FGameplayTag TeamTag);
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);

	
protected:
	virtual void BeginPlay() override;

	//첫 미니언 스폰 타임
	float InitialSpawnTime = 30.f;

	// 미니언 스폰 타임 주기
	float RecurringSpawnTime = 45.f;

	//공성 미니언 스폰 주기
	int32 SiegeMinionSpawnCycle = 0;

	UPROPERTY()
	TObjectPtr<ACoreGameState> CoreGameState;

	UPROPERTY()
	TMap<TObjectPtr<ACoreGameState>, >
private:
	
	// 일정 시간마다 미니언 스폰하는 함수
	UFUNCTION()
	void SpawnMinion();

	
	FTimerHandle InitialSpawnTimerHandle;
	FTimerHandle RecurringSpawnTimerHandle;
};

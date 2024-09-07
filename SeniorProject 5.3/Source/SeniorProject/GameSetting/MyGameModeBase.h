// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "EngineMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

class UCharacterClassInfo;
class ATurret;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateMinionTargetsSignature);



UCLASS()
class SENIORPROJECT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();
	virtual void StartPlay() override;

	
	// 타워 상태를 저장하는 비트마스크
	

	UFUNCTION()
	void OnTurretDestroyed(const FGameplayTag LineTag, const FGameplayTag TurretLevelTag, const FGameplayTag TeamTag);
	
	UFUNCTION()
	void UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag, bool bisdestroyed);
	
	// 포탑이 게임 모드에 자신을 등록할 때 호출
	void OnTurretSpawned(ATurret* SpawnedTurret);

	
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);
	
	UPROPERTY(EditDefaultsOnly, Category = "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;

	UPROPERTY(BlueprintAssignable, Category="GameRule")
	FUpdateMinionTargetsSignature UpdateMinionTargets;
	
protected:
	virtual void BeginPlay() override;

	//첫 미니언 스폰 타임
	float InitialSpawnTime = 30.f;

	// 미니언 스폰 타임 주기
	float RecurringSpawnTime = 45.f;

	//공성 미니언 스폰 주기
	int32 SiegeMinionSpawnCycle = 0;
	
private:


	// 일정 시간마다 미니언 스폰하는 함수
	UFUNCTION()
	void SpawnMinion();

	UFUNCTION()
	bool IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const;
	

	/* 초기화는 모두 파괴되어있는 상태 */
	uint16 BlueTeamTurretStates = 0;
	uint16 RedTeamTurretStates = 0;
	
	FTimerHandle InitialSpawnTimerHandle;
	FTimerHandle RecurringSpawnTimerHandle;


	
};

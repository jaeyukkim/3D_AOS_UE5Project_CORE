// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "CoreGameState.generated.h"

class ATurret;
class APlayerStateBase;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ACoreGameState : public AGameState
{
	GENERATED_BODY()

public:
	ACoreGameState();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void UpdateTopScore(class ABlasterPlayerState* ScoringPlayer);
	

	void RedTeamScores();
	void BlueTeamScores();

	TArray<TObjectPtr<APlayerStateBase>> RedTeam;
	TArray<TObjectPtr<APlayerStateBase>> BlueTeam;

	UPROPERTY(ReplicatedUsing = OnRep_RedTeamScore)
	float RedTeamScore = 0.f;

	UPROPERTY(ReplicatedUsing = OnRep_BlueTeamScore)
	float BlueTeamScore = 0.f;

	UFUNCTION()
	void OnRep_RedTeamScore();

	UFUNCTION()
	void OnRep_BlueTeamScore();


	
	

	
	
	UFUNCTION()
	void UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag, bool bIsDestroy);
	
	
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);

	UFUNCTION()
	bool IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const;
	
	
	
private:

	
	

	
	/*
	 * 타워 상태를 저장하는 비트마스크
	 * 초기화는 모두 파괴되어있는 상태
	 */
	
	uint16 BlueTeamTurretStates = 0;
	uint16 RedTeamTurretStates = 0;
	
};

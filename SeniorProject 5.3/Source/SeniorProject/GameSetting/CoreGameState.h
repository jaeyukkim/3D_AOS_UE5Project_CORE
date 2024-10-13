// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameplayTagContainer.h"
#include "CoreGameState.generated.h"


USTRUCT(Blueprintable, BlueprintType)
struct FPlayerInfo
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UTexture> CharacterIcon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<APlayerState> PS;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString PlayerName;
};

class ATurret;
class APlayerStateBase;
class AMyPlayerController;

DECLARE_MULTICAST_DELEGATE_FourParams(FPlayerCharacterChangedDelegate, const FGameplayTag&, const AMyPlayerController*, const FString&, const UTexture*);


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
	void NewPlayerEntranced(AMyPlayerController* PC, FGameplayTag TeamName, FString UserName);

	UPROPERTY(ReplicatedUsing = OnRep_RedTeam)
	TArray<TObjectPtr<APlayerStateBase>> RedTeam;
	UPROPERTY(ReplicatedUsing = OnRep_BlueTeam)
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
	void OnRep_RedTeam();
	UFUNCTION()
	void OnRep_BlueTeam();
	

	
	
	UFUNCTION()
	void UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag, bool bIsDestroy);
	
	
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);

	UFUNCTION()
	bool IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const;
	

	UFUNCTION()
	void PlayerCharacterChanged(const FGameplayTag& TeamName, const AMyPlayerController*  PC, const UTexture* CharacterImg);
	
	
	FPlayerCharacterChangedDelegate PlayerCharacterChangedDelegate;

	
	FPlayerCharacterChangedDelegate NewPlayerEntrancedDelegate;
	
private:

	
	/*
	 * 타워 상태를 저장하는 비트마스크
	 * 초기화는 모두 파괴되어있는 상태
	 */
	
	uint16 BlueTeamTurretStates = 0;
	uint16 RedTeamTurretStates = 0;
	
};

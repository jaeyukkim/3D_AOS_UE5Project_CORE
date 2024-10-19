// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreSoundManager.generated.h"

struct FGameplayTag;
class USoundCue;
/**
 * 
 */


UENUM(BlueprintType)
enum class EGamePlaySoundType : uint8
{
	SpawnMinion,
	FirstBloodEnemy,
	FirstBloodAlly,
	EnemyDie,
	AllyDie,
	DoubleKill,
	TripleKill,
	EnemyTowerDestroyed,
	AllyTowerDestroyed,
	EnemyInhibitorDestroyed,
	AllyInhibitorDestroyed,
	AllyTowerUnderAttack,
	AllyInhibitorUnderAttack,
	AllyCoreUnderAttack,
	Defeat,
	Victory
	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayingAnnouncerSound, EGamePlaySoundType, SoundType);

UCLASS(Blueprintable, BlueprintType)
class SENIORPROJECT_API UCoreSoundManager : public UObject
{
	GENERATED_BODY()

public:

	void InitializeSoundManager();
	
	
	
	// 사운드 재생 함수
	UFUNCTION()
	void PlayTeamSound(EGamePlaySoundType SoundType);

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<EGamePlaySoundType, TObjectPtr<USoundCue>> GamePlaySounds;
	
	FPlayingAnnouncerSound PlayingAnnouncerSound;
	
};

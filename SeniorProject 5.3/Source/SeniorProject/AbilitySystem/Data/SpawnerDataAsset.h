// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Engine/DataAsset.h"
#include "SpawnerDataAsset.generated.h"


enum class ECharacterClass : uint8;
class AMinions;

USTRUCT(BlueprintType)
struct FMonsterSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<AMinions> MonsterClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TObjectPtr<UParticleSystem> SpawnParticle;

	//첫 미니언 스폰 타임
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float InitialSpawnTime = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float SpawnTimeInterval = 10.f;
	
	FMonsterSpawnData() : MonsterClass(nullptr), SpawnParticle(nullptr) {}
};

/**
 *	스포너에 대한 데이터를 가지고 있는 에셋 
 */

UCLASS()
class SENIORPROJECT_API USpawnerDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	FMonsterSpawnData FindMonsterSpawnData(ECharacterClass MonsterType);
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<ECharacterClass, FMonsterSpawnData> MonsterSpawnData;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float MobEnforceTimeInterval = 100.f;


};

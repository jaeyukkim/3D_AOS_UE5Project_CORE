// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AbilitySystem/Data/SpawnerDataAsset.h"


FMonsterSpawnData USpawnerDataAsset::FindMonsterSpawnData(ECharacterClass MonsterType)
{
	return MonsterSpawnData.FindChecked(MonsterType);
}

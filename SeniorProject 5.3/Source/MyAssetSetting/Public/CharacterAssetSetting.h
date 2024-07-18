// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterAssetSetting.generated.h"

/**
 * 
 */
UCLASS(config=SeniorProject)
class MYASSETSETTING_API UCharacterAssetSetting : public UObject
{
	GENERATED_BODY()

public:
	UCharacterAssetSetting();

	UPROPERTY(config)
		TArray<FSoftObjectPath> KwangAssets;
	
};

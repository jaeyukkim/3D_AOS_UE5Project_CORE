// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "AssetManagerBase.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAssetManagerBase : public UAssetManager
{
	GENERATED_BODY()
public:
	static UAssetManagerBase& Get();

protected:

	virtual void StartInitialLoading() override;
};

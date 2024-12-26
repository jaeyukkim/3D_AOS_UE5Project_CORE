// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuffMonsterInterface.generated.h"


UINTERFACE(MinimalAPI)
class UBuffMonsterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SENIORPROJECT_API IBuffMonsterInterface
{
	GENERATED_BODY()
public:

	// 버프 GameplayEffect 클래스를 반환하는 함수
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TArray<TSubclassOf<UGameplayEffect>> GetBuffEffect();
};

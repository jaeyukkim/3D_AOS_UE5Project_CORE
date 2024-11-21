// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "DetoureNavArea.generated.h"

/**
 *	미니언 우회를 위한 Navigation Area
 */

UCLASS()
class SENIORPROJECT_API UDetoureNavArea : public UNavArea
{
	GENERATED_BODY()

public:

	// 기본 비용보다 10배 증가
	UDetoureNavArea()
	{
		DefaultCost = 10.0f;
	}
		
};

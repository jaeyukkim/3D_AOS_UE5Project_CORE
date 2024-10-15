// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/PlayerStart.h"
#include "TeamPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ATeamPlayerStart : public APlayerStart
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag TeamName;
};

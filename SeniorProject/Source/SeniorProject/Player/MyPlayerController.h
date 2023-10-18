// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "EngineMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"



/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()


protected:
	virtual void BeginPlay() override;
	
};

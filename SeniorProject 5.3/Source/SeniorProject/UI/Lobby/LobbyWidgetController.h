// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyWidgetController.generated.h"


class ACharacterBase;

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()

	TSubclassOf<ACharacterBase> SelectedChatacter;
};
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ULobbyWidgetController : public UObject
{
	GENERATED_BODY()
	
};

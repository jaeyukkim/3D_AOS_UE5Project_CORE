// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"

#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"



/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();
	class UMyHUDWidget* GetHUDWidget() const;
	void NPCKill(class AController* KilledNPC, int32 Exp) const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UMyHUDWidget> HUDWidgetClass;

private:
	UPROPERTY()
		class UMyHUDWidget* HUDWidget;

	UPROPERTY()
		class AMyPlayerState* MyPlayerState;
};

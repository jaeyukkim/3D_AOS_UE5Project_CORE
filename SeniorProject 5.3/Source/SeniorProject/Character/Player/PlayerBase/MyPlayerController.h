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
	void ChangeInputMode(bool bGameMode = true);
	virtual void OnPossess(APawn* InPawn) override;

protected:
	virtual void BeginPlay() override;

	


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UMyHUDWidget> HUDWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UMyMenuWidget> MenuWidgetClass;



private:

	UPROPERTY(EditDefaultsOnly)
		class UMyMenuWidget* MenuWidget;

	UPROPERTY(EditDefaultsOnly)
		class UMyHUDWidget* HUDWidget;

	UPROPERTY(EditDefaultsOnly)
		class AMyPlayerState* MyPlayerState;


	FInputModeGameOnly GameInputMode;


	FInputModeUIOnly UIInputMode;



	void CursurTrace();
	void OnGamePause();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Blueprint/UserWidget.h"
#include "OverlayWidget.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UOverlayWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void BindCharacterStat(class UMyCharacterStatComponent* CharacterStat);

	void BindPlayerState(class AMyPlayerState* PlayerState);


public:
	UFUNCTION(BlueprintCallable)
		void SetWidgetController(UObject* InWidgetController);

	UPROPERTY(BlueprintReadOnly)
		TObjectPtr<UObject> WidgetController;
protected:
	UFUNCTION(BlueprintImplementableEvent)
		void WidgetControllerSet();


protected:
	virtual void NativeConstruct() override;
	void UpdateCharacterStat();
	void UpdatePlayerState();

private:

	TWeakObjectPtr<class UMyCharacterStatComponent> CurrentCharacterStat;

	TWeakObjectPtr<class AMyPlayerState> CurrentPlayerState;

	UPROPERTY()
		class UProgressBar* HPBar;

	UPROPERTY()
		class UProgressBar* ExpBar;

	UPROPERTY()
		class UTextBlock* PlayerLevel;

};

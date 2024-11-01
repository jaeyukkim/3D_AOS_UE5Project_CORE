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

	
	
	UFUNCTION(BlueprintCallable)
		void SetWidgetController(UObject* InWidgetController);

	UPROPERTY(BlueprintReadOnly)
		TObjectPtr<UObject> WidgetController;
protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void WidgetControllerSet();

	UFUNCTION(BlueprintCallable)
		bool IsNearLocalController();


};

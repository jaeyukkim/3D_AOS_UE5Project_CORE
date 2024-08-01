// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidget.h"
#include "SeniorProject/PlayerBase/MyCharacterStatComponent.h"
#include "SeniorProject/PlayerBase/MyPlayerState.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"



void UOverlayWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}


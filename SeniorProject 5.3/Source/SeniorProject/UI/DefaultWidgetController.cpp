// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultWidgetController.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"


void UDefaultWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UDefaultWidgetController::BroadcastInitialValues()
{
}

void UDefaultWidgetController::BindCallbacksToDependencies()
{
}

UAttributeSetBase* UDefaultWidgetController::GetMyAS()
{
	if (AttributeSetBase == nullptr)
	{
		AttributeSetBase = Cast<UAttributeSetBase>(AttributeSet);
	}
	return AttributeSetBase;
}

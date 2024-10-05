// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemMenuWidgetController.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"

void UItemMenuWidgetController::BroadcastInitialValues()
{
	Super::BroadcastInitialValues();
	
	GoldChanged.Broadcast(GetMyPS()->GetGold());

}

void UItemMenuWidgetController::BindCallbacksToDependencies()
{
	Super::BindCallbacksToDependencies();

	GetMyPS()->OnGoldChangedDelegate.AddLambda([this](int32 Gold)
	{
		GoldChanged.Broadcast(Gold);
	});
}

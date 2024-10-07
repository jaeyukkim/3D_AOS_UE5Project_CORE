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

void UItemMenuWidgetController::OnInitializeShopItem()
{
	
}

void UItemMenuWidgetController::UpdateClickedItem(FItemInformation Info)
{
	if(GetMyPS() == nullptr) return;
	
	ClickedItemInfo.bHasBought = Info.bHasBought;
	ClickedItemInfo.ItemTag = Info.ItemTag;
	ClickedItemInfo.ItemImg = Info.ItemImg;
	ClickedItemInfo.RequiredGold = Info.RequiredGold;
	ClickedItemInfo.ItemAbility = Info.ItemAbility;

	if(PlayerStateBase->GetGold() < ClickedItemInfo.RequiredGold || ClickedItemInfo.bHasBought)
	{
		BuyButtonChangedDelegate.Broadcast(false);
	}
	else
	{
		BuyButtonChangedDelegate.Broadcast(true);
	}
}

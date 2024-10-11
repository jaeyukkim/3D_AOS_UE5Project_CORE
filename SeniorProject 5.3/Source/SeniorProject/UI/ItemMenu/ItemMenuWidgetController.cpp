// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemMenuWidgetController.h"

#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
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
	
	GetMyASC()->OwnedItemChangedDelegate.AddLambda([this](const FItemInformation& Info)
	{
		PlayerItemChangedDelegate.Broadcast(Info);
	});
	
	if(GetMyPS() != nullptr)
		GoldChanged.Broadcast(GetMyPS()->GetGold());
}

void UItemMenuWidgetController::OnInitializeShopItem()
{
	if(GetMyASC() == nullptr) return;

	AbilitySystemComponentBase->UpdateForEachItem();
	GoldChanged.Broadcast(GetMyPS()->GetGold());
	
}

void UItemMenuWidgetController::UpdateClickedItem(FItemInformation Info)
{
	
	ClickedItemInfo.InputTag = Info.InputTag;
	ClickedItemInfo.ItemTag = Info.ItemTag;
	ClickedItemInfo.ItemImg = Info.ItemImg;
	ClickedItemInfo.ItemPrice = Info.ItemPrice;
	ClickedItemInfo.ItemAbility = Info.ItemAbility;
	ClickedItemInfo.ItemEffect = Info.ItemEffect;
	ClickedItemInfo.bHasBought = Info.bHasBought;
	
	
}

void UItemMenuWidgetController::ShopClickedItem(FItemInformation Info)
{
	if(GetMyPS() == nullptr) return;
	
	UpdateClickedItem(Info);
	
	if(PlayerStateBase->GetGold() < ClickedItemInfo.ItemPrice || ClickedItemInfo.ItemEffect == nullptr)
	{
		BuyButtonChangedDelegate.Broadcast(false);
	}
	else
	{
		BuyButtonChangedDelegate.Broadcast(true);
	}
	
	ShowItemInfoDelegate.Broadcast(Info);
}

void UItemMenuWidgetController::ShopClickedPlayerItem(FGameplayTag ItemInputTag)
{
	if(GetMyASC() == nullptr) return;
	
	FItemInformation Info = AbilitySystemComponentBase->GetPlayerItem(ItemInputTag);

	if(Info.ItemEffect == nullptr) return;
	
	ShowItemInfoDelegate.Broadcast(Info);
	UpdateClickedItem(Info);
	SellButtonChangedDelegate.Broadcast(true);
	
	
}

void UItemMenuWidgetController::BuyItem()
{
	if(GetMyASC() == nullptr || ClickedItemInfo.ItemEffect == nullptr) return;
	
	AbilitySystemComponentBase->ServerBuyItem(ClickedItemInfo);
	
	
}

void UItemMenuWidgetController::SellItem()
{
	if(GetMyASC() == nullptr || ClickedItemInfo.ItemEffect == nullptr) return;

	AbilitySystemComponentBase->ServerSellItem(ClickedItemInfo);
	ItemDeletedDelegate.Broadcast(ClickedItemInfo.InputTag);
	SellButtonChangedDelegate.Broadcast(false);
}

void UItemMenuWidgetController::InitializeShopPlayerItem()
{
	if(GetMyASC() == nullptr) return;

	TArray<FItemInformation> AllItem = AbilitySystemComponentBase->GetAllPlayerItem();
	for(FItemInformation Info : AllItem)
	{
		ShopPlayerItemInitializeDelegate.Broadcast(Info);
	}
}

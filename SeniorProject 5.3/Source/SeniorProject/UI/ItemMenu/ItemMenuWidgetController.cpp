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
		BuyButtonChangedDelegate.Broadcast(false);
	});
	
	if(GetMyPS() != nullptr)
		GoldChanged.Broadcast(GetMyPS()->GetGold());

	if(GetMyPS() != nullptr)
		GetMyPS()->ChangedShopCustomer.AddLambda([this](const bool bIsInShop)
		{
			if(bIsInShop == false) ClickedItemInfo = FItemInformation();
			BuyButtonChangedDelegate.Broadcast(false);
			ShopCustomerChangedDelegate.Broadcast(bIsInShop);
			
		});
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
	ClickedItemInfo.ItemDescription = Info.ItemDescription;
	ClickedItemInfo.SpecialOption = Info.SpecialOption;
	ClickedItemInfo.ItemPrice = Info.ItemPrice;
	ClickedItemInfo.ItemAbility = Info.ItemAbility;
	ClickedItemInfo.ItemEffect = Info.ItemEffect;
	ClickedItemInfo.bHasBought = Info.bHasBought;
	
	
}

void UItemMenuWidgetController::ShopClickedItem(FItemInformation Info)
{
	if(GetMyPS() == nullptr || GetMyASC() == nullptr) return;
	
	TArray<FItemInformation> AllItem = AbilitySystemComponentBase->GetAllPlayerItem();
	for(FItemInformation BoughtItem : AllItem)
	{
		if(BoughtItem.ItemTag.MatchesTagExact(Info.ItemTag))
		{
			Info.bHasBought = true;
		}
	}
	
	Info.ItemDescription = GetEffectAttributesAsString(Info.ItemEffect);
	UpdateClickedItem(Info);


	if(PlayerStateBase->GetGold() < ClickedItemInfo.ItemPrice ||
		ClickedItemInfo.ItemEffect == nullptr || !PlayerStateBase->GetIsInShop() || ClickedItemInfo.bHasBought)
	{
		BuyButtonChangedDelegate.Broadcast(false);
	}
	else
	{
		BuyButtonChangedDelegate.Broadcast(true);
	}
	
	ShowItemInfoDelegate.Broadcast(Info);
}

FString UItemMenuWidgetController::GetEffectAttributesAsString(const TSubclassOf<UGameplayEffect>& EffectClass)
{
	
	if (!EffectClass) return TEXT("");

	// GameplayEffect 객체 생성
	const UGameplayEffect* Effect = EffectClass->GetDefaultObject<UGameplayEffect>();
	FString Result = "";

	// Modifier 순회
	for (const FGameplayModifierInfo& Modifier : Effect->Modifiers)
	{
		// Attribute 이름 가져오기
		FString AttributeName = Modifier.Attribute.AttributeName;

		// Modifier 값 가져오기
		float ModifierValue = 0.f;
		
		Modifier.ModifierMagnitude.GetStaticMagnitudeIfPossible(1.0f, ModifierValue);
		
		
		// 문자열로 추가
		if(ModifierValue > 0)
			Result += FString::Printf(TEXT("%s : %.2f\n"), *AttributeName, ModifierValue);
	}

	return Result;
}

void UItemMenuWidgetController::ShopClickedPlayerItem(FGameplayTag ItemInputTag)
{
	if(GetMyASC() == nullptr) return;
	
	FItemInformation Info = AbilitySystemComponentBase->GetPlayerItem(ItemInputTag);

	if(Info.ItemEffect == nullptr) return;

	Info.bHasBought = true;
	UpdateClickedItem(Info);
	ShowItemInfoDelegate.Broadcast(Info);
	SellButtonChangedDelegate.Broadcast(true);
	BuyButtonChangedDelegate.Broadcast(false);
	
}

void UItemMenuWidgetController::BuyItem()
{
	if(GetMyASC() == nullptr || ClickedItemInfo.ItemEffect == nullptr) return;
	
	AbilitySystemComponentBase->ServerBuyItem(ClickedItemInfo);
	BuyButtonChangedDelegate.Broadcast(false);
	
}

void UItemMenuWidgetController::SellItem()
{
	if(GetMyASC() == nullptr || ClickedItemInfo.ItemEffect == nullptr) return;

	ItemDeletedDelegate.Broadcast(ClickedItemInfo.InputTag, ClickedItemInfo.ItemTag);
	AbilitySystemComponentBase->ServerSellItem(ClickedItemInfo);
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

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
	ClickedItemInfo.ItemDescription = Info.ItemDescription;
	ClickedItemInfo.SpecialOption = Info.SpecialOption;
	ClickedItemInfo.ItemPrice = Info.ItemPrice;
	ClickedItemInfo.ItemAbility = Info.ItemAbility;
	ClickedItemInfo.ItemEffect = Info.ItemEffect;
	ClickedItemInfo.bHasBought = Info.bHasBought;
	
	
}

void UItemMenuWidgetController::ShopClickedItem(FItemInformation Info)
{
	if(GetMyPS() == nullptr) return;

	Info.ItemDescription = GetEffectAttributesAsString(Info.ItemEffect);
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

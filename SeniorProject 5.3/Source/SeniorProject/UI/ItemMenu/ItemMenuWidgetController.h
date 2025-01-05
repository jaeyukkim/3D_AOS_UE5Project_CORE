// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/UI/DefaultWidgetController.h"
#include "GameplayEffect.h"
#include "ItemMenuWidgetController.generated.h"



USTRUCT(BlueprintType)
struct FItemInformation
{
	GENERATED_BODY()
	FItemInformation()
		: ItemTag(FGameplayTag())
		, InputTag(FGameplayTag())
		, ItemPrice(0)
		, ItemImg(nullptr)
		, ItemAbility(nullptr)
		, ItemEffect(nullptr)
		, bHasBought(false)
	{
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTag ItemTag = FGameplayTag();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTag InputTag = FGameplayTag();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemPrice = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UTexture> ItemImg = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ItemDescription = FString();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString SpecialOption = FString();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UGameplayAbility> ItemAbility = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UGameplayEffect> ItemEffect = nullptr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasBought = false;

	
	
	
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoldChangedSignature, int32, NewGold);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuyButtonChangedDelegate, bool, bIsBuyable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemStateChangedDelegate, const FItemInformation&, Info);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDeletedDelegate, const FGameplayTag&, ItemInputTag, const FGameplayTag&, ItemTag);


/**
 * 
 */

class UItemInfo;

UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UItemMenuWidgetController : public UDefaultWidgetController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)

	
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;
	FString GetEffectAttributesAsString(const TSubclassOf<UGameplayEffect>& EffectClass);
	
	UFUNCTION(BlueprintCallable)
	void OnInitializeShopItem();
	
	UFUNCTION(BlueprintCallable)
	void UpdateClickedItem(FItemInformation Info);

	UFUNCTION(BlueprintCallable)
	void ShopClickedItem(FItemInformation Info);

	UFUNCTION(BlueprintCallable)
	void ShopClickedPlayerItem(FGameplayTag ItemInputTag);
	
	UFUNCTION(BlueprintCallable)
	void BuyItem();

	UFUNCTION(BlueprintCallable)
	void SellItem();

	UFUNCTION(BlueprintCallable)
	void InitializeShopPlayerItem();
	
	UPROPERTY(BlueprintAssignable)
	FGoldChangedSignature GoldChanged;
	
	UPROPERTY(BlueprintAssignable)
	FBuyButtonChangedDelegate BuyButtonChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FBuyButtonChangedDelegate SellButtonChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FItemStateChangedDelegate PlayerItemChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FItemStateChangedDelegate ShopPlayerItemInitializeDelegate;

	UPROPERTY(BlueprintAssignable)
	FItemStateChangedDelegate ShowItemInfoDelegate;

	UPROPERTY(BlueprintAssignable)
	FItemDeletedDelegate ItemDeletedDelegate;

	UPROPERTY(BlueprintAssignable)
	FBuyButtonChangedDelegate ShopCustomerChangedDelegate;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ItemInformation")
	TObjectPtr<UDataTable> ItemTagData;

	UPROPERTY()
	FItemInformation ClickedItemInfo;
	
};

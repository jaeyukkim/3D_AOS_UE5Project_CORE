// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/UI/DefaultWidgetController.h"
#include "SeniorProject/AbilitySystem/Item/ItemAbility.h"
#include "ItemMenuWidgetController.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoldChangedSignature, int32, NewGold);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuyButtonChangedDelegate, bool, bIsBuyable);

USTRUCT(BlueprintType)
struct FItemInformation
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTag ItemTag = FGameplayTag();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 RequiredGold = 100000;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UTexture> ItemImg = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UItemAbility> ItemAbility = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasBought = false;
	
};


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
	void OnInitializeShopItem();
	
	UFUNCTION(BlueprintCallable)
	void UpdateClickedItem(FItemInformation Info);
	
	UPROPERTY(BlueprintAssignable)
	FBuyButtonChangedDelegate BuyButtonChangedDelegate;
	
	UPROPERTY(BlueprintAssignable)
	FGoldChangedSignature GoldChanged;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ItemInformation")
	TObjectPtr<UDataTable> ItemTagData;

	UPROPERTY()
	FItemInformation ClickedItemInfo;
	
};

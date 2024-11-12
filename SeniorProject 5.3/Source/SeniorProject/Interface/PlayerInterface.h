
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "PlayerInterface.generated.h"


struct FItemInformation;

UINTERFACE

(MinimalAPI)
class UPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SENIORPROJECT_API IPlayerInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent)
	int32 FindLevelForXP(int32 InXP) const;
	
	UFUNCTION(BlueprintNativeEvent)
	int32 GetXP() const;

	UFUNCTION(BlueprintNativeEvent)
	int32 GetGold() const;
	
	UFUNCTION(BlueprintNativeEvent)
	int32 GetSpellPointsReward(int32 Level) const;

	UFUNCTION(BlueprintNativeEvent)
	int32 GetSpellPoints() const;
	
	UFUNCTION(BlueprintNativeEvent)
	void AddToXP(int32 InXP);

	UFUNCTION(BlueprintNativeEvent)
	void AddToGold(int32 InGold);
	
	UFUNCTION(BlueprintNativeEvent)
	void LevelUp();

	UFUNCTION(BlueprintNativeEvent)
	void AddToPlayerLevel(int32 InPlayerLevel);
	
	UFUNCTION(BlueprintNativeEvent)
	void AddToSpellPoints(int32 InSpellPoints);
	
	UFUNCTION(BlueprintNativeEvent)
	void AddToItem(const FItemInformation& InOwnedItem);

	UFUNCTION(BlueprintNativeEvent)
	FGameplayTag GetEmptyItemSlot();

	UFUNCTION(BlueprintNativeEvent)
	TArray<FItemInformation> GetAllItem();

	UFUNCTION(BlueprintNativeEvent)
	bool DeleteItem(const FGameplayTag& ItemInputTag);
	
	UFUNCTION(BlueprintNativeEvent)
	void SortingItem();

	UFUNCTION(BlueprintNativeEvent)
	void SetIsInShop(bool InbIsInShop);

	UFUNCTION(BlueprintNativeEvent)
	bool GetIsInShop();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UAnimMontage* GetRecallMontage();
};

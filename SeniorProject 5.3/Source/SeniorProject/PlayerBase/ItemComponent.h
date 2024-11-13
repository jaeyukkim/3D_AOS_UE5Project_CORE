// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemComponent.generated.h"

struct FItemInformation;
struct FGameplayTag;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SENIORPROJECT_API UItemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UItemComponent();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	void AddToItem(const FItemInformation& InOwnedItem);
	bool DeleteItem(const FGameplayTag& ItemInputTag);
	//void SortingItem();
	
	FGameplayTag GetEmptyItemSlot();
	TArray<FItemInformation>& GetAllItem();
	
	UPROPERTY(Replicated)
	TArray<FItemInformation> OwnedItems;
private:
	
};

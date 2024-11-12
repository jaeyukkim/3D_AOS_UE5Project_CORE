// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemComponent.h"
#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"


UItemComponent::UItemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UItemComponent, OwnedItems);
}


void UItemComponent::AddToItem(const FItemInformation& InOwnedItem)
{
	OwnedItems.Add(InOwnedItem);
}

bool UItemComponent::DeleteItem(const FGameplayTag& ItemInputTag)
{
	// 배열에서 해당 태그를 가진 아이템을 모두 삭제
	int32 RemovedCount = OwnedItems.RemoveAll([&](const FItemInformation& Info)
	{
		return Info.InputTag.MatchesTag(ItemInputTag);
	});

	// 삭제된 항목이 있으면 true 반환
	return RemovedCount > 0;
}


FGameplayTag UItemComponent::GetEmptyItemSlot()
{
	// 게임플레이 태그 데이터베이스 가져오기
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
    
	// OwnedItems 배열에서 사용 중인 InputTag들을 수집합니다.
	TSet<FGameplayTag> UsedTags;
	for (const FItemInformation& Item : OwnedItems)
	{
		if (Item.InputTag.IsValid())
		{
			UsedTags.Add(Item.InputTag);
		}
	}

	// 사용되지 않은 태그를 찾아 반환합니다.
	for (const FGameplayTag& InputTag : GameplayTags.ItemInputTags)
	{
		if (!UsedTags.Contains(InputTag))
		{
			return InputTag; // 사용되지 않은 첫 번째 태그 반환
		}
	}

	// 사용 가능한 태그가 없을 경우 NONE 태그 반환
	return GameplayTags.Input_NONE;
}

TArray<FItemInformation> UItemComponent::GetAllItem()
{
	return OwnedItems;
}

/*
// 아이템 정렬 로직 할당된 ability input tag를 변경
void UItemComponent::SortingItem()
{
	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent());

		for(FItemInformation& OwnedItem : OwnedItems)
		{
			FGameplayTag PrevInputTag = OwnedItem.InputTag;
			FGameplayTag NextInputTag = GetEmptyItemSlot_Implementation();

			OwnedItem.InputTag = NextInputTag;
			ASCBase->ChangeGrantedTagToEffect(PrevInputTag, NextInputTag, OwnedItem.ItemEffect);
		}
		
	}
}*/
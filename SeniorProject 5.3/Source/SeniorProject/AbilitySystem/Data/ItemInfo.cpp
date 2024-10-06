// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemInfo.h"

FItemsInfo UItemInfo::FindItemInfoForTag(const FGameplayTag& ItemTag, bool bLogNotFound) const
{
	for (const FItemsInfo& Info : ItemInformation)
	{
		if (Info.ItemTag == ItemTag)
		{
			return Info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find info for ItemTag [%s] on ItemsInfo [%s]"), *ItemTag.ToString(), *GetNameSafe(this));
	}

	return FItemsInfo();
}

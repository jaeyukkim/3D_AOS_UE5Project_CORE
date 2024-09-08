// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityInfo.h"

FAbilityInfoBase UAbilityInfo::FindAbilityInfoForTag(const FGameplayTag& CharacterTag, bool bLogNotFound) const
{
	for (const FAbilityInfoBase& Info : AbilityInformation)
	{
		if (Info.CharacterTag == CharacterTag)
		{
			return Info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find info for AbilityTag [%s] on AbilityInfo [%s]"), *CharacterTag.ToString(), *GetNameSafe(this));
	}

	return FAbilityInfoBase();
}
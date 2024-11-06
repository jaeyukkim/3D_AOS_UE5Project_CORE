// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityInfo.h"

FAbilityInfoBase UAbilityInfo::FindAbilityInfoForTag(const FGameplayTag& AbilityTag, ECharacterClass CharacterClass, bool bLogNotFound) const
{
	// CharacterClass와 AbilityTag가 모두 일치하는 항목을 찾기 위해 FindByPredicate를 사용
	const FAbilityInfoBase* FoundInfo = AbilityInformation.FindByPredicate([&](const FAbilityInfoBase& Info) {
		return Info.CharacterClass == CharacterClass && Info.AbilityTag == AbilityTag;
	});

	if (FoundInfo)
	{
		return *FoundInfo;
	}

	// 찾지 못한 경우 로그를 출력할지 여부를 확인합니다.
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find info for AbilityTag [%s] and CharacterClass [%d] on AbilityInfo [%s]"), *AbilityTag.ToString(), static_cast<int32>(CharacterClass), *GetNameSafe(this));
	}

	return FAbilityInfoBase();
}
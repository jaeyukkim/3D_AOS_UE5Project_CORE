// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilityBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "Types/SlateVector2.h"

void UGameplayAbilityBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	
	// 스킬 사용 중 다른 스킬사용을 CastingTime 만큼 막음으로써 캔슬 방지
	// 캐스팅이 필요 한 스킬인지 CastingEffect가 설정되어 있는지 확인
	if(IsNeedCasting && CastingEffect)
	{
		
		// GameplayEffect를 대상 액터에게 적용
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CastingEffect, 1);
		SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTagsBase::Get().Abilities_Combat_CastingOn, CastingTime);
		ActorInfo->AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

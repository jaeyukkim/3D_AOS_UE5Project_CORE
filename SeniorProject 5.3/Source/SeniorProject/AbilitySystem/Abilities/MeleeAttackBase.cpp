// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAttackBase.h"

#include "SeniorProject/Interface/CombatInterface.h"

void UMeleeAttackBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);


	ICombatInterface* AvatarActor = Cast<ICombatInterface>(ActorInfo->AvatarActor);
	if(AvatarActor == nullptr) return;
	
	int32 CurrentCombo = AvatarActor->GetCurrentCombo();
	int32 MaxCombo = AvatarActor->GetMaxAttackCombo();

	if(CurrentCombo < MaxCombo)
	{
		AvatarActor->SetCurrentCombo(++CurrentCombo);
	}
	else
	{
		AvatarActor->SetCurrentCombo(0);
	}
	
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetDataAim.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/Interface/CombatInterface.h"

UTargetDataAim* UTargetDataAim::CreateTargetDataAim(UGameplayAbility* OwningAbility)
{
	
	UTargetDataAim* MyObj = NewAbilityTask<UTargetDataAim>(OwningAbility);
	return MyObj;
}

void UTargetDataAim::SetAimDistance(float InAimDistance)
{
	AimDistance = InAimDistance;
	bIsReadyForActivation = true;
	Activate();
}

void UTargetDataAim::Activate()
{

	const bool bIsLocallyControlled = Ability->GetCurrentActorInfo()->IsLocallyControlled();
	if(!bIsReadyForActivation) return;
	
	if (bIsLocallyControlled && bIsReadyForActivation)
	{
		SendAimData();
	}
	else if(!bIsLocallyControlled)
	{
		//TODO: We are on the server, so listen for target data.
		
		const FGameplayAbilitySpecHandle SpecHandle = GetAbilitySpecHandle();
		const FPredictionKey ActivationPredictionKey = GetActivationPredictionKey();
		AbilitySystemComponent.Get()->AbilityTargetDataSetDelegate(SpecHandle, ActivationPredictionKey).AddUObject(this, &UTargetDataAim::OnTargetDataReplicatedCallback);
		const bool bCalledDelegate = AbilitySystemComponent.Get()->CallReplicatedTargetDataDelegatesIfSet(SpecHandle, ActivationPredictionKey);
		if (!bCalledDelegate)
		{
			// 클라이언트로부터 필요한 타겟 데이터가 서버로 전송될 때까지 대기 상태를 설정합니다.
			SetWaitingOnRemotePlayerData();
		}
	}
}

void UTargetDataAim::SendAimData()
{
	FScopedPredictionWindow ScopedPrediction(AbilitySystemComponent.Get());
	
	FHitResult HitResult;
	if(GetAvatarActor()->Implements<UCombatInterface>())
	{
		ICombatInterface::Execute_GetAimHitResult(GetAvatarActor(), AimDistance, HitResult );
	}

	
	FGameplayAbilityTargetDataHandle DataHandle;
	FGameplayAbilityTargetData_SingleTargetHit* Data = new FGameplayAbilityTargetData_SingleTargetHit();
	Data->HitResult = HitResult;
	DataHandle.Add(Data);

	AbilitySystemComponent->ServerSetReplicatedTargetData(
		GetAbilitySpecHandle(),
		GetActivationPredictionKey(),
		DataHandle,
		FGameplayTag(),
		AbilitySystemComponent->ScopedPredictionKey);

	if (ShouldBroadcastAbilityTaskDelegates()) // 델리게이트(delegate)가 실행될 준비가 되었는지를 결정하는 역할을 합니다.
	{
		ValidData.Broadcast(DataHandle);
	}
}

void UTargetDataAim::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& DataHandle,
	FGameplayTag ActivationTag)
{
	// 서버에서 클라이언트가 복제한 타겟 데이터를 소비하여 게임 로직에 활용합니다.
	AbilitySystemComponent->ConsumeClientReplicatedTargetData(GetAbilitySpecHandle(), GetActivationPredictionKey());

	
	if (ShouldBroadcastAbilityTaskDelegates()) //능력이 여전히 활성화되어 있는지 확인할 수 있습니다.
	{
		ValidData.Broadcast(DataHandle);
	}
}

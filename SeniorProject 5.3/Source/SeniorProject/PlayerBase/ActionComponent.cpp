// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/PlayerBase/ActionComponent.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


UActionComponent::UActionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	
}

void UActionComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
}


void UActionComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UActionComponent::MulticastHitStopAndCameraShake_Implementation(TSubclassOf<UCameraShakeBase> CameraShake,
	const float HitStopTime, const float HitStopDelay)
{
	MulticastHitStop_Implementation(HitStopTime, HitStopDelay);
	MulticastCameraShake_Implementation(CameraShake);
}

void UActionComponent::MulticastHitStop_Implementation(const float HitStopTime, const float HitStopDelay)
{
	if (GetOwner() == nullptr) return;

	ACharacter* OwnerPlayer = Cast<ACharacter>(GetOwner());
	
	//히트 스탑은 로컬 플레이어 뿐 아니라 다른 플레이가 볼 때도 적용되어야함
	OwnerPlayer->CustomTimeDilation = HitStopDelay;
	GetWorld()->GetTimerManager().ClearTimer(HitStopTimerHandle);
	
	GetWorld()->GetTimerManager().SetTimer(HitStopTimerHandle, FTimerDelegate::CreateLambda([this, OwnerPlayer]()
	{
		OwnerPlayer->CustomTimeDilation = 1.f;
	}), HitStopTime, false);
	
}

void UActionComponent::MulticastCameraShake_Implementation(TSubclassOf<UCameraShakeBase> CameraShake)
{
	ACharacter* OwnerPlayer = Cast<ACharacter>(GetOwner());
	// 카메라 쉐이크는 로컬 플레이어만 실행
	if (OwnerPlayer->IsLocallyControlled())
	{
		UGameplayStatics::GetPlayerCameraManager(this, 0)->StartCameraShake(
		CameraShake, 1, ECameraShakePlaySpace::CameraLocal);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffAnimInstance.h"

#include "SeniorProject/Character/Enemy/NeutralityMonster.h"

void UBuffAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		BuffMonster = Cast<ANeutralityMonster>(Pawn);
	}
}


// 타겟 플레이어가 설정됐을 때 그 타겟 플레이어를 바라보는 몬스터의
void UBuffAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(!IsValid(BuffMonster)) return;


	if (!IsValid(BuffMonster)) return;

	// 플레이어 타겟 설정
	TargetPlayer = BuffMonster->CombatTarget;
	if (TargetPlayer == nullptr)
	{
		YawToPlayer = FMath::FInterpTo(YawToPlayer, 0, DeltaSeconds, 5.0f);
		return;
	}

	// 몬스터와 플레이어 위치 가져오기
	FVector MonsterLocation = BuffMonster->GetActorLocation();
	FVector PlayerLocation = TargetPlayer->GetActorLocation();

	// 몬스터와 플레이어 간 방향 벡터 계산
	FVector DirectionToPlayer = PlayerLocation - MonsterLocation;

	// XY 평면에 투영 (Z축은 무시)
	DirectionToPlayer.Z = 0;
	DirectionToPlayer.Normalize();

	// 몬스터의 현재 정면 벡터 (몬스터가 보고 있는 방향)
	FVector MonsterForward = BuffMonster->GetActorForwardVector();
	MonsterForward.Z = 0;
	MonsterForward.Normalize();

	// 벡터 내적 계산 (각도의 코사인 값)
	float DotProduct = FVector::DotProduct(MonsterForward, DirectionToPlayer);

	// 벡터 외적 계산 (각도의 사인 값)
	float CrossProductZ = MonsterForward.X * DirectionToPlayer.Y - MonsterForward.Y * DirectionToPlayer.X;

	// Atan2를 사용해 각도 계산 (-180 ~ 180)
	float TargetYaw = FMath::RadiansToDegrees(FMath::Atan2(CrossProductZ, DotProduct));

	// FInterpTo를 사용하여 Yaw를 부드럽게 보간
	YawToPlayer = FMath::FInterpTo(YawToPlayer, TargetYaw, DeltaSeconds, 5.0f); // 보간 속도: 5.0f (조정 가능)

}

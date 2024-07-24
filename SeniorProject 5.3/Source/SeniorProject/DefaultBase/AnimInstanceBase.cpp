// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceBase.h"


UAnimInstanceBase::UAnimInstanceBase()
{
	Speed = 0.0f;
	IsInAir = false;
	Roll = 0.0f;
	Pitch = 0.0f;
	Yaw = 0.0f;
	YawDelta = 0.0f;
	IsDead = false;
	IsDamaged = false;
}



void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
		Character = Cast<ACharacterBase>(Pawn);

	if (!IsValid(Character))
		return;
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);



	if (IsValid(Character))
	{

		Speed = Character->GetVelocity().Size();
		AimRotation = Character->GetBaseAimRotation();
		ActorRotation = Character->GetActorRotation();
		DeltaRotator = NormalizedDeltaRotator(AimRotation, ActorRotation);
		Roll = DeltaRotator.Roll;
		Pitch = DeltaRotator.Pitch;
		Yaw = DeltaRotator.Yaw;

		// 몬스터의 부드러운 시점변환
		YawDelta = FMath::FInterpTo(YawDelta,
			(NormalizedDeltaRotator(RotationLastTick, ActorRotation).Yaw / DeltaSeconds) / 7.0,
			DeltaSeconds, 6.0);


		RotationLastTick = ActorRotation;



		Direction = CalculateDirection(Character->GetVelocity(), ActorRotation);	//몬스터의 방향


		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();

			if (Character->GetCharacterMovement()->GetCurrentAcceleration().Length() > 0)
				IsAccelerating = true;
			else
				IsAccelerating = false;


		}

		if (GetCurveValue("FullBody") > 0)
			FullBody = true;
		else
			FullBody = false;



	}


}

FRotator UAnimInstanceBase::NormalizedDeltaRotator(FRotator A, FRotator B)
{
	FRotator Delta = A - B;
	Delta.Normalize();
	return Delta;
}

//콤보어택 저장
void UAnimInstanceBase::AnimNotify_SaveAttack()
{

	if (IsValid(Character))
		Character->ComboAttackSave();


}

//콤보공격 초기화
void UAnimInstanceBase::AnimNotify_ResetCombo()
{


	if (IsValid(Character))
		Character->ResetCombo();
}

//이동중 멈췄을 때 어느방향으로 이동하고 있었는지 위치정보 저장


// 오른 손 공격시 공격을 진행하는 손을 오른손으로 변경
void UAnimInstanceBase::AnimNotify_RightAttack()
{
	if (IsValid(Character))
		Character->AttackDirectionSetSoket(EAttackDirection::Right);

}

// 오른 손 공격시 공격을 진행하는 손 을 왼손으로 변경
void UAnimInstanceBase::AnimNotify_LeftAttack()
{
	if (IsValid(Character))
		Character->AttackDirectionSetSoket(EAttackDirection::Left);

}

// 데미지 처리
void UAnimInstanceBase::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}


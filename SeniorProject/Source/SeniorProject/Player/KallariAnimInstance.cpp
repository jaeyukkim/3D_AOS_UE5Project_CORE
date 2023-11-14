// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/KallariAnimInstance.h"



UKallariAnimInstance::UKallariAnimInstance()
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

void UKallariAnimInstance::NativeInitializeAnimation()
{
	Pawn = TryGetPawnOwner();


	if (::IsValid(Pawn))
		Kallari = Cast<AKallari>(Pawn);

}

void UKallariAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);



	if (::IsValid(Pawn))
	{

		Speed = Pawn->GetVelocity().Size();




		AimRotation = Pawn->GetBaseAimRotation();
		ActorRotation = Pawn->GetActorRotation();
		DeltaRotator = NormalizedDeltaRotator(AimRotation, ActorRotation);
		Roll = DeltaRotator.Roll;
		Pitch = DeltaRotator.Pitch;
		Yaw = DeltaRotator.Yaw;

		YawDelta = FMath::FInterpTo(YawDelta,
			(NormalizedDeltaRotator(RotationLastTick, ActorRotation).Yaw / DeltaSeconds) / 7.0,
			DeltaSeconds, 6.0);


		RotationLastTick = ActorRotation;



		Direction = CalculateDirection(Kallari->GetVelocity(), ActorRotation);


		if (Kallari)
		{
			IsInAir = Kallari->GetMovementComponent()->IsFalling();

			if (Kallari->GetCharacterMovement()->GetCurrentAcceleration().Length() > 0)
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

FRotator UKallariAnimInstance::NormalizedDeltaRotator(FRotator A, FRotator B)
{
	FRotator Delta = A - B;
	Delta.Normalize();
	return Delta;
}

void UKallariAnimInstance::AnimNotify_SaveAttack()
{

		if (Kallari != NULL)
			Kallari->ComboAttackSave();


}

void UKallariAnimInstance::AnimNotify_ResetCombo()
{


		if (Kallari != NULL)
			Kallari->ResetCombo();
}



void UKallariAnimInstance::AnimNotify_RightAttack()
{
	if (Kallari)
		Kallari->AttackDirectionSetSoket(EAttackDirection::Right);

}

void UKallariAnimInstance::AnimNotify_LeftAttack()
{
	if (Kallari)
		Kallari->AttackDirectionSetSoket(EAttackDirection::Left);

}

//공격가능
void UKallariAnimInstance::AnimNotify_CanAttack()
{
	if (Kallari)
	{
		Kallari->IsAttacking = false;
	}

}

//공격불가판정
void UKallariAnimInstance::AnimNotify_CanNotAttack()
{
	if (Kallari)
	{

		Kallari->IsAttacking = true;
	}
}

//캐스팅중으로 변경
void UKallariAnimInstance::AnimNotify_CastingOn()
{
	if (Kallari)
	{
		Kallari->bIsCasting = true;
	}
}
//캐스팅중 아님
void UKallariAnimInstance::AnimNotify_CastingOff()
{
	if (Kallari)
	{
		Kallari->bIsCasting = false;
	}
}
// 이동불가
void UKallariAnimInstance::AnimNotify_StopMove()
{
	if (Kallari)
	{
		Kallari->StopMoves();
	}
}
// 이동가능
void UKallariAnimInstance::AnimNotify_CanMove()
{
	if (Kallari)
	{
		Kallari->CanMoves();
	}
}




// 데미지 받았을 때 피격 애니메이션이 여러번 재생되지 않도록 텀을 둠
void UKallariAnimInstance::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}


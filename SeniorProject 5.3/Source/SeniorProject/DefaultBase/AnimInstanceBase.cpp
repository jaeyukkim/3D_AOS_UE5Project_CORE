// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceBase.h"

#include "KismetAnimationLibrary.h"


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

		// ������ �ε巯�� ������ȯ
		YawDelta = FMath::FInterpTo(YawDelta,
			(NormalizedDeltaRotator(RotationLastTick, ActorRotation).Yaw / DeltaSeconds) / 7.0,
			DeltaSeconds, 6.0);


		RotationLastTick = ActorRotation;



		Direction = UKismetAnimationLibrary::CalculateDirection(Character->GetVelocity(), ActorRotation);	//������ ����


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

//�޺����� ����
void UAnimInstanceBase::AnimNotify_SaveAttack()
{



}

//�޺����� �ʱ�ȭ
void UAnimInstanceBase::AnimNotify_ResetCombo()
{

}

//�̵��� ������ �� ����������� �̵��ϰ� �־����� ��ġ���� ����


// ���� �� ���ݽ� ������ �����ϴ� ���� ���������� ����
void UAnimInstanceBase::AnimNotify_RightAttack()
{


}

// ���� �� ���ݽ� ������ �����ϴ� �� �� �޼����� ����
void UAnimInstanceBase::AnimNotify_LeftAttack()
{


}

// ������ ó��
void UAnimInstanceBase::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AIMinions/MinionAnimInstance.h"


UMinionAnimInstance::UMinionAnimInstance()
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

void UMinionAnimInstance::NativeInitializeAnimation()
{
	
	Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
		Minion = Cast<AMinions>(Pawn);

	
}

void UMinionAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
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

		// ������ �ε巯�� ������ȯ
		YawDelta = FMath::FInterpTo(YawDelta,
			(NormalizedDeltaRotator(RotationLastTick, ActorRotation).Yaw / DeltaSeconds) / 7.0,
			DeltaSeconds, 6.0);


		RotationLastTick = ActorRotation;



		Direction = CalculateDirection(Minion->GetVelocity(), ActorRotation);	//������ ����


		if (Minion)
		{
			IsInAir = Minion->GetMovementComponent()->IsFalling();

			if (Minion->GetCharacterMovement()->GetCurrentAcceleration().Length() > 0)
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

FRotator UMinionAnimInstance::NormalizedDeltaRotator(FRotator A, FRotator B)
{
	FRotator Delta = A - B;
	Delta.Normalize();
	return Delta;
}

//�޺����� ����
void UMinionAnimInstance::AnimNotify_SaveAttack()
{

		if (Minion != NULL)
			Minion->ComboAttackSave();


}

//�޺����� �ʱ�ȭ
void UMinionAnimInstance::AnimNotify_ResetCombo()
{


		if (Minion != NULL)
			Minion->ResetCombo();
}

//�̵��� ������ �� ����������� �̵��ϰ� �־����� ��ġ���� ����
void UMinionAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}


// ���� �� ���ݽ� ������ �����ϴ� ���� ���������� ����
void UMinionAnimInstance::AnimNotify_RightAttack()
{
	if (Minion)
		Minion->AttackDirectionSetSoket(EAttackDirection::Right); 

}

// ���� �� ���ݽ� ������ �����ϴ� �� �� �޼����� ����
void UMinionAnimInstance::AnimNotify_LeftAttack()
{
	if (Minion)
		Minion->AttackDirectionSetSoket(EAttackDirection::Left);

}

// ������ ó��
void UMinionAnimInstance::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}

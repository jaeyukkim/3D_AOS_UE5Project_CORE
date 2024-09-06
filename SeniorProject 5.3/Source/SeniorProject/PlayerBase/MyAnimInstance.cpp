// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"




UMyAnimInstance::UMyAnimInstance()
{

	bIsNoWep = false;
	bIsCasting = false;
}


void UMyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
		PlayerCharacter = Cast<AMyCharacter>(Pawn);

	if (!IsValid(PlayerCharacter))
		return;
}


void UMyAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}



void UMyAnimInstance::AnimNotify_HideSword()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_Term);
	}
		

	bIsNoWep = true;
}

void UMyAnimInstance::AnimNotify_UnHideSword()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->GetMesh()->UnHideBoneByName(TEXT("weapon_r"));
	}
	

	bIsNoWep = false;
}


void UMyAnimInstance::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}


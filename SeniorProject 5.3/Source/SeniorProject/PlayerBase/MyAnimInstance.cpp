// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"




UMyAnimInstance::UMyAnimInstance()
{

	bIsNoWep = false;

}


void UMyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
}


void UMyAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}

void UMyAnimInstance::AnimNotify_HideSword()
{
	if (AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(TryGetPawnOwner()))
	{
		PlayerCharacter->GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_Term);
	}
		

	bIsNoWep = true;
}

void UMyAnimInstance::AnimNotify_UnHideSword()
{
	if (AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(TryGetPawnOwner()))
	{
		PlayerCharacter->GetMesh()->UnHideBoneByName(TEXT("weapon_r"));
	}
	

	bIsNoWep = false;
}



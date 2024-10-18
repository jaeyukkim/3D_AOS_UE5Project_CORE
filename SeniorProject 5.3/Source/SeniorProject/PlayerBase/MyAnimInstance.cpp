// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"
#include "SeniorProject/Character/Player/KwangPlayer.h"


UMyAnimInstance::UMyAnimInstance()
{
	bActiveWep = true;
}


void UMyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		KwangPlayer = Cast<AKwangPlayer>(Pawn);
		if(KwangPlayer)
			KwangPlayer->Respawned.AddLambda([this](){AnimNotify_UnHideSword();});
	}
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(KwangPlayer == nullptr) return;
	
	bActiveWep = KwangPlayer->bActiveWep;
}


void UMyAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}

void UMyAnimInstance::AnimNotify_HideSword()
{
	if (KwangPlayer)
	{
		KwangPlayer->GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_Term);
	}
		

	bActiveWep = true;
}

void UMyAnimInstance::AnimNotify_UnHideSword()
{
	if (KwangPlayer)
	{
		KwangPlayer->GetMesh()->UnHideBoneByName(TEXT("weapon_r"));
	}
	

	bActiveWep = false;
}



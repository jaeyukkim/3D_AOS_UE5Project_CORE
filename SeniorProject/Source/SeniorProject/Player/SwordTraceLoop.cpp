// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/SwordTraceLoop.h"
#include "SeniorProject/Player/MyCharacter.h"



// 공격시 루프 진행하며 피격범위 그리기

void USwordTraceLoop::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{

	
	Character = Cast<AMyCharacter>(MeshComp->GetOwner());
	


	
}
void USwordTraceLoop::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{

		
		if (Character)
			Character->SwordTrace();

	
	
}

void USwordTraceLoop::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{

		if (Character)
			Character->CanTakeDamage = true;
	
}


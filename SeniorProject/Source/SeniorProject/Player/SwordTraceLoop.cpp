// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/SwordTraceLoop.h"
#include "SeniorProject/Player/MyCharacter.h"



// ���ݽ� ���� �����ϸ� �ǰݹ��� �׸���

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


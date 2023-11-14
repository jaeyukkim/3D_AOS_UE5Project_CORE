// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AIMinions/MinionAttackTrace.h"

#include "SeniorProject/AIMinions/Minions.h"



void UMinionAttackTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	// 몬스터로 캐스팅
	Minion = Cast<AMinions>(MeshComp->GetOwner());
	

}
void UMinionAttackTrace::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{

	//캐스팅 
	if (Minion)
		Minion->MinionSwordTrace();


}

void UMinionAttackTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{


	if (Minion)
		Minion->CanTakeDamage = true;

}
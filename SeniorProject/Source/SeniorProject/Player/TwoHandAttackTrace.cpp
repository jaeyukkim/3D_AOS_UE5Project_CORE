// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/TwoHandAttackTrace.h"
#include "SeniorProject/Player/Kallari.h"


//Kallari 클래스의 공격시 루프를 돌며 공격범위 그림

void UTwoHandAttackTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{


	Kallari = Cast<AKallari>(MeshComp->GetOwner());



}
void UTwoHandAttackTrace::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{


	if (Kallari)
		Kallari->TwoHandTrace();



}

void UTwoHandAttackTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{

	if (Kallari)
		Kallari->CanTakeDamage = true;


}

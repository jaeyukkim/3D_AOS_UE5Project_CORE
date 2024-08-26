// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackTraceLoop.h"
#include "CharacterBase.h"




void UAttackTraceLoop::NotifyBegin(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	


}
void UAttackTraceLoop::NotifyTick(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{

	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);




}

void UAttackTraceLoop::NotifyEnd(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);



}


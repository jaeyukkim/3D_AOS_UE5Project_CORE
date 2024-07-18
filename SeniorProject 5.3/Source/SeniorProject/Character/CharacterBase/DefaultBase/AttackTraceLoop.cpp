// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackTraceLoop.h"
#include "SeniorProject/Character/CharacterBase/DefaultBase/CharacterBase.h"




void UAttackTraceLoop::NotifyBegin(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	Character = Cast<ACharacterBase>(MeshComp->GetOwner());


}
void UAttackTraceLoop::NotifyTick(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{

	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (Character)
		Character->AttackTrace();



}

void UAttackTraceLoop::NotifyEnd(USkeletalMeshComponent* MeshComp, 
	UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (Character)
		Character->CanTakeDamage = true;

}


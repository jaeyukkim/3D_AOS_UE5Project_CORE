// Fill out your copyright notice in the Description page of Project Settings.


#include "Crunch.h"

ACrunch::ACrunch()
{
	SetDefaultSetting();
}

void ACrunch::SetDefaultSetting()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Crunch_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonCrunch/Characters/Heroes/Crunch/Meshes/Crunch'"));
	if (Crunch_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Crunch_Mesh.Object);
	}
	static ConstructorHelpers::FClassFinder<UAnimInstance> Chrunch_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/ChrunchAnim'"));
	if (Chrunch_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Chrunch_Anim.Class);
	}

}

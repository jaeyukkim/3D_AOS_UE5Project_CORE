// Fill out your copyright notice in the Description page of Project Settings.


#include "Melee.h"

AMelee::AMelee()
{
	SetDefaultSetting();
}

void AMelee::SetDefaultSetting()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Melee_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Dusk_Minions/Meshes/Minion_Lane_Melee_Core_Dusk'"));

	if (Melee_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Melee_Mesh.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> Melee_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/MeleeAnim'"));
	if (Melee_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Melee_Anim.Class);
	}

	
	
}

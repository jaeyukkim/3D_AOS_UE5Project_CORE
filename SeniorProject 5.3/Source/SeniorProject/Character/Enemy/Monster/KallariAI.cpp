// Fill out your copyright notice in the Description page of Project Settings.


#include "KallariAI.h"

AKallariAI::AKallariAI()
{
	SetDefaultSetting();
}

void AKallariAI::SetDefaultSetting()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Kallari_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonKallari/Characters/Heroes/Kallari/Meshes/Kallari'"));
	if (Kallari_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Kallari_Mesh.Object);

	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> Kallari_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/KallariAnim'"));
	if (Kallari_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Kallari_Anim.Class);
	}

	GetCharacterMovement()->MaxWalkSpeed = 700.0f;
	
}

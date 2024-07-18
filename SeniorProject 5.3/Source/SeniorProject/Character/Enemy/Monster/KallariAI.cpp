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

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack1(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_A_Montage'"));

	if (Kallari_Attack1.Succeeded())
	{
		AttackMontage[0] = Kallari_Attack1.Object;

	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack2(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_B_Montage'"));

	if (Kallari_Attack2.Succeeded())
	{
		AttackMontage[1] = Kallari_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack3(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_C_Montage'"));

	if (Kallari_Attack3.Succeeded())
	{
		AttackMontage[2] = Kallari_Attack3.Object;
	}

	RightSoketBottom = FName(TEXT("FX_Trail_R01"));
	RightSoketTop = FName(TEXT("FX_Trail_R02"));
	LeftSoketBottom = TEXT("FX_Trail_L_01");
	LeftSoketTop = TEXT("FX_Trail_L_02");

	GetCharacterMovement()->MaxWalkSpeed = 700.0f;
}

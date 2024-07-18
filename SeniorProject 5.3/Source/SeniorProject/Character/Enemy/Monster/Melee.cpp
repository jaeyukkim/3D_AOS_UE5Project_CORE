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


	////////////////////////////////////////// Attack Montage////////////////////////////////////////////////
	///Melee
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack1(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_A_Montage'"));

	if (Melee_Attack1.Succeeded())
	{
		AttackMontage[0] = Melee_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack2(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_B_Montage'"));

	if (Melee_Attack2.Succeeded())
	{
		AttackMontage[1] = Melee_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack3(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_C_Montage'"));

	if (Melee_Attack3.Succeeded())
	{
		AttackMontage[2] = Melee_Attack3.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack4(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_D_Montage'"));

	if (Melee_Attack4.Succeeded())
	{
		AttackMontage[3] = Melee_Attack4.Object;
	}
	RightSoketBottom = TEXT("FX_Trail_02_R");
	RightSoketTop = TEXT("FX_Trail_01_R");

	LeftSoketBottom = TEXT("FX_Trail_02_L");
	LeftSoketTop = TEXT("FX_Trail_01_L");

	
}

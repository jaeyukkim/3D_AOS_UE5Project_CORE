// Fill out your copyright notice in the Description page of Project Settings.


#include "LaneSuper.h"

ALaneSuper::ALaneSuper()
{
	SetDefaultSetting();
}

void ALaneSuper::SetDefaultSetting()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> RaneSuper_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Super_Dawn'"));
	if (RaneSuper_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(RaneSuper_Mesh.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> RaneSuper_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/MinionLaneSuperAnim'"));
	if (RaneSuper_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(RaneSuper_Anim.Class);
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack1(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_A_Montage'"));

	if (Rane_Attack1.Succeeded())
	{
		AttackMontage[0] = Rane_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack2(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_B_Montage'"));

	if (Rane_Attack2.Succeeded())
	{
		AttackMontage[1] = Rane_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack3(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_C_Montage'"));

	if (Rane_Attack3.Succeeded())
	{
		AttackMontage[2] = Rane_Attack3.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack4(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_B_Montage'"));

	if (Rane_Attack4.Succeeded())
	{
		AttackMontage[3] = Rane_Attack4.Object;
	}

	RightSoketBottom = TEXT("FX_Trail_02_R");
	RightSoketTop = TEXT("FX_Trail_01_R");

	LeftSoketBottom = TEXT("FX_Trail_02_L");
	LeftSoketTop = TEXT("FX_Trail_01_L");

}

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


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack1(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_01_Montage'"));

	if (Chrunch_Attack1.Succeeded())
	{
		AttackMontage[0] = Chrunch_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack2(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_02_Montage'"));

	if (Chrunch_Attack2.Succeeded())
	{
		AttackMontage[1] = Chrunch_Attack2.Object;
		AttackMontage[3] = Chrunch_Attack2.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack3(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_03_Montage'"));

	if (Chrunch_Attack3.Succeeded())
	{
		AttackMontage[2] = Chrunch_Attack3.Object;
	}

	RightSoketBottom = FName(TEXT("FX_RocketPunch_r"));
	RightSoketTop = FName(TEXT("FX_handDir_r"));
	LeftSoketBottom = TEXT("FX_RocketPunch_l");
	LeftSoketTop = TEXT("FX_handDir_l");

}

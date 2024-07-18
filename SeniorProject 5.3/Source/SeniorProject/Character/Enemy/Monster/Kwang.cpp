// Fill out your copyright notice in the Description page of Project Settings.


#include "Kwang.h"

AKwang::AKwang()
{
	SetDefaultSetting();
}

void AKwang::SetDefaultSetting()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Kwang_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC'"));
	if (Kwang_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Kwang_Mesh.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> Kwang_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/KwangAI'"));
	if (Kwang_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Kwang_Anim.Class);
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kwang_Attack1(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/PrimaryAttack_A_Slow_Montage'"));

	if (Kwang_Attack1.Succeeded())
	{
		AttackMontage[0] = Kwang_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kwang_Attack2(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/PrimaryAttack_B_Slow_Montage'"));

	if (Kwang_Attack2.Succeeded())
	{
		AttackMontage[1] = Kwang_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kwang_Attack3(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/PrimaryAttack_C_Slow_Montage'"));

	if (Kwang_Attack3.Succeeded())
	{
		AttackMontage[2] = Kwang_Attack3.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kwang_Attack4(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/PrimaryAttack_D_Slow_Montage'"));

	if (Kwang_Attack4.Succeeded())
	{
		AttackMontage[3] = Kwang_Attack4.Object;
	}

	RightSoketBottom = FName(TEXT("FX_weapon_base"));
	RightSoketTop = FName(TEXT("FX_weapon_tip"));

	LeftSoketBottom = TEXT("FX_weapon_base");
	LeftSoketTop = TEXT("FX_weapon_tip");

}

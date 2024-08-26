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

	

}

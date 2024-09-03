// Fill out your copyright notice in the Description page of Project Settings.


#include "LaneSuper.h"

ALaneSuper::ALaneSuper()
{
	SetDefaultSetting();
}

void ALaneSuper::SetDefaultSetting()
{
	

	static ConstructorHelpers::FClassFinder<UAnimInstance> RaneSuper_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/MinionLaneSuperAnim'"));
	if (RaneSuper_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(RaneSuper_Anim.Class);
	}


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> RaneSuper_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Super_Dawn'"));
	if (RaneSuper_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(RaneSuper_Mesh.Object);
	}
	
}

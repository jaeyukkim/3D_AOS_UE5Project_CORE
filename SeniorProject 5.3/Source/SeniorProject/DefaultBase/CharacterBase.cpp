// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CharacterBase.h"
#include "Components/WidgetComponent.h"
#include "MovementComponentBase.h"
#include "SeniorProject/PlayerBase/MyCharacterStatComponent.h"


// Sets default values
ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMovementComponentBase>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	Stat = CreateDefaultSubobject<UMyCharacterStatComponent>(TEXT("Stat"));


	

	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);



	IsAttacking = true;
	SaveAttack = true;
	AttackCount = 0;
	DeadTimer = 5.0f;
}




// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void ACharacterBase::InitAbilityActorInfo()
{
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input



void ACharacterBase::ComboAttackSave()
{
	if (SaveAttack)
	{
		SaveAttack = false;
		Attack();

	}
	OnAttackEnd.Broadcast();
}


void ACharacterBase::ResetCombo()
{
	AttackCount = 0;
	SaveAttack = false;
	IsAttacking = false;
	OnAttackEnd.Broadcast();
}

UAbilitySystemComponent* ACharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}



int32 ACharacterBase::GetExp() const
{
	return Stat->GetDropExp();
}

void ACharacterBase::AttackDirectionSetSoket(EAttackDirection AttackDirection)
{


	if (AttackDirection == EAttackDirection::Right)
	{
		IsRightAttack = true;
	}
	

	else if (AttackDirection == EAttackDirection::Left)
	{
		IsRightAttack = false;
	}

}

void ACharacterBase::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);


}

void ACharacterBase::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);

}


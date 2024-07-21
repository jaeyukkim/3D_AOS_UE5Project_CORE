// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CharacterBase.h"
#include "Components/WidgetComponent.h"
#include "MovementComponentBase.h"
#include "SeniorProject/Character/Player/PlayerBase/MyCharacterStatComponent.h"


// Sets default values
ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMovementComponentBase>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	Stat = CreateDefaultSubobject<UMyCharacterStatComponent>(TEXT("Stat"));


	HpBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));
	HpBarWidget->SetupAttachment(GetMesh());
	HpBarWidget->SetWidgetSpace(EWidgetSpace::Screen);

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HPBAR(TEXT("WidgetBlueprint'/Game/UI/UI_HpBar'"));
	if (UI_HPBAR.Succeeded())
	{
		HpBarWidget->SetWidgetClass(UI_HPBAR.Class);
		HpBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	

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


void ACharacterBase::ActiveHpBar()
{
	if (HpBarWidget && !HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(true);
}

void ACharacterBase::DisabledHpBar()
{
	if (HpBarWidget && HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(false);
}

void ACharacterBase::ControlHpBarVisibility()
{
	if (HpBarWidget)
	{
		ActiveHpBar();
		//이미 타이머가 등록되어 있다면 다시 초기화
		if (GetWorldTimerManager().IsTimerActive(UITimerHandle))
		{
			GetWorldTimerManager().ClearTimer(UITimerHandle);
		}
		//타이머 등록 되어있지 않으면 등록
		else
		{
			GetWorld()->GetTimerManager().SetTimer(UITimerHandle, FTimerDelegate::CreateLambda([this]() ->
				void
				{
					DisabledHpBar();

				}), 8.0f, false);
		}


	}
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


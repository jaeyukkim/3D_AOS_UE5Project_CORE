// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangPlayer.h"

AKwangPlayer::AKwangPlayer()
{
	SetCharacterSetting();
}


void AKwangPlayer::Ability_Q()
{


	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->Q_Ability_NoWep();
		else
			AbilityComponent->AbilityRangeTrace();
	}

}


void AKwangPlayer::Ability_RMB()
{

	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->RMB_NoWep_Ability();

		else
			AbilityComponent->RMB_Ability();
	}
}

void AKwangPlayer::Ability_R()
{


	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->R_Ability_NoWep();

		else
			AbilityComponent->R_Ability();
	}

}

void AKwangPlayer::LSB()
{
	if (bIsCasting)
		return;


	if (!GetBool_IsNoWep() && AbilityComponent->GetIsActiveRangeTrace())
	{

		AbilityComponent->Q_Ability();
		return;

	}



	if (IsAttacking)
		SaveAttack = true;

	else if (IsAttacking == false)
	{
		IsAttacking = true;
		Attack();
	}

}

void AKwangPlayer::SetCharacterSetting()
{

	Tags.Add(TEXT("PLAYER"));
	Tags.Add(TEXT("Kwang"));
	Tags.Add(TEXT("MyCharacterClass"));

	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));




	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Kwang_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC'"));
	if (Kwang_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Kwang_Mesh.Object);

	}




	static ConstructorHelpers::FClassFinder<UAnimInstance> Kwang_Anim(
		TEXT("AnimBlueprint'/Game/BP/Animation/KwangAnim'"));
	if (Kwang_Anim.Succeeded())
	{

		GetMesh()->SetAnimInstanceClass(Kwang_Anim.Class);
	}


	////////////////////////////////////////// Attack Montage////////////////////////////////////////////////
	////////////////////////////////Kwang////////////////////////////////
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




	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kwang_GameStart(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/LevelStart_Montage'"));

	if (Kwang_GameStart.Succeeded())
	{
		StartGameAnim = Kwang_GameStart.Object;
	}


	/*
	auto DefaultSetting = GetDefault<UCharacterAssetSetting>();
	int32 RandIndex = FMath::RandRange(0, DefaultSetting->KwangAssets.Num() - 1);
	CharacterAssetToLoad = DefaultSetting->KwangAssets[RandIndex];

	auto MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if (nullptr != MyGameInstance)
	{
		AssetStreamingHandle = MyGameInstance->StreamableManager.RequestAsyncLoad(
			CharacterAssetToLoad, FStreamableDelegate::CreateUObject
			(this, &AMyCharacter::OnAssetLoadCompleted));
	}
	*/


	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;


	AttackWidthArea = 15.0f;
	AttackRange = 300.0f;
	IsRightAttack = true;
	RightSoketBottom = FName(TEXT("FX_weapon_base"));
	RightSoketTop = FName(TEXT("FX_weapon_tip"));
	LeftSoketBottom = FName(TEXT("FX_weapon_base"));
	LeftSoketTop = FName(TEXT("FX_weapon_tip"));


	DeadTimer = 5.0f;
	bIsCasting = false;
	IsAttacking = false;
	SaveAttack = true;
	AttackCount = 0;

	
}
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"
#include "SeniorProject/Character/Player/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/Character/Player/PlayerBase/MyCharacterStatComponent.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/Character/CharacterBase/UI/MyCharacterWidget.h"
#include "SeniorProject/Character/Player/PlayerBase/AbilityComponent.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerController.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerState.h"
#include "MyAssetSetting/Public/CharacterAssetSetting.h"
#include "SeniorProject/GameSetting/MyGameInstance.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/Character/CharacterBase/UI/MyHUDWidget.h"

// Sets default values
AMyCharacter::AMyCharacter()
{

	PrimaryActorTick.bCanEverTick = false;

	AttackMontage.Init(nullptr, 4);


	////////////////////////


	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.


	/////////////////////////////카메라 설정//////////////////////////
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));



	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);



	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 320.0f;
	SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = true;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 115.0f));



	///////////////////////////sound////////////////////////////////////

	static ConstructorHelpers::FObjectFinder<USoundCue> FOOT_STEP_CUE
	(
		TEXT("SoundCue'/Game/Sound/Kwang_FootStep_Que'")
	);


	if (FOOT_STEP_CUE.Succeeded())
	{
		FootStepAudioCue = FOOT_STEP_CUE.Object;
	}

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponents"));


	AudioComponent->bAutoActivate = false;
	AudioComponent->SetupAttachment(GetMesh());




	///////////////////////////sound////////////////////////////////////

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));

}

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<AMyPlayerController>(GetController());
	if (PlayerController == nullptr) Destroy();


	UpdateCharacterStat();




	auto CharacterWidget = Cast<UMyCharacterWidget>(HpBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->SetCharacterStat(Stat);
	}


	SetCharacterState(ECharacterState::LOADING);



}
void AMyCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	
	AMyGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AMyGameModeBase>();
	if (GameMode)
	{
		GameMode->OnMobDeleted.Broadcast();
	}


	GetWorldTimerManager().ClearTimer(UITimerHandle);
	GetWorldTimerManager().ClearTimer(DamagedTimerHandle);
	GetWorldTimerManager().ClearTimer(DeadTimerHandle);
	

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AMyCharacter::PlayFootSound()
{


	if (AudioComponent != nullptr)
	{
		AudioComponent->SetSound(FootStepAudioCue);
		AudioComponent->Play();
	}

}


void AMyCharacter::OnAssetLoadCompleted()
{
	USkeletalMesh* AssetLoaded = Cast<USkeletalMesh>(AssetStreamingHandle->GetLoadedAsset());
	AssetStreamingHandle.Reset();
	if (nullptr != AssetLoaded)
	{
		GetMesh()->SetSkeletalMesh(AssetLoaded);
	}
}

void AMyCharacter::Attack()
{


	switch (AttackCount)
	{
	case 0:

		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 1;
		AttackDamageCount = 0;
		break;

	case 1:

		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 2;
		AttackDamageCount = 1;

		break;

	case 2:

		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 3;
		AttackDamageCount = 2;

		break;

	case 3:

		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 0;
		AttackDamageCount = 3;

		break;

	}


}


bool AMyCharacter::GetBool_IsNoWep()
{
	auto KwangAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (KwangAnim != nullptr)
	{
		return KwangAnim->bIsNoWep;
	}


	return false;
}




void AMyCharacter::SetCharacterState(ECharacterState NewState)
{


	CurrentState = NewState;

	switch (CurrentState)
	{
	case ECharacterState::LOADING:
	{
		SetActorHiddenInGame(false);

		DisableInput(PlayerController);
		
		PlayAnimMontage(StartGameAnim, 1.0f);


		GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
			SetCharacterState(ECharacterState::READY);
			}), 5.0f, false);


		break;
	}

	case ECharacterState::READY:
	{

		EnableInput(PlayerController);

		Stat->OnHPIsZero.AddLambda([this]() -> void
			{
				SetCharacterState(ECharacterState::DEAD);

			});

		break;

	}

	case ECharacterState::DEAD:
	{
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
		HpBarWidget->SetHiddenInGame(true);
		SetCanBeDamaged(false);
		Camera->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	
		DisableInput(PlayerController);
	


		auto CharacterAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
		if (::IsValid(CharacterAnim))
			CharacterAnim->SetDead();


		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void {

				PlayerController->RestartLevel();
				
			}), DeadTimer, false);

		break;
	}


	}
}






void AMyCharacter::AttackTrace()
{

	WaeponBottomPoint = GetMesh()->GetSocketLocation(RightSoketBottom);
	WaeponTopPoint = GetMesh()->GetSocketLocation(RightSoketTop);
	FVector WeaponMiddlePoint = (WaeponBottomPoint + WaeponTopPoint) / 2;

	FRotator3d SwordRotator = (WaeponTopPoint - WaeponBottomPoint).Rotation();




	FCollisionQueryParams Params(NAME_None, false, this);
	FHitResult  HitResult;

	bool bHit = GetWorld()->SweepSingleByChannel(HitResult, WaeponBottomPoint, WaeponTopPoint,
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(AttackWidthArea), Params);




	if (bHit)
	{

		if (::IsValid(HitResult.GetActor()))
		{

			FDamageEvent DamageEvent;
			if ( HitResult.GetActor())
			{
				HitResult.GetActor()->TakeDamage(Stat->GetAttackDMG() +
					(AttackDamageCount * 0.1f * Stat->GetAttackDMG()), DamageEvent, GetController(), this);
				CanTakeDamage = false;
			}


		}

	}

}



float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);


	

	Stat->SetDamage(DamageAmount);



	return FinalDamage;

}



void AMyCharacter::UpdateCharacterStat()
{
	
	auto MyPlayerState = Cast<AMyPlayerState>(GetPlayerState());
	Stat->SetLevel(MyPlayerState->GetCharacterLevel());


	PlayerController->GetHUDWidget()->BindCharacterStat(Stat);

	
}

void AMyCharacter::Hurt(AActor* DamageCauser)
{

	if (DamageCauser)
	{
		float EnemyDirection = GetDotProductTo(DamageCauser);

		auto anim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());

		if (anim)
		{
			anim->SetDamaged();

		}

	}

}



void AMyCharacter::CanMoves()
{
	EnableInput(PlayerController);
}

void AMyCharacter::StopMoves()
{

	DisableInput(PlayerController);
}


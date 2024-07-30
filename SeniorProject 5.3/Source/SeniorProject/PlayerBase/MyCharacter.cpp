// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"

#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/GameSetting/MyGameInstance.h"

#include "SeniorProject/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/DefaultBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

#include "SeniorProject/PlayerBase/AbilityComponent.h"

#include "SeniorProject/UI/DefaultHUD.h"

#include "AbilitySystemComponent.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"



// Sets default values
AMyCharacter::AMyCharacter()
{

	PrimaryActorTick.bCanEverTick = true;
	
	AttackMontage.Init(nullptr, 4);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	SpringArm->TargetArmLength = 320.0f;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 115.0f));
	SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));\
	Camera->SetupAttachment(SpringArm);

	
	


	ThisActor = nullptr;
	LastActor = nullptr;

	

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));


}

void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Ability Info ���� �ʱ�ȭ
	InitAbilityActorInfo();
	
}

void AMyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Ability Info Ŭ���̾�Ʈ �ʱ�ȭ
	InitAbilityActorInfo();
	
}

void AMyCharacter::InitAbilityActorInfo()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	checkf(PlayerStateBase, TEXT("MyPlayerState Class uninitialized"));
	PlayerStateBase->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerStateBase, this);
	Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent())->AbilityActorInfoSet();
	 
	AbilitySystemComponent = PlayerStateBase->GetAbilitySystemComponent();
	AttributeSet = PlayerStateBase->GetAttributeSet();


	checkf(AttributeSet, TEXT("PlayerStateBase Class uninitialized"));

	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		if (ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD()))
		{
			DefaultHUD->InitOverlay(MyPlayerController, PlayerStateBase, AbilitySystemComponent, AttributeSet);
		}
	}
	InitializeDefaultAttributes();
}


void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<AMyPlayerController>(GetController());
	if (PlayerController != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		
		if(Subsystem)
			Subsystem->AddMappingContext(PlayerContext, 0);
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

	AimTrace();
	


}
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::Jump);
	EnhancedInputComponent->BindAction(LSB_Action, ETriggerEvent::Triggered, this, &AMyCharacter::LSB);
	EnhancedInputComponent->BindAction(Q_Action, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_Q);
	EnhancedInputComponent->BindAction(RMB_Ability, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_RMB);
	EnhancedInputComponent->BindAction(R_Ability, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_R);



}

void AMyCharacter::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector FowardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	
	AddMovementInput(FowardDirection, InputAxisVector.Y);
	AddMovementInput(RightDirection, InputAxisVector.X);
	

}

void AMyCharacter::Look(const FInputActionValue& InputActionValue)
{

	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();


	AddControllerPitchInput(InputAxisVector.Y);
	AddControllerYawInput(InputAxisVector.X);
	

}


void AMyCharacter::PlayFootSound()
{


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

int32 AMyCharacter::GetPlayerLevel()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetPlayerLevel();
	
}

void AMyCharacter::AimTrace()
{
	FHitResult  HitResult;


	FVector CameraLocation = Camera->GetComponentLocation();
	FVector CameraFowardVector = Camera->GetComponentRotation().Vector();
	FCollisionQueryParams Params(NAME_None, false, this);

	//Chrunch
	//bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraFowardVector * 4000,
		//ECollisionChannel::ECC_Visibility);

	bool bHit = GetWorld()->SweepSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraFowardVector * 4000,
		FQuat::Identity, ECollisionChannel::ECC_Visibility, FCollisionShape::MakeSphere(AttackWidthArea), Params);

	// ��Ÿ� ���� ���̹� �� ���� ���ٸ�
	if (!HitResult.bBlockingHit)
		return;



	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();

	/**
	 * ���� Ʈ���̽��� ���� ������:
	 *  A. LastActor is null && ThisActor is null
	 *		- �ƹ��͵� ���� ����
	 *	B. LastActor is null && ThisActor is valid
	 *		- Highlight ThisActor
	 *	C. LastActor is valid && ThisActor is null
	 *		- UnHighlight LastActor
	 *	D. Both actors are valid, but LastActor != ThisActor
	 *		- UnHighlight LastActor,  Highlight ThisActor
	 *	E. Both actors are valid, and are the same actor
	 *		- �ƹ��͵� ���� ����
	 */


	if (LastActor == nullptr)
	{

		if (ThisActor != nullptr)
		{
			// Case B
			ThisActor->HighlightActor();
		

		}
		else
		{
			// Case A - both are null, �ƹ��͵� ���� ����
		}
	}
	else // LastActor is valid
	{
		if (ThisActor == nullptr)
		{
			// Case C
			LastActor->UnHighlightActor();
		}
		else // both actors are valid
		{
			if (LastActor != ThisActor)
			{
				// Case D
				LastActor->UnHighlightActor();
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E - �ƹ��͵� ���� ����
			}
		}
	}

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

		
		break;
		
	}

	case ECharacterState::DEAD:
	{
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
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

	
	/*
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
	*/
}



float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);


	

	//Stat->SetDamage(DamageAmount);



	return FinalDamage;

}



void AMyCharacter::UpdateCharacterStat()
{
	
	
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


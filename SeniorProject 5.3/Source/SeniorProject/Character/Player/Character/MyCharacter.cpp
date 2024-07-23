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
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "SeniorProject/Character/CharacterBase/UI/DefaultHUD.h"
#include "InputMappingContext.h"


// Sets default values
AMyCharacter::AMyCharacter()
{

	PrimaryActorTick.bCanEverTick = true;
	
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

	ThisActor = nullptr;
	LastActor = nullptr;
	
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> MAPPING_CONTEXT(
		TEXT("/Script/EnhancedInput.InputMappingContext'/Game/BP/Input/InputAction/IMC_PlayerContext.IMC_PlayerContext'"));

	if (MAPPING_CONTEXT.Succeeded())
	{
		PlayerContext = MAPPING_CONTEXT.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> MOVEACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_Move.IA_Move'"));

	if (MOVEACTION.Succeeded())
	{
		MoveAction = MOVEACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> LOOKACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_Look.IA_Look'"));

	if (LOOKACTION.Succeeded())
	{
		LookAction = LOOKACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> JUMPACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_Jump.IA_Jump'"));

	if (JUMPACTION.Succeeded())
	{
		JumpAction = JUMPACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> LSBACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_LSB.IA_LSB'"));

	if (LSBACTION.Succeeded())
	{
		LSB_Action = LSBACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> ACTION_RMB(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_AbilityRMB.IA_AbilityRMB'"));

	if (ACTION_RMB.Succeeded())
	{
		RMB_Ability = ACTION_RMB.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> ACTION_Q(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_AbilityQ.IA_AbilityQ'"));

	if (ACTION_Q.Succeeded())
	{
		Q_Action = ACTION_Q.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> ACTION_R(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_AbilityR.IA_AbilityR'"));

	if (ACTION_R.Succeeded())
	{
		R_Ability = ACTION_R.Object;
	}

	

	

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));


	


}

void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Ability Info 서버 초기화
	InitAbilityActorInfo();
	
}

void AMyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Ability Info 클라이언트 초기화
	InitAbilityActorInfo();

}

void AMyCharacter::InitAbilityActorInfo()
{
	AMyPlayerState* MyPlayerState = GetPlayerState<AMyPlayerState>();
	check(MyPlayerState);
	MyPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(MyPlayerState, this);
	AbilitySystemComponent = MyPlayerState->GetAbilitySystemComponent();
	AttributeSet = MyPlayerState->GetAttributeSet();

	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		if (ADefaultHUD* AuraHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD()))
		{
			AuraHUD->InitOverlay(MyPlayerController, MyPlayerState, AbilitySystemComponent, AttributeSet);
		}
	}
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

	// 사거리 내에 에이밍 된 적이 없다면
	if (!HitResult.bBlockingHit)
		return;



	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();

	/**
	 * 라인 트레이스에 따라 설정됨:
	 *  A. LastActor is null && ThisActor is null
	 *		- 아무것도 하지 않음
	 *	B. LastActor is null && ThisActor is valid
	 *		- Highlight ThisActor
	 *	C. LastActor is valid && ThisActor is null
	 *		- UnHighlight LastActor
	 *	D. Both actors are valid, but LastActor != ThisActor
	 *		- UnHighlight LastActor,  Highlight ThisActor
	 *	E. Both actors are valid, and are the same actor
	 *		- 아무것도 하지 않음
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
			// Case A - both are null, 아무것도 하지 않음
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
				// Case E - 아무것도 하지 않음
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


	//PlayerController->GetHUDWidget()->BindCharacterStat(Stat);

	
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


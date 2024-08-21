// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"

#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/DefaultBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

#include "SeniorProject/UI/DefaultHUD.h"

#include "AbilitySystemComponent.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/UI/OverlayWidgetController.h"


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
	AddCharacterAbility();
	UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent);

	
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


}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsLocallyControlled())
	{
		AimTrace();
	}
	


}
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::Jump);
	EnhancedInputComponent->BindAction(LSB_Action, ETriggerEvent::Triggered, this, &AMyCharacter::LSB);
//	EnhancedInputComponent->BindAction(Q_Action, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_Q);
//	EnhancedInputComponent->BindAction(RMB_Ability, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_RMB);
//	EnhancedInputComponent->BindAction(R_Ability, ETriggerEvent::Triggered, this, &AMyCharacter::Ability_R);
	EnhancedInputComponent->BindAction(ShowAdditionalAttribute, ETriggerEvent::Triggered, this, &AMyCharacter::ShowAdditionalAttributeMenu);



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

void AMyCharacter::ShowAdditionalAttributeMenu(const FInputActionValue& InputActionValue)
{
	bool bIsPressed = InputActionValue.Get<bool>();
	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD());
		UOverlayWidgetController* OverlayWidgetController = DefaultHUD->GetOverlayWidgetController(FWidgetControllerParams());

		if (bIsPressed)
		{
			// C 키가 눌렸을 때
			OverlayWidgetController->OnAdditionalAttributeMenu.Broadcast(true);
		}
		else
		{
			// C 키가 떼어졌을 때
			OverlayWidgetController->OnAdditionalAttributeMenu.Broadcast(false);

		}
	}

	
}


void AMyCharacter::PlayFootSound()
{


}

void AMyCharacter::GetAimHitResult(float AbilityDistance, FHitResult& HitResult)
{
	
	FVector CameraLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentLocation();
	FVector TraceEndLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentRotation().Vector()*AbilityDistance;
		
	TraceEndLocation += CameraLocation;

	//Chrunch
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, TraceEndLocation,
	 ECollisionChannel::ECC_Visibility);
		
	if (!bHit)
	{
		FVector DownwardTraceEnd = TraceEndLocation + FVector(0.0f, 0.0f, -10000.0f); // 수직 아래로 추가 트레이스
		bool bFloorHit = GetWorld()->LineTraceSingleByChannel(HitResult, TraceEndLocation, DownwardTraceEnd, ECC_Visibility);

	}


}





void AMyCharacter::Attack_Implementation()
{
	UAnimMontage* MontageToPlay = nullptr;

	switch (AttackCount)
	{
	case 0:
		MontageToPlay = AttackMontage[0];
		AttackCount = 1;
		AttackDamageCount = 0;
		break;

	case 1:
		MontageToPlay = AttackMontage[1];
		AttackCount = 2;
		AttackDamageCount = 1;
		break;

	case 2:
		MontageToPlay = AttackMontage[2];
		AttackCount = 3;
		AttackDamageCount = 2;
		break;

	case 3:
		MontageToPlay = AttackMontage[3];
		AttackCount = 0;
		AttackDamageCount = 3;
		break;
	}

	if (MontageToPlay)
	{
		// 모든 클라이언트에서 몽타주를 실행하도록 멀티캐스트 호출
		MulticastPlayAttackMontage(MontageToPlay, AttackCount);
	}
	/*
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
*/

}
bool AMyCharacter::Attack_Validate()
{
	return true;
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
	FVector CameraForwardVector = Camera->GetComponentRotation().Vector();
	//FCollisionQueryParams Params(NAME_None, false, this);
	

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraForwardVector * 2000,
		 ECollisionChannel::ECC_GameTraceChannel2);

	// 레이 그리기
	FColor LineColor = bHit ? FColor::Green : FColor::Red; // 맞추면 초록색, 아니면 빨간색

	
		

	if (!HitResult.bBlockingHit)
	{
		if(LastActor != nullptr)
		{
			LastActor->UnHighlightActor();
			LastActor = nullptr;
		}
		if(ThisActor != nullptr)
		{
			ThisActor->UnHighlightActor();
			ThisActor = nullptr;
		}

	};

	
	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();



	if (LastActor == nullptr)
	{

		if (ThisActor != nullptr && ThisActor != this)
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
				
				if(ThisActor != this)
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E - �ƹ��͵� ���� ����
			}
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

	
}

void AMyCharacter::Die()
{
	Super::Die();
}

void AMyCharacter::MulticastPlayAttackMontage_Implementation(UAnimMontage* Montage, int32 MontageIndex)
{
	if (Montage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		GetMesh()->GetAnimInstance()->Montage_Play(Montage, 1.0f);
	}
}


float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	

	return FinalDamage;

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

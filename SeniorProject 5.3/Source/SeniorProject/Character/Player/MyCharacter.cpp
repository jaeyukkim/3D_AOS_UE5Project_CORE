// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"

#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

#include "SeniorProject/UI/HUD/DefaultHUD.h"

#include "AbilitySystemComponent.h"

#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Data/LevelUpInfo.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
	Tags.Add(TEXT("Player"));
	
	PrimaryActorTick.bCanEverTick = true;

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

	LevelUpParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("LevelUpParticleComponent");
	LevelUpParticleComponent->SetupAttachment(GetRootComponent());
	LevelUpParticleComponent->bAutoActivate = false;

	HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarWidget->SetupAttachment(GetRootComponent());
	HealthBarWidget->SetWidgetSpace(EWidgetSpace::World);
	HealthBarWidget->SetDrawSize(FVector2D(250.0f, 50.0f));
	HealthBarWidget->SetCullDistance(4500.f);
	

	
	ThisActor = nullptr;
	LastActor = nullptr;
	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Character"));
}

void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Ability Info ���� �ʱ�ȭ
	InitAbilityActorInfo();
	AddCharacterAbility();
	UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent, CharacterClass);
	
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
	SetTeamNameByPlayerState_Implementation(PlayerStateBase);
	InitializeHealthBarWidget();
	
}

void AMyCharacter::InitializeHealthBarWidget()
{
	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBarWidget->GetUserWidgetObject()))
	{
		OverlayUserWidget->SetWidgetController(this);
	}

	if (const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetManaAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaChanged.Broadcast(Data.NewValue);
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxManaAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxManaChanged.Broadcast(Data.NewValue);
			}
		);

		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
		);

		OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
		OnHealthChanged.Broadcast(AS->GetHealth());
		
		OnMaxManaChanged.Broadcast(AS->GetMaxMana());
		OnManaChanged.Broadcast(AS->GetMana());
	}

	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		PlayerStateBase->OnLevelChangedDelegate.AddLambda([this](int32 SpellPoints)
		{
			OnLevelChanged.Broadcast(SpellPoints);
		});
		
		OnLevelChanged.Broadcast(PlayerStateBase->GetPlayerLevel());
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


void AMyCharacter::GetAimHitResult(float AbilityDistance, FHitResult& HitResult)
{

	if(!IsValid(PlayerController)) return;
	
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

void AMyCharacter::Die_Implementation()
{
	Super::Die_Implementation();
	
}


void AMyCharacter::SetTeamNameByPlayerState_Implementation(APlayerState* PS)
{

	if(HasAuthority())
	{
		checkf(PS, TEXT("PlayerState Not Initialize"));


		FString UniqueIdStr = PS->GetUniqueId()->ToString();

		// Unique ID 문자열의 마지막 자리를 기반으로 팀을 나누는 로직 (예: 마지막 문자의 아스키 코드값 사용)
		int32 LastChar = UniqueIdStr[UniqueIdStr.Len() - 1];
		
		if (LastChar % 2 == 0)
		{
			TeamName = FGameplayTagsBase::Get().GameRule_TeamName_RedTeam;
		}
		else
		{
			TeamName = FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam;
		}
	}
	
}

void AMyCharacter::AddToXP_Implementation(int32 InXP)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToXP(InXP);
}

void AMyCharacter::LevelUp_Implementation()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	MulticastLevelUpParticles();

	if(HasAuthority())
		ApplyEffectToSelf(LevelUpReward, 1.f);
	
}

void AMyCharacter::MulticastLevelUpParticles_Implementation() const
{
	if(IsValid(LevelUpParticleComponent))
		LevelUpParticleComponent->Activate(true);
	
}


int32 AMyCharacter::GetXP_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetXP();
}

int32 AMyCharacter::FindLevelForXP_Implementation(int32 InXP) const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->LevelUpInfo->FindLevelForXP(InXP);
}


void AMyCharacter::AddToPlayerLevel_Implementation(int32 InPlayerLevel)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToLevel(InPlayerLevel);
}


void AMyCharacter::AddToSpellPoints_Implementation(int32 InSpellPoints)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToSpellPoints(InSpellPoints);
}

int32 AMyCharacter::GetSpellPoints_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetSpellPoints();
}


int32 AMyCharacter::GetPlayerLevel_Implementation()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetPlayerLevel();


}

void AMyCharacter::GetLevelUpReward()
{
	ApplyEffectToSelf(LevelUpReward, 1.f);
}


void AMyCharacter::AimTrace()
{
	FHitResult HitResult;


	FVector CameraLocation = Camera->GetComponentLocation();
	FVector CameraForwardVector = Camera->GetComponentRotation().Vector();
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraForwardVector * 2000,
		 ECollisionChannel::ECC_GameTraceChannel2);
	

	/* 아무것도 감지되지 않았을 때 초기화 */
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
		/* Case A : 현재 감지 된 캐릭터가 자신이 아니라 적일때 HighLight */
		if (ThisActor != nullptr && ThisActor != this && !UBlueprintFunctionLibraryBase::IsFriends(this,Cast<AActor>(ThisActor.GetObject())))
		{
			ThisActor->HighlightActor();
		}
		else
		{
			/* Case B : 현재 감지 된 캐릭터, 이전에 감지했던 캐릭터가 없을 때 아무것도 하지 않음 */
		}
	}
	else // LastActor is valid
	{
		if (ThisActor == nullptr)
		{
			/* Case C : 이전에 감지 된 캐릭터가 있고 지금 감지중인 캐릭터가 없을 때 */
			LastActor->UnHighlightActor();
		}
		else 
		{
			if (LastActor != ThisActor)
			{
				/* Case D : 이전에 감지 된 캐릭터가 있고 현재 감지 대상이 바뀌었을때 이전 대상 UnHighlightActor 현재 대상은 적일 경우에만 HighLight */
				LastActor->UnHighlightActor();
				
				if(ThisActor != this && !UBlueprintFunctionLibraryBase::IsFriends(this,Cast<AActor>(ThisActor.GetObject())))
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E :
			}
		}
	}

}

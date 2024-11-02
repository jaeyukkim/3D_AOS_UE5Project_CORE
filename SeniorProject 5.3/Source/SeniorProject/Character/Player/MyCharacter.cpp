// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"
#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

#include "SeniorProject/UI/HUD/DefaultHUD.h"

#include "AbilitySystemComponent.h"
#include "EngineUtils.h"

#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Data/LevelUpInfo.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/Actor/Decal/AttackRangeDecal.h"
#include "SeniorProject/Actor/PlayerStart/TeamPlayerStart.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "SeniorProject/UI/HUD/ReturnToMainMenu.h"

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

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));\
	Camera->SetupAttachment(SpringArm);

	LevelUpParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("LevelUpParticleComponent");
	LevelUpParticleComponent->SetupAttachment(GetRootComponent());
	LevelUpParticleComponent->bAutoActivate = false;

	HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarWidget->SetupAttachment(GetRootComponent());
	HealthBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	HealthBarWidget->SetDrawSize(FVector2D(250.0f, 50.0f));
	
	

	
	ThisActor = nullptr;
	LastActor = nullptr;
	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Character"));
}


void AMyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyCharacter, OwnedItems);
	
}

void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	
	
	// Ability Info ���� �ʱ�ȭ
	InitAbilityActorInfo();
	AddCharacterAbility();
	UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent, CharacterClass);
	bAbilityIsGiven = true;
	
	
}

void AMyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Ability Info Ŭ���̾�Ʈ �ʱ�ȭ
	InitAbilityActorInfo();
	
}

void AMyCharacter::InitPlayerInfo()
{
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	
	if(CoreGameState == nullptr || PlayerStateBase == nullptr) return;

	
	CoreGameState->ServerRegisterPlayerToGameState(PlayerStateBase, CharacterClass);

	GetWorldTimerManager().ClearTimer(InitPlayerInfoHandle);
	
}

void AMyCharacter::ServerLeaveGame_Implementation()
{
	SetMovementEnable(true);
	

	GetWorldTimerManager().SetTimer(PlayerLeftTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			UnPossessed();
			OnLeftGame.Broadcast();
			Destroy();

		}), PlayerLeftTime, false);
	
}


void AMyCharacter::MulticastInitAbilityActorInfo_Implementation()
{
	if(!HasAuthority())
	{
		InitAbilityActorInfo();
	}
}


/* 캐릭터를 움직이지 못하게 하는 함수
 *  리콜, 스킬 등 다양한 곳에 활용
 */

void AMyCharacter::SetMovementEnable(const bool bIsMovementEnable)
{

	APlayerController* PC = Cast<APlayerController>(GetController());
	if(PC == nullptr) return;
	
	if (bIsMovementEnable) 
	{
		EnableInput(PC);  // 전체 입력 활성화
	}
	else 
	{
		DisableInput(PC);  // 전체 입력 비활성화
	}
	
}


void AMyCharacter::BroadcastInitialValues()
{
	
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	if(PlayerStateBase == nullptr) return;

	const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet);
	checkf(AS, TEXT("AttibuteSet Class uninitialized"));

	OnPlayerBarMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	OnPlayerBarHealthChanged.Broadcast(AS->GetHealth());
	OnPlayerBarMaxManaChanged.Broadcast(AS->GetMaxMana());
	OnPlayerBarManaChanged.Broadcast(AS->GetMana());
	OnPlayerBarLevelChanged.Broadcast(PlayerStateBase->GetPlayerLevel());
	PlayerStateBase->BroadcastPlayerStat();
}


void AMyCharacter::ShowMagicCircle()
{
	if (!IsValid(MagicCircle))
	{
		MagicCircle = GetWorld()->SpawnActor<AAttackRangeDecal>(MagicCircleClass);
	}
}

void AMyCharacter::HideMagicCircle()
{
	if (IsValid(MagicCircle))
	{
		MagicCircle->Destroy();
	}
}

void AMyCharacter::InitAbilityActorInfo()
{

	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	checkf(PlayerStateBase, TEXT("MyPlayerState Class uninitialized"));
	
	PlayerStateBase->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerStateBase, this);
	Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent())->AbilityActorInfoSet();
	 
	AbilitySystemComponent = PlayerStateBase->GetAbilitySystemComponent();
	AttributeSet = PlayerStateBase->GetAttributeSet();
	OnAscRegistered.Broadcast(AbilitySystemComponent);
	
	AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Debuff_Type_Stun,
		EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AMyCharacter::Stunned);
	
	checkf(AttributeSet, TEXT("PlayerStateBase Class uninitialized"));

	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		MyPlayerController->PlayerState = PlayerStateBase;
		if (ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD()))
		{
			DefaultHUD->InitOverlay(MyPlayerController, PlayerStateBase, AbilitySystemComponent, AttributeSet);
		}
	}
	
	InitializeDefaultAttributes();
	GetWorld()->GetTimerManager().SetTimer(InitPlayerInfoHandle, this, &AMyCharacter::InitPlayerInfo, 5.f, true);
	GetWorld()->GetTimerManager().SetTimer(InitPlayerHealthBarHandle, this, &AMyCharacter::InitializeHealthBarWidget, 5.f, false);
	GetMesh()->SetSimulatePhysics(false);
}

void AMyCharacter::InitializeHealthBarWidget()
{
	GetWorldTimerManager().ClearTimer(InitPlayerHealthBarHandle);
	
	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBarWidget->GetUserWidgetObject()))
	{
		OverlayUserWidget->SetWidgetController(this);
	}
	
	if(IsLocallyControlled())
		HealthBarWidget->SetVisibility(false);
	
	
	const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet);
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	
	
	if(AS == nullptr || PlayerStateBase == nullptr) return;
	
		
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetHealthAttribute()).AddLambda(
	[this](const FOnAttributeChangeData& Data)
	{
		OnPlayerBarHealthChanged.Broadcast(Data.NewValue);

	});
	
 	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxHealthAttribute()).AddLambda(
		[this, AS](const FOnAttributeChangeData& Data)
		{
			OnPlayerBarMaxHealthChanged.Broadcast(AS->GetMaxHealth());

		}
	);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetManaAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnPlayerBarManaChanged.Broadcast(Data.NewValue);

		}
	);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxManaAttribute()).AddLambda(
		[this, AS](const FOnAttributeChangeData& Data)
		{
			OnPlayerBarMaxManaChanged.Broadcast(AS->GetMaxMana());
		}
	);

	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMovementSpeedAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			if(HasAuthority())
			{
				GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
				MulticastSetMaxWalkSpeed(Data.NewValue);
			}
		}
	);

	PlayerStateBase->OnLevelChangedDelegate.AddLambda([this](int32 Level)
	{
		OnPlayerBarLevelChanged.Broadcast(Level);
	});
		
		
	
	
	BroadcastInitialValues();

}


void AMyCharacter::MulticastReSpawn_Implementation()
{
	bDead = false;
	
	GetWorldTimerManager().ClearTimer(InitReSpawnHandle);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Character, ECR_Block);
	SetMovementEnable(true);

	
	
	if(IsLocallyControlled())
	{
		if(AMyPlayerController* MyPlayerController =  Cast<AMyPlayerController>(GetController()))
		{
			ServerReSpawn();
			SetMovementEnable(true);
			PlayerController->SetViewTargetWithBlend(this, 1.f, EViewTargetBlendFunction::VTBlend_EaseInOut, 2.f);
		}
	}
	
}



void AMyCharacter::ServerReSpawn_Implementation()
{
	if(!HasAuthority()) return;

	

	
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	if (PlayerStateBase == nullptr) return;

	if (UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
		AS->SetHealth(AS->GetMaxHealth());
		AS->SetMana(AS->GetMaxMana());
	}

	
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if (PlayerStateBase->GetTeamName() != TagsBase.GameRule_TeamName_NONE)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, ATeamPlayerStart::StaticClass(), PlayerStarts);
		TArray<ATeamPlayerStart*> TeamPlayerStarts;

		for (auto Start : PlayerStarts)
		{
			ATeamPlayerStart* TeamStart = Cast<ATeamPlayerStart>(Start);
			if (TeamStart && TeamStart->TeamName == PlayerStateBase->GetTeamName())
			{
				TeamPlayerStarts.Add(TeamStart);
			}
		}
		if (TeamPlayerStarts.Num() > 0)
		{
			ATeamPlayerStart* ChosenPlayerStart = TeamPlayerStarts[FMath::RandRange(0, TeamPlayerStarts.Num() - 1)];
			SetActorLocationAndRotation(
				ChosenPlayerStart->GetActorLocation(),
				ChosenPlayerStart->GetActorRotation());
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
	

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

//	if(IsLocallyControlled())
//	{
//		AimTrace();
//	}
	

}
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::Jump);
	EnhancedInputComponent->BindAction(ShowAdditionalAttribute, ETriggerEvent::Triggered, this, &AMyCharacter::ShowAdditionalAttributeMenu);
	EnhancedInputComponent->BindAction(Spectate, ETriggerEvent::Triggered, this, &AMyCharacter::ClientSpectate_Implementation);
	EnhancedInputComponent->BindAction(MouseCursorOp, ETriggerEvent::Triggered, this, &AMyCharacter::SetMouseCursor);

}

void AMyCharacter::SetMouseCursor(const FInputActionValue& InputActionValue)
{
	if(!PlayerController) return;

	
	if(PlayerController->bShowMouseCursor)
	{
		FInputModeGameOnly InputModeData;
		PlayerController->SetInputMode(InputModeData);
		PlayerController->SetShowMouseCursor(false);
	}
	else
	{
		FInputModeGameAndUI InputModeData;
		PlayerController->SetInputMode(InputModeData);
		PlayerController->SetShowMouseCursor(true);
	
	}
}

void AMyCharacter::Move(const FInputActionValue& InputActionValue)
{
	if(bDead) return;
	
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
	if(bDead || !PlayerController || PlayerController->bShowMouseCursor) return;
	
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	
	

	FRotator SpringArmRotation = SpringArm->GetComponentRotation();
	FRotator ControlRotation = GetActorRotation();
	double NewPitch = FMath::Clamp(SpringArmRotation.Pitch - InputAxisVector.Y, -80.0f, 80.0f);
	const FRotator Rotator = FRotator(NewPitch, ControlRotation.Yaw, ControlRotation.Roll);

	SpringArm->SetWorldRotation(Rotator);
	AddControllerPitchInput(InputAxisVector.Y);
	AddControllerYawInput(InputAxisVector.X);

}


void AMyCharacter::ShowAdditionalAttributeMenu(const FInputActionValue& InputActionValue)
{
	
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	FString name = PlayerStateBase->GetPlayerName();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, name);
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




void AMyCharacter::Jump()
{
	if(!bDead)
		Super::Jump();
}



void AMyCharacter::GetAimHitResult_Implementation(float AbilityDistance, FHitResult& HitResult)
{
	if(!IsValid(PlayerController)) return;
	
	FVector CameraLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentLocation();
	FVector TraceEndLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentRotation().Vector()*AbilityDistance;
		
	TraceEndLocation += CameraLocation;


	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, TraceEndLocation,
	ECC_RangeTrace);
		
	if (!bHit)
	{
		FVector DownwardTraceEnd = TraceEndLocation + FVector(0.0f, 0.0f, -10000.0f); // 수직 아래로 추가 트레이스
		GetWorld()->LineTraceSingleByChannel(HitResult, TraceEndLocation, DownwardTraceEnd, ECC_RangeTrace);

	}

}


void AMyCharacter::GetStraightAimHitResult_Implementation(float AttackDistance, FHitResult& HitResult)
{
	

	//따로 지정하지 않았으면 기본공격 범위
	if(AttackDistance <= 0.f)
		AttackDistance = AttackRange;

	FVector CameraLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentLocation();
	FVector TraceEndLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentRotation().Vector() * AttackRange;
	TraceEndLocation += CameraLocation;

	// 충돌 쿼리 파라미터 생성 및 자기 자신 무시 설정
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);  // 자신의 캐릭터를 무시


	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, TraceEndLocation, ECC_OnlyOverlapCharacter, QueryParams);
		
	// 디버그 라인 그리기: 트레이스 라인이 시각적으로 표시되도록
	FColor LineColor = bHit ? FColor::Red : FColor::Green;
	DrawDebugLine(GetWorld(), CameraLocation, TraceEndLocation, LineColor, false, 10.0f, 0, 2.0f);

	// 히트된 경우 히트 지점에 디버그 구 그리기
	if (bHit)
	{
		float SphereRadius = 10.0f;  // 구의 반지름
		DrawDebugSphere(GetWorld(), HitResult.Location, SphereRadius, 12, FColor::Blue, false, 10.0f);
	}
}

void AMyCharacter::Die_Implementation()
{
	Super::Die_Implementation();

	MulticastPlayerDie();

	
	
	//죽었을 때 상대 팀 점수 상승
	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		float ReSpawnTime = PlayerStateBase->GetPlayerLevel() * 2.f + 5.f;
		GetWorld()->GetTimerManager().SetTimer(InitReSpawnHandle, this, &AMyCharacter::MulticastReSpawn, ReSpawnTime, false);
	}
}




void AMyCharacter::MulticastPlayerDie_Implementation()
{
	if(!IsLocallyControlled()) return;
	

	SetMovementEnable(false);
	
	// 관전 캐릭터 추가
	if(PlayerController != nullptr)
	{
		SpectatedCharacters.Reset();
		for (TActorIterator<AMyCharacter> It(GetWorld()); It; ++It)
		{
			AMyCharacter* OtherCharacter = *It;
			PlayerController->bAutoManageActiveCameraTarget = false;
			// 본인은 무시하고 다른 캐릭터를 추가
			if (OtherCharacter != this)
			{
				SpectatedCharacters.AddUnique(OtherCharacter);
			}
		}
	}
	

}


FGameplayTag AMyCharacter::GetTeamName_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	
	if(PlayerStateBase == nullptr) return FGameplayTagsBase::Get().GameRule_TeamName_NONE;

	
	return PlayerStateBase->GetTeamName();
	
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

	
	
}

void AMyCharacter::AddToItem_Implementation(const FItemInformation& InOwnedItem)
{
	OwnedItems.Add(InOwnedItem);

}

bool AMyCharacter::DeleteItem_Implementation(FGameplayTag ItemInputTag)
{
	
	
	// 배열에서 해당 태그를 가진 아이템을 모두 삭제
	int32 RemovedCount = OwnedItems.RemoveAll([&](const FItemInformation& Info)
	{
		return Info.InputTag.MatchesTag(ItemInputTag);
	});

	// 삭제된 항목이 있으면 true 반환
	return RemovedCount > 0;
}

void AMyCharacter::SortingItem_Implementation()
{
	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent());

		for(FItemInformation& OwnedItem : OwnedItems)
		{
			FGameplayTag PrevInputTag = OwnedItem.InputTag;
			FGameplayTag NextInputTag = GetEmptyItemSlot_Implementation();

			OwnedItem.InputTag = NextInputTag;
			ASCBase->ChangeGrantedTagToEffect(PrevInputTag, NextInputTag, OwnedItem.ItemEffect);
		}
		
	}
}

FGameplayTag AMyCharacter::GetEmptyItemSlot_Implementation()
{
	
	// 게임플레이 태그 데이터베이스 가져오기
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
    
	// OwnedItems 배열에서 사용 중인 InputTag들을 수집합니다.
	TSet<FGameplayTag> UsedTags;
	for (const FItemInformation& Item : OwnedItems)
	{
		if (Item.InputTag.IsValid())
		{
			UsedTags.Add(Item.InputTag);
		}
	}

	// 사용되지 않은 태그를 찾아 반환합니다.
	for (const FGameplayTag& InputTag : GameplayTags.ItemInputTags)
	{
		if (!UsedTags.Contains(InputTag))
		{
			return InputTag; // 사용되지 않은 첫 번째 태그 반환
		}
	}

	// 사용 가능한 태그가 없을 경우 NONE 태그 반환
	return GameplayTags.Input_NONE;
}

TArray<FItemInformation> AMyCharacter::GetAllItem_Implementation()
{
	return OwnedItems;
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

int32 AMyCharacter::GetGold_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetGold();
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

	if(HasAuthority())
	{
		for(int i = 0 ; i<InPlayerLevel ; i++)
		{
			ApplyEffectToSelf(LevelUpReward, 1.f);
		}
	}
	
	
}


void AMyCharacter::AddToSpellPoints_Implementation(int32 InSpellPoints)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToSpellPoints(InSpellPoints);
}

void AMyCharacter::AddToGold_Implementation(int32 InGold)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToGold(InGold);
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

bool AMyCharacter::GetIsInShop_Implementation()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetIsInShop();
}

void AMyCharacter::SetIsInShop_Implementation(bool InbIsInShop)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->SetIsInShop(InbIsInShop);
}

UAnimMontage* AMyCharacter::GetRecallMontage_Implementation()
{
	return RecallAnim;
}



void AMyCharacter::GetLevelUpReward()
{
	ApplyEffectToSelf(LevelUpReward, 1.f);
}




void AMyCharacter::Stunned(const FGameplayTag CallbackTag, int32 NewCount)
{
	if(AMyPlayerController* MyPlayerController =  Cast<AMyPlayerController>(GetController()))
	{
		if(NewCount > 0)
		{
			SetMovementEnable(false);
			bIsStunned = true;
		}
		else
		{
			SetMovementEnable(true);
			bIsStunned = false;
		}
	}
	
}


void AMyCharacter::AimTrace()
{
	FHitResult HitResult;


	FVector CameraLocation = Camera->GetComponentLocation();
	FVector CameraForwardVector = Camera->GetComponentRotation().Vector();
	
	GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraForwardVector * 2000,
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

void AMyCharacter::ClientSpectate_Implementation()
{
	if(!bDead || !IsLocallyControlled()) return;

	int32 MaxSpectateIdx = SpectatedCharacters.Num()-1;
	
	if (SpectatedCharacters.IsEmpty()) return; // 관전 대상이 없을 때 종료
	SpectateIdx = SpectateIdx % SpectatedCharacters.Num();

	TObjectPtr<AMyCharacter> TargetCharacter = SpectatedCharacters[SpectateIdx];
	if (IsValid(TargetCharacter) && TargetCharacter->SpringArm)
	{
		// SpringArm 설정
		TargetCharacter->SpringArm->bEnableCameraLag = true;
		TargetCharacter->SpringArm->bEnableCameraRotationLag = true;
		TargetCharacter->SpringArm->CameraRotationLagSpeed = 20.f;
		TargetCharacter->SpringArm->CameraLagSpeed = 15.f;
		TargetCharacter->SpringArm->TargetArmLength = 600.f;

		// 카메라 뷰 전환
		PlayerController->SetViewTargetWithBlend(TargetCharacter, 0.5f, EViewTargetBlendFunction::VTBlend_Linear, 2.f);
        
		// 다음 인덱스로 이동
		SpectateIdx++;
	}
	
}

void AMyCharacter::MulticastEndGame_Implementation(const FGameplayTag& DefeatedTeam)
{
	if(!IsLocallyControlled() || PlayerController == nullptr) return;
	
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	
	TObjectPtr<AActor> Nexus;
	
	SpectatedCharacters.Reset();
	for (TActorIterator<ATurret> It(GetWorld()); It; ++It)
	{
		ATurret* Turret = *It;
		PlayerController->bAutoManageActiveCameraTarget = false;

		if(Turret->Implements<UGameRuleInterface>())
		{
			FGameplayTag TurretLevelTag = IGameRuleInterface::Execute_GetTurretLevelTag(Turret);
			FGameplayTag TurretTeamTag = IGameRuleInterface::Execute_GetTeamName(Turret);
			if(TurretLevelTag.MatchesTagExact(TagsBase.GameRule_Turret_Nexus) && TurretTeamTag.MatchesTagExact(DefeatedTeam))
			{
				Nexus = Turret;
				break;
			}
		}
	}

	if(Nexus != nullptr)
	{
		PlayerController->SetViewTargetWithBlend(Nexus, 1.5f, EViewTargetBlendFunction::VTBlend_Linear, 2.f);

		
		if (UReturnToMainMenu* EndGameWidget = CreateWidget<UReturnToMainMenu>(PlayerController, EndGameWidgetClass))
		{
			if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
			{
				EndGameWidget->MenuSetup();
				EndGameWidget->AddToViewport();
				EndGameWidget->CreateEndGameWidget(DefeatedTeam.MatchesTagExact(PlayerStateBase->GetTeamName()));

			}
			
		}
	}
}
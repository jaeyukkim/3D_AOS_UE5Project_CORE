// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyAnimInstance.h"
#include "SeniorProject/AISetting/KwangAiController.h"
#include "MyCharacterStatComponent.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/GameSetting/MyCharacterWidget.h"
#include "AbilityComponent.h"
#include "MyPlayerController.h"
#include "MyPlayerState.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
	AttackMontage.Init(nullptr, 4);


	////////////////////////


 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	
	
	

	//////////////////////////// UI ///////////////////////////////////////////////////

	HpBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));
	HpBarWidget->SetupAttachment(GetMesh());
	HpBarWidget->SetWidgetSpace(EWidgetSpace::Screen);

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HPBAR(TEXT("WidgetBlueprint'/Game/UI/UI_HpBar'"));
	if (UI_HPBAR.Succeeded())
	{
		HpBarWidget->SetWidgetClass(UI_HPBAR.Class);
		HpBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	

	

	////////////////////////character stat//////////////////////////////

	CharacterStat = CreateDefaultSubobject<UMyCharacterStatComponent>(TEXT("CHARACTERSTAT"));
	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));





	////////////////캐릭터 이동부분/////////////////////

	bUseControllerRotationYaw = true;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	

	
	AIControllerClass = AKwangAiController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	
	


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Kwang_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC'"));
	if (Kwang_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Kwang_Mesh.Object);
		CharacterMesh = Kwang_Mesh.Object;

	}




	

	static ConstructorHelpers::FClassFinder<UAnimInstance> Kwang_Anim(
		TEXT("AnimBlueprint'/Game/BP/KwangAnim'"));
	if (Kwang_Anim.Succeeded())
	{
		CharacterAnimation = Kwang_Anim.Class;
		GetMesh()->SetAnimInstanceClass(CharacterAnimation);
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


	/////////////////////////////////////Chrunch/////////////////////////////////////////////////

	/*
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack1(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_01_Montage'"));

	if (Chrunch_Attack1.Succeeded())
	{
		ChrunchAttackMontageSet[0] = Chrunch_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack2(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_02_Montage'"));

	if (Chrunch_Attack2.Succeeded())
	{
		ChrunchAttackMontageSet[1] = Chrunch_Attack2.Object;
		ChrunchAttackMontageSet[3] = Chrunch_Attack2.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_Attack3(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/Ability_Combo_03_Montage'"));

	if (Chrunch_Attack3.Succeeded())
	{
		ChrunchAttackMontageSet[2] = Chrunch_Attack3.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Chrunch_GameStart(
		TEXT("AnimMontage'/Game/ParagonCrunch/Characters/Heroes/Crunch/Animations/LevelStart_Montage'"));

	if (Chrunch_GameStart.Succeeded())
	{
		StartGameAnim[1] = Chrunch_GameStart.Object;
	}

	*/
	///////////////////////////////////////////////////////////Kallari/////////////////////////////////////////////////


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


	DeadTimer = 5.0f;
	bIsCasting = false;
	IsAttacking = false;
	SaveAttack = true;
	AttackCount = 0;


}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();


	SetCharacterMode();

	

	bIsPlayer = IsPlayerControlled();
	if (bIsPlayer)
	{
		PlayerController = Cast<AMyPlayerController>(GetController());
		if (PlayerController == nullptr) return;

		SetControlMode(EControlMode::PLAYER);

	}


	else
	{
		AIController = Cast<AKwangAiController>(GetController());
		SetControlMode(EControlMode::AI);
		if (AIController == nullptr) return;
	}



	auto CharacterWidget = Cast<UMyCharacterWidget>(HpBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->SetCharacterStat(CharacterStat);
	}


	SetCharacterMode();
	SetCharacterState(ECharacterState::LOADING);


	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMyCharacter::LeftRight);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMyCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::Turn);
	
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMyCharacter::Jump);

	
	PlayerInputComponent->BindAction(TEXT("LSB"), EInputEvent::IE_Pressed, this, &AMyCharacter::LSB);
	
	PlayerInputComponent->BindAction(TEXT("AbilityQ"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_Q);
	PlayerInputComponent->BindAction(TEXT("AbilityRMB"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_RMB);
	PlayerInputComponent->BindAction(TEXT("AbilityR"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_R);

}




void AMyCharacter::UpDown(float Value)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), Value);
}

void AMyCharacter::LeftRight(float Value)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), Value);
	
}

void AMyCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void AMyCharacter::Turn(float Value)
{
	
	AddControllerYawInput(Value);
}



void AMyCharacter::LSB()
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


void AMyCharacter::PlayFootSound()
{
	UE_LOG(LogTemp, Warning, TEXT("FOOTSTEP"));

	if (AudioComponent != nullptr)
	{
		AudioComponent->SetSound(FootStepAudioCue);
		AudioComponent->Play();
	}
	
}

void AMyCharacter::ComboAttackSave()
{
	if (SaveAttack)
	{
		SaveAttack = false;
		Attack();
		
	}
	OnAttackEnd.Broadcast();
}


void AMyCharacter::ResetCombo()
{
	AttackCount = 0;
	SaveAttack = false;
	IsAttacking = false;
	OnAttackEnd.Broadcast();
}


void AMyCharacter::Attack()
{


	switch (AttackCount)
	{
	case 0:
		UE_LOG(LogTemp, Warning, TEXT("ATTACK1"));
		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 1;
		AttackDamageCount = 0;
		break;

	case 1:
		UE_LOG(LogTemp, Warning, TEXT("ATTACK2"));
		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 2;
		AttackDamageCount = 1;

		break;

	case 2:
		UE_LOG(LogTemp, Warning, TEXT("ATTACK3"));
		PlayAnimMontage(AttackMontage[AttackCount], 1.0f);
		AttackCount = 3;
		AttackDamageCount = 2;

		break;

	case 3:
		UE_LOG(LogTemp, Warning, TEXT("ATTACK4"));
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



void AMyCharacter::SetControlMode(EControlMode option)
{
	if (option == EControlMode::PLAYER)
	{
		Tags.Empty();
		Tags.Add(TEXT("PLAYER"));
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
		GetCharacterMovement()->MaxWalkSpeed = 590.0f;
	}
	else if (option == EControlMode::AI)
	{
		Tags.Add(TEXT("ENEMY"));
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
		GetCharacterMovement()->bRequestedMoveUseAcceleration = false;
	}
	Tags.Add(TEXT("MyCharacterClass"));
}


void AMyCharacter::SetCharacterMode()
{

	
		AttackWidthArea = 15.0f;
		IsRightAttack = true;
		RightSoketBottom = FName(TEXT("FX_weapon_base"));
		RightSoketTop = FName(TEXT("FX_weapon_tip"));



		HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
		
		if (bIsPlayer)
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;


		Tags.Add(TEXT("Kwang"));


}


void AMyCharacter::SetCharacterState(ECharacterState NewState)
{
	//if (CurrentState != NewState) return;
	

	
	CurrentState = NewState;

	switch (CurrentState)
	{
		case ECharacterState::LOADING:
		{
			SetActorHiddenInGame(false);
			HpBarWidget->SetHiddenInGame(true);

			if (bIsPlayer)
			{
				DisableInput(PlayerController);
				auto MyPlayerState = Cast<AMyPlayerState>(GetPlayerState());
				CharacterStat->SetLevel(MyPlayerState->GetCharacterLevel());
			}
				
		

			PlayAnimMontage(StartGameAnim, 1.0f);
		

			GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
				SetCharacterState(ECharacterState::READY);
				}), 5.0f ,false);


			break;
		}

		case ECharacterState::READY:
		{
			HpBarWidget->SetHiddenInGame(false);

			if (bIsPlayer)
				EnableInput(PlayerController);
			else
				AIController->RunAI();


			CharacterStat->OnHPIsZero.AddLambda([this]() -> void
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

			if (bIsPlayer)
				DisableInput(PlayerController);
			else
				AIController->StopAI();

			UE_LOG(LogTemp, Warning, TEXT("HP IS ZERO"));
			auto KwangAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
			if (::IsValid(KwangAnim))
				KwangAnim->SetDead();
			

			GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() ->
				void {

					if (bIsPlayer)
						PlayerController->RestartLevel();
					else
						Destroy();

				}), DeadTimer, false);



			break;
		}


	}
}
	





void AMyCharacter::SwordTrace()
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
			if (bIsPlayer && HitResult.GetActor()->ActorHasTag("ENEMY"))
			{
				HitResult.GetActor()->TakeDamage(CharacterStat->GetAttackDMG() +
					(AttackDamageCount * 0.1f * CharacterStat->GetAttackDMG()), DamageEvent, GetController(), this);
				CanTakeDamage = false;
			}

			else if (CanTakeDamage)
			{
				if (!bIsPlayer && HitResult.GetActor()->ActorHasTag("PLAYER"))
				{
					HitResult.GetActor()->TakeDamage(CharacterStat->GetAttackDMG() +
						(AttackDamageCount * 0.1f * CharacterStat->GetAttackDMG()), DamageEvent, GetController(), this);
					CanTakeDamage = false;
				}

			}


		}

	}
	
}



float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	UE_LOG(LogTemp, Warning, TEXT("Actor : %s   took Damage : %f"), *GetName(), FinalDamage);
	



	


	if(DamageCauser)
		Hurt(DamageCauser);

	if (CanBeDamaged() && !bIsPlayer)
	{
		CharacterStat->SetDamage(DamageAmount);
		SetCanBeDamaged(false);
		GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void 
			{
				SetCanBeDamaged(true);
				
					
			}), 0.2f, false);

	}
		

	else if(bIsPlayer)
		CharacterStat->SetDamage(DamageAmount);
	


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







void AMyCharacter::CanMoves()
{
	EnableInput(PlayerController);
}

void AMyCharacter::StopMoves()
{
	
	DisableInput(PlayerController);
}







void AMyCharacter::Ability_Q()
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


void AMyCharacter::Ability_RMB()
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

void AMyCharacter::Ability_R()
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


// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/Kallari.h"
#include "KallariAnimInstance.h"
#include "SeniorProject/AISetting/KwangAiController.h"
#include "MyCharacterStatComponent.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/GameSetting/MyCharacterWidget.h"
#include "MyPlayerController.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

// Sets default values
AKallari::AKallari()
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


	//////////////////// collision////////////////////////////////////
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));

	////////////////캐릭터 이동부분/////////////////////

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);


	//폰이 AI에 의해 제어될 때 사용할 기본 클래스입니다.
	AIControllerClass = AKwangAiController::StaticClass();
	//AI 폰이 AI 컨트롤러에 의해 자동으로 소유되는지 여부를 지정합니다.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	////////////////////////////////////////////////.매시 로드/////////////////////////////////////////////////




	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Kallari_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonKallari/Characters/Heroes/Kallari/Meshes/Kallari'"));
	if (Kallari_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Kallari_Mesh.Object);
		CharacterMesh = Kallari_Mesh.Object;

	}

	//GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);




	static ConstructorHelpers::FClassFinder<UAnimInstance> Kallari_Anim(
		TEXT("AnimBlueprint'/Game/BP/KallariAnim'"));
	if (Kallari_Anim.Succeeded())
	{
		CharacterAnimation = Kallari_Anim.Class;
		GetMesh()->SetAnimInstanceClass(CharacterAnimation);
	}




	///////////////////////////////////////////////////////////Kallari/////////////////////////////////////////////////


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack1(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_A_Montage'"));

	if (Kallari_Attack1.Succeeded())
	{
		AttackMontage[0] = Kallari_Attack1.Object;

	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack2(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_B_Montage'"));

	if (Kallari_Attack2.Succeeded())
	{
		AttackMontage[1] = Kallari_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_Attack3(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/Attack_Melee_C_Montage'"));

	if (Kallari_Attack3.Succeeded())
	{
		AttackMontage[2] = Kallari_Attack3.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> Kallari_GameStart(
		TEXT("AnimMontage'/Game/ParagonKallari/Characters/Heroes/Kallari/Animations/LevelStart_Montage'"));

	if (Kallari_GameStart.Succeeded())
	{
		StartGameAnim = Kallari_GameStart.Object;
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	if (nullptr != CharacterMesh && nullptr != CharacterAnimation)
	{
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		GetMesh()->SetAnimInstanceClass(CharacterAnimation);

	}
	

	bIsCasting = false;	//캐스팅중인가
	IsAttacking = false;	//공격중인가
	SaveAttack = true;	//콤보공격중인가
	AttackCount = 0;


}

// Called when the game starts or when spawned
void AKallari::BeginPlay()
{
	Super::BeginPlay();






	bIsPlayer = IsPlayerControlled();
	if (bIsPlayer)
	{
		PlayerController = Cast<AMyPlayerController>(GetController());
		if (PlayerController == nullptr) return;

		SetControlMode(EControlMode::PLAYER);
		ActiveHpBar();
	}


	else
	{
		AIController = Cast<AKwangAiController>(GetController());
		SetControlMode(EControlMode::AI);
		DisabledHpBar();
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

void AKallari::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AMyGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AMyGameModeBase>();
	if (GameMode)
	{
		GameMode->OnMobDeleted.Broadcast();
	}


	GetWorldTimerManager().ClearTimer(KallariUITimerHandle);
	GetWorldTimerManager().ClearTimer(DamagedTimerHandle);
	GetWorldTimerManager().ClearTimer(DeadTimerHandle);


}

// Called every frame
void AKallari::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AKallari::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AKallari::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AKallari::LeftRight);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AKallari::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AKallari::Turn);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AKallari::Jump);


	PlayerInputComponent->BindAction(TEXT("LSB"), EInputEvent::IE_Pressed, this, &AKallari::LSB);

	//PlayerInputComponent->BindAction(TEXT("AbilityQ"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_Q);
	//PlayerInputComponent->BindAction(TEXT("AbilityRMB"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_RMB);
	//PlayerInputComponent->BindAction(TEXT("AbilityR"), EInputEvent::IE_Pressed, this, &AMyCharacter::Ability_R);

}




void AKallari::UpDown(float Value)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), Value);
}

void AKallari::LeftRight(float Value)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), Value);

}

void AKallari::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void AKallari::Turn(float Value)
{

	AddControllerYawInput(Value);
}



void AKallari::LSB()
{
	if (bIsCasting)
		return;



	if (IsAttacking)
		SaveAttack = true;

	else if (IsAttacking == false)
	{
		IsAttacking = true;
		Attack();
	}







}

void AKallari::ComboAttackSave()
{
	if (SaveAttack)
	{
		SaveAttack = false;
		Attack();

	}
	OnAttackEnd.Broadcast();
}


void AKallari::ResetCombo()
{
	AttackCount = 0;
	SaveAttack = false;
	IsAttacking = false;
	OnAttackEnd.Broadcast();
}


void AKallari::Attack()
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
		AttackCount = 0;
		AttackDamageCount = 2;

		break;


	}

}

void AKallari::AttackDirectionSetSoket(EAttackDirection AttackDirection)
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



void AKallari::SetControlMode(EControlMode option)
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
		GetCharacterMovement()->bRequestedMoveUseAcceleration = true;
	
	}
	Tags.Add(TEXT("KallariClass"));
}


void AKallari::SetCharacterMode()
{

	
		Tags.Add(TEXT("Kallari"));


		
		RightSoketBottom = FName(TEXT("FX_Trail_R01"));
		RightSoketTop = FName(TEXT("FX_Trail_R02"));
		LeftSoketBottom = TEXT("FX_Trail_L_01");
		LeftSoketTop = TEXT("FX_Trail_L_02");
		HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));


		if (bIsPlayer)
			GetCharacterMovement()->MaxWalkSpeed = Speed; //이동속도


}

void AKallari::ActiveHpBar()
{
	if (HpBarWidget && !HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(true);
}

void AKallari::DisabledHpBar()
{
	if (HpBarWidget && HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(false);
}

void AKallari::ControlHpBarVisibility()
{
	if (HpBarWidget)
	{
		ActiveHpBar();
		//이미 타이머가 등록되어 있다면 다시 초기화
		if (GetWorldTimerManager().IsTimerActive(KallariUITimerHandle))
		{
			GetWorldTimerManager().ClearTimer(KallariUITimerHandle);
		}
		//타이머 등록 되어있지 않으면 등록
		else
		{
			GetWorld()->GetTimerManager().SetTimer(KallariUITimerHandle, FTimerDelegate::CreateLambda([this]() ->
				void
				{
					DisabledHpBar();

				}), 8.0f, false);
		}


	}
}

void AKallari::SetCharacterState(ECharacterState NewState)
{
	//if (CurrentState != NewState) return;



	CurrentState = NewState;

	switch (CurrentState)
	{


		// 게임 시작직후 로딩상태
		case ECharacterState::LOADING:
		{
			SetActorHiddenInGame(false);

			if (bIsPlayer)
				DisableInput(PlayerController);


			PlayAnimMontage(StartGameAnim, 1.0f);

			//시작 후 ready 상태로 변환
			GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
				SetCharacterState(ECharacterState::READY);
				}), 5.0f, false);


			break;
		}



		// 게임 스타트 이동, 공격 가능
		case ECharacterState::READY:
		{
			

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


		// 사망처리
		case ECharacterState::DEAD:
		{
			SetCanBeDamaged(false);
			SetActorEnableCollision(false);
			GetMesh()->SetHiddenInGame(false);
			HpBarWidget->SetHiddenInGame(true);

			if (bIsPlayer)
				DisableInput(PlayerController);
			else
				AIController->StopAI();

	
			auto KallariAnim = Cast<UKallariAnimInstance>(GetMesh()->GetAnimInstance());
			if (::IsValid(KallariAnim))
				KallariAnim->SetDead();


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



//공격시 피격판정
void AKallari::TwoHandTrace()
{

	if (IsRightAttack)
	{
		WaeponBottomPoint = GetMesh()->GetSocketLocation(RightSoketBottom);
		WaeponTopPoint = GetMesh()->GetSocketLocation(RightSoketTop);
	}

	else
	{
		WaeponBottomPoint = GetMesh()->GetSocketLocation(LeftSoketBottom);
		WaeponTopPoint = GetMesh()->GetSocketLocation(LeftSoketTop);
	}


	FCollisionQueryParams Params(NAME_None, false, this);
	FHitResult  HitResult;


	//Chrunch
	bool bHit = GetWorld()->SweepSingleByChannel(HitResult, WaeponBottomPoint, WaeponTopPoint,
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(AttackWidthArea), Params);



	if (bHit)
	{

		if (::IsValid(HitResult.GetActor()))
		{
			FDamageEvent DamageEvent;

			// 데미지 전달부분
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

// 데미지 받는부분
float AKallari::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);








	

	//트레이스동안 여러번 때리지 않기 위해 타격가능 텀 두기
	if (CanBeDamaged() && !bIsPlayer)
	{
	
		Hurt(DamageCauser);

		CharacterStat->SetDamage(DamageAmount);
		SetCanBeDamaged(false);
		ControlHpBarVisibility();


		GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				SetCanBeDamaged(true);


			}), 0.2f, false);

		if (CurrentState == ECharacterState::DEAD)
		{
			if (EventInstigator->IsPlayerController())
			{
				auto MyPlayerController = Cast<AMyPlayerController>(EventInstigator);
				if (MyPlayerController)
					MyPlayerController->NPCKill(EventInstigator, GetExp());
				UE_LOG(LogTemp, Warning, TEXT("DROP EXP : %d"), GetExp());
			}
		}

		
	}


	else if (bIsPlayer)
		CharacterStat->SetDamage(DamageAmount);

	

	return FinalDamage;

}

int32 AKallari::GetExp() const
{
	return CharacterStat->GetDropExp();
}

//피격시 데미지처리와 애니메이션 진행
void AKallari::Hurt(AActor* DamageCauser)
{

	if (DamageCauser)
	{
		float EnemyDirection = GetDotProductTo(DamageCauser);

		auto KallariAnim = Cast<UKallariAnimInstance>(GetMesh()->GetAnimInstance());

		if (KallariAnim)
		{
			KallariAnim->SetDamaged();


		}

	}

}

void AKallari::CanMoves()
{
	EnableInput(PlayerController);
}

void AKallari::StopMoves()
{

	DisableInput(PlayerController);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AIMinions/Minions.h"
#include "SeniorProject/Player/MyCharacterStatComponent.h"
#include "SeniorProject/GameSetting/MyCharacterWidget.h"
#include "Components/WidgetComponent.h"
#include "MinionAIController.h"
#include "MinionAnimInstance.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

// Sets default values
AMinions::AMinions()
{

	//////////////////////////////////////////////
	/*
		mini

	*/

	MinionMesh.Init(nullptr, Num_Of_Kind_Minion);
	MinionAnimation.Init(nullptr, Num_Of_Kind_Minion);

	MeleeAttackMontageSet.Init(nullptr, MaxAttackCombo);
	ChrunchAttackMontageSet.Init(nullptr, MaxAttackCombo);
	RaneSuperAttackMontageSet.Init(nullptr, MaxAttackCombo);

	AttackMontage.Init(nullptr, MaxAttackCombo);


	RandomMinionType = 0;
	DeadTimer = 5.0f;
	AttackRange = 200.0f;

	////////////////////////


	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/////////////////////////////카메라 설정//////////////////////////






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

	MinionStat = CreateDefaultSubobject<UMyCharacterStatComponent>(TEXT("MinionStat"));
	

	//////////////////// collision////////////////////////////////////
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	////////////////캐릭터 이동부분/////////////////////


	//폰이 AI에 의해 제어될 때 사용할 기본 클래스입니다.
	AIControllerClass = AMinionAIController::StaticClass();
	//AI 폰이 AI 컨트롤러에 의해 자동으로 소유되는지 여부를 지정합니다.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	////////////////////////////////////////////////.매시 로드/////////////////////////////////////////////////


	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Melee_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Dusk_Minions/Meshes/Minion_Lane_Melee_Core_Dusk'"));
	


	if (Melee_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Melee_Mesh.Object);
		MinionMesh[MinionType::Melee] = Melee_Mesh.Object;

	}
	

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> RaneSuper_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Super_Dawn'"));
	if (RaneSuper_Mesh.Succeeded())
	{

		MinionMesh[MinionType::RaneSuper] = RaneSuper_Mesh.Object;
	}
	

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Crunch_Mesh(
		TEXT("SkeletalMesh'/Game/ParagonCrunch/Characters/Heroes/Crunch/Meshes/Crunch'"));
	if (Crunch_Mesh.Succeeded())
	{

		MinionMesh[MinionType::Chrunch] = Crunch_Mesh.Object;
	}


	//GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);



	static ConstructorHelpers::FClassFinder<UAnimInstance> Melee_Anim(
		TEXT("AnimBlueprint'/Game/BP/MeleeAnim'"));
	if (Melee_Anim.Succeeded())
	{
		MinionAnimation[MinionType::Melee] = Melee_Anim.Class;
		GetMesh()->SetAnimInstanceClass(Melee_Anim.Class);
	}

	
	static ConstructorHelpers::FClassFinder<UAnimInstance> RaneSuper_Anim(
		TEXT("AnimBlueprint'/Game/BP/MinionLaneSuperAnim'"));
	if (RaneSuper_Anim.Succeeded())
	{
		MinionAnimation[MinionType::RaneSuper] = RaneSuper_Anim.Class;
	}
	
	static ConstructorHelpers::FClassFinder<UAnimInstance> Chrunch_Anim(
		TEXT("AnimBlueprint'/Game/BP/ChrunchAnim'"));
	if (Chrunch_Anim.Succeeded())
	{
		MinionAnimation[MinionType::Chrunch] = Chrunch_Anim.Class;
	}



	////////////////////////////////////////// Attack Montage////////////////////////////////////////////////
	///Melee
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack1(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_A_Montage'"));

	if (Melee_Attack1.Succeeded())
	{
		MeleeAttackMontageSet[0] = Melee_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack2(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_B_Montage'"));

	if (Melee_Attack2.Succeeded())
	{
		MeleeAttackMontageSet[1] = Melee_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack3(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_C_Montage'"));

	if (Melee_Attack3.Succeeded())
	{
		MeleeAttackMontageSet[2] = Melee_Attack3.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Melee_Attack4(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Melee/Attack_D_Montage'"));

	if (Melee_Attack4.Succeeded())
	{
		MeleeAttackMontageSet[3] = Melee_Attack4.Object;
	}


	
	///RaneSuper

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack1(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_A_Montage'"));

	if (Rane_Attack1.Succeeded())
	{
		RaneSuperAttackMontageSet[0] = Rane_Attack1.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack2(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_B_Montage'"));

	if (Rane_Attack2.Succeeded())
	{
		RaneSuperAttackMontageSet[1] = Rane_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack3(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_C_Montage'"));

	if (Rane_Attack3.Succeeded())
	{
		RaneSuperAttackMontageSet[2] = Rane_Attack3.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Rane_Attack4(
		TEXT("AnimMontage'/Game/ParagonMinions/Characters/Minions/Down_Minions/Animations/Super/Attack_D_Montage'"));

	if (Rane_Attack4.Succeeded())
	{
		RaneSuperAttackMontageSet[3] = Rane_Attack4.Object;
	}


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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



	////////////////////////////////////////////////////////////////////////////////////////////////

	IsAttacking = true;
	SaveAttack = true;
	AttackCount = 0;



	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);




	MinionStat->SetMinionLevel(1);
}

void AMinions::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	AMyGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AMyGameModeBase>();
	if (GameMode)
	{
		GameMode->OnMobDeleted.Broadcast();
	}
}

// Called when the game starts or when spawned
void AMinions::BeginPlay()
{
	Super::BeginPlay();

	//3가지 미니언 타입중 랜덤으로 결정
	RandomMinionType = FMath::Rand() % Num_Of_Kind_Minion;

	


	AIController = Cast<AMinionAIController>(GetController());
	SetControlMode();
	if (AIController == nullptr) return;
	



	auto CharacterWidget = Cast<UMyCharacterWidget>(HpBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->SetCharacterStat(MinionStat);
	}

	
	SetMinionState(EMinionState::LOADING);

	SetMinionMode(RandomMinionType);


	IsAttacking = false;

}

// Called every frame
void AMinions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input





void AMinions::ComboAttackSave()
{
	if (SaveAttack)
	{
		SaveAttack = false;
		Attack();

	}
	OnAttackEnd.Broadcast();
}


void AMinions::ResetCombo()
{
	AttackCount = 0;
	SaveAttack = false;
	IsAttacking = false;
	OnAttackEnd.Broadcast();
}

void AMinions::AttackDirectionSetSoket(EAttackDirection AttackDirection)
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



void AMinions::Attack()
{

	
	//현재 공격 콤보에 따라 다른 몽타주 실행
	switch (AttackCount)
	{
	case 0:
	\
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





void AMinions::SetControlMode()
{
	
	Tags.Add(TEXT("ENEMY"));
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	GetCharacterMovement()->bRequestedMoveUseAcceleration = true;
	Tags.Add(TEXT("MinionClass"));
	
}

//랜덤 미니언 타입에 따른 설정(공격범위가 다 다르기때문에 공격시 범위판정을 위한 뼈 소켓 설정)
void AMinions::SetMinionMode(int32 RandomMinionTypes)
{

	if (nullptr != MinionMesh[RandomMinionTypes] && nullptr != MinionAnimation[RandomMinionTypes])
	{
		GetMesh()->SetSkeletalMesh(MinionMesh[RandomMinionTypes]);
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);


		GetMesh()->SetAnimInstanceClass(MinionAnimation[RandomMinionTypes]);

	}


	if (RandomMinionTypes == MinionType::Melee)
	{
		RightSoketBottom = TEXT("FX_Trail_02_R");
		RightSoketTop = TEXT("FX_Trail_01_R");

		LeftSoketBottom = TEXT("FX_Trail_02_L");
		LeftSoketTop = TEXT("FX_Trail_01_L");

		HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
		


		for (int32 i = 0; i < MaxAttackCombo ; i++)
		{
			if (IsValid(MeleeAttackMontageSet[i]))
				AttackMontage[i] = MeleeAttackMontageSet[i];
		}

	}

	
	else if (RandomMinionTypes == MinionType::RaneSuper)
	{

		RightSoketBottom = TEXT("FX_Trail_02_R");
		RightSoketTop = TEXT("FX_Trail_01_R");

		LeftSoketBottom = TEXT("FX_Trail_02_L");
		LeftSoketTop = TEXT("FX_Trail_01_L");

		HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	


		for (int32 i = 0; i < MaxAttackCombo; i++)
		{
			if (IsValid(RaneSuperAttackMontageSet[i]))
				AttackMontage[i] = RaneSuperAttackMontageSet[i];
		}

	}

	else if (RandomMinionTypes == MinionType::Chrunch)
	{
		
		RightSoketBottom = FName(TEXT("FX_RocketPunch_r"));
		RightSoketTop = FName(TEXT("FX_handDir_r"));
		LeftSoketBottom = TEXT("FX_RocketPunch_l");
		LeftSoketTop = TEXT("FX_handDir_l");

		HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 250.0f));


		for (int32 i = 0; i < MaxAttackCombo; i++)
		{
			if (nullptr != ChrunchAttackMontageSet[i])
				AttackMontage[i] = ChrunchAttackMontageSet[i];

		}

	}


	

}

//시작시 로딩, 레디, 사망 3가지 상태에 따른 처리 구현
void AMinions::SetMinionState(EMinionState NewState)
{
	//if (CurrentState != NewState) return;


	CurrentState = NewState;

	switch (CurrentState)
	{
	case EMinionState::LOADING:
	{
		SetActorHiddenInGame(false);
		HpBarWidget->SetHiddenInGame(true);



		GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
			SetMinionState(EMinionState::READY);
			}), 5.0f, false);


		break;
	}
	case EMinionState::READY:
	{
		HpBarWidget->SetHiddenInGame(false);
        AIController->RunAI();


		MinionStat->OnHPIsZero.AddLambda([this]() -> void
	{
		SetMinionState(EMinionState::DEAD);

	});



break;

	}

	case EMinionState::DEAD:
	{
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
		HpBarWidget->SetHiddenInGame(true);
		AIController->StopAI();




		auto MinionAnim = Cast<UMinionAnimInstance>(GetMesh()->GetAnimInstance());
		if (::IsValid(MinionAnim))
			MinionAnim->SetDead();



		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void {

				Destroy();

			}), DeadTimer, false);



		break;
	}


	}
}






void AMinions::MinionSwordTrace()
{

	FCollisionQueryParams Params(NAME_None, false, this);
	FHitResult  HitResult;

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

	bool bHit = GetWorld()->SweepSingleByChannel(HitResult, WaeponBottomPoint, WaeponTopPoint,
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(15.0f), Params);


	if (bHit)
	{

		if (::IsValid(HitResult.GetActor()))
		{
			FDamageEvent DamageEvent;
			if (CanTakeDamage && HitResult.GetActor()->ActorHasTag("PLAYER"))
			{
			
				HitResult.GetActor()->TakeDamage(MinionStat->GetAttackDMG() +
					(AttackDamageCount * 0.1f * MinionStat->GetAttackDMG()), DamageEvent, GetController(), this);
				
				CanTakeDamage = false;
				
				
			}


		}

	}

}

float AMinions::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);


	if (DamageCauser)
		Hurt(DamageCauser);

	if (CanBeDamaged())
	{
		MinionStat->SetDamage(DamageAmount);
		SetCanBeDamaged(false);
		GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				SetCanBeDamaged(true);


			}), 0.2f, false);

	}


	return FinalDamage;

}



void AMinions::Hurt(AActor* DamageCauser)
{

	auto anim = Cast<UMinionAnimInstance>(GetMesh()->GetAnimInstance());

	if (anim)
	{
		anim->SetDamaged();

	}

}
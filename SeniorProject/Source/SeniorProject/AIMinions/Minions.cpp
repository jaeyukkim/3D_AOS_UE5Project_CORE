// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AIMinions/Minions.h"
#include "SeniorProject/Player/MyCharacterStatComponent.h"
#include "SeniorProject/GameSetting/MyCharacterWidget.h"
#include "Components/WidgetComponent.h"
#include "MinionAIController.h"
#include "MinionAnimInstance.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/Player/MyPlayerController.h"

// Sets default values
AMinions::AMinions()
{

	PrimaryActorTick.bCanEverTick = false;
	AttackMontage.Init(nullptr, MaxAttackCombo);


	

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
	////////////////ĳ���� �̵��κ�/////////////////////


	//���� AI�� ���� ����� �� ����� �⺻ Ŭ�����Դϴ�.
	AIControllerClass = AMinionAIController::StaticClass();
	//AI ���� AI ��Ʈ�ѷ��� ���� �ڵ����� �����Ǵ��� ���θ� �����մϴ�.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	////////////////////////////////////////////////.�Ž� �ε�/////////////////////////////////////////////////


	
	IsAttacking = true;
	SaveAttack = true;
	AttackCount = 0;
	DeadTimer = 5.0f;


	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);




	MinionStat->SetMinionLevel(1);
	Tags.Add(TEXT("ENEMY"));
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->bRequestedMoveUseAcceleration = true;
	Tags.Add(TEXT("MinionClass"));
	HpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	
}

// Called when the game starts or when spawned
void AMinions::BeginPlay()
{
	Super::BeginPlay();

	//3���� �̴Ͼ� Ÿ���� �������� ����


	AIController = Cast<AMinionAIController>(GetController());
	
	if (AIController == nullptr) return;
	



	auto CharacterWidget = Cast<UMyCharacterWidget>(HpBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->SetCharacterStat(MinionStat);
	}

	
	SetMinionState(EMinionState::LOADING);



	IsAttacking = false;

}

void AMinions::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	AMyGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AMyGameModeBase>();
	if (GameMode)
	{
		GameMode->OnMobDeleted.Broadcast();
		
	}


	GetWorldTimerManager().ClearTimer(MonsterUITimerHandle);
	GetWorldTimerManager().ClearTimer(DamagedTimerHandle);
	GetWorldTimerManager().ClearTimer(DeadTimerHandle);
	

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



void AMinions::ActiveHpBar()
{
	if (HpBarWidget && !HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(true);
}

void AMinions::DisabledHpBar()
{
	if (HpBarWidget && HpBarWidget->IsVisible())
		HpBarWidget->SetVisibility(false);
}

void AMinions::ControlHpBarVisibility()
{
	if (HpBarWidget)
	{
		ActiveHpBar();
		//�̹� Ÿ�̸Ӱ� ��ϵǾ� �ִٸ� �ٽ� �ʱ�ȭ
		if (GetWorldTimerManager().IsTimerActive(MonsterUITimerHandle))
		{
			GetWorldTimerManager().ClearTimer(MonsterUITimerHandle);
		}
		//Ÿ�̸� ��� �Ǿ����� ������ ���
		else
		{
			GetWorld()->GetTimerManager().SetTimer(MonsterUITimerHandle, FTimerDelegate::CreateLambda([this]() ->
				void
				{
					DisabledHpBar();

				}), 8.0f, false);
		}


	}
}

void AMinions::Attack()
{

	
	//���� ���� �޺��� ���� �ٸ� ��Ÿ�� ����
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







//���۽� �ε�, ����, ��� 3���� ���¿� ���� ó�� ����
void AMinions::SetMinionState(EMinionState NewState)
{
	//if (CurrentState != NewState) return;


	CurrentState = NewState;

	switch (CurrentState)
	{
	case EMinionState::LOADING:
	{
		SetActorHiddenInGame(false);
		DisabledHpBar();



		GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
			SetMinionState(EMinionState::READY);
			}), 5.0f, false);


		break;
	}
	case EMinionState::READY:
	{
		
        AIController->RunAI();


		MinionStat->OnHPIsZero.AddLambda([this]() -> void
	{
		SetMinionState(EMinionState::DEAD);

	});



	break;

	}

	case EMinionState::DEAD:
	{
		SetCanBeDamaged(false);
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


	

	if (CanBeDamaged())
	{

		Hurt(DamageCauser);

		MinionStat->SetDamage(DamageAmount);
		SetCanBeDamaged(false);
		ControlHpBarVisibility();


		GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				SetCanBeDamaged(true);


			}), 0.2f, false);

		//�¾��� �� HP�� Ȱ��ȭ
		

		if (CurrentState == EMinionState::DEAD)
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



	return FinalDamage;

}

int32 AMinions::GetExp() const
{
	return MinionStat ->GetDropExp();
}


void AMinions::Hurt(AActor* DamageCauser)
{

	auto anim = Cast<UMinionAnimInstance>(GetMesh()->GetAnimInstance());

	if (anim)
	{
		anim->SetDamaged();

	}

}
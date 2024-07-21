// Fill out your copyright notice in the Description page of Project Settings.


#include "Minions.h"
#include "SeniorProject/Character/Player/PlayerBase/MyCharacterStatComponent.h"
#include "SeniorProject/Character/CharacterBase/UI/MyCharacterWidget.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/Character/Enemy/EnemyBase/AISetting/MinionAIController.h"
#include "SeniorProject/Character/Enemy/EnemyBase/AISetting/MinionAnimInstance.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerController.h"

// Sets default values
AMinions::AMinions()
{

	PrimaryActorTick.bCanEverTick = false;
	AttackMontage.Init(nullptr, MaxAttackCombo);

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");


	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));



	//���� AI�� ���� ����� �� ����� �⺻ Ŭ�����Դϴ�.
	AIControllerClass = AMinionAIController::StaticClass();
	//AI ���� AI ��Ʈ�ѷ��� ���� �ڵ����� �����Ǵ��� ���θ� �����մϴ�.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	

	

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);




	Stat->SetMinionLevel(1);
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

	AbilitySystemComponent->InitAbilityActorInfo(this, this);

	AIController = Cast<AMinionAIController>(GetController());
	
	if (AIController == nullptr) return;
	
	auto CharacterWidget = Cast<UMyCharacterWidget>(HpBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->SetCharacterStat(Stat);
	}
	
	SetMinionState(ECharacterState::LOADING);



}

void AMinions::EndPlay(const EEndPlayReason::Type EndPlayReason)
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
void AMinions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
void AMinions::SetMinionState(ECharacterState NewState)
{
	//if (CurrentState != NewState) return;


	CurrentState = NewState;

	switch (CurrentState)
	{
	case ECharacterState::LOADING:
	{
		SetActorHiddenInGame(false);
		DisabledHpBar();



		GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([this]() -> void {
			SetMinionState(ECharacterState::READY);
			}), 5.0f, false);


		break;
	}
	case ECharacterState::READY:
	{
		
        AIController->RunAI();


		Stat->OnHPIsZero.AddLambda([this]() -> void
	{
		SetMinionState(ECharacterState::DEAD);

	});



	break;

	}

	case ECharacterState::DEAD:
	{
		SetCanBeDamaged(false);
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
		HpBarWidget->SetHiddenInGame(true);
		AIController->StopAI();




		auto MinionAnimation = Cast<UMinionAnimInstance>(GetMesh()->GetAnimInstance());
		if (::IsValid(MinionAnimation))
			MinionAnimation->SetDead();
		


		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void {

				Destroy();

			}), DeadTimer, false);



		break;
	}

	}
}




void AMinions::AttackTrace()
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
			if (CanTakeDamage)
			{
			
				HitResult.GetActor()->TakeDamage(Stat->GetAttackDMG() +
					(AttackDamageCount * 0.1f * Stat->GetAttackDMG()), DamageEvent, GetController(), this);
				
				CanTakeDamage = false;
				
				
			}


		}

	}

}


float AMinions::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);


	

	if (CanBeDamaged() && DamageCauser->ActorHasTag("PLAYER"))
	{

		Hurt(DamageCauser);

		Stat->SetDamage(DamageAmount);
		SetCanBeDamaged(false);
		ControlHpBarVisibility();


		GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				SetCanBeDamaged(true);


			}), 0.2f, false);

		//�¾��� �� HP�� Ȱ��ȭ
		

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


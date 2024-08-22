// Fill out your copyright notice in the Description page of Project Settings.


#include "Minions.h"
#include "Components/WidgetComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/UI/OverlayWidget.h"
#include "SeniorProject/EnemyBase/AISetting/MinionAnimInstance.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

#include "SeniorProject/AI/AIControllerBase.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"



// Sets default values
AMinions::AMinions()
{
	Tags.Add(TEXT("ENEMY"));

	PrimaryActorTick.bCanEverTick = false;
	AttackMontage.Init(nullptr, MaxAttackCombo);

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetRootComponent());
	HealthBar->SetWidgetSpace(EWidgetSpace::Screen);
	HealthBar->SetDrawSize(FVector2D(150.0f, 50.0f));

	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));



	//���� AI�� ���� ����� �� ����� �⺻ Ŭ�����Դϴ�.
	//AIControllerClass = AMinionAIController::StaticClass();
	//AI ���� AI ��Ʈ�ѷ��� ���� �ڵ����� �����Ǵ��� ���θ� �����մϴ�.
	//AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	
	

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	

	
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->bRequestedMoveUseAcceleration = true;
	

	
	AttackWidthArea = 40.0f;
}

void AMinions::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if(!HasAuthority()) return;
	
	AIControllerBase = Cast<AAIControllerBase>(NewController);
	AIControllerBase->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	AIControllerBase->RunBehaviorTree(BehaviorTree);
	AIControllerBase->GetBlackboardComponent()->SetValueAsBool("HitReacting", false);
	AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("RangedAttacker"), CharacterClass != ECharacterClass::Minion_Melee);
}

// Called when the game starts or when spawned
void AMinions::BeginPlay()
{
	Super::BeginPlay();

	
	
	InitAbilityActorInfo();
	
	if(HasAuthority())
	{
		UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent);
	}

	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBar->GetUserWidgetObject()))
	{
		OverlayUserWidget->SetWidgetController(this);
	}

	if (const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
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

		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Effects_HitReact, EGameplayTagEventType::NewOrRemoved).AddUObject(this,&AMinions::HitReactTagChanged);
		
		
		OnHealthChanged.Broadcast(AS->GetHealth());
		OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	}
	


}



// Called every frame


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


void AMinions::Die()
{
	SetLifeSpan(LifeSpan);
	Super::Die();
}

void AMinions::InitAbilityActorInfo()
{
	
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	Cast<UAbilitySystemComponentBase>(AbilitySystemComponent)->AbilityActorInfoSet();
	if(HasAuthority())
	{
		InitializeDefaultAttributes();
	}
}

void AMinions::InitializeDefaultAttributes() const
{
	
	UBlueprintFunctionLibraryBase::InitializeDefaultAttributes(this, CharacterClass, Level, AbilitySystemComponent);
}


void AMinions::HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	Super::HitReactTagChanged(CallbackTag, NewCount);
	AIControllerBase->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), bHitReacting);

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
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(AttackWidthArea), Params);

	/*
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
	*/
}


float AMinions::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);


	return FinalDamage;
	

}



void AMinions::Hurt(AActor* DamageCauser)
{
	
}


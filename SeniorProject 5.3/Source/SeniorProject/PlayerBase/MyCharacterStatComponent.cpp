// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterStatComponent.h"
#include "SeniorProject/GameSetting/MyGameInstance.h"

// Sets default values for this component's properties


UMyCharacterStatComponent::UMyCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	// ...

	IsPlayerDead = false;
	Level = 1;
}


// Called when the game starts
void UMyCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UMyCharacterStatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	OnHPIsZero.Clear();
	OnHpChanged.Clear();
}


// Called every frame
void UMyCharacterStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetLevel(Level);
}



void UMyCharacterStatComponent::SetLevel(int32 NewLevel)
{

	auto MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (MyGameInstance == nullptr) return;

	CurrentStatData = MyGameInstance->GetMyCharacterData(NewLevel);
	if (CurrentStatData != nullptr)
	{
		Level = NewLevel;
		SetHP(CurrentStatData->MaxHp);
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Level data enable"));
	}
}


void UMyCharacterStatComponent::SetMinionLevel(int32 NewLevel)
{

	auto MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (MyGameInstance == nullptr) return;

	CurrentStatData = MyGameInstance->GetMyMinionData(NewLevel);
	if (CurrentStatData != nullptr)
	{
		Level = NewLevel;
		SetHP(CurrentStatData->MaxHp);
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Level data enable"));
	}
}

void UMyCharacterStatComponent::SetDamage(float Damage)
{
	if (CurrentStatData == nullptr) return;

	SetHP(FMath::Clamp<float>(CurrentHp - Damage, 0.0f, CurrentStatData->MaxHp));


	
	if (CurrentHp <= 0.0f)
	{
		OnHPIsZero.Broadcast();
		IsPlayerDead = true;
		
	}
		
}
// hp 설정
void UMyCharacterStatComponent::SetHP(float Hp)
{
	CurrentHp = Hp;
	OnHpChanged.Broadcast();

	if (CurrentHp < KINDA_SMALL_NUMBER)
	{
		CurrentHp = 0.0f;
		OnHPIsZero.Broadcast();
	}

}
//공격력 반환
float UMyCharacterStatComponent::GetAttackDMG()
{
	if (CurrentStatData == nullptr) 
		return 0.0f;

	return CurrentStatData->Attack;
}
// 현재 hp 반환
float UMyCharacterStatComponent::GetCurrentHp()
{
	return CurrentHp;
}

//hp 퍼센트 반환
float UMyCharacterStatComponent::GetHpRatio()
{
	if (CurrentStatData == nullptr)
		return 0.0f;

	return (CurrentStatData->MaxHp < KINDA_SMALL_NUMBER) ? 0.0f : (CurrentHp / CurrentStatData->MaxHp);

}

int32 UMyCharacterStatComponent::GetDropExp() const
{
	return CurrentStatData->DropExp;
}



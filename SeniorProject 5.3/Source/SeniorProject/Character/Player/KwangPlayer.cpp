// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangPlayer.h"

#include "Net/UnrealNetwork.h"
#include "SeniorProject/Actor/Decal/AttackRangeDecal.h"


AKwangPlayer::AKwangPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CharacterClass = ECharacterClass::Kwang;
	SetCharacterSetting();
}

void AKwangPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AKwangPlayer, bActiveWep);
}



void AKwangPlayer::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	UpdateMagicCircleLocation();
}


void AKwangPlayer::SetCharacterSetting()
{

	
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 800.0f;
	
	
	AttackRange = 300.0f;
	
}

void AKwangPlayer::ShowMagicCircle()
{
	if (!IsValid(MagicCircle))
	{
		MagicCircle = GetWorld()->SpawnActor<AAttackRangeDecal>(MagicCircleClass);
	}
}

void AKwangPlayer::HideMagicCircle()
{
	if (IsValid(MagicCircle))
	{
		MagicCircle->Destroy();
	}
}

void AKwangPlayer::SetSwordObject(AActor* Sword)
{
	KwangSword = Sword;
}

void AKwangPlayer::DestroySwordObject()
{
	KwangSword->Destroy();
}

bool AKwangPlayer::GetbActiveWep()
{
	return bActiveWep;
}

void AKwangPlayer::SetbActiveWep(bool nbActiveWep)
{
	bActiveWep = nbActiveWep;
}


void AKwangPlayer::UpdateMagicCircleLocation()
{

	if (IsValid(MagicCircle))
	{
		GetAimHitResult(1500 , AbilityRangeTraceResult);
		MagicCircle->SetActorLocation(AbilityRangeTraceResult.Location);
	}
	
}

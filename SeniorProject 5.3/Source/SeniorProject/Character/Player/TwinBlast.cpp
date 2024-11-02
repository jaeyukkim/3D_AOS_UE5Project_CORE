// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinBlast.h"

// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangPlayer.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/Actor/Decal/AttackRangeDecal.h"


ATwinBlast::ATwinBlast()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CharacterClass = ECharacterClass::TwinBlast;
	
}

void ATwinBlast::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATwinBlast, bUltimateActivate);

	
}

void ATwinBlast::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	SetCharacterSetting();
}

void ATwinBlast::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	SetCharacterSetting();
}


void ATwinBlast::Die_Implementation()
{
	HideMagicCircle();
	
	
	Super::Die_Implementation();
	
}

void ATwinBlast::ServerReSpawn()
{
	Super::ServerReSpawn();
	if(HasAuthority())
	{
		bUltimateActivate = false;
		
	}
}

void ATwinBlast::MulticastReSpawn()
{
	Respawned.Broadcast();
	Super::MulticastReSpawn();
}

void ATwinBlast::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	UpdateMagicCircleLocation();
}


void ATwinBlast::SetCharacterSetting()
{

	
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	
	AttackRange = 1200.0f;
	
}




void ATwinBlast::UpdateMagicCircleLocation()
{

	if (IsValid(MagicCircle))
	{
		if(this->Implements<UCombatInterface>())
		{
			ICombatInterface::Execute_GetAimHitResult(this, Ability_Q_Distance , AbilityRangeTraceResult);
			MagicCircle->SetActorLocation(AbilityRangeTraceResult.Location);
		}
	}
	
}

void ATwinBlast::SetbIsLeftAttack(bool InbIsLeftAttack)
{
	if(HasAuthority())
		bIsLeftAttack = InbIsLeftAttack;
}

void ATwinBlast::SetbUltimateActivate(bool InbUltimateActivate)
{
	if(HasAuthority())
	 bUltimateActivate = InbUltimateActivate;
}

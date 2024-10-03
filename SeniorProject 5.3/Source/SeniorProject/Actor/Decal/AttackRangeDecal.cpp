// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackRangeDecal.h"
#include "Components/DecalComponent.h"

AAttackRangeDecal::AAttackRangeDecal()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	MagicCircleDecal = CreateDefaultSubobject<UDecalComponent>("MagicCircleDecal");
	MagicCircleDecal->SetupAttachment(GetRootComponent());
	
}


void AAttackRangeDecal::BeginPlay()
{
	Super::BeginPlay();
	
}


void AAttackRangeDecal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


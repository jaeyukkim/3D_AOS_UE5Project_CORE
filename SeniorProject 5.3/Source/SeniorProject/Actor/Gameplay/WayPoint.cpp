// Fill out your copyright notice in the Description page of Project Settings.


#include "WayPoint.h"

#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


AWayPoint::AWayPoint()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereCollision->SetSphereRadius(600.f);
	SetRootComponent(SphereCollision);
	FlagParticle = CreateDefaultSubobject<UParticleSystemComponent>("FlagParticle");
}

// Called when the game starts or when spawned
void AWayPoint::BeginPlay()
{
	Super::BeginPlay();

	
	
}


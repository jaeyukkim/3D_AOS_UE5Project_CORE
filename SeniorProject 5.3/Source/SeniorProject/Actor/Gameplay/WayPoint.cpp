// Fill out your copyright notice in the Description page of Project Settings.


#include "WayPoint.h"

#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SeniorProject/Character/Enemy/Minions.h"


AWayPoint::AWayPoint()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereCollision->SetSphereRadius(150.f);
	SetRootComponent(SphereCollision);
	FlagParticle = CreateDefaultSubobject<UParticleSystemComponent>("FlagParticle");
	FlagParticle->SetupAttachment(SphereCollision);
}

// Called when the game starts or when spawned
void AWayPoint::BeginPlay()
{
	Super::BeginPlay();

	

}








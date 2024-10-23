// Fill out your copyright notice in the Description page of Project Settings.


#include "Shop.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SeniorProject/Interface/PlayerInterface.h"

AShop::AShop()
{
	ShopArea = CreateDefaultSubobject<USphereComponent>("ShopArea");
	ShopArea->SetSphereRadius(1000.f);

	StartWall = CreateDefaultSubobject<UParticleSystemComponent>("StartWall");
	
}

void AShop::BeginPlay()
{
	Super::BeginPlay();

	if(ShopArea == nullptr) return;

	ShopArea->OnComponentBeginOverlap.AddDynamic(this, &AShop::IsPlayerShopBeginOverlap);
	ShopArea->OnComponentEndOverlap.AddDynamic(this, &AShop::IsPlayerShopBeginEndOverlap);
	

}

void AShop::IsPlayerShopBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_SetIsInShop(OtherActor, true);
	}
}

void AShop::IsPlayerShopBeginEndOverlap(
	UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_SetIsInShop(OtherActor, false);
	}
	
}





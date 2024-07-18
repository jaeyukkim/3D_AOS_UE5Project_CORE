// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/GameSetting/DeadZone.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ADeadZone::ADeadZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetBoxExtent(FVector(6000.0f, 6000.0f, 150.0f));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeadZone::ActiveDeadZone);
	CollisionBox->SetCollisionProfileName(TEXT("OverlapOnlyPlayer"));
}

// Called when the game starts or when spawned
void ADeadZone::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADeadZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeadZone::ActiveDeadZone(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
		OtherActor->TakeDamage(100000.0f, FDamageEvent(), GetInstigatorController(), this);
}


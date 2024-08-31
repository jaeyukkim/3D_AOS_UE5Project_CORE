

#include "Spawner.h"
#include "Components/BoxComponent.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("mesh");
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box");

	
}


void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}




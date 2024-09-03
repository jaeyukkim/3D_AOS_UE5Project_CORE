

#include "Spawner.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("mesh");
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box");

	
}

void ASpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpawner, TeamName);
	DOREPLIFETIME(ASpawner, LineTag);

}


void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}




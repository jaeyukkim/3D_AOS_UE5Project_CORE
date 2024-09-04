

#include "Spawner.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("mesh");
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box");
	SetRootComponent(BoxComponent);
	Mesh->SetupAttachment(BoxComponent);

	
}

void ASpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpawner, TeamName);
	DOREPLIFETIME(ASpawner, LineTag);
	DOREPLIFETIME(ASpawner, bSpawnSiegeMinion);
	DOREPLIFETIME(ASpawner, bSpawnSuperMinion);


}


void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}




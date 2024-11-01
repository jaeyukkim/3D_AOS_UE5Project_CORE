

#include "Spawner.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("mesh");
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box");
	SetRootComponent(BoxComponent);
	Mesh->SetupAttachment(BoxComponent);

	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("LevelUpParticleComponent");
	ParticleComponent->SetupAttachment(GetRootComponent());
	ParticleComponent->bAutoActivate = false;
	
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

void ASpawner::SpawnParticle()
{
	if(HasAuthority())
		MulticastSpawnParticles();
}


void ASpawner::MulticastSpawnParticles_Implementation() const
{
	if(IsValid(ParticleComponent))
		ParticleComponent->Activate(true);
}






#include "Spawner.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "SeniorProject/Character/Enemy/Minions.h"

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

void ASpawner::SpawnMinion(TSubclassOf<AMinions> Minions)
{
	if(!HasAuthority()) return;
	
	SpawnParticle();

	FVector Location = GetActorLocation() + GetActorForwardVector() * 50.f;
	FTransform SpawnTransform = FTransform(Location);


	
	if (AMinions* NewMinion = GetWorld()->SpawnActorDeferred<AMinions>(Minions, SpawnTransform))
	{
		NewMinion->LineTag = LineTag;
		UGameplayStatics::FinishSpawningActor(NewMinion, SpawnTransform);
	}
	
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




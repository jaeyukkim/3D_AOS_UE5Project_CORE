// Fill out your copyright notice in the Description page of Project Settings.


#include "ShinbiWolf.h"

#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"


AShinbiWolf::AShinbiWolf()
{
	
	Wolf = CreateDefaultSubobject<USkeletalMeshComponent>("Wolf");
	WolfParticle = CreateDefaultSubobject<UParticleSystemComponent>("WolfEffect");
	

	Wolf->SetupAttachment(GetRootComponent());
	WolfParticle->SetupAttachment(Wolf);

}

void AShinbiWolf::MulticastSpawnParticleAndSound_Implementation()
{
	Super::MulticastSpawnParticleAndSound_Implementation();

	WolfParticle->Deactivate();
	Wolf->SetVisibility(false);
}




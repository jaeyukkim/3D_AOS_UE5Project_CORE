// Fill out your copyright notice in the Description page of Project Settings.


#include "ShinbiWolf.h"

#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"


AShinbiWolf::AShinbiWolf()
{
	Wolf = CreateDefaultSubobject<USkeletalMeshComponent>("Wolf");
	WolfParticle = CreateDefaultSubobject<UParticleSystemComponent>("WolfEffect");
	AttackParticle = CreateDefaultSubobject<UParticleSystemComponent>("AttackParticle");
	AttackAudio = CreateDefaultSubobject<UAudioComponent>("AttackAudio");

	Wolf->SetupAttachment(GetRootComponent());
	WolfParticle->SetupAttachment(Wolf);
	AttackParticle->SetupAttachment(GetRootComponent());
	AttackAudio->SetupAttachment(GetRootComponent());
}

void AShinbiWolf::MulticastPlaySoundAndParticle_Implementation()
{

	AttackAudio->Play();
	AttackParticle->Activate();
	WolfParticle->Deactivate();
	Wolf->SetVisibility(false);
	
}



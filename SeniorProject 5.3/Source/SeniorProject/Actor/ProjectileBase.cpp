// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBase.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SeniorProject/AbilitySystem/Global/AbilitySystemGlobalsBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"

// Sets default values
AProjectileBase::AProjectileBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComponent->SetupAttachment(Mesh);
	
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = 100.0f; // Start at rest
	ProjectileMovement->MaxSpeed = 100.0f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
	ProjectileMovement->bRotationFollowsVelocity = false; 
	ProjectileMovement->bShouldBounce = false;
	

	
	
	
}


void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectileBase::OnCapsuleOverlap);
	//Sphere->OnComponentBeginOverlap.AddDynamic(this, &AProjectileBase::OnCapsuleOverlap);
	
}

void AProjectileBase::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	

	AActor* OwnerActor = UBlueprintFunctionLibraryBase::GetOwnerActorFromSpecHandle(DamageEffectSpecHandle);
	if(OwnerActor == nullptr) return;

	if(UBlueprintFunctionLibraryBase::IsFriends(OwnerActor, OtherActor))
		return;
	
	if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor))
	{
		TargetASC->ApplyGameplayEffectSpecToSelf(*DamageEffectSpecHandle.Data.Get());
	}
	
}



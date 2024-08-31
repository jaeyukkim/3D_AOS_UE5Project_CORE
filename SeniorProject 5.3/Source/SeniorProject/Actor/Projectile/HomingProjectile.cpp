// Fill out your copyright notice in the Description page of Project Settings.


#include "HomingProjectile.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"

AHomingProjectile::AHomingProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
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
	ProjectileMovement->InitialSpeed = 800.0f; // Start at rest
	ProjectileMovement->MaxSpeed = 800.0f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
	ProjectileMovement->bRotationFollowsVelocity = false; 
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bIsHomingProjectile = true; // 기본값은 유도하지 않음
	ProjectileMovement->HomingAccelerationMagnitude = 5000.f; // 기본값
}

void AHomingProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 예시: 필요한 복제 프로퍼티 추가
	DOREPLIFETIME(AHomingProjectile, TargetLocation);
	DOREPLIFETIME(AHomingProjectile, TargetDirection);
	DOREPLIFETIME(AHomingProjectile, TargetRotator);
	
}

void AHomingProjectile::InitializeProjectile(const FGameplayEffectSpecHandle& SpecHandle, AActor* Target)
{
	if (HasAuthority())
	{
		SetReplicateMovement(true);
		DamageEffectSpecHandle = SpecHandle;
		TargetActor = Target;
		
	}
}

void AHomingProjectile::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	/*
	if(HasAuthority() && TargetActor != nullptr)
	{
		TargetDirection = (TargetActor->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		TargetLocation = GetActorLocation() + TargetDirection * ProjectileMovement->MaxSpeed * DeltaSeconds;
		TargetRotator = TargetDirection.Rotation();
		
		SetActorLocation(TargetLocation);
		SetActorRotation(TargetRotator);
		
		MulticastUpdateProjectileTransform();

	}
	*/
}

void AHomingProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AHomingProjectile::OnSphereOverlap);
	
	if (TargetActor)
	{
		ProjectileMovement->HomingTargetComponent = TargetActor->GetRootComponent();
	}
	
}

void AHomingProjectile::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != TargetActor) return;

	AActor* OwnerActor = UBlueprintFunctionLibraryBase::GetOwnerActorFromSpecHandle(DamageEffectSpecHandle);
	if(OwnerActor == nullptr) return;

	if(UBlueprintFunctionLibraryBase::IsFriends(OwnerActor, OtherActor))
		return;
	
	if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor))
	{
		TargetASC->ApplyGameplayEffectSpecToSelf(*DamageEffectSpecHandle.Data.Get());
	}
	Destroy();
}

void AHomingProjectile::MulticastUpdateProjectileTransform_Implementation()
{
	SetActorLocation(TargetLocation);
	SetActorRotation(TargetRotator);

//	if (ProjectileMovement && ProjectileMovement->bRotationFollowsVelocity)
//	{
//		SphereComponent->SetWorldRotation(NewRotation);
//	}
}

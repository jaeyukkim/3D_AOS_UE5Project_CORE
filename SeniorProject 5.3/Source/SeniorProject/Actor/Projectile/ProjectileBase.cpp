// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBase.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/AbilitySystem/Global/AbilitySystemGlobalsBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"


void AProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AProjectileBase, OwnerAvatarActor);
}

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

void AProjectileBase::SetOwnerActor(AActor* NewOwner)
{
	if(IsValid(NewOwner))
	{
		OwnerAvatarActor = NewOwner;
		
	}
}

AActor* AProjectileBase::GetOwnerActor()
{
	if(IsValid(OwnerAvatarActor))
		return OwnerAvatarActor;

	return nullptr;

}


void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectileBase::OnCapsuleOverlap);
	
}

void AProjectileBase::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (!HasAuthority() || OwnerAvatarActor == OtherActor) return;


	AActor* OwnerActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();
	if(OwnerActor == nullptr) return;

	if(UBlueprintFunctionLibraryBase::IsFriends(OwnerActor, OtherActor))
		return;
	
	
	
	if(bIsRadialDamage)
	{
		ApplyRadialDamage();
		return;
	}
	
	
	
	
	
	if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor))
	{
		DamageEffectParams.TargetAbilitySystemComponent = TargetASC;
		UBlueprintFunctionLibraryBase::ApplyDamageEffect(DamageEffectParams);
	}
	
	if(!bIsAblePenetration)
	{
		Destroy();
	}
	
	
	
}

void AProjectileBase::ApplyRadialDamage()
{
	
	
	if (OwnerAvatarActor == nullptr || !HasAuthority()) return;

	// 무시할 액터 리스트 생성
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(OwnerAvatarActor);

	// 구체의 중심 위치 설정
	FVector TargetLocation = GetActorLocation();

	// 감지된 액터들을 담을 배열
	TArray<AActor*> OutOverlappingActors;

	// 구체 범위 내에서 살아 있는 플레이어 캐릭터를 감지
	UBlueprintFunctionLibraryBase::GetLivePlayersWithinRadius(
		this,                // WorldContextObject로 자신(this)을 전달
		OutOverlappingActors,
		ActorsToIgnore,
		AttackRadius,
		TargetLocation
	);

	for (AActor* OverlappedActor : OutOverlappingActors)
	{
		// 팀의 경우 무시
		if (UBlueprintFunctionLibraryBase::IsFriends(OwnerAvatarActor, OverlappedActor))
			continue;

		// 감지된 대상에게 피해 적용
		if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OverlappedActor))
		{
			DamageEffectParams.TargetAbilitySystemComponent = TargetASC;
			UBlueprintFunctionLibraryBase::ApplyDamageEffect(DamageEffectParams);
		}
	}

	HitOtherActor.Broadcast();

	//관통 투사체가 아니라면 언바인드
	 if (!bIsAblePenetration)
	{
	 	SphereComponent->OnComponentBeginOverlap.RemoveDynamic(this, &AProjectileBase::OnCapsuleOverlap);
		
	}
	
}




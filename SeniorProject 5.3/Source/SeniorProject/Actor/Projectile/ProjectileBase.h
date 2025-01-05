// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/Actor/Default/DamageActorBase.h"
#include "ProjectileBase.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHitOtherActor);

UCLASS(BlueprintType)
class SENIORPROJECT_API AProjectileBase : public ADamageActorBase
{
	GENERATED_BODY()
	
public:	

	virtual void Tick(float DeltaTime) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	AProjectileBase();
	
	void SetOwnerActor(AActor* NewOwner);

	UFUNCTION(BlueprintCallable)
	AActor* GetOwnerActor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FDamageEffectParams DamageEffectParams;

	UPROPERTY(Replicated, BlueprintReadOnly)
	TObjectPtr<AActor> OwnerAvatarActor;

	UPROPERTY(BlueprintAssignable)
	FHitOtherActor HitOtherActor;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UAudioComponent> HitAudioComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> ProjectileParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attack")
	bool bIsAblePenetration = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsRadialDamage = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float AttackRadius;
	
	UFUNCTION(BlueprintCallable)
	void ApplyRadialDamage();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OverlapBlueprintEvent(AActor* OtherActor);
	
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastSpawnParticleAndSound();
	
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void MulticastEnableProjectileMesh(UStaticMeshComponent* ProjectileMesh);
	
	
	const float ProjectileLifetime = 1.5f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestroyDistance = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentDistance = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector OriginPos;


};

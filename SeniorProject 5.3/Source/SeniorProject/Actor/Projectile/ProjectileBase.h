// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/Actor/Default/DamageActorBase.h"
#include "ProjectileBase.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(BlueprintType)
class SENIORPROJECT_API AProjectileBase : public ADamageActorBase
{
	GENERATED_BODY()
	
public:	

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	AProjectileBase();
	
	void SetOwnerActor(AActor* NewOwner);

	UFUNCTION(BlueprintCallable)
	AActor* GetOwnerActor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FDamageEffectParams DamageEffectParams;

	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attack")
	bool bIsAblePenetration = false;
	

	UPROPERTY(Replicated)
	TObjectPtr<AActor> OwnerAvatarActor;

};

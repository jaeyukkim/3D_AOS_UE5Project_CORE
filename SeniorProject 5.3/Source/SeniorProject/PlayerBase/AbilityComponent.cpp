// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilityComponent.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "MyAnimInstance.h"
#include "MyCharacterStatComponent.h"

#include "Components/DecalComponent.h"
#include "Engine/DecalActor.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/PrimitiveComponent.h"


//Kwang 캐릭터의 스킬 컴포넌트
// 
// 
// Sets default values for this component's properties
UAbilityComponent::UAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	
	//////////////////////////////////////////////////////// <Q_Ability>////////////////////////////////////////////////////////
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> Q_Decal(TEXT
	("Material'/Game/UI/M_TargetingCircle_Decal'"));

	if (Q_Decal.Succeeded())
	{
		Ability_Q_RangeDecal = Q_Decal.Object;
	}


	static ConstructorHelpers::FObjectFinder<UStaticMesh> KWANG_SWORD(TEXT
	("StaticMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_Swords.Kwang_Swords'"));

	if (KWANG_SWORD.Succeeded())
	{
		KwangSwordMesh = KWANG_SWORD.Object;
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ABILITY_Q_PARTICLE(TEXT
	("ParticleSystem'/Game/ParagonKwang/FX/Particles/Abilities/Sword/FX/P_Kwang_Sword_Impact'"));

	if (ABILITY_Q_PARTICLE.Succeeded())
	{
		Q_Effect = ABILITY_Q_PARTICLE.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Q_THTOW_Montage(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_Q_Throw_Montage'"));

	if (Q_THTOW_Montage.Succeeded())
	{
		Ability_Q_Throw_Montage = Q_THTOW_Montage.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Q_CATCH_Montage(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_Q_Catch_Montage'"));

	if (Q_CATCH_Montage.Succeeded())
	{
		Ability_Q_Catch_Montage = Q_CATCH_Montage.Object;
	}
	//////////////////////////////////////////////////////// <Q_Ability>////////////////////////////////////////////////////////
	
	



	//////////////////////////////////////////////////////// <RMB_Ability>////////////////////////////////////////////////////////
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ABILITY_RMB_PARTICLE(TEXT
	("ParticleSystem'/Game/ParagonKwang/FX/Particles/Abilities/LightStrike/FX/P_Kwang_LightStrike_Burst'"));

	if (ABILITY_RMB_PARTICLE.Succeeded())
	{
		RMB_NoWep_Effect = ABILITY_RMB_PARTICLE.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ABILITY_RMB_MONTAGE(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_RMB_Montage'"));

	if (ABILITY_RMB_MONTAGE.Succeeded())
	{
		Ability_RMB_Montage = ABILITY_RMB_MONTAGE.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> ABILITY_RMB_NOWEP_MONTAGE(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_RMB_NoSword_Montage'"));

	if (ABILITY_RMB_NOWEP_MONTAGE.Succeeded())
	{
		Ability_RMB_NoWep_Montage = ABILITY_RMB_NOWEP_MONTAGE.Object;
	}
	//////////////////////////////////////////////////////// <RMB_Ability>////////////////////////////////////////////////////////





	//////////////////////////////////////////////////////// <R_Ability>////////////////////////////////////////////////////////

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ABILITY_R_MONTAGE(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_R_Montage'"));

	if (ABILITY_R_MONTAGE.Succeeded())
	{
		Ability_R_Montage = ABILITY_R_MONTAGE.Object;
	}


	static ConstructorHelpers::FObjectFinder<UAnimMontage> ABILITY_R_NOWEP_MONTAGE(
		TEXT("AnimMontage'/Game/ParagonKwang/Characters/Heroes/Kwang/Animations/Ability_R_NoWep_Montage'"));

	if (ABILITY_R_NOWEP_MONTAGE.Succeeded())
	{
		Ability_R_NoWep_Montage = ABILITY_R_NOWEP_MONTAGE.Object;
	}

	//////////////////////////////////////////////////////// <R_Ability>////////////////////////////////////////////////////////




	static ConstructorHelpers::FObjectFinder<USoundCue> Q_Sound
	(
		TEXT("SoundCue'/Game/Sound/Kwang_Ability_Q_End_Cue'")
	);


	if (Q_Sound.Succeeded())
	{
		Q_Attack_Cue = Q_Sound.Object;
	}


	static ConstructorHelpers::FObjectFinder<USoundCue> RMB_Sound
	(
		TEXT("SoundCue'/Game/Sound/Kwang_RMB_Sound1_Cue'")
	);


	if (RMB_Sound.Succeeded())
	{
		RMB_Attack_Cue = RMB_Sound.Object;
	}


	


	bIsActiveRangeTrace = false;
	bIsActive_Q_Ability = false;


	Is_Q_Ability_CoolDown = false;


	Is_R_Ability_CoolDown = false;


	Is_RMB_Ability_CoolDown = false;

	bIsActive_Q_Ability = false;
	bIsActiveRangeTrace = false;
}


// Called when the game starts
void UAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	
	Character = Cast<AMyCharacter>(GetOwner());

	KwangSword = GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass());
	KwangSword->SetMobility(EComponentMobility::Movable);

	SwordMeshComponent = KwangSword->GetStaticMeshComponent();

	if (SwordMeshComponent)
	{
		SwordMeshComponent->SetStaticMesh(KwangSwordMesh);


	}


	
}


// Called every frame
void UAbilityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	


	
	if (Character != nullptr && decal != nullptr)
	{
	
		FHitResult  HitResult;
		
		
		CameraLocation = Character->PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentLocation();
		CameraFowardVector = Character->PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentRotation().Vector();
		


		//Chrunch
		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraFowardVector* 1500.0f,
		 ECollisionChannel::ECC_Visibility);
		
		if (bHit)
		{
			decal->SetActorLocation(HitResult.Location);
			CurrentAbilityLocation = HitResult.Location;
		}
		

	}
	
}




void UAbilityComponent::AbilityRangeTrace()
{
	if (Is_Q_Ability_CoolDown)
		return;


	bIsActive_Q_Ability = true;

	if (!IsValid(decal))
	{
		decal = GetWorld()->SpawnActor<ADecalActor>(GetOwner()->GetActorLocation(), FRotator());
		decal->SetDecalMaterial(Ability_Q_RangeDecal);
		decal->SetActorScale3D(FVector(0.8f, 0.8f, 0.8f));
	}



	else if(IsValid(decal))
	{
		decal->SetActorHiddenInGame(false);
		
	}

	bIsActive_Q_Ability = false;
	bIsActiveRangeTrace = true;
	SetComponentTickEnabled(true);
	
	
}

bool UAbilityComponent::Ability_Q_IsActive()
{
	return bIsActive_Q_Ability;

}





void UAbilityComponent::Q_Ability()
{


		if (Is_Q_Ability_CoolDown)
			return;


		if (!bIsActive_Q_Ability && Character != nullptr && Ability_Q_Throw_Montage != nullptr)
		{
			Character->PlayAnimMontage(Ability_Q_Throw_Montage, 1.0f);
		}


		
			

}

void UAbilityComponent::Q_Ability_NoWep()
{
	if (Is_Q_Ability_CoolDown)
		return;

	if (Character != nullptr && decal != nullptr && Ability_Q_Catch_Montage != nullptr)
	{
		Character->PlayAnimMontage(Ability_Q_Catch_Montage, 1.0f);
		SetComponentTickEnabled(false);
		decal->SetActorHiddenInGame(true);
		HideKwangSwords();
		return;
	}
}




void UAbilityComponent::Attack_Q_Ability()
{

	if (Character != nullptr)
	{
		
		
		
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Q_Effect, CurrentAbilityLocation);
		FTimerHandle Q_AbilityCastingHandle;
		
		

		GetWorld()->GetTimerManager().SetTimer(Q_AbilityCastingHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				KwangSword->SetActorLocation(CurrentAbilityLocation);
		UGameplayStatics::PlaySoundAtLocation(KwangSword, Q_Attack_Cue, KwangSword->GetActorLocation());

		TArray<FHitResult> HitResult;
		FCollisionShape Shape = FCollisionShape::MakeSphere(180.0f);
		GetWorld()->SweepMultiByChannel(HitResult, CurrentAbilityLocation, CurrentAbilityLocation, FQuat(), ECollisionChannel::ECC_GameTraceChannel2, Shape);


		
			for (auto& Hit : HitResult)
			{
				FDamageEvent DamageEvent;
				if (Hit.GetActor()->ActorHasTag("ENEMY"))
				{
					//Hit.GetActor()->TakeDamage(Character->Stat->GetAttackDMG() * 3.0f, DamageEvent, Character->GetController(), Character);
				}

			}

		}), 0.6f, false);
		
			
	
	}


}




void UAbilityComponent::MoveToSwordLocation()
{
	if (Character != nullptr)
	{
		Character->SetActorLocation(CurrentAbilityLocation + FVector(-40.0f, 0.0f, 60.0f));
	}
}

void UAbilityComponent::R_Ability()
{
	if (Is_R_Ability_CoolDown)
		return;
		

	if (Character != nullptr)
	{

		if(Ability_R_Montage != nullptr)
			Character->PlayAnimMontage(Ability_R_Montage, 1.0f);

	}


		
}

void UAbilityComponent::R_Ability_NoWep()
{
	if (Is_R_Ability_CoolDown)
		return;


	if (Character != nullptr)
	{
		if (Ability_R_NoWep_Montage != nullptr)
			Character->PlayAnimMontage(Ability_R_NoWep_Montage, 1.0f);
	}

}

void UAbilityComponent::Attack_R_Ability()
{
	if (Character != nullptr)
	{

		FCollisionShape Shape = FCollisionShape::MakeSphere(300.0f);
		TArray<FHitResult> HitResult;
		GetWorld()->SweepMultiByChannel(HitResult, Character->GetActorLocation(), Character->GetActorLocation(), FQuat(), ECollisionChannel::ECC_GameTraceChannel2, Shape);


		
		for (auto& Hit : HitResult)
		{
			FDamageEvent DamageEvent;
			if (Hit.GetActor()->ActorHasTag("ENEMY"))
			{
				//Hit.GetActor()->TakeDamage(Character->Stat->GetAttackDMG() * 4.0f, DamageEvent, Character->GetController(), Character);
			}

		}
	}
	
}
	






void UAbilityComponent::RMB_Ability()
{
	if (Is_RMB_Ability_CoolDown)
		return;


	if (Character != nullptr)
	{
		if (Ability_RMB_Montage != nullptr)
			Character->PlayAnimMontage(Ability_RMB_Montage, 1.0f);
	}



}

void UAbilityComponent::RMB_NoWep_Ability()
{
	if (Is_RMB_Ability_CoolDown)
		return;

	if (Character != nullptr)
	{
		if (Ability_RMB_NoWep_Montage != nullptr)
			Character->PlayAnimMontage(Ability_RMB_NoWep_Montage, 1.0f);
	}
	

}


void UAbilityComponent::Attack_RMB_Ability()
{
	if (Character != nullptr && RMB_NoWep_Effect != nullptr)
	{
		

	
	
		FCollisionShape Shape = FCollisionShape::MakeSphere(250.0f);
		TArray<FHitResult> HitResult;
		FDamageEvent DamageEvent;

		GetWorld()->SweepMultiByChannel(HitResult, Character->GetActorLocation(), Character->GetActorLocation(),
			FQuat(), ECollisionChannel::ECC_GameTraceChannel2, Shape);
		
		
		for (auto& Hit : HitResult)
		{

		//	if (Hit.GetActor()->ActorHasTag("ENEMY"))
			//	Hit.GetActor()->TakeDamage(Character->Stat->GetAttackDMG() * 3.0f, DamageEvent, Character->GetController(), Character);

		}

		


		

	}
}

void UAbilityComponent::Attack_RMB_Ability_NoWep()
{
	if (Character != nullptr)
	{

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), RMB_NoWep_Effect, CurrentAbilityLocation);


		FTimerHandle RMB_AbilityCastingHandle;
		GetWorld()->GetTimerManager().SetTimer(RMB_AbilityCastingHandle, FTimerDelegate::CreateLambda([this]() ->
			void
			{
				FCollisionShape Shape = FCollisionShape::MakeSphere(250.0f);
				TArray<FHitResult> HitResult;
				FDamageEvent DamageEvent;
				UGameplayStatics::PlaySoundAtLocation(KwangSword, RMB_Attack_Cue, KwangSword->GetActorLocation());
				
				GetWorld()->SweepMultiByChannel(HitResult, CurrentAbilityLocation, CurrentAbilityLocation,
					FQuat(), ECollisionChannel::ECC_GameTraceChannel2, Shape);

		
				for (auto& Hit : HitResult)
				{

				//	if (Hit.GetActor()->ActorHasTag("ENEMY"))
					//	Hit.GetActor()->TakeDamage(Character->Stat->GetAttackDMG() * 3.0f, DamageEvent, Character->GetController(), Character);

				}

			}), 0.16f, false);
		
	
	}


}







void UAbilityComponent::StartColdown_Q_Ability()
{
	Is_Q_Ability_CoolDown = true;
	bIsActiveRangeTrace = false;

	if (decal != nullptr)
	{
		SetComponentTickEnabled(false);
		decal->SetActorHiddenInGame(true);
	}

	
	bIsActive_Q_Ability = true;

	GetWorld()->GetTimerManager().SetTimer(Q_AbilityTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			Is_Q_Ability_CoolDown = false;

		}), Q_Abiliry_CoolDown, false);

}

void UAbilityComponent::StartColdown_RMB_Ability()
{
	Is_RMB_Ability_CoolDown = true;

	GetWorld()->GetTimerManager().SetTimer(RMB_AbilityTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			Is_RMB_Ability_CoolDown = false;

		}), RMB_Abiliry_CoolDown, false);
}


void UAbilityComponent::StartColdown_R_Ability()
{
	Is_R_Ability_CoolDown = true;
	

	GetWorld()->GetTimerManager().SetTimer(R_AbilityTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			Is_R_Ability_CoolDown = false;

		}), R_Abiliry_CoolDown, false);

}

void UAbilityComponent::UnHideKwangSwords()
{
	/*
	if (KwangSword != nullptr)
	{
		KwangSword->SetActorHiddenInGame(false);
		KwangSword->SetActorEnableCollision(true);
	}
	*/
}

void UAbilityComponent::HideKwangSwords()
{
	KwangSword->SetActorLocation(CurrentAbilityLocation + FVector(0.0f, 0.0f, -2000.0f));
}

bool UAbilityComponent::GetIsActiveRangeTrace()
{
	return bIsActiveRangeTrace;
}

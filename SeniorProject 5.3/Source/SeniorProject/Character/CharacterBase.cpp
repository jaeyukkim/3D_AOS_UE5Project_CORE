// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CharacterBase.h"

#include "AbilitySystemComponent.h"

#include "SeniorProject/DefaultBase/MovementComponentBase.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Debuff/DebuffParticleComponent.h"


ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMovementComponentBase>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	

	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	
	StunDebuffComponent = CreateDefaultSubobject<UDebuffParticleComponent>("StunDebuffComponent");
	StunDebuffComponent->SetupAttachment(GetRootComponent());
	StunDebuffComponent->DebuffTag = GameplayTags.Debuff_Type_Stun;

	MovementSlowDebuffComponent = CreateDefaultSubobject<UDebuffParticleComponent>("MovementSlowDebuffComponent");
	MovementSlowDebuffComponent->SetupAttachment(GetRootComponent());
	MovementSlowDebuffComponent->DebuffTag = GameplayTags.Debuff_Type_MovementSlow;

	ArmorDecreaseDebuffComponent = CreateDefaultSubobject<UDebuffParticleComponent>("ArmorDecreaseDebuffComponent");
	ArmorDecreaseDebuffComponent->SetupAttachment(GetRootComponent());
	ArmorDecreaseDebuffComponent->DebuffTag = GameplayTags.Debuff_Type_ArmorDecrease;

	MagicResistanceDecreaseDebuffComponent = CreateDefaultSubobject<UDebuffParticleComponent>("MagicResistanceDecreaseDebuffComponent");
	MagicResistanceDecreaseDebuffComponent->SetupAttachment(GetRootComponent());
	MagicResistanceDecreaseDebuffComponent->DebuffTag = GameplayTags.Debuff_Type_MagicResistanceDecrease;

	
}



void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	MaxAttackCombo = AttackMontage.Num()-1;

	
	
}

void ACharacterBase::InitAbilityActorInfo()
{
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACharacterBase, TeamName);
	DOREPLIFETIME(ACharacterBase, LineTag);
	DOREPLIFETIME(ACharacterBase, bDead);
	DOREPLIFETIME(ACharacterBase, bIsStunned);
	
	
}

// Called to bind functionality to input




UAbilitySystemComponent* ACharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ACharacterBase::HighlightActor()
{
	
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	
}

void ACharacterBase::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
}

void ACharacterBase::ApplyDebuffEffect_Implementation(const FGameplayTag& DebuffTag, const float DebuffCoefficient,
	const float DebuffDuration, const float DebuffFrequency)
{
	if(UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent))
	{
		if(DebuffClassMap.Contains(DebuffTag))
		{
			ASCBase->ApplyDebuffEffectSelf(DebuffClassMap[DebuffTag], DebuffTag, DebuffCoefficient, DebuffDuration, DebuffFrequency);
		}
	}
}

UAnimMontage* ACharacterBase::GetHitReactMontage_Implementation()
{
	return HitReactMontage;
}

UAnimationAsset* ACharacterBase::GetDieAnimationAsset_Implementation()
{
	return DieAnimationAsset;
}

UAnimMontage* ACharacterBase::GetAttackMontage_Implementation()
{
	return AttackMontage[GetCurrentCombo()];
}


void ACharacterBase::HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	bHitReacting = NewCount > 0;
}

FVector ACharacterBase::GetCombatSocketLocation_Implementation(const FGameplayTag& MontageTag)
{
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	if (MontageTag.MatchesTagExact(GameplayTags.CombatSocket_Weapon))
	{
		return GetMesh()->GetSocketLocation(WeaponTipSocketName);
	}
	if (MontageTag.MatchesTagExact(GameplayTags.CombatSocket_LeftHand))
	{
		return GetMesh()->GetSocketLocation(LeftHandSocketName);
	}
	if (MontageTag.MatchesTagExact(GameplayTags.CombatSocket_RightHand))
	{
		return GetMesh()->GetSocketLocation(RightHandSocketName);
	}
	if (MontageTag.MatchesTagExact(GameplayTags.CombatSocket_Tail))
	{
		return GetMesh()->GetSocketLocation(TailSocketName);
	}
	return FVector();
}

void ACharacterBase::Die_Implementation()
{
	MulticastHandleDeath();
}

ECharacterClass ACharacterBase::GetCharacterClass_Implementation()
{
	return CharacterClass;
}

FOnASCRegistered& ACharacterBase::GetOnASCRegisteredDelegate()
{
	return OnAscRegistered;
}

void ACharacterBase::MulticastHandleDeath_Implementation()
{
	//GetMesh()->SetSimulatePhysics(true);
	//GetMesh()->SetEnableGravity(true);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	GetMesh()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	bDead = true;
	
	StunDebuffComponent->Deactivate();
	ArmorDecreaseDebuffComponent->Deactivate();
	MagicResistanceDecreaseDebuffComponent->Deactivate();
	MovementSlowDebuffComponent->Deactivate();
	
}

void ACharacterBase::MulticastSetMaxWalkSpeed_Implementation(float NewSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed; 
}

void ACharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const
{
	check(IsValid(GetAbilitySystemComponent()));
	check(GameplayEffectClass);
	FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, ContextHandle);
	
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), GetAbilitySystemComponent());
}

void ACharacterBase::InitializeDefaultAttributes() const
{
	ApplyEffectToSelf(DefaultAdditionalVitalAttributes, 1.f);
	ApplyEffectToSelf(DefaultVitalAttributes, 1.f);
	ApplyEffectToSelf(DefaultSecondaryAttributes, 1.f);
	ApplyEffectToSelf(DefaultGamePlayAttributes, 1.f);

}

void ACharacterBase::AddCharacterAbility()
{
	if(!HasAuthority()) return;

	UAbilitySystemComponentBase* ASCBase = CastChecked<UAbilitySystemComponentBase>(AbilitySystemComponent);
	ASCBase->AddCharacterAbility(GameplayAbility);
	ASCBase->AddCharacterPassiveAbilities(StartupPassiveAbilities);
}



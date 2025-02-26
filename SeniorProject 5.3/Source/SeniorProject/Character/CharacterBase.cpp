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
#include "SeniorProject/SeniorProject.h"

ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMovementComponentBase>(ACharacter::CharacterMovementComponentName))
{
	bReplicates = true;
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

	//생성되어도 기본적으로 ai 컨트롤러에 빙의되지 않으며 명시적으로 설정해줘야함
	AutoPossessAI = EAutoPossessAI::Disabled;
	
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
	
	DOREPLIFETIME(ACharacterBase, bDead);
	DOREPLIFETIME(ACharacterBase, bIsStunned);
	DOREPLIFETIME(ACharacterBase, bIsInvincibility);
	
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
	
	if(HasAuthority())
	{
		MulticastHandleDeath();
		ClearAttackers();	//공격자 배열과 타이머 모두 초기화
	}
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
	
	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Ragdoll"));
	
	if (!ActorHasTag("Player"))
	{
		GetMesh()->SetSimulatePhysics(true);
	}
	
	bDead = true;
	StunDebuffComponent->Deactivate();
	ArmorDecreaseDebuffComponent->Deactivate();
	MagicResistanceDecreaseDebuffComponent->Deactivate();
	MovementSlowDebuffComponent->Deactivate();
	
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
	ApplyEffectToSelf(DefaultSecondaryAttributes, 1.f);
	ApplyEffectToSelf(DefaultGamePlayAttributes, 1.f);
	ApplyEffectToSelf(DefaultVitalAttributes, 1.f);

}

void ACharacterBase::AddCharacterAbility()
{
	if(!HasAuthority()) return;
	
	UAbilitySystemComponentBase* ASCBase = CastChecked<UAbilitySystemComponentBase>(AbilitySystemComponent);
	ASCBase->AddCharacterAbility(GameplayAbility);
	ASCBase->AddCharacterPassiveAbilities(StartupPassiveAbilities);
	
}

void ACharacterBase::MulticastEndGame_Implementation(const FGameplayTag& DefeatedTeam)
{
}

/*
 * AttributeSet이 초기화 된 후 실행할것
 */
void ACharacterBase::BindCallBackSaveAttacker()
{
	if (!HasAuthority()) return;
	
	if (UAttributeSetBase* ASB = Cast<UAttributeSetBase>(AttributeSet))
	{
		ASB->OnIncomingDamageDelegate.AddUObject(this, &ACharacterBase::SaveAttacker);
	}
}

void ACharacterBase::SaveAttacker(AActor* Attacker)
{
	if (Attacker == nullptr || !HasAuthority()) return;
	

	// 공격자가 이미 배열에 있는 경우
	if (RecentAttackers.Contains(Attacker))
	{
		// 기존 타이머를 갱신
		GetWorld()->GetTimerManager().ClearTimer(AttackerTimers[Attacker]);
		GetWorld()->GetTimerManager().SetTimer(AttackerTimers[Attacker], FTimerDelegate::CreateUObject(this,
			&ACharacterBase::RemoveAttacker, Attacker), DeleteRecentAttackerTime, false);
	}
	else
	{
		// 배열에 없는 경우 새로 추가
		RecentAttackers.Add(Attacker);

		// RecentAttackers 배열에서 DeleteRecentAttackerTime초 후에 제거
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateUObject(this,
			&ACharacterBase::RemoveAttacker, Attacker), DeleteRecentAttackerTime, false);

		// 타이머 핸들을 저장
		AttackerTimers.Add(Attacker, TimerHandle);
	}
}
void ACharacterBase::RemoveAttacker(AActor* Attacker)
{
	if (!HasAuthority()) return;
	
	// 배열에서 공격자를 제거
	RecentAttackers.Remove(Attacker);

	// 타이머 핸들을 정리
	if (AttackerTimers.Contains(Attacker))
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackerTimers[Attacker]);
		AttackerTimers.Remove(Attacker);
	}
}

void ACharacterBase::ClearAttackers()
{
	
	// 모든 타이머 정리
	for (auto& Pair : AttackerTimers)
	{
		GetWorld()->GetTimerManager().ClearTimer(Pair.Value);
	}

	// 어태커에 관련된 모든 타이머 지우기
	AttackerTimers.Empty();
	RecentAttackers.Empty();

}

TArray<AActor*> ACharacterBase::GetAllAttackers_Implementation()
{
	return RecentAttackers;
}


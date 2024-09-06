// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSetBase.h"

#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "Kismet/GameplayStatics.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

class ICombatInterface;

UAttributeSetBase::UAttributeSetBase()
{
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();

	/* SecondaryAttributes */
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_AttackDamage, GetAttackDamageAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_AbilityPower, GetAbilityPowerAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_Armor, GetArmorAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_MagicResistance, GetMagicResistanceAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_AttackSpeed, GetAttackSpeedAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_AbilityHaste, GetAbilityHasteAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_CriticalChance, GetCriticalChanceAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Secondary_MovementSpeed, GetMovementSpeedAttribute);
	/* SecondaryAttributes */

	/* Additional Vital Attribute */
	TagsToAttributes.Add(GameplayTags.Attributes_AdditionalVital_HealthRegeneration, GetHealthRegenerationAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_AdditionalVital_ManaRegeneration, GetManaRegenerationAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_AdditionalVital_Lethality, GetLethalityAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_AdditionalVital_MagicPenetration, GetMagicPenetrationAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_AdditionalVital_LifeSteal, GetLifeStealAttribute);
	/* Additional Vital Attribute */

	
}

void UAttributeSetBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	/* Vital Attribute */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Exp, COND_None, REPNOTIFY_Always);
	/* Vital Attribute */

	
	/* SecondaryAttributes */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AttackDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AbilityPower, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MagicResistance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AttackSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AbilityHaste, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, CriticalChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MovementSpeed, COND_None, REPNOTIFY_Always);
	/* SecondaryAttributes */

	
	/* Additional Vital Attribute */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, NextExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, HealthRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, ManaRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Lethality, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MagicPenetration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, LifeSteal, COND_None, REPNOTIFY_Always);
	/* Additional Vital Attribute */

	
	/* GamePlay Attribute */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, DropExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, DropGold, COND_None, REPNOTIFY_Always);
	/* GamePlay Attribute */
}

void UAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxMana());
	}
}


void UAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	FEffectProperties Props;
	SetEffectProperties(Data, Props);

	if(Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	if(Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
	if(Data.EvaluatedData.Attribute == GetExpAttribute())
	{
		SetExp(FMath::Clamp(GetExp(), 0.f, GetNextExp()));
	}

	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		const float LocalIncomingDamage = GetIncomingDamage();
		SetIncomingDamage(0.f);
		if (LocalIncomingDamage > 0.f)
		{
			const float NewHealth = GetHealth() - LocalIncomingDamage;
			SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));

			const bool bFatal = NewHealth <= 0.f;

			if (bFatal)
			{
				ICombatInterface* CombatInterface = Cast<ICombatInterface>(Props.TargetAvatarActor);
				if (CombatInterface)
				{
					CombatInterface->Die();
				}
			}
			
			else
			{
				FGameplayTagContainer TagContainer;
				TagContainer.AddTag(FGameplayTagsBase::Get().Effects_HitReact);
				Props.TargetASC->TryActivateAbilitiesByTag(TagContainer);
			}
			const bool bCriticalHit = UBlueprintFunctionLibraryBase::IsCriticalHit(Props.EffectContextHandle);
			const bool bMagicalDamage = UBlueprintFunctionLibraryBase::IsMagicalDamage(Props.EffectContextHandle);

			NotifyMinionTarget(Props.TargetAvatarActor, Props.SourceAvatarActor);
			ShowFloatingText(Props, LocalIncomingDamage, bCriticalHit, bMagicalDamage);
		}
	}
	
}

void UAttributeSetBase::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const
{

	Props.EffectContextHandle = Data.EffectSpec.GetContext();
	Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();
		if (Props.SourceController == nullptr && Props.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}

		if (Props.SourceController)
		{
			Props.SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
			if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
			{
				Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
				Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
				Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);
				Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetAvatarActor);
			}
		}

	}
}

void UAttributeSetBase::ShowFloatingText(const FEffectProperties& Props, float Damage, bool bCriticalHit, bool bMagicalDamage) const
{
	if (Props.SourceCharacter != Props.TargetCharacter)
	{
		if(AMyPlayerController* PC = Cast<AMyPlayerController>(Props.SourceCharacter->Controller))
		{
			PC->ShowDamageNumber(Damage, Props.TargetCharacter, bCriticalHit, bMagicalDamage);
		}
	}
}

void UAttributeSetBase::NotifyMinionTarget(AActor* DamagedActor, AActor* Instigator)
{
	//데미지를 주고 받은 사람이 플레이어가 아닐 경우 미니언에게 타겟 정보를 보낼 이유가 없음
	if(!(DamagedActor->ActorHasTag("Player") && Instigator->ActorHasTag("Player"))) return;

	UWorld* World = DamagedActor->GetWorld();
	if (!World) return;

	FVector ActorLocation = DamagedActor->GetActorLocation();
	TArray<FOverlapResult> Overlaps;

	// 일정 범위 내에서 미니언을 탐색 (구체 형태의 충돌 탐지)
	FCollisionShape Sphere = FCollisionShape::MakeSphere(1000.0f); // 범위는 상황에 따라 조정

	World->OverlapMultiByChannel(Overlaps, ActorLocation, FQuat::Identity, ECC_Pawn, Sphere);

	for (FOverlapResult& Overlap : Overlaps)
	{
		if(Overlap.GetActor()->ActorHasTag("Minion"))
		{
			
			if (UBlueprintFunctionLibraryBase::IsFriends(DamagedActor, Overlap.GetActor()) &&
				!UBlueprintFunctionLibraryBase::IsFriends(Instigator, Overlap.GetActor()))  
			{
				if(IEnemyInterface* Minion = Cast<IEnemyInterface>(Overlap.GetActor()))
					Minion->Execute_SetTargetPlayer(Overlap.GetActor(), Instigator);
			}
		}
		
	}
	
}

/* OnRep_VitalAttributes */
void UAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Health, OldHealth);
}
void UAttributeSetBase::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Mana, OldMana);
}
void UAttributeSetBase::OnRep_Exp(const FGameplayAttributeData& OldExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Exp, OldExp);
}

/* OnRep_VitalAttributes */



/* OnRep_SecondaryAttributes */
void UAttributeSetBase::OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AttackDamage, OldAttackDamage);
}
void UAttributeSetBase::OnRep_AbilityPower(const FGameplayAttributeData& OldAbilityPower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AbilityPower, OldAbilityPower);
}
void UAttributeSetBase::OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AttackSpeed, OldAttackSpeed);
}
void UAttributeSetBase::OnRep_AbilityHaste(const FGameplayAttributeData& OldAbilityHaste) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AbilityHaste, OldAbilityHaste);
}
void UAttributeSetBase::OnRep_Armor(const FGameplayAttributeData& OldArmor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Armor, OldArmor);
}

void UAttributeSetBase::OnRep_MagicResistance(const FGameplayAttributeData& OldMagicResistance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MagicResistance, OldMagicResistance)
}

void UAttributeSetBase::OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MovementSpeed, OldMovementSpeed);
}

void UAttributeSetBase::OnRep_CriticalChance(const FGameplayAttributeData& OldCriticalChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, CriticalChance, OldCriticalChance);
}
/* OnRep_SecondaryAttributes */



/* OnRep_ Additional VitalAttributes */
void UAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxHealth, OldMaxHealth);
}
void UAttributeSetBase::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxMana, OldMaxMana);
}
void UAttributeSetBase::OnRep_NextExp(const FGameplayAttributeData& OldNextExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, NextExp, OldNextExp);
}
void UAttributeSetBase::OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Mana, HealthRegeneration);
}
void UAttributeSetBase::OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, ManaRegeneration, OldManaRegeneration);
}
void UAttributeSetBase::OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, LifeSteal, OldLifeSteal);
}
void UAttributeSetBase::OnRep_Lethality(const FGameplayAttributeData& OldLethality) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Lethality, OldLethality);
}
void UAttributeSetBase::OnRep_MagicPenetration(const FGameplayAttributeData& OldMagicPenetration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MagicPenetration, OldMagicPenetration);
}

/* OnRep_ Additional VitalAttributes */



/*  OnRep_ GamePlay VitalAttributes */

void UAttributeSetBase::OnRep_DropGold(const FGameplayAttributeData& OldDropGold) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, DropGold, OldDropGold);
}
void UAttributeSetBase::OnRep_DropExp(const FGameplayAttributeData& OldDropExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, DropExp, OldDropExp);
}
/* GamePlay OnRep */
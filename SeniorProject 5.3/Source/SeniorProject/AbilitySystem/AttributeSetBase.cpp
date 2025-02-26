// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSetBase.h"
#include "AbilityTypesBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "Kismet/GameplayStatics.h"
#include "SeniorProject/Interface/PlayerInterface.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/Interface/BuffMonsterInterface.h"


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
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	/* Vital Attribute */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);

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
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, HealthRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, ManaRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Lethality, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MagicPenetration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, LifeSteal, COND_None, REPNOTIFY_Always);
	/* Additional Vital Attribute */

	
	
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

void UAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if(GetOwningActor()->Implements<UCombatInterface>() && ICombatInterface::Execute_IsDead(GetOwningActor())) return;

	
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
	Super::PostGameplayEffectExecute(Data);
	
	FEffectProperties Props;
	SetEffectProperties(Data, Props);
	if(!bIsNeedToUpdateAttribute(Props)) return;

	
	if(Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	if(Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		HandleIncomingDamage(Props);
	}

	if (Data.EvaluatedData.Attribute == GetIncomingXPAttribute())
	{
		HandleIncomingXP(Props);
	}

	if (Data.EvaluatedData.Attribute == GetIncomingGoldAttribute())
	{
		HandleIncomingGold(Props);
	}
	
	
	
}
void UAttributeSetBase::HandleIncomingDamage(const FEffectProperties& Props)
{
	
	const float LocalIncomingDamage = GetIncomingDamage();
	SetIncomingDamage(0.f);
		
	if (LocalIncomingDamage > 0.f)
	{
		NotifyDamageInstigator(Props.TargetAvatarActor, Props.SourceAvatarActor);

		const float NewHealth = GetHealth() - LocalIncomingDamage;
		SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));
		const bool bFatal = NewHealth <= 0.f;

		if (bFatal)
		{
			if(Props.TargetAvatarActor->Implements<UCombatInterface>())
			{
				//죽었을 때 한번만 경험치 전달
				if(!ICombatInterface::Execute_IsDead(Props.TargetAvatarActor))
				{
					SendXPEvent(Props);
					SendGoldEvent(Props);
					SendBuffEffect(Props);
					AddTeamScore(Props);
				}
				ICombatInterface::Execute_Die(Props.TargetAvatarActor);
	
			}
			
			FGameplayTagContainer TagContainer;
			TagContainer.AddTag(FGameplayTagsBase::Get().Effects_DieReact);
			Props.TargetASC->TryActivateAbilitiesByTag(TagContainer);
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

		if (UBlueprintFunctionLibraryBase::GetIsDebuffValid(Props.EffectContextHandle))
		{
			Debuff(Props);
		}
		
	}
}

void UAttributeSetBase::HandleIncomingXP(const FEffectProperties& Props)
{
	const float LocalIncomingXP = GetIncomingXP();
	SetIncomingXP(0.f);

	
	if (Props.SourceCharacter->Implements<UPlayerInterface>() && Props.SourceCharacter->Implements<UCombatInterface>())
	{
		const int32 CurrentLevel = ICombatInterface::Execute_GetPlayerLevel(Props.SourceCharacter);
		const int32 CurrentXP = IPlayerInterface::Execute_GetXP(Props.SourceCharacter);
		const int32 NewLevel = IPlayerInterface::Execute_FindLevelForXP(Props.SourceCharacter, CurrentXP + LocalIncomingXP);
		const int32 NumLevelUps = NewLevel - CurrentLevel;
		if (NumLevelUps > 0)
		{
			
			IPlayerInterface::Execute_AddToPlayerLevel(Props.SourceCharacter, NumLevelUps);
			IPlayerInterface::Execute_AddToSpellPoints(Props.SourceCharacter, NumLevelUps);
			IPlayerInterface::Execute_LevelUp(Props.SourceCharacter);
		}
	}
		
	if (Props.SourceCharacter->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_AddToXP(Props.SourceCharacter, LocalIncomingXP);
	}
}

void UAttributeSetBase::HandleIncomingGold(const FEffectProperties& Props)
{
	if(Props.SourceCharacter == nullptr) return;
	
	const float LocalIncomingGold = GetIncomingGold();
	SetIncomingGold(0.f);
		
	if (Props.SourceCharacter->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_AddToGold(Props.SourceCharacter, LocalIncomingGold);
	}
	

}

void UAttributeSetBase::Debuff(const FEffectProperties& Props)
{
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	FGameplayEffectContextHandle EffectContext = Props.SourceASC->MakeEffectContext();
	EffectContext.AddSourceObject(Props.SourceAvatarActor);

	const FGameplayTag DebuffType = UBlueprintFunctionLibraryBase::GetDebuffType(Props.EffectContextHandle);
	const float DebuffCoefficient = UBlueprintFunctionLibraryBase::GetDebuffCoefficient(Props.EffectContextHandle);
	const float DebuffDuration = UBlueprintFunctionLibraryBase::GetDebuffDuration(Props.EffectContextHandle);
	const float DebuffFrequency = UBlueprintFunctionLibraryBase::GetDebuffFrequency(Props.EffectContextHandle);

	if(Props.SourceAvatarActor->Implements<UCombatInterface>())
	{
		ICombatInterface::Execute_ApplyDebuffEffect(Props.TargetAvatarActor, DebuffType, DebuffCoefficient, DebuffDuration, DebuffFrequency);
	}
	

}

void UAttributeSetBase::SendBuffEffect(const FEffectProperties& Props)
{
	
	// 죽었을 때 버프몬스터라면
	if (Props.TargetCharacter && Props.TargetCharacter->Implements<UBuffMonsterInterface>())
	{
		// 버프몬스터를 죽인 플레이어에게 버프 전달
		if (Props.SourceCharacter || Props.SourceCharacter->Implements<UPlayerInterface>())
		{
			if (UAbilitySystemComponentBase* PlayerASCBase = Cast<UAbilitySystemComponentBase>(Props.SourceASC))
			{
				TArray<TSubclassOf<UGameplayEffect>> Buffs = IBuffMonsterInterface::Execute_GetBuffEffect(Props.TargetCharacter);
				for(TSubclassOf<UGameplayEffect> Buff : Buffs)
				{
					PlayerASCBase->ApplyBuffEffectToSelf(Buff);
				}
			}
		}
	}
}

/*
 * 무적상태이거나 attribute를 update 할 수 없을 때 return함.
 */
bool UAttributeSetBase::bIsNeedToUpdateAttribute(const FEffectProperties& Props)
{
	if(Props.TargetCharacter == nullptr) return false;
	if(!Props.TargetCharacter->Implements<UCombatInterface>()) return false;

	
	/* 사망시에 리턴 */
	if(ICombatInterface::Execute_IsDead(Props.TargetCharacter))
	{
		SetHealth(0.f);
		SetMana(0.f);
		return false;
	}

	return true;
}

void UAttributeSetBase::AddTeamScore(const FEffectProperties& Props)
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();


	// 킬 대상과 데스 데상이 둘 다 플레이어일 경우 게임스코어에 영향을 미침
	if(Props.SourceCharacter->ActorHasTag("Player") && Props.TargetCharacter->ActorHasTag("Player"))
	{
		if(Props.SourceCharacter->Implements<UGameRuleInterface>())
		{
			FGameplayTag TeamName = IGameRuleInterface::Execute_GetTeamName(Props.SourceCharacter);

			if(ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(GetWorld())))
			{
				CoreGameState->ServerAddTeamScore(TeamName, true);
				return;
			}
		}
	}

	// 데스 데상이 플레이어일 경우 게임스코어에 영향을 미치지 않으나 사망 사운드는 재생
	if(Props.TargetCharacter->ActorHasTag("Player"))
	{
		if(Props.TargetCharacter->Implements<UGameRuleInterface>())
		{
			FGameplayTag TeamName = IGameRuleInterface::Execute_GetTeamName(Props.TargetCharacter);

			if(ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(GetWorld())))
			{
				
				if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_BlueTeam))
				{
					CoreGameState->ServerAddTeamScore(TagsBase.GameRule_TeamName_RedTeam, false);
				}
				else
				{
					CoreGameState->ServerAddTeamScore(TagsBase.GameRule_TeamName_BlueTeam, false);
				}
				
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

void UAttributeSetBase::ShowGoldAmountText(const FEffectProperties& Props, AActor* SourceActor, float GoldAmount) const
{
	if (SourceActor != Props.TargetCharacter)
	{
		if (ACharacter* SourceCharacter = Cast<ACharacter>(SourceActor))
		if(AMyPlayerController* PC = Cast<AMyPlayerController>(SourceCharacter->Controller))
		{
			PC->ShowGoldAmount(GoldAmount, Props.TargetCharacter);
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

// 공격자가 플레이어 일 때 노티파이
void UAttributeSetBase::NotifyDamageInstigator(AActor* DamagedActor, AActor* Instigator)
{

	if (Instigator->ActorHasTag("Player"))
	{
		OnIncomingDamageDelegate.Broadcast(Instigator);
	}
	
}



void UAttributeSetBase::SendXPEvent(const FEffectProperties& Props)
{
	if(Props.TargetCharacter == nullptr) return;
	
	UWorld* World = Props.TargetCharacter->GetWorld();
	if (!World) return;
	
	FVector ActorLocation = Props.TargetCharacter->GetActorLocation();
	TArray<FOverlapResult> Overlaps;

	// 일정 범위 내에서 적 플레이어 탐색 (구체 형태의 충돌 탐지)
	FCollisionShape Sphere = FCollisionShape::MakeSphere(1500.0f); // 범위는 상황에 따라 조정

	World->OverlapMultiByChannel(Overlaps, ActorLocation, FQuat::Identity, ECC_Pawn, Sphere);

	/*
	 *  사망 시에 사망 캐릭터로 부터 Sphere 반경 내에 있는 적 플레이어 탐지하여 OverlapActors에 저장
	 */
	TArray<TObjectPtr<AActor>> OverlapActors;
	for (FOverlapResult& Overlap : Overlaps)
	{
		if (Overlap.GetActor()->ActorHasTag("Player") && !UBlueprintFunctionLibraryBase::IsFriends(Overlap.GetActor(), Props.TargetCharacter))
		{
			OverlapActors.Add(Overlap.GetActor());
		}
	}

	/*
	 *  탐지된 적 플레이어들에게 경험치 전달
	 *  ex1)  경험치 100 적플레이어 1명 = 100 전달
	 *  ex2)  경험치 100 적 플레이어 2명 = 50 전달
	 */
	
	for(AActor* EnemyPlayer : OverlapActors)
	{
		if(Props.TargetCharacter->Implements<UCombatInterface>())
		{
			int32 OverlapNum = OverlapActors.Num();
			const int32 TargetLevel = ICombatInterface::Execute_GetPlayerLevel(Props.TargetCharacter);
			const ECharacterClass TargetClass = ICombatInterface::Execute_GetCharacterClass(Props.TargetCharacter);
			const int32 XPReward = UBlueprintFunctionLibraryBase::GetXPRewardForClassAndLevel(Props.TargetCharacter, TargetClass, TargetLevel);
			const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
			FGameplayEventData Payload;
			Payload.EventTag = GameplayTags.Attributes_Meta_IncomingXP;

			// 경험치를 나눠가질 경우 1명당 25%의 추가 경험치를 부여하고 사람수에 따라 나눔
			Payload.EventMagnitude = OverlapActors.Num() > 1 ? (XPReward + (XPReward * (0.25 * OverlapNum)))/OverlapNum : XPReward;
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(EnemyPlayer, GameplayTags.Attributes_Meta_IncomingXP, Payload);
		}
		
	}

	
}



void UAttributeSetBase::SendGoldEvent(const FEffectProperties& Props)
{
	if(Props.TargetCharacter == nullptr || Props.SourceAvatarActor == nullptr) return;

	// 공격자와 피격자 모두 플레이어라면 어시스트 로직 활용하여 gold Event 발생
	// 피격자가 포탑이라면 어시스트 로직 활용하여 gold Event 발생
	if (Props.TargetCharacter->ActorHasTag("Player"))
	{
		const ECharacterClass TargetClass = ICombatInterface::Execute_GetCharacterClass(Props.TargetCharacter);
		const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
		const int32 GoldReward = UBlueprintFunctionLibraryBase::GetGoldRewardForClassAndLevel(Props.TargetCharacter, TargetClass);
		
		const TArray<AActor*> SourcePlayers = ICombatInterface::Execute_GetAllAttackers(Props.TargetCharacter);
		
		// 마지막 타격자라면 골드를 온전히 가져가고 나머지 플레이어는 (골드/타겟 플레이어 수) 만큼 가져감
		for (AActor* Source : SourcePlayers)
		{
			FGameplayEventData Payload;
			Payload.EventTag = GameplayTags.Attributes_Meta_IncomingGold;
			Payload.EventMagnitude = Source == Props.SourceAvatarActor? GoldReward : GoldReward / SourcePlayers.Num();
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Source, GameplayTags.Attributes_Meta_IncomingGold, Payload);
			ShowGoldAmountText(Props, Source, Payload.EventMagnitude);
		}
		
		return;
	}

	
	// 공격자가 플레이어일 때만 send gold event 발생
	if(Props.TargetCharacter->Implements<UCombatInterface>() && Props.SourceAvatarActor->Implements<UPlayerInterface>())
	{
		const ECharacterClass TargetClass = ICombatInterface::Execute_GetCharacterClass(Props.TargetCharacter);
		const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
		const int32 GoldReward = UBlueprintFunctionLibraryBase::GetGoldRewardForClassAndLevel(Props.TargetCharacter, TargetClass);
		FGameplayEventData Payload;
		Payload.EventTag = GameplayTags.Attributes_Meta_IncomingGold;
		Payload.EventMagnitude = GoldReward;
		
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Props.SourceAvatarActor, GameplayTags.Attributes_Meta_IncomingGold, Payload);
		ShowGoldAmountText(Props, Props.SourceAvatarActor, GoldReward);
		
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

void UAttributeSetBase::OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, HealthRegeneration, OldHealthRegeneration);
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

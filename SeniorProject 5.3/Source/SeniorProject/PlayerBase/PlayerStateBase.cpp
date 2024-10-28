// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateBase.h"

#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/Character/Player/MyCharacter.h"

APlayerStateBase::APlayerStateBase()
{
	bReplicates = true;
	
	TeamName = FGameplayTagsBase::Get().GameRule_TeamName_NONE;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");

	NetUpdateFrequency = 100.0f;
	
}

void APlayerStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(APlayerStateBase, Level);
	DOREPLIFETIME(APlayerStateBase, XP);
	DOREPLIFETIME(APlayerStateBase, Gold);
	DOREPLIFETIME(APlayerStateBase, SpellPoints);
	DOREPLIFETIME(APlayerStateBase, TeamName);
	DOREPLIFETIME(APlayerStateBase, PlayerCharacterClass);
	DOREPLIFETIME(APlayerStateBase, GameProcess);
	
}

void APlayerStateBase::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);
	APlayerStateBase* MyPlayerState = Cast<APlayerStateBase>(PlayerState);
	if (MyPlayerState)
	{
		MyPlayerState->GameProcess = GameProcess;
		MyPlayerState->TeamName = TeamName;
		MyPlayerState->LobbyCharacterClass = LobbyCharacterClass;
		MyPlayerState->PlayerCharacterClass = PlayerCharacterClass;
	}

}

UAbilitySystemComponent* APlayerStateBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void APlayerStateBase::BroadcastPlayerStat() const
{
	OnXPChangedDelegate.Broadcast(XP);
	OnLevelChangedDelegate.Broadcast(Level);
	OnGoldChangedDelegate.Broadcast(Gold);
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}


void APlayerStateBase::AddToXP(int32 InXP)
{
	XP += InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::AddToLevel(int32 InLevel)
{
	Level += InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::AddToGold(int32 InGold)
{
	Gold += InGold;
	OnGoldChangedDelegate.Broadcast(Gold);
}

void APlayerStateBase::AddToSpellPoints(int32 InPoints)
{
	SpellPoints += InPoints;
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}

void APlayerStateBase::SetXP(int32 InXP)
{
	XP = InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::SetLevel(int32 InLevel)
{
	Level = InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::SetGold(int32 InGold)
{
	InGold = Gold;
	OnGoldChangedDelegate.Broadcast(Gold);
}

void APlayerStateBase::SetSpellPoints(int32 InPoints)
{
	SpellPoints = InPoints;
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);

}

void APlayerStateBase::SetIsInShop(bool InbIsInShop)
{
	bIsInShop = InbIsInShop;
	ChangedShopCustomer.Broadcast(bIsInShop);
}

void APlayerStateBase::SetPlayerCharacterClass(UClass* InPlayerCharacterClass)
{
	PlayerCharacterClass = InPlayerCharacterClass->GetClass();
}


void APlayerStateBase::OnRep_Level(int32 OldLevel)
{
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::OnRep_XP(int32 OldXP)
{
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::OnRep_Gold(int32 OldSpellPoints)
{
	OnGoldChangedDelegate.Broadcast(Gold);
}

void APlayerStateBase::OnRep_SpellPoints(int32 OldSpellPoints)
{
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreSoundInstance.h"
#include "CoreSoundManager.h"
#include "SeniorProject/GamePlayTagsBase.h"

void UCoreSoundInstance::Init()
{
	Super::Init();

	InitializeSoundManagers();
}

void UCoreSoundInstance::Shutdown()
{
	Super::Shutdown();
	CleanUpSoundManager();
}

void UCoreSoundInstance::CleanUpSoundManager()
{
	for (auto& Elem : SoundInstances)
	{
		if (Elem.Value!= nullptr)
		{
			Elem.Value->RemoveFromRoot();  // GC 해제 준비
			Elem.Value->ClearGarbage();  // TObjectPtr 포인터 초기화
		}
	}

	SoundInstances.Empty();  // 맵 비우기
}


/* 블루팀과 레드팀의 사운드 매니저 생성 */
void UCoreSoundInstance::InitializeSoundManagers()
{
	UCoreSoundManager* BlueTeamSoundManager = NewObject<UCoreSoundManager>(this, CoreSoundManagerBPClass);
	BlueTeamSoundManager->AddToRoot();  // GC 방지
	SoundInstances.Add(FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam, BlueTeamSoundManager);

	UCoreSoundManager* RedTeamSoundManager = NewObject<UCoreSoundManager>(this, CoreSoundManagerBPClass);
	RedTeamSoundManager->AddToRoot(); // GC 방지
	SoundInstances.Add(FGameplayTagsBase::Get().GameRule_TeamName_RedTeam, RedTeamSoundManager);

	if(BlueTeamSoundManager != nullptr && RedTeamSoundManager != nullptr)
	{
		BlueTeamSoundManager->InitializeSoundManager();
		RedTeamSoundManager->InitializeSoundManager();
	}
}

UCoreSoundManager* UCoreSoundInstance::GetCoreSoundManager(FGameplayTag TeamType)
{
	if (TObjectPtr<UCoreSoundManager>* FoundManager = SoundInstances.Find(TeamType))
	{
		return FoundManager->Get();
	}
	
	return nullptr;
}



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
	
	SoundInstances->RemoveFromRoot();  // GC 해제 준비
	SoundInstances->ClearGarbage();  // TObjectPtr 포인터 초기화

}


/* 블루팀과 레드팀의 사운드 매니저 생성 */
void UCoreSoundInstance::InitializeSoundManagers()
{
	SoundInstances = NewObject<UCoreSoundManager>(this, CoreSoundManagerBPClass);
	

	if(SoundInstances != nullptr)
	{
		SoundInstances->InitializeSoundManager();
	}
}

UCoreSoundManager* UCoreSoundInstance::GetCoreSoundManager()
{
	return SoundInstances;
}



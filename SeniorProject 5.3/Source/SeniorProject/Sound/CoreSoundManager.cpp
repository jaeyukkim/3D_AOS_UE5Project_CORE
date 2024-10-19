// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreSoundManager.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"



void UCoreSoundManager::PlayTeamSound(EGamePlaySoundType SoundType)
{
	// TMap에서 해당 사운드 타입의 SoundCue를 찾음
	if (const TObjectPtr<USoundCue>* FoundSound = GamePlaySounds.Find(SoundType))
	{
		// 유효한 사운드가 있을 경우 재생
		if (FoundSound != nullptr)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), FoundSound->Get());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SoundCue is null or invalid"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SoundCue is null or invalid"));
	}
}

void UCoreSoundManager::InitializeSoundManager()
{
	if(!PlayingAnnouncerSound.IsBound())
		PlayingAnnouncerSound.AddDynamic(this, &UCoreSoundManager::PlayTeamSound);
	
}
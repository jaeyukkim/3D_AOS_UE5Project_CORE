// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CoreSoundInstance.generated.h"

class UCoreSoundManager;
/**
 * 
 */
UCLASS(BlueprintType)
class SENIORPROJECT_API UCoreSoundInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;  // GameInstance 초기화 함수
	virtual void Shutdown() override;

	void CleanUpSoundManager();
	
	// 전역적으로 사용할 사운드 매니저 반환 함수
	UCoreSoundManager* GetCoreSoundManager();


	// 팀별 사운드 매니저 저장소
	UPROPERTY()
	TObjectPtr<UCoreSoundManager> SoundInstances;

	
	// CoreSoundManager의 블루프린트 클래스 참조
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<UCoreSoundManager> CoreSoundManagerBPClass;

	void InitializeSoundManagers();  // 사운드 매니저 초기화 함수
	
};


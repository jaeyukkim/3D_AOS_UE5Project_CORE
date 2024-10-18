// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

ATurret::ATurret()
{
	Tags.Add(TEXT("Turret"));
	
}


void ATurret::BeginPlay()
{
	Super::BeginPlay();
	

	RegisterWithGameMode();

	// 포탑의 기본은 무적상태이되 첫번째 포탑은 무적이아님
	bIsInvincibility = true;
	
	if(HasAuthority() && TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
	{
		bIsInvincibility = false;
	}
	
}

/*
 *  서버에서만 실행됨.
 */
void ATurret::RegisterWithGameMode()
{
	
	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		// 게임 모드에 자신을 등록
		GameMode->OnTurretSpawned(this);
		GameMode->UpdateMinionTargets.AddDynamic(this, &ATurret::UpdateTurretState);
		
	
	}
}

/* 포탑이 파괴되었을 때 실행되는 함수이고 다음 지정 포탑이면 무적 해제 */
void ATurret::UpdateTurretState()
{
	if(!HasAuthority()) return;

	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		FGameplayTag InTurretLevelTag = GameMode->GetValidTargetTurret(TeamName, LineTag);

		if(TurretLevelTag.MatchesTagExact(InTurretLevelTag))
			bIsInvincibility = false;
	}
}

void ATurret::Die_Implementation()
{
	if(HasAuthority())
	{
		OnTurretDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
	}
	Super::Die_Implementation();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"


#include "Net/UnrealNetwork.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/AI/AIControllerBase.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/Sound/CoreSoundInstance.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/Sound/CoreSoundManager.h"

ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Tags.Add(TEXT("Turret"));


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	SpringArm->TargetArmLength = 1000.0f;
	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	Camera->SetupAttachment(SpringArm);

	TargetingBeam = CreateDefaultSubobject<UParticleSystemComponent>("TargetingBeam");
	TargetingBeam->SetupAttachment(GetRootComponent());
	TargetingBeam->bAutoActivate = false;

	AttackBeam = CreateDefaultSubobject<UParticleSystemComponent>("AttackBeam");
	AttackBeam->SetupAttachment(GetRootComponent());
	AttackBeam->bAutoActivate = false;
	
	bIsInvincibility = true;

	PerceptionSystem = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	Sight->SightRadius = DetectRadius;
	Sight->LoseSightRadius = DetectRadius;
	//전 방향 감지
	Sight->PeripheralVisionAngleDegrees = 360.0f;

	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectFriendlies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = true;

	PerceptionSystem->ConfigureSense(*Sight);
	PerceptionSystem->SetDominantSense(Sight->GetSenseImplementation());
	
}


void ATurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATurret, bIsUnderAttacked);

}

void ATurret::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
}



void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
	ServerRegisterWithGameMode();
	

	if(HasAuthority())
	{
		if (const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetIncomingDamageAttribute()).AddLambda(
				[this, AS](const FOnAttributeChangeData& Data)
				{
					MulticastTurretUnderAttackedSound();
					ServerSetIsUnderAttacked();
				}
			);
	
		}

		PerceptionSystem->OnPerceptionUpdated.AddDynamic(this, &ATurret::DetectEnemyMinion);
	}
	
	
	
}

void ATurret::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if(CombatTarget == nullptr)
	{
		if(AttackBeam->IsActive())
		{
			AttackBeam->DeactivateImmediate();
		}
		
		return;
	}
	
	FVector SourcePoint = GetMesh()->GetSocketLocation(WeaponTipSocketName);
	FVector TargetPoint = CombatTarget->GetActorLocation();
			
	TargetingBeam->SetBeamSourcePoint(0, SourcePoint, 0);
	TargetingBeam->SetBeamTargetPoint(0, TargetPoint, 0);
	AttackBeam->SetBeamSourcePoint(0, SourcePoint, 0);
	AttackBeam->SetBeamTargetPoint(0, TargetPoint, 0);

}

void ATurret::InitializeDefaultAttributes() const
{
	Super::InitializeDefaultAttributes();
}




void ATurret::ServerRegisterWithGameMode_Implementation()
{
	if(!HasAuthority()) return;

	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	if(!CoreGameState) return;

	
	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		// 게임 모드에 자신을 등록
		GameMode->OnTurretSpawned(this);
		GameMode->UpdateMinionTargets.AddDynamic(this, &ATurret::ServerUpdateTurretState);
		
		if(TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
			bIsInvincibility = false;
		GetWorldTimerManager().ClearTimer(TurretInitTimerHandle);

	}
	
}


/*
 * 포탑이 파괴되었을 때 실행되는 함수이고 다음 지정 포탑이면 무적 해제
 *  GetValidTargetTurret은 다음 상태 타워의 태그를 반환하는 함수이고
 *  파라미터로 상대팀 팀 네임을 전달하면 아군 타워의 다음 타워를 반환
 */
void ATurret::ServerUpdateTurretState_Implementation()
{
	if(!HasAuthority()) return;


	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if (ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(GetWorld())))
	{
		FGameplayTag InTurretLevelTag = TagsBase.GameRule_TeamName_NONE;
		
		if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_BlueTeam))
		{
			InTurretLevelTag = CoreGameState->GetValidTargetTurret(TagsBase.GameRule_TeamName_RedTeam, LineTag);
		}
		else if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_RedTeam))
		{
			InTurretLevelTag = CoreGameState->GetValidTargetTurret(TagsBase.GameRule_TeamName_BlueTeam, LineTag);
		}
		
		if(TurretLevelTag.MatchesTagExact(InTurretLevelTag))
			bIsInvincibility = false;

	
	}
}

void ATurret::ServerSetIsUnderAttacked_Implementation()
{
	bIsUnderAttacked = true;
	GetWorld()->GetTimerManager().SetTimer(HitReactTimerHandle, FTimerDelegate::CreateLambda([this]() ->
	void
	{
		bIsUnderAttacked = false;
	}), HitReactLoopTime, false);
}


void ATurret::MulticastTurretUnderAttackedSound_Implementation()
{
	
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	UCoreSoundInstance* GameInstance = Cast<UCoreSoundInstance>(GetGameInstance());
	if(GameInstance == nullptr) return;

	
	UCoreSoundManager* CoreSoundManager =  GameInstance->GetCoreSoundManager();
	FGameplayTag LocalPlayerTeam = FGameplayTag();
	
	if(CoreSoundManager == nullptr) return;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController != nullptr)
	{
		if(APlayerStateBase* PlayerStateBase = PlayerController->GetPlayerState<APlayerStateBase>())
		{
			LocalPlayerTeam = PlayerStateBase->GetTeamName();
		}
	}
	
	
	if(TeamName.MatchesTagExact(LocalPlayerTeam))
	{
		
		if(TurretLevelTag == TagsBase.GameRule_Turret_Inhibitor)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyInhibitorUnderAttack);
		}
		else if (TurretLevelTag == TagsBase.GameRule_Turret_Nexus)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyCoreUnderAttack);
		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyTowerUnderAttack);
		}
	}

	
}



void ATurret::Die_Implementation()
{
	if(HasAuthority())
	{
		OnTurretDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
		
	}
	
	MulticastPlayTowerDestroyedSound();
	
	
	Super::Die_Implementation();
}



// 상대 팀 미니언이 감지되었을 시 타워의 방어력을 낮추는 로직.
void ATurret::DetectEnemyMinion(const TArray<AActor*>& UpdatedActors)
{
	if (!HasAuthority()) return;
	
	int32 DetectedMonsterCount = 0;
	for (AActor* InActor : UpdatedActors)
	{
		if (InActor != nullptr && InActor->ActorHasTag("Minion") && !UBlueprintFunctionLibraryBase::IsFriends(this, InActor))
		{
			DetectedMonsterCount++;
		}
	}

	if (UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
		if (DetectedMonsterCount > 0)
		{
			// 시야 내에 미니언이 감지 되면 원래 방어력으로 설정
			AS->SetArmor(AS->Armor.GetBaseValue());
			AS->SetMagicResistance(AS->MagicResistance.GetBaseValue());
		}
		else
		{
			// 시야 내에 상대 미니언이 1마리도 없을 시에 타워 방어력 10배증가
			AS->Armor.SetCurrentValue(AS->Armor.GetBaseValue() * 10.f);
			AS->MagicResistance.SetCurrentValue(AS->MagicResistance.GetBaseValue() * 10.f);
		}
		
	}
}


void ATurret::MulticastHandleDeath()
{
	AttackBeam->DeactivateImmediate();
	TargetingBeam->DeactivateImmediate();

	
	GetWorldTimerManager().SetTimer(ExplosionTimerHandle, FTimerDelegate::CreateLambda([this]()
	{
		GetMesh()->SetVisibility(false);
		
	}), ExplosionTime ,false);
	
	Super::MulticastHandleDeath();
}


EBlackboardNotificationResult ATurret::OnBlackboardTargetChanged(const UBlackboardComponent& BlackboardComp,
                                                                 FBlackboard::FKey KeyID)
{
	Super::OnBlackboardTargetChanged(BlackboardComp, KeyID);
	
	OnTargetChanged.Broadcast();
	if(HasAuthority())
	{
		MulticastActiveTargetBeam(CombatTarget);
	}
	
	return EBlackboardNotificationResult::ContinueObserving;
}



void ATurret::MulticastActiveTargetBeam_Implementation(AActor* TargetActor)
{
	if(TargetActor != nullptr)
	{
		if(!TargetingBeam->IsActive())
		{
			TargetingBeam->Activate();
		}
	}
	else
	{
		TargetingBeam->Deactivate();
		AttackBeam->DeactivateImmediate();
	}
}


void ATurret::MulticastActiveAttackBeam_Implementation()
{
	AttackBeam->Activate();
}



/*
 *  각자 팀에 맞는 사운드 재생
 *  아군 타워면 아군 타워 파괴 사운드 재생
 *  적군 타워면 적군 타워 파괴 사운드 재생
 */

void ATurret::MulticastPlayTowerDestroyedSound_Implementation()
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	UCoreSoundInstance* GameInstance = Cast<UCoreSoundInstance>(GetGameInstance());
	if(GameInstance == nullptr) return;

	
	
	UCoreSoundManager* CoreSoundManager =  GameInstance->GetCoreSoundManager();
	FGameplayTag LocalPlayerTeam = FGameplayTag();
	
	if(CoreSoundManager == nullptr) return;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController != nullptr)
	{
		if(APlayerStateBase* PlayerStateBase = PlayerController->GetPlayerState<APlayerStateBase>())
		{
			LocalPlayerTeam = PlayerStateBase->GetTeamName();
		}
	}
	
	
	if(TeamName.MatchesTagExact(LocalPlayerTeam))
	{
		if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus) return;
		
		if(TurretLevelTag == TagsBase.GameRule_Turret_Inhibitor)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyInhibitorDestroyed);
		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyTowerDestroyed);
		}
	}

	else
	{
		if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus) return;
		
		if(TurretLevelTag == TagsBase.GameRule_Turret_Inhibitor)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::EnemyInhibitorDestroyed);

		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::EnemyTowerDestroyed);

		}
	}

	
}




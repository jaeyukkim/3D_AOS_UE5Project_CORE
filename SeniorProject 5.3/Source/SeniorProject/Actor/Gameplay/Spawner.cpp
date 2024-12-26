

#include "Spawner.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "SeniorProject/AbilitySystem/Data/SpawnerDataAsset.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/Character/Enemy/NeutralityMonster.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box");
	SetRootComponent(BoxComponent);
	StaticMesh->SetupAttachment(BoxComponent);

	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("LevelUpParticleComponent");
	ParticleComponent->SetupAttachment(GetRootComponent());
	ParticleComponent->bAutoActivate = false;
	
}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	if (!HasAuthority()) return;

	AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(this));
	if (MyGameModeBase == nullptr) return;
	
	USpawnerDataAsset* SpawnerData = MyGameModeBase->SpawnerDataAsset;
	checkf(SpawnerData, TEXT("SpawnParticle Not Setting In GameMode"));

	FMonsterSpawnData MonsterSpawnData = SpawnerData->FindMonsterSpawnData(SpawnerType);
	MobEnforceTimeInterval = MyGameModeBase->SpawnerDataAsset->MobEnforceTimeInterval;
	SpawnParticle = MonsterSpawnData.SpawnParticle;
	ParticleComponent->SetTemplate(SpawnParticle);
	SpawnTimeInterval = MonsterSpawnData.SpawnTimeInterval;
	InitialSpawnTime = MonsterSpawnData.InitialSpawnTime;
	
	switch (SpawnerType)
	{
		case ECharacterClass::Minion:
			GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ASpawner::SpawnMinion,InitialSpawnTime, false);
			break;
		default:
			MonsterClass = MonsterSpawnData.MonsterClass;
			GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ASpawner::SpawnBuff,InitialSpawnTime, false);
			break;
	}
	
	
}


void ASpawner::Spawn(TSubclassOf<AMinions> Minions)
{
	if(!HasAuthority()) return;
	
	MulticastSpawnParticles();

	FVector Location = GetActorLocation()+FVector(0.f, 0.f, 50.f);	//바닥안에 생성되는거 방지
	FTransform SpawnTransform = FTransform(Location);

	//MinionEnforceTime 경과에 따라 미니언 레벨 증가 최대 18 레벨까지만
	int32 MinionLevel = FMath::Clamp(GetWorld()->GetTimeSeconds()/MobEnforceTimeInterval, 1, 18); // 최대 60%로 제한
	
	if (AMinions* NewMinion = GetWorld()->SpawnActorDeferred<AMinions>(Minions, SpawnTransform))
	{
		NewMinion->LineTag = LineTag;
		NewMinion->TeamName = TeamName;
		NewMinion->Level = MinionLevel;
		UGameplayStatics::FinishSpawningActor(NewMinion, SpawnTransform);
	}
	
}

void ASpawner::SpawnBuff()
{
	AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(this));
	if (MyGameModeBase == nullptr || !HasAuthority()) return;

	
	
	MulticastSpawnParticles();
	FVector Location = GetActorLocation();
	FTransform SpawnTransform = FTransform(Location);
	
	if(ANeutralityMonster* BuffMonster = GetWorld()->SpawnActorDeferred<ANeutralityMonster>(MonsterClass, SpawnTransform))
	{
		//MinionEnforceTime 경과에 따라 미니언 레벨 증가 최대 18 레벨까지만
		int32 BuffLevel = FMath::Clamp(GetWorld()->GetTimeSeconds()/MobEnforceTimeInterval, 1, 18); // 최대 60%로 제한
		BuffMonster->Level = BuffLevel;
		UGameplayStatics::FinishSpawningActor(BuffMonster, SpawnTransform);

		
		BuffMonster->BuffDeadDelegate.AddLambda([this]()
		{
			// 버프 몬스터가 죽으면 SpawnTimeInterval초 후 SpawnBuff()를 실행하는 타이머 설정
			GetWorldTimerManager().SetTimerForNextTick([this]()
			{
				FTimerHandle TimerHandle;
				GetWorldTimerManager().SetTimer(TimerHandle, this, &ASpawner::SpawnBuff, SpawnTimeInterval, false);
			});
		});
	}
		
	
}

void ASpawner::SpawnMinion()
{
	if(!HasAuthority()) return;
	
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	if(CoreGameState == nullptr) return;

	// 공성미니언 주기 카운터 증가
	SiegeMinionSpawnCount++;
	
	// 억제기가 파괴되었는지 확인합니다.
	if (CoreGameState->IsInhibitorDestroyed(TeamName, LineTag))
	{
		// 억제기가 파괴되었다면, 해당 스포너에 슈퍼 미니언을 생성하도록 지시합니다.
		bSpawnSuperMinion = true;
	}
	else if (SiegeMinionSpawnCount % SiegeMinionSpawnCycle == 0)
	{
		// SiegeMinionSpawnCycle 주기에 따라 공성 미니언을 생성합니다.
		bSpawnSiegeMinion = true;
	}
	
	OnMinionSpawn.Broadcast();
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ASpawner::SpawnMinion,SpawnTimeInterval, false);

}


void ASpawner::MulticastSpawnParticles_Implementation() const
{
	if(IsValid(ParticleComponent))
		ParticleComponent->Activate(true);
}

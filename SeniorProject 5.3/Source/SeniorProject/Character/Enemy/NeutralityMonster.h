// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/Interface/BuffMonsterInterface.h"
#include "NeutralityMonster.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE(FOnBuffDeadDelegate);

class UAIPerceptionComponent;
class UAISenseConfig_Sight;

UCLASS(Abstract, Blueprintable)
class SENIORPROJECT_API ANeutralityMonster : public AMinions, public IBuffMonsterInterface
{
	GENERATED_BODY()

public:
	ANeutralityMonster();
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;
	virtual void MulticastHandleDeath() override;
	virtual void Die_Implementation() override;
	
	UFUNCTION()
	void DetectEnemyPlayer(const TArray<AActor*>& Actors);
	
	// 버프 GameplayEffect 클래스를 반환하는 함수
	virtual TArray<TSubclassOf<UGameplayEffect>> GetBuffEffect_Implementation() override;
	
	void OutCombatState();
	void BindCombatState();
	void Regeneration();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UAIPerceptionComponent> PerceptionSystem;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<class UAISenseConfig_Sight> Sight;
	FOnBuffDeadDelegate BuffDeadDelegate;

protected:
	// 버프 이펙트, 버프 몬스터는 블루프린트에서 필히 설정해야함
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<TSubclassOf<UGameplayEffect>> BuffEffect;
	
	virtual void SaveAttacker(AActor* Attacker) override;
private:
	
	FTimerHandle CombatTimerHandle;
	FTimerHandle RegenerationTimerHandle;

	
	const float CombatForgetTime = 8.f;	//타겟을 잃는 시간
	const float DetectRadius = 2000.f;	//몬스터 감지 반경
	const float RegenerationPeriod = 0.25f;	//체력 리젠 주기
	const float RegenerationRate = 0.1f;	//체력리젠률 RegenerationPeriod 마다 최대 체력의 이 변수 %만큼 체력 화복 0.1이면 10프로

};

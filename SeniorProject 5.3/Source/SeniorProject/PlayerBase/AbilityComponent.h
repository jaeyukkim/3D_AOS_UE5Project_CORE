// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent.generated.h"

//Kwang 캐릭터의 스킬 컴포넌트

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SENIORPROJECT_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilityComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	

	void UnHideKwangSwords();
	void HideKwangSwords();


	void AbilityRangeTrace();	//스킬 범위 지정
	void Q_Ability();	//스킬 실행
	void Q_Ability_NoWep();	//검이 없을 때 스킬 실행
	bool Ability_Q_IsActive();		//범위지정중인가 판단하는 값
	void Attack_Q_Ability();	//	공격 및 데미지처리 수행
	void StartColdown_Q_Ability();	//쿨다운 시작

	void MoveToSwordLocation();	//검이 없을 때 궁극기시전시 검 위치로 이동

	void R_Ability();	//궁극기 스킬 실행
	void R_Ability_NoWep();	//검이 없을 때 궁극기 스킬
	void Attack_R_Ability();		//공격판정 및 데미지처리 수행
	void StartColdown_R_Ability();		//쿨다운 시작


	void RMB_Ability();		//스킬 실행
	void RMB_NoWep_Ability();	//검이 없을 때 스킬 실행
	void Attack_RMB_Ability();	//공격 판정과 데미지처리
	void Attack_RMB_Ability_NoWep();	//검이 없을 때 공격판정과 데미지처리
	void StartColdown_RMB_Ability();	//쿨다운 시작


	bool GetIsActiveRangeTrace();	//Q스킬 범위지정 데칼이 켜져있는가 부울값

private:
	UPROPERTY()
		UStaticMeshComponent* SwordMeshComponent;
	UPROPERTY()
		UStaticMesh* KwangSwordMesh;
	UPROPERTY()
		AStaticMeshActor* KwangSword;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UParticleSystem* Q_Effect;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_Q_Throw_Montage;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_Q_Catch_Montage;

		USoundCue* Q_Attack_Cue;
		USoundCue* RMB_Attack_Cue;


	UPROPERTY(EditAnywhere, Category = "Q_Ability")
		UParticleSystem* RMB_NoWep_Effect;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_RMB_Montage;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_RMB_NoWep_Montage;




	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_R_Montage;

	UPROPERTY(EditAnywhere, Category = Attacks)
		UAnimMontage* Ability_R_NoWep_Montage;


private:
	
	


	class AMyCharacter* Character;
	class UMaterialInterface* Ability_Q_RangeDecal;
	class ADecalActor* decal;
	FVector CameraLocation;
	FVector TraceEndLocation;
	FVector CurrentAbilityLocation;

	FTimerHandle Q_AbilityTimerHandle = { };
	FTimerHandle R_AbilityTimerHandle = { };
	FTimerHandle RMB_AbilityTimerHandle = { };



	bool bIsActive_Q_Ability;
	bool bIsActiveRangeTrace;

	const float Q_Abiliry_CoolDown = 1.0f;	//Q스킬 쿨다운
	bool Is_Q_Ability_CoolDown;

	const float R_Abiliry_CoolDown = 10.0f;	//R스킬 쿨다운
	bool Is_R_Ability_CoolDown;

	const float RMB_Abiliry_CoolDown = 4.0f;		//RMB 스킬 쿨다운
	bool Is_RMB_Ability_CoolDown;
	
	
};

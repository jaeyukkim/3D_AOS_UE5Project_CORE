// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/StaticMesh.h"
#include "SeniorProject/SeniorProject.h"
#include "Engine/StaticMeshActor.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent.generated.h"

//Kwang ĳ������ ��ų ������Ʈ

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


	void AbilityRangeTrace();	//��ų ���� ����
	void Q_Ability();	//��ų ����
	void Q_Ability_NoWep();	//���� ���� �� ��ų ����
	bool Ability_Q_IsActive();		//�����������ΰ� �Ǵ��ϴ� ��
	void Attack_Q_Ability();	//	���� �� ������ó�� ����
	void StartColdown_Q_Ability();	//��ٿ� ����

	void MoveToSwordLocation();	//���� ���� �� �ñر������ �� ��ġ�� �̵�

	void R_Ability();	//�ñر� ��ų ����
	void R_Ability_NoWep();	//���� ���� �� �ñر� ��ų
	void Attack_R_Ability();		//�������� �� ������ó�� ����
	void StartColdown_R_Ability();		//��ٿ� ����


	void RMB_Ability();		//��ų ����
	void RMB_NoWep_Ability();	//���� ���� �� ��ų ����
	void Attack_RMB_Ability();	//���� ������ ������ó��
	void Attack_RMB_Ability_NoWep();	//���� ���� �� ���������� ������ó��
	void StartColdown_RMB_Ability();	//��ٿ� ����


	bool GetIsActiveRangeTrace();	//Q��ų �������� ��Į�� �����ִ°� �οﰪ

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
	FVector CameraFowardVector;
	FVector CurrentAbilityLocation;

	FTimerHandle Q_AbilityTimerHandle = { };
	FTimerHandle R_AbilityTimerHandle = { };
	FTimerHandle RMB_AbilityTimerHandle = { };



	bool bIsActive_Q_Ability;
	bool bIsActiveRangeTrace;

	const float Q_Abiliry_CoolDown = 1.0f;	//Q��ų ��ٿ�
	bool Is_Q_Ability_CoolDown;

	const float R_Abiliry_CoolDown = 10.0f;	//R��ų ��ٿ�
	bool Is_R_Ability_CoolDown;

	const float RMB_Abiliry_CoolDown = 4.0f;		//RMB ��ų ��ٿ�
	bool Is_RMB_Ability_CoolDown;
	
	
};

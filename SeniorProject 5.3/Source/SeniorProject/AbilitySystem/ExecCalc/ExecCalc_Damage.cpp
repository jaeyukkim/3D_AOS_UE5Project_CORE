// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalc_Damage.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"


struct DamageStatic
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Lethality);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicPenetration);
	
	DamageStatic()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Armor, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Lethality, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicPenetration, Source, false);
	}
};

static const DamageStatic& DamageStatics()
{
	static DamageStatic DStatics;
	return DStatics;
}

UExecCalc_Damage::UExecCalc_Damage()
{
	// 속성 캡처 초기화 **속성명DEF** //
	RelevantAttributesToCapture.Add(DamageStatics().ArmorDef);
	RelevantAttributesToCapture.Add(DamageStatics().LethalityDef);
	RelevantAttributesToCapture.Add(DamageStatics().MagicResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().MagicPenetrationDef);
	
}

void UExecCalc_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                              FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

	const AActor* SourceAvatar = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	const AActor* TargetAvatar = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float PhysicalDamage = Spec.GetSetByCallerMagnitude(FGameplayTagsBase::Get().PhysicalDamage);
	float MagicalDamage = Spec.GetSetByCallerMagnitude(FGameplayTagsBase::Get().MagicalDamage);


	/* 물리 데미지 구현 */
	float TargetArmor = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorDef, EvaluationParameters, TargetArmor);

	float SourceLethality = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatic().LethalityDef, EvaluationParameters, SourceLethality);

	float EffectiveArmor = TargetArmor - SourceLethality;
	EffectiveArmor = FMath::Clamp(EffectiveArmor, 0.f, TargetArmor);
	
	
	PhysicalDamage *= 100 / (100+EffectiveArmor);

	const FGameplayModifierEvaluatedData PhysicalEvaluatedData(UAttributeSetBase::GetIncomingDamageAttribute(), EGameplayModOp::Additive, PhysicalDamage);
	OutExecutionOutput.AddOutputModifier(PhysicalEvaluatedData);
	/* 물리 데미지 구현 */


	/* 마법 데미지 구현 */
	float TargetMagicResistance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().MagicResistanceDef, EvaluationParameters, TargetMagicResistance);

	float SourceMagicPenetration = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatic().MagicPenetrationDef, EvaluationParameters, SourceMagicPenetration);

	float EffectiveMagicResistance = TargetMagicResistance - SourceMagicPenetration;
	EffectiveMagicResistance = FMath::Clamp(EffectiveMagicResistance, 0.f, TargetMagicResistance);
	
	MagicalDamage *= 100 / (100+EffectiveMagicResistance);
	
	const FGameplayModifierEvaluatedData MagicalEvaluatedData(UAttributeSetBase::GetIncomingDamageAttribute(), EGameplayModOp::Additive, MagicalDamage);
	OutExecutionOutput.AddOutputModifier(MagicalEvaluatedData);
	/* 마법 데미지 구현 */
}

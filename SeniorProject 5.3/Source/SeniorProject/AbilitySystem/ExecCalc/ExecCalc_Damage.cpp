// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalc_Damage.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"


struct DamageStatic
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Lethality);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicPenetration);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalChance);

	
	DamageStatic()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Armor, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Lethality, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicPenetration, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, CriticalChance, Source, false);
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
	RelevantAttributesToCapture.Add(DamageStatics().CriticalChanceDef);

}

void UExecCalc_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                              FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

	const AActor* SourceAvatar = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	const AActor* TargetAvatar = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	FGameplayEffectContextHandle EffectContextHandle = Spec.GetContext();
	
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float PhysicalDamage = 0.f;
	float MagicalDamage = 0.f;

	
	

	for (FGameplayTag DamageTypeTag : FGameplayTagsBase::Get().DamageTypes)
	{
		const float DamageTypeValue = Spec.GetSetByCallerMagnitude(DamageTypeTag, false, -1.f);

		if(DamageTypeValue > 0.f)
		{
			if(DamageTypeTag == FGameplayTagsBase::Get().MagicalDamage)
			{
				MagicalDamage += DamageTypeValue;
			}
			else if(DamageTypeTag == FGameplayTagsBase::Get().PhysicalDamage)
			{
				PhysicalDamage += DamageTypeValue;
			}
		}
		
		
	}

	bool bIsMagicalDamage = MagicalDamage > 0;
	UBlueprintFunctionLibraryBase::SetIsMagicalDamage(EffectContextHandle, bIsMagicalDamage);
	
	/* 크리티컬 데미지 구현 */
	
	float SourceCriticalChance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalChanceDef, EvaluationParameters, SourceCriticalChance);
	const bool bCriticalHit = FMath::RandRange(1, 100) < SourceCriticalChance;
	UBlueprintFunctionLibraryBase::SetIsCriticalHit(EffectContextHandle, bCriticalHit);
	if(bCriticalHit)	
	{
		PhysicalDamage*=2.f;
		MagicalDamage*=2.f;
	}
	/* 크리티컬 데미지 구현 */


	
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

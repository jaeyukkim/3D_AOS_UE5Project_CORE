// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalc_Damage.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/Interface/CombatInterface.h"


struct DamageStatic
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Lethality);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicPenetration);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(LifeSteal);

	
	DamageStatic()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Armor, Target, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, Lethality, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicResistance, Target, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, MagicPenetration, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, CriticalChance, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, LifeSteal, Source, true);

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
	RelevantAttributesToCapture.Add(DamageStatics().LifeStealDef);


}

void UExecCalc_Damage::DetermineDebuff(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	const FGameplayEffectSpec& Spec, FAggregatorEvaluateParameters EvaluationParameters) const
{
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	FGameplayEffectContextHandle ContextHandle = Spec.GetContext();
	
	if(UBlueprintFunctionLibraryBase::GetIsDebuffValid(ContextHandle))
	{
		
	//	UBlueprintFunctionLibraryBase::SetDebuffType(ContextHandle, DebuffType);
		
		const float DebuffCoefficient = Spec.GetSetByCallerMagnitude(GameplayTags.Debuff_DebuffCoefficient, false, -1.f);
		const float DebuffDuration = Spec.GetSetByCallerMagnitude(GameplayTags.Debuff_Duration, false, -1.f);
		const float DebuffFrequency = Spec.GetSetByCallerMagnitude(GameplayTags.Debuff_Frequency, false, -1.f);
	
		UBlueprintFunctionLibraryBase::SetDebuffCoefficient(ContextHandle, DebuffCoefficient);
		UBlueprintFunctionLibraryBase::SetDebuffDuration(ContextHandle, DebuffDuration);
		UBlueprintFunctionLibraryBase::SetDebuffFrequency(ContextHandle, DebuffFrequency);
	}
	
}

void UExecCalc_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                              FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	

	 UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

	const AActor* SourceAvatar = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	const AActor* TargetAvatar = TargetASC ? TargetASC->GetAvatarActor() : nullptr;


	if(TargetAvatar->Implements<UCombatInterface>())
	{
		if(ICombatInterface::Execute_IsInvincibility(TargetAvatar) || ICombatInterface::Execute_IsDead(TargetAvatar))
		{
			const FGameplayModifierEvaluatedData MagicalEvaluatedData(UAttributeSetBase::GetIncomingDamageAttribute(), EGameplayModOp::Additive, 0.f);
			OutExecutionOutput.AddOutputModifier(MagicalEvaluatedData);
			return;
		}
		
	}
	
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	FGameplayEffectContextHandle EffectContextHandle = Spec.GetContext();
	
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	
	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;
	
	DetermineDebuff(ExecutionParams, Spec, EvaluationParameters);


	
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
	bool bIsBasicAttack = false;
	bIsBasicAttack = UBlueprintFunctionLibraryBase::GetIsBasicAttack(EffectContextHandle);

	if(bIsBasicAttack)	
	{
		float SourceCriticalChance = 0.f;
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalChanceDef, EvaluationParameters, SourceCriticalChance);
		const bool bCriticalHit = FMath::RandRange(1, 100) < SourceCriticalChance;
		UBlueprintFunctionLibraryBase::SetIsCriticalHit(EffectContextHandle, bCriticalHit);

		if(bCriticalHit)
		{
			PhysicalDamage*=2.f;
		}
		
	}
	/* 크리티컬 데미지 구현 */

	
	/* 물리 데미지 구현 */
	
	FGameplayAttribute TargetArmorAttribute = UAttributeSetBase::GetArmorAttribute();
	float TargetArmor = TargetASC->GetNumericAttribute(TargetArmorAttribute);
	//ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorDef, EvaluationParameters, TargetArmor);
	
	float SourceLethality = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatic().LethalityDef, EvaluationParameters, SourceLethality);

	float EffectiveArmor = TargetArmor - SourceLethality;
	EffectiveArmor = FMath::Clamp(EffectiveArmor, 0.f, TargetArmor);
	
	PhysicalDamage *= 100 / (100+EffectiveArmor);
	
	if(bIsBasicAttack && !TargetAvatar->ActorHasTag("Turret"))
	{
		float SourceLifeSteal = 0.f;
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().LifeStealDef, EvaluationParameters, SourceLifeSteal);

		// 생명 흡수 비율 적용
		const float LifeStealAmount = PhysicalDamage * SourceLifeSteal;

		// SourceASC의 Health를 업데이트
		if (SourceASC)
		{
			// Health 값을 가져와서 생명 흡수를 적용
			FGameplayAttribute HealthAttribute = UAttributeSetBase::GetHealthAttribute();
			float CurrentHealth = SourceASC->GetNumericAttribute(HealthAttribute);
			float MaxHealth = SourceASC->GetNumericAttribute(UAttributeSetBase::GetMaxHealthAttribute());
			float NewHealth = FMath::Clamp(CurrentHealth + LifeStealAmount, 0.f, MaxHealth);

			// NewHealth를 설정
			SourceASC->SetNumericAttributeBase(HealthAttribute, NewHealth);
		}
	}
	
	const FGameplayModifierEvaluatedData PhysicalEvaluatedData(UAttributeSetBase::GetIncomingDamageAttribute(), EGameplayModOp::Additive, PhysicalDamage);
	OutExecutionOutput.AddOutputModifier(PhysicalEvaluatedData);
	
	/* 물리 데미지 구현 */


	
	/* 마법 데미지 구현 */
	FGameplayAttribute TargetMagicResistanceAttribute = UAttributeSetBase::GetMagicResistanceAttribute();
	float TargetMagicResistance = TargetASC->GetNumericAttribute(TargetMagicResistanceAttribute);
	//ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().MagicResistanceDef, EvaluationParameters, TargetMagicResistance);

	float SourceMagicPenetration = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatic().MagicPenetrationDef, EvaluationParameters, SourceMagicPenetration);

	float EffectiveMagicResistance = TargetMagicResistance - SourceMagicPenetration;
	EffectiveMagicResistance = FMath::Clamp(EffectiveMagicResistance, 0.f, TargetMagicResistance);

	MagicalDamage *= 100 / (100+EffectiveMagicResistance);
	
	
	const FGameplayModifierEvaluatedData MagicalEvaluatedData(UAttributeSetBase::GetIncomingDamageAttribute(), EGameplayModOp::Additive, MagicalDamage);
	OutExecutionOutput.AddOutputModifier(MagicalEvaluatedData);
	
	/* 마법 데미지 구현 */
	
}

void UExecCalc_Damage::ApplyMagicalDamage()
{
}

void UExecCalc_Damage::ApplyPhysicDamage()
{
}

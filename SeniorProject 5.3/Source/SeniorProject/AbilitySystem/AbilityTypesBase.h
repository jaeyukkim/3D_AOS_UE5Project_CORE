#pragma once

#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"
#include "AbilityTypesBase.generated.h"


USTRUCT(BlueprintType)
struct FDamageEffectParams
{
	GENERATED_BODY()

	FDamageEffectParams(){}

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UObject> WorldContextObject = nullptr;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> DamageGameplayEffectClass = nullptr;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> SourceAbilitySystemComponent;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> TargetAbilitySystemComponent;

	UPROPERTY(BlueprintReadWrite)
	FGameplayTag DamageType = FGameplayTag();
	
	UPROPERTY(BlueprintReadWrite)
	float BaseDamage = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float AppliedCoefficientDamage = 0.f;
	
	UPROPERTY(BlueprintReadWrite)
	float APCoefficient = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float ADCoefficient = 0.f;
	
	UPROPERTY(BlueprintReadWrite)
	float AbilityLevel = 1.f;

	UPROPERTY(BlueprintReadWrite)
	float SourceAbilityPower = 1.f;

	UPROPERTY(BlueprintReadWrite)
	float SourceAttackDamage = 1.f;

	UPROPERTY(BlueprintReadWrite)
	FGameplayTag DebuffType = FGameplayTag();
	
	UPROPERTY(BlueprintReadWrite)
	bool bDebuffValid = false;
	
	UPROPERTY(BlueprintReadWrite)
	float DebuffFrequency = 0.f;
	
	UPROPERTY(BlueprintReadWrite)
	float DebuffDuration = 0.f;
	
	UPROPERTY(BlueprintReadWrite)
	float DebuffCoefficient = 0.f;
	
	
};

USTRUCT(BlueprintType)
struct FGameplayEffectBaseContext : public FGameplayEffectContext
{
	GENERATED_BODY()

public:
	bool IsCriticalHit() const {return bIsCriticalHit;}
	bool IsMagicalDamage() const {return bIsMagicalDamage;}
	bool IsPhysicalDamage() const {return bIsPhysicalDamage;}
	TSharedPtr<FGameplayTag> GetDebuffType() const { return DebuffType; }
	float GetDebuffCoefficient() const { return DebuffCoefficient; }
	float GetDebuffDuration() const { return DebuffDuration; }
	float GetDebuffFrequency() const { return DebuffFrequency; }
	bool GetIsDebuffValid() const { return bDebuffValid; }
	
	void SetIsMagicalDamage(bool bInIsMagicalDamage) {bIsMagicalDamage = bInIsMagicalDamage;}
	void SetIsCriticalHit(bool bInIsCriticalHit) {bIsCriticalHit = bInIsCriticalHit;}
	void SetIsPhysicalDamage(bool bInIsPhysicalDamage) {bIsPhysicalDamage = bInIsPhysicalDamage;}
	void SetDebuffType(TSharedPtr<FGameplayTag> InDebuffType) { DebuffType = InDebuffType; }
	void SetDebuffCoefficient(float InDebuffCoefficient) {DebuffCoefficient = InDebuffCoefficient;}
	void SetDebuffDuration(float InDuration) { DebuffDuration = InDuration; }
	void SetDebuffFrequency(float InFrequency) { DebuffFrequency = InFrequency; }
	void SetDebuffValid(bool InbDebuffValid) { bDebuffValid = InbDebuffValid; }



	

	
	/** Returns the actual struct used for serialization, subclasses must override this! */
	virtual UScriptStruct* GetScriptStruct() const
	{
		return StaticStruct();
	} 

	/** Custom serialization, subclasses must override this */
	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);


	//함수 내에서 GetHitResult() 함수를 통해 HitResult를 가져오고, 그것이 존재할 경우(if (GetHitResult())),
	//이를 새로 생성된 컨텍스트(NewContext)에 추가합니다.
	
	virtual FGameplayEffectBaseContext* Duplicate() const
	{
		FGameplayEffectBaseContext* NewContext = new FGameplayEffectBaseContext();
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}
	
protected:
	
	UPROPERTY()
	bool bIsCriticalHit = false;

	UPROPERTY()
	bool bIsMagicalDamage = false;

	UPROPERTY()
	bool bIsPhysicalDamage = false;

	UPROPERTY()
	float BaseDamage = 0.f;
	
	bool bDebuffValid = false;
	
	TSharedPtr<FGameplayTag> DebuffType;
	
	UPROPERTY()
	float DebuffFrequency = 0.f;
	
	UPROPERTY()
	float DebuffDuration = 0.f;
	
	UPROPERTY()
	float DebuffCoefficient = 0.f;
	
};

template<>
struct TStructOpsTypeTraits<FGameplayEffectBaseContext> : public TStructOpsTypeTraitsBase2<FGameplayEffectBaseContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};


#pragma once

#include "GameplayEffectTypes.h"
#include "AbilityTypesBase.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectBaseContext : public FGameplayEffectContext
{
	GENERATED_BODY()

public:
	bool IsCriticalHit() const {return bIsCriticalHit;}
	void SetIsCriticalHit(bool bInIsCriticalHit) {bIsCriticalHit = bInIsCriticalHit;}

	bool IsMagicalDamage() const {return bIsMagicalDamage;}
	void SetIsMagicalDamage(bool bInIsMagicalDamage) {bIsMagicalDamage = bInIsMagicalDamage;}

	/** Returns the actual struct used for serialization, subclasses must override this! */
	virtual UScriptStruct* GetScriptStruct() const
	{
		return FGameplayEffectContext::StaticStruct();
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

private:
	UPROPERTY()
	bool bIsCriticalHit = false;

	UPROPERTY()
	bool bIsMagicalDamage = false;
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


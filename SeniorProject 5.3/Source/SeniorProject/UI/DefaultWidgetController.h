#pragma once


#include "DefaultWidgetController.generated.h"

/**
 *
 */
class APlayerStateBase;
class UAttributeSetBase;
class UAttributeSet;
class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FWidgetControllerParams
{
	GENERATED_BODY()

		FWidgetControllerParams() {}
	FWidgetControllerParams(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
		: PlayerController(PC), PlayerState(PS), AbilitySystemComponent(ASC), AttributeSet(AS) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TObjectPtr<APlayerController> PlayerController = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TObjectPtr<APlayerState> PlayerState = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TObjectPtr<UAttributeSet> AttributeSet = nullptr;
};


/**
 *
 */
UCLASS()
class SENIORPROJECT_API UDefaultWidgetController : public UObject
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable)
		void SetWidgetControllerParams(const FWidgetControllerParams& WCParams);
	virtual void BroadcastInitialValues();
	virtual void BindCallbacksToDependencies();

protected:

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<APlayerState> PlayerState;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<UAttributeSetBase> AttributeSetBase;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
		TObjectPtr<APlayerStateBase> PlayerStateBase;
	
	UAttributeSetBase* GetMyAS();
	APlayerStateBase* GetMyPS();
};
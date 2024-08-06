// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputActionData.h"
#include "InputComponentBase.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UInputComponentBase : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	
	template<class Userclass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
	void BindAbilityActions(const UInputActionData* InputData, Userclass* Object, PressedFuncType PressedFunc,
		ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc);
	
};

template <class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
void UInputComponentBase::BindAbilityActions(const UInputActionData* InputData, UserClass* Object,
	PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc)
{
	check(InputData);

	for(const FInputActionDataBase& Action : InputData->InputActionData)
	{
		if(Action.InputAction && Action.InputTag.IsValid())
		{
			if(PressedFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Started, Object, PressedFunc, Action.InputTag);
			}
			if (ReleasedFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag);
			}

			if (HeldFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, HeldFunc, Action.InputTag);
			}
		}
	}
}

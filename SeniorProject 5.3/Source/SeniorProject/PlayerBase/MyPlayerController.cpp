// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/Input/InputComponentBase.h"
#include "GameFramework/Character.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/UI/Damage/DamageTextComponent.h"
#include "SeniorProject/UI/GoldReward/GoldRewardWidgetComponent.h"
#include "SeniorProject/UI/HUD/ReturnToMainMenu.h"


AMyPlayerController::AMyPlayerController()
{
	bReplicates = true;

}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

}

UAbilitySystemComponentBase* AMyPlayerController::GetASC()
{
	if(AbilityComponentBase == nullptr)
	{
		AbilityComponentBase = Cast<UAbilitySystemComponentBase>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AbilityComponentBase;
}

void AMyPlayerController::ShowDamageNumber_Implementation(float DamageAmount, ACharacter* TargetCharacter, bool bCriticalHit, bool bMagicalDamage)
{
	if (IsValid(TargetCharacter) && DamageTextComponentClass && IsLocalController())
	{
		UDamageTextComponent* DamageText = NewObject<UDamageTextComponent>(TargetCharacter, DamageTextComponentClass);
		DamageText->RegisterComponent();
		DamageText->AttachToComponent(TargetCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		DamageText->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		DamageText->SetDamageText(DamageAmount, bCriticalHit, bMagicalDamage);
	}
}


void AMyPlayerController::ShowGoldAmount_Implementation(int32 GoldAmount, AActor* TargetCharacter)
{
	if(IsValid(TargetCharacter) && GoldRewardWidgetClass && IsLocalController())
	{
		UGoldRewardWidgetComponent* GoldRewardText = NewObject<UGoldRewardWidgetComponent>(TargetCharacter, GoldRewardWidgetClass);
		GoldRewardText->RegisterComponent();
		GoldRewardText->AttachToComponent(TargetCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		GoldRewardText->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		GoldRewardText->SetGoldRewardText(GoldAmount);
	}
}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();



	//FInputModeGameOnly InputMode;
	//SetInputMode(InputMode);

	
		
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UInputComponentBase* InputComponentBase = CastChecked<UInputComponentBase>(InputComponent);
	InputComponentBase->BindAbilityActions(InputData, this, &ThisClass::AbilityInputTagPressed,
		&ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
	InputComponentBase->BindAction(QuitMenuButton, ETriggerEvent::Triggered, this, &AMyPlayerController::ShowReturnToMainMenu);
}

void AMyPlayerController::ShowReturnToMainMenu()
{
	if (ReturnToMainMenuClass == nullptr) return;
	if (ReturnToMainMenu == nullptr)
	{
		ReturnToMainMenu = CreateWidget<UReturnToMainMenu>(this, ReturnToMainMenuClass);
		ReturnToMainMenu->AddToViewport();
		bReturnToMainMenuOpen = true;
	}
	if (ReturnToMainMenu)
	{
		bReturnToMainMenuOpen = !bReturnToMainMenuOpen;
		if (bReturnToMainMenuOpen)
		{
			ReturnToMainMenu->MenuSetup();
			
		}
		else
		{
			ReturnToMainMenu->MenuTearDown();
		}
	}
}


void AMyPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
		GetASC()->AbilityInputTagPressed(InputTag);
	if(GetPawn()->Implements<UCombatInterface>())
	{
		if(!ICombatInterface::Execute_IsDead(GetPawn()))
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
	}
}

void AMyPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (GetASC())
		GetASC()->AbilityInputTagReleased(InputTag);

	if(GetPawn()->Implements<UCombatInterface>())
	{
		if(!ICombatInterface::Execute_IsDead(GetPawn()))
		{
			GetASC()->AbilityInputTagHeld(InputTag);

		}
	}
}

void AMyPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
	
	if(GetPawn()->Implements<UCombatInterface>())
	{
		if(!ICombatInterface::Execute_IsDead(GetPawn()))
		{
			GetASC()->AbilityInputTagHeld(InputTag);

		}
	}


}




// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"
#include "AbilityComponent.h"



UMyAnimInstance::UMyAnimInstance()
{

	bIsNoWep = false;
	bIsCasting = false;
}


void UMyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
		PlayerCharacter = Cast<AMyCharacter>(Pawn);

	if (!IsValid(PlayerCharacter))
		return;
}


void UMyAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}




void UMyAnimInstance::AnimNotify_CanAttack()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->IsAttacking = false;
	}
		
}

void UMyAnimInstance::AnimNotify_CanNotAttack()
{
	if (IsValid(PlayerCharacter))
	{

		PlayerCharacter->IsAttacking = true;
	}
}

void UMyAnimInstance::AnimNotify_CastingOn()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->bIsCasting = true;
	}
}

void UMyAnimInstance::AnimNotify_CastingOff()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->bIsCasting = false;
	}
}

void UMyAnimInstance::AnimNotify_StopMove()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->StopMoves();
	}
}

void UMyAnimInstance::AnimNotify_CanMove()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->CanMoves();
	}
}



void UMyAnimInstance::AnimNotify_FootStep()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->PlayFootSound();
	}
}




void UMyAnimInstance::AnimNotify_HideSword()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_Term);
	}
		

	bIsNoWep = true;
}

void UMyAnimInstance::AnimNotify_UnHideSword()
{
	if (IsValid(PlayerCharacter))
	{
		PlayerCharacter->GetMesh()->UnHideBoneByName(TEXT("weapon_r"));
	}
	

	bIsNoWep = false;
}

void UMyAnimInstance::AnimNotify_HideKwangSword()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter-> AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->HideKwangSwords();
	}
}

void UMyAnimInstance::AnimNotify_UnHideKwangSword()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->UnHideKwangSwords();
	}
}


void UMyAnimInstance::AnimNotify_MoveToSword()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->MoveToSwordLocation();
	}

}



//스킬 진행

void UMyAnimInstance::AnimNotify_Attack_Q()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->Attack_Q_Ability();
	}

}


void UMyAnimInstance::AnimNotify_Attack_RMB()
{

	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->Attack_RMB_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Attack_RMB_NoWep()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->Attack_RMB_Ability_NoWep();
	}

}

void UMyAnimInstance::AnimNotify_Attack_R()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->Attack_R_Ability();
	}
}





void UMyAnimInstance::AnimNotify_Ability_Q_Cooldown()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->StartColdown_Q_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Ability_R_Cooldown()
{
	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->StartColdown_R_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Ability_RMB_Cooldown()
{

	if (IsValid(PlayerCharacter) && PlayerCharacter->AbilityComponent != nullptr)
	{
		PlayerCharacter->AbilityComponent->StartColdown_RMB_Ability();
	}

}

void UMyAnimInstance::SetDamaged()
{
	IsDamaged = true;
	GetWorld()->GetTimerManager().SetTimer(DamagedTimerHandle, FTimerDelegate::CreateLambda([this]() ->
		void
		{
			IsDamaged = false;

		}), 0.1f, false);
}


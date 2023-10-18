// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"
#include "AbilityComponent.h"



UMyAnimInstance::UMyAnimInstance()
{

	
	

	Speed = 0.0f;
	IsInAir = false;

	Roll = 0.0f;
	Pitch = 0.0f;
	Yaw = 0.0f;
	YawDelta = 0.0f;
	IsDead = false;
	IsDamaged = false;
	bIsNoWep = false;
}

void UMyAnimInstance::NativeInitializeAnimation()
{
	Pawn = TryGetPawnOwner();


	if (::IsValid(Pawn))
		Character = Cast<AMyCharacter>(Pawn);

}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	
	
	if (::IsValid(Pawn))
	{

		Speed = Pawn->GetVelocity().Size();

		


		AimRotation = Pawn->GetBaseAimRotation();
		ActorRotation = Pawn->GetActorRotation();
		DeltaRotator = NormalizedDeltaRotator(AimRotation, ActorRotation);
		Roll = DeltaRotator.Roll;
		Pitch = DeltaRotator.Pitch;
		Yaw = DeltaRotator.Yaw;

		YawDelta = FMath::FInterpTo(YawDelta,
			(NormalizedDeltaRotator(RotationLastTick, ActorRotation).Yaw / DeltaSeconds) / 7.0,
			DeltaSeconds, 6.0);


		RotationLastTick = ActorRotation;

		

		Direction = CalculateDirection(Character->GetVelocity(), ActorRotation);
		

		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();

			if (Character->GetCharacterMovement()->GetCurrentAcceleration().Length() > 0)
				IsAccelerating = true;
			else
				IsAccelerating = false;

			
		}

		if (GetCurveValue("FullBody") > 0)
			FullBody = true;
		else
			FullBody = false;


		
	}


}

FRotator UMyAnimInstance::NormalizedDeltaRotator(FRotator A, FRotator B)
{
	FRotator Delta = A - B;
	Delta.Normalize();
	return Delta;
}

void UMyAnimInstance::AnimNotify_SaveAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("SaveAttack"))
	if(Character != NULL)
		Character->ComboAttackSave();
	

}

void UMyAnimInstance::AnimNotify_ResetCombo()
{
	UE_LOG(LogTemp, Warning, TEXT("ResetCombo"))
	
	if(Character != NULL)
		Character->ResetCombo();
}

void UMyAnimInstance::AnimNotify_RunStop()
{
	DirectionOnStop = Direction;
}




void UMyAnimInstance::AnimNotify_CanAttack()
{
	if (Character)
	{
		Character->IsAttacking = false;
	}
		
}

void UMyAnimInstance::AnimNotify_CanNotAttack()
{
	if (Character)
	{

		Character->IsAttacking = true;
	}
}

void UMyAnimInstance::AnimNotify_CastingOn()
{
	if (Character)
	{
		Character->bIsCasting = true;
	}
}

void UMyAnimInstance::AnimNotify_CastingOff()
{
	if (Character)
	{
		Character->bIsCasting = false;
	}
}

void UMyAnimInstance::AnimNotify_StopMove()
{
	if (Character)
	{
		Character->StopMoves();
	}
}

void UMyAnimInstance::AnimNotify_CanMove()
{
	if (Character)
	{
		Character->CanMoves();
	}
}



void UMyAnimInstance::AnimNotify_FootStep()
{
	if (Character)
	{
		Character->PlayFootSound();
	}
}




void UMyAnimInstance::AnimNotify_HideSword()
{
	if (Character)
	{
		Character->GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_Term);
	}
		

	bIsNoWep = true;
}

void UMyAnimInstance::AnimNotify_UnHideSword()
{
	if (Character)
	{
		Character->GetMesh()->UnHideBoneByName(TEXT("weapon_r"));
	}
	

	bIsNoWep = false;
}

void UMyAnimInstance::AnimNotify_HideKwangSword()
{
	if (Character != nullptr && Character -> AbilityComponent != nullptr)
	{
		Character->AbilityComponent->HideKwangSwords();
	}
}

void UMyAnimInstance::AnimNotify_UnHideKwangSword()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->UnHideKwangSwords();
	}
}


void UMyAnimInstance::AnimNotify_MoveToSword()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->MoveToSwordLocation();
	}

}



//스킬 진행

void UMyAnimInstance::AnimNotify_Attack_Q()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->Attack_Q_Ability();
	}

}


void UMyAnimInstance::AnimNotify_Attack_RMB()
{

	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->Attack_RMB_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Attack_RMB_NoWep()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->Attack_RMB_Ability_NoWep();
	}

}

void UMyAnimInstance::AnimNotify_Attack_R()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->Attack_R_Ability();
	}
}





void UMyAnimInstance::AnimNotify_Ability_Q_Cooldown()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->StartColdown_Q_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Ability_R_Cooldown()
{
	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->StartColdown_R_Ability();
	}
}

void UMyAnimInstance::AnimNotify_Ability_RMB_Cooldown()
{

	if (Character != nullptr && Character->AbilityComponent != nullptr)
	{
		Character->AbilityComponent->StartColdown_RMB_Ability();
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


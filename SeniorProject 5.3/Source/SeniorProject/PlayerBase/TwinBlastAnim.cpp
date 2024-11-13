
#include "TwinBlastAnim.h"

#include "SeniorProject/Character/Player/TwinBlast.h"


UTwinBlastAnim::UTwinBlastAnim()
{
	bIsUltimateActivative = false;
}


void UTwinBlastAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		TwinBlast = Cast<ATwinBlast>(Pawn);
		if(TwinBlast)
			TwinBlast->Respawned.AddLambda([this](){AnimNotify_EnableUltimate();});
	}
}

void UTwinBlastAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(TwinBlast == nullptr) return;
	
	bIsUltimateActivative = TwinBlast->bUltimateActivate;
	bGrenadeActived = TwinBlast->bGrenade;
	bDiveActived = TwinBlast->bActivateShift;
}

void UTwinBlastAnim::AnimNotify_EnableUltimate()
{
	bIsUltimateActivative = true;
	bGrenadeActived = true;
}

void UTwinBlastAnim::AnimNotify_DisableUltimate()
{
	bIsUltimateActivative = false;
	bGrenadeActived = false;
}



#include "PlayerCore/FPSCorePlayerController.h"
#include "GAS/FPSCoreAbilitySystemComponent.h"
#include "PlayerCore/FPSCorePlayerState.h"

AFPSCorePlayerController::AFPSCorePlayerController()
{
}

AFPSCorePlayerState* AFPSCorePlayerController::GetFPSCorePlayerState() const
{
	return CastChecked<AFPSCorePlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UAbilitySystemComponent* AFPSCorePlayerController::GetFPSCoreAbilitySystemComponent() const
{
	const AFPSCorePlayerState* FPSCorePlayerState = GetFPSCorePlayerState();
	return CastChecked<UFPSCoreAbilitySystemComponent>(FPSCorePlayerState->GetAbilitySystemComponent());
}

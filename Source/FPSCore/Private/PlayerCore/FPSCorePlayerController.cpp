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

UFPSCoreAbilitySystemComponent* AFPSCorePlayerController::GetFPSCoreAbilitySystemComponent() const
{
	const AFPSCorePlayerState* FPSCorePlayerState = GetFPSCorePlayerState();
	return CastChecked<UFPSCoreAbilitySystemComponent>(FPSCorePlayerState->GetAbilitySystemComponent());
}

void AFPSCorePlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void AFPSCorePlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (UFPSCoreAbilitySystemComponent* ASC = GetFPSCoreAbilitySystemComponent())
	{
		ASC->ProcessAbilityInput(DeltaTime, bGamePaused);
	}

	
	Super::PostProcessInput(DeltaTime, bGamePaused);
}

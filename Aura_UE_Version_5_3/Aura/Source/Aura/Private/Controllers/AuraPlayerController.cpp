// copy right druid mechanics


#include "Controllers/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"


void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraMappingContext);
	UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(subsystem);
	subsystem->AddMappingContext (AuraMappingContext , 0 );

	bShowMouseCursor = true ;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData  ;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

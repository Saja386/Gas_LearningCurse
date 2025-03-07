// copy right druid mechanics


#include "Controllers/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interfaces/EnemyInterface.h"


void AAuraPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CorsurTrace();
}
void AAuraPlayerController::CorsurTrace()
{
	FHitResult CursorHit ;
	GetHitResultUnderCursor(ECC_Visibility , false , CursorHit);
	if(!CursorHit.bBlockingHit) return;
	LastActor = ThisActor ;
	ThisActor = CursorHit.GetActor();
	if (LastActor == nullptr)
	{
		if (ThisActor != nullptr)
		{
			ThisActor->HighlightActor();
		}
	}
	else
	{
		if (ThisActor == nullptr)
		{
			LastActor->UnHighlightActor();
		}
		else
		{
			if(ThisActor != LastActor)
			{
				LastActor->UnHighlightActor();
				ThisActor->HighlightActor();
			}
		}
	}
}


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

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction ,ETriggerEvent::Triggered , this , &AAuraPlayerController::Move);
}

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::Move(const FInputActionValue& MoveInputAction)
{
	const FVector2d InputAxisVector = MoveInputAction.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation (0.0f ,Rotation.Yaw , 0.0f );
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	FVector RightDirection = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

	if(APawn* ControlledPawn = GetPawn())
	{
		ControlledPawn->AddMovementInput(ForwardDirection , InputAxisVector.Y );
		ControlledPawn->AddMovementInput(RightDirection , InputAxisVector.X );
	}
}


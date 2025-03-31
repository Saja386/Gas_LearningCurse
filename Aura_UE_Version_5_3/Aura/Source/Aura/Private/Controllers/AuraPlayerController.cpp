// copy right druid mechanics


#include "Controllers/AuraPlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AuraGamePlayTags.h"
#include "EnhancedInputSubsystems.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "VectorTypes.h"
#include "Components/SplineComponent.h"
#include "GAS/PlayerAbilitySystemComponent.h"
#include "Input/AuraInputCpmponent.h"
#include "Interfaces/EnemyInterface.h"


AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
}
void AAuraPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CorsurTrace();
	AutoRun();
}

void AAuraPlayerController::AutoRun()
{
	if(!BAutoRunning)return;
	if(APawn* ControlledPawn = GetPawn())
	{
		const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(ControlledPawn->GetActorLocation() , ESplineCoordinateSpace::World);
		const FVector Direction = Spline->FindDirectionClosestToWorldLocation(LocationOnSpline , ESplineCoordinateSpace::World);
		ControlledPawn->AddMovementInput(Direction);
		const float DistanceToLocation = (LocationOnSpline - CashedDestination).Length();
		if(DistanceToLocation <= AutoRunAcceptanceRadius)
		{
			BAutoRunning = false ;
		}
	}
}


void AAuraPlayerController::CorsurTrace()
{
	GetHitResultUnderCursor(ECC_Visibility , false , CursorHit);
	if(!CursorHit.bBlockingHit) return;
	LastActor = ThisActor ;
	ThisActor = CursorHit.GetActor();
	if(LastActor!=ThisActor)
	{
		if(LastActor) LastActor->UnHighlightActor();
		if(ThisActor) ThisActor->HighlightActor();
	}
}

void AAuraPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if(InputTag.MatchesTagExact(FAuraGamePlayTags::Get().InputTag_LMB))
	{
		BTargeting = ThisActor ? true : false;
		BAutoRunning = false ;
	}
}

void AAuraPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if(!InputTag.MatchesTagExact(FAuraGamePlayTags::Get().InputTag_LMB))
	{
		if(GetASC() == nullptr) return;
		GetASC()->AbilityInputTagReleased(InputTag);
		return;
	}
	if(GetASC() != nullptr)
	{
		GetASC()->AbilityInputTagReleased(InputTag);
	}
	if (!BTargeting && !BShiftPressed)
	{
		APawn* ControlledPawn = GetPawn();
		if (FollowTime<=ShortPressTime && ControlledPawn)
		{
			if(UNavigationPath* NavigationPath = UNavigationSystemV1::FindPathToLocationSynchronously(this , ControlledPawn->GetActorLocation() , CashedDestination))
			{
				
				Spline->ClearSplinePoints();
				for (const FVector& PointerLoc : NavigationPath->PathPoints)
				{
					Spline->AddSplinePoint(PointerLoc , ESplineCoordinateSpace::World);
				}
				if(NavigationPath->PathPoints.Num() > 0)
				{
					CashedDestination = NavigationPath->PathPoints[NavigationPath->PathPoints.Num() - 1];
				}
				BAutoRunning = true;
			}
		}
		FollowTime = 0.f ;
		BTargeting =  false ;
	}
}

void AAuraPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if(!InputTag.MatchesTagExact(FAuraGamePlayTags::Get().InputTag_LMB))
	{
		if(GetASC())
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
		return;
	}
	if (BTargeting|| BShiftPressed)
	{
		if(GetASC() != nullptr)
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
	}
	else
	{
		FollowTime += GetWorld()->GetDeltaSeconds();
		FHitResult Hit;
		if(GetHitResultUnderCursor(ECC_Visibility , false , Hit))
		{
			CashedDestination = Hit.ImpactPoint;
		}
		if(APawn* ControllerPawn = GetPawn())
		{
			const FVector WorldDirection = (CashedDestination - ControllerPawn->GetActorLocation()).GetSafeNormal();
			ControllerPawn->AddMovementInput(WorldDirection);
		}
	}

}

UPlayerAbilitySystemComponent* AAuraPlayerController::GetASC()
{
	if(AbilitySystemComponent == nullptr)
	{
		AbilitySystemComponent = Cast<UPlayerAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AbilitySystemComponent;
}


void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraMappingContext);
	UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (subsystem)
	{
		subsystem->AddMappingContext (AuraMappingContext , 0 );
	}
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
	UAuraInputCpmponent* AuraInputCpmponent = CastChecked<UAuraInputCpmponent>(InputComponent);
	AuraInputCpmponent->BindAction(MoveAction ,ETriggerEvent::Triggered , this , &AAuraPlayerController::Move);
	AuraInputCpmponent->BindAction(ShiftAction , ETriggerEvent::Started , this , &AAuraPlayerController::ShiftPressed);
	AuraInputCpmponent->BindAction(ShiftAction , ETriggerEvent::Completed , this , &AAuraPlayerController::ShiftReleased);
	AuraInputCpmponent->BindAbilityActions(InputConf , this , &ThisClass::AbilityInputTagPressed , &ThisClass::AbilityInputTagReleased , &ThisClass::AbilityInputTagHeld);
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



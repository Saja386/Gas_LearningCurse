// copy right druid mechanics


#include "Characters/AuraCharacter.h"

#include <set>

#include "AbilitySystemComponent.h"
#include "Controllers/AuraPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GAS/PlayerAbilitySystemComponent.h"
#include "States/AuraPlayerState.h"
#include "UI/HUD/AuraBaseHUD.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 400.0f, 0);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void AAuraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	SetInitInfo();
}

void AAuraCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	SetInitInfo();
}

void AAuraCharacter::SetInitInfo()
{
	AAuraPlayerState* PlayerState = GetPlayerState<AAuraPlayerState>();
	check(PlayerState);
	PlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerState , this);
	Cast<UPlayerAbilitySystemComponent>(PlayerState->GetAbilitySystemComponent())->AbilityActorInfoSet();
	AbilitySystemComponent = PlayerState->GetAbilitySystemComponent();
	AttributeSet = PlayerState->GetAttributeSet();

	if(AAuraPlayerController* PlayerController = Cast<AAuraPlayerController>(GetController()))
	{
		if(AAuraBaseHUD* AuraHUD = Cast<AAuraBaseHUD>(PlayerController->GetHUD()))
		{
			AuraHUD ->InitOverlay(PlayerController , PlayerState , AbilitySystemComponent , AttributeSet) ;
		}
	}
}

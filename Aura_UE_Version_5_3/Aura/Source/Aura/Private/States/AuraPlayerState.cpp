// copy right druid mechanics


#include "States/AuraPlayerState.h"

#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"
#include "Net/UnrealNetwork.h"

void AAuraPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAuraPlayerState, Level) ;
}

int32 AAuraPlayerState::GetPlayerLevel() const
{
	return Level;
}

AAuraPlayerState::AAuraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UPlayerAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UPlayerAttributeSet>("Attribute Set");
	
	NetUpdateFrequency = 100.f ;

	
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraPlayerState::OnRep_Level(int32 CurrentLevel)
{
	
}

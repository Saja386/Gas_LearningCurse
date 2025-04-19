// copy right druid mechanics


#include "GAS/Globals/AuraAbilitySystemGlobals.h"

#include "AuraAbilitiesTypes.h"

FGameplayEffectContext* UAuraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAuraGamePlayEffectContextStruct ();
	
}

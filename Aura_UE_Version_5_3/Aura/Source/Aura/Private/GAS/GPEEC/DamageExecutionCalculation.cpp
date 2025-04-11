// copy right druid mechanics


#include "GAS/GPEEC/DamageExecutionCalculation.h"

#include "AbilitySystemComponent.h"

UDamageExecutionCalculation::UDamageExecutionCalculation()
{
}

void UDamageExecutionCalculation::Execute_Implementation(
	const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();
	const AActor* SourceAvatarActor = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	const AActor*TargetAvatarActor = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
}

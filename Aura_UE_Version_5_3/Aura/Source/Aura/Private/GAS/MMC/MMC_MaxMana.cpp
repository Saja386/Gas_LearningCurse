// copy right druid mechanics


#include "GAS/MMC/MMC_MaxMana.h"

#include "GAS/PlayerAttributeSet.h"
#include "Interfaces/CombatInterface.h"


UMMC_MaxMana::UMMC_MaxMana()
{
	IntelligenceDef.AttributeToCapture = UPlayerAttributeSet::GetIntelligenceAttribute();
	IntelligenceDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	IntelligenceDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(IntelligenceDef);
}

float UMMC_MaxMana::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	FAggregatorEvaluateParameters EvaluateParams;
	EvaluateParams.SourceTags = SourceTags;
	EvaluateParams.TargetTags = TargetTags;

	float Intelligence = 0.0f;
	GetCapturedAttributeMagnitude(IntelligenceDef , Spec , EvaluateParams , Intelligence);
	Intelligence = FMath::Max(Intelligence, 0.0f);
	ICombatInterface* CombatInterface = Cast <ICombatInterface>(Spec.GetContext().GetSourceObject()) ;
	const int32 Level = CombatInterface->GetPlayerLevel();
	return 50+ 2* Intelligence + Level *5 ;
}

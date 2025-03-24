// copy right druid mechanics


#include "GAS/MMC/MMC_MaxHealth.h"

#include "GAS/PlayerAttributeSet.h"
#include "Interfaces/CombatInterface.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
	VigorDef.AttributeToCapture = UPlayerAttributeSet::GetVigorAttribute();
	VigorDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VigorDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(VigorDef);
}

float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	//Gather Tags From source or Target (Only for practice not necessary)
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParams;
	EvaluateParams.SourceTags = SourceTags;
	EvaluateParams.TargetTags = TargetTags;

	float Vigor = 0.f ;
	GetCapturedAttributeMagnitude(VigorDef , Spec , EvaluateParams , Vigor);
	Vigor = FMath::Max<float>(Vigor, 0.0f);
	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 Level = CombatInterface-> GetPlayerLevel();
	
	return Level* 10 + Vigor * 2.5 +  80 ;
}

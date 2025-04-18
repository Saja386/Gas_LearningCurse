// copy right druid mechanics


#include "GAS/GPEEC/DamageExecutionCalculation.h"

#include "AbilitySystemComponent.h"
#include "AuraGamePlayTags.h"
#include "Engine/SpecularProfile.h"
#include "GAS/AuraAbilitySystemLiberary.h"
#include "GAS/PlayerAttributeSet.h"
#include "GAS/Data/CharacterDefaultClassInfo.h"
#include "Interfaces/CombatInterface.h"


//This is the structure that every body use in the big Companies .
struct AuraDamageStatics
{
	//This Create a property and a captureDefinishion so we can use that to capture the values. 
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	DECLARE_ATTRIBUTE_CAPTUREDEF(ArmorPenetration);

	DECLARE_ATTRIBUTE_CAPTUREDEF(BlockChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitResistance);

	


	AuraDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , Armor , Target , false );
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , BlockChance , Target , false );
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , ArmorPenetration , Source , false );
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , CriticalHitChance , Source , false );
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , CriticalHitDamage , Source , false );
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPlayerAttributeSet , CriticalHitResistance , Target , false );
	}
};

static const AuraDamageStatics& DamageStatics ()
{
	static AuraDamageStatics DamageStatics;
	return DamageStatics;
}

UDamageExecutionCalculation::UDamageExecutionCalculation()
{
	RelevantAttributesToCapture.Add(DamageStatics().ArmorDef);
	RelevantAttributesToCapture.Add(DamageStatics().BlockChanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().ArmorPenetrationDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitChanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitDamageDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitResistanceDef);
}

void UDamageExecutionCalculation::Execute_Implementation(
	const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();
	AActor* SourceAvatarActor = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	AActor*TargetAvatarActor = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	ICombatInterface* SourceCombatInterface = Cast <ICombatInterface> (SourceAvatarActor);
	ICombatInterface* TargetCombatInterface = Cast <ICombatInterface> (TargetAvatarActor);
	
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	FAggregatorEvaluateParameters EvaluateParams;

	
	EvaluateParams.SourceTags = SourceTags;
	EvaluateParams.TargetTags = TargetTags;


	// Get Damage Set By Caller magnitute
	float Damage = Spec.GetSetByCallerMagnitude(FAuraGamePlayTags::Get().Damage);
	//Capture BlockChance on Taarget , And Determine if there Was a sucessful Block ,
	float TargetBlockChance = 0.f ;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().BlockChanceDef , EvaluateParams , TargetBlockChance);
	TargetBlockChance = FMath::Max<float>(TargetBlockChance , 0.0f);

	float TargetArmor = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorDef, EvaluateParams , TargetArmor);
	TargetArmor = FMath::Max<float>(TargetArmor , 0.0f);
	
	float SourceArmorPenetration = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorPenetrationDef, EvaluateParams , SourceArmorPenetration);
	SourceArmorPenetration = FMath::Max<float>(SourceArmorPenetration , 0.0f);

	UCharacterClassInfo* DefaultClassInfo = UAuraAbilitySystemLiberary::GetCharacterClassInfo(SourceAvatarActor);
	FRealCurve* ArmorPenetrationCurve =  DefaultClassInfo->DamageCoefficienseTable->FindCurve(FName("ArmorPenetration") , FString());
	const float ArmorPenetrationCoefficienseVal = ArmorPenetrationCurve->Eval(SourceCombatInterface->GetPlayerLevel());
	
	FRealCurve* EffectiveArmorCurve = DefaultClassInfo->DamageCoefficienseTable->FindCurve(FName("EffectiveArmor") , FString());
	const float EffectiveArmorVal = EffectiveArmorCurve->Eval(TargetCombatInterface->GetPlayerLevel());

	const float EffectiveArmor = TargetArmor *= (100.f- SourceArmorPenetration * ArmorPenetrationCoefficienseVal)/100.f ;
	Damage*= (100.f- EffectiveArmor*EffectiveArmorVal)/100.f;

	float SourceCriticalHitChance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitChanceDef, EvaluateParams , SourceCriticalHitChance);
	SourceCriticalHitChance = FMath::Max<float>(SourceCriticalHitChance , 0.0f);

	float SourceCriticalHitDamage = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitDamageDef, EvaluateParams , SourceCriticalHitDamage);
	SourceCriticalHitDamage = FMath::Max<float>(SourceCriticalHitDamage , 0.0f);

	float TargetCriticalHitResistance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitResistanceDef, EvaluateParams , TargetCriticalHitResistance);
	TargetCriticalHitResistance = FMath::Max<float>(TargetCriticalHitResistance , 0.0f);


	FRealCurve* CriticalResistanceCurve = DefaultClassInfo->DamageCoefficienseTable->FindCurve(FName("CriticalHitResistance") , FString());
	const float CriticalHitResistanceVal = CriticalResistanceCurve->Eval(TargetCombatInterface->GetPlayerLevel());

	const float EffectiveCriticalHitChance = SourceCriticalHitChance - TargetCriticalHitResistance *CriticalHitResistanceVal;
	const bool BCriticalHit = FMath::RandRange(1,100) < EffectiveCriticalHitChance;

	Damage = BCriticalHit ? 2.f*Damage+SourceCriticalHitDamage : Damage;
	

	


	

	const bool bBlocked = FMath::RandRange(1 , 100) < TargetBlockChance;
	if(bBlocked) Damage *= 0.25 ;
	
	FGameplayModifierEvaluatedData EvaluatedData(UPlayerAttributeSet::GetIncomingDamageAttribute() , EGameplayModOp::Additive , Damage);
	OutExecutionOutput.AddOutputModifier(EvaluatedData);
}

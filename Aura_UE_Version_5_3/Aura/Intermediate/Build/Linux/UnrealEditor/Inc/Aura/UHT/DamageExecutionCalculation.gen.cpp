// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/GPEEC/DamageExecutionCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageExecutionCalculation() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UDamageExecutionCalculation();
AURA_API UClass* Z_Construct_UClass_UDamageExecutionCalculation_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UDamageExecutionCalculation
void UDamageExecutionCalculation::StaticRegisterNativesUDamageExecutionCalculation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageExecutionCalculation);
UClass* Z_Construct_UClass_UDamageExecutionCalculation_NoRegister()
{
	return UDamageExecutionCalculation::StaticClass();
}
struct Z_Construct_UClass_UDamageExecutionCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GPEEC/DamageExecutionCalculation.h" },
		{ "ModuleRelativePath", "Public/GAS/GPEEC/DamageExecutionCalculation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageExecutionCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageExecutionCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageExecutionCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageExecutionCalculation_Statics::ClassParams = {
	&UDamageExecutionCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageExecutionCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageExecutionCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageExecutionCalculation()
{
	if (!Z_Registration_Info_UClass_UDamageExecutionCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageExecutionCalculation.OuterSingleton, Z_Construct_UClass_UDamageExecutionCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageExecutionCalculation.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UDamageExecutionCalculation>()
{
	return UDamageExecutionCalculation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageExecutionCalculation);
UDamageExecutionCalculation::~UDamageExecutionCalculation() {}
// End Class UDamageExecutionCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GPEEC_DamageExecutionCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageExecutionCalculation, UDamageExecutionCalculation::StaticClass, TEXT("UDamageExecutionCalculation"), &Z_Registration_Info_UClass_UDamageExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageExecutionCalculation), 234209893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GPEEC_DamageExecutionCalculation_h_3857630680(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GPEEC_DamageExecutionCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GPEEC_DamageExecutionCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

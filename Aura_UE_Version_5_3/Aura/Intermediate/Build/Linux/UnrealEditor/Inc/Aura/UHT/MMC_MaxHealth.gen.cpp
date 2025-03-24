// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/MMC/MMC_MaxHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_MaxHealth() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UMMC_MaxHealth();
AURA_API UClass* Z_Construct_UClass_UMMC_MaxHealth_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UMMC_MaxHealth
void UMMC_MaxHealth::StaticRegisterNativesUMMC_MaxHealth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_MaxHealth);
UClass* Z_Construct_UClass_UMMC_MaxHealth_NoRegister()
{
	return UMMC_MaxHealth::StaticClass();
}
struct Z_Construct_UClass_UMMC_MaxHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/MMC/MMC_MaxHealth.h" },
		{ "ModuleRelativePath", "Public/GAS/MMC/MMC_MaxHealth.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_MaxHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_MaxHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_MaxHealth_Statics::ClassParams = {
	&UMMC_MaxHealth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_MaxHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_MaxHealth()
{
	if (!Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton, Z_Construct_UClass_UMMC_MaxHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UMMC_MaxHealth>()
{
	return UMMC_MaxHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_MaxHealth);
UMMC_MaxHealth::~UMMC_MaxHealth() {}
// End Class UMMC_MaxHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxHealth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_MaxHealth, UMMC_MaxHealth::StaticClass, TEXT("UMMC_MaxHealth"), &Z_Registration_Info_UClass_UMMC_MaxHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_MaxHealth), 1130399503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxHealth_h_471791063(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxHealth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

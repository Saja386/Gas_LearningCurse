// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/MMC/MMC_MaxMana.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_MaxMana() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana();
AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UMMC_MaxMana
void UMMC_MaxMana::StaticRegisterNativesUMMC_MaxMana()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_MaxMana);
UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister()
{
	return UMMC_MaxMana::StaticClass();
}
struct Z_Construct_UClass_UMMC_MaxMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/MMC/MMC_MaxMana.h" },
		{ "ModuleRelativePath", "Public/GAS/MMC/MMC_MaxMana.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_MaxMana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams = {
	&UMMC_MaxMana::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_MaxMana()
{
	if (!Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton, Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UMMC_MaxMana>()
{
	return UMMC_MaxMana::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_MaxMana);
UMMC_MaxMana::~UMMC_MaxMana() {}
// End Class UMMC_MaxMana

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxMana_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_MaxMana, UMMC_MaxMana::StaticClass, TEXT("UMMC_MaxMana"), &Z_Registration_Info_UClass_UMMC_MaxMana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_MaxMana), 3461511554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxMana_h_1187604701(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxMana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_MMC_MMC_MaxMana_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

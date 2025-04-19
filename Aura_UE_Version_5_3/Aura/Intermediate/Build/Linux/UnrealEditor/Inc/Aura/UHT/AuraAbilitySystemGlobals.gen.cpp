// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/Globals/AuraAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemGlobals() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraAbilitySystemGlobals
void UAuraAbilitySystemGlobals::StaticRegisterNativesUAuraAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemGlobals);
UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals_NoRegister()
{
	return UAuraAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Globals/AuraAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/GAS/Globals/AuraAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::ClassParams = {
	&UAuraAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraAbilitySystemGlobals>()
{
	return UAuraAbilitySystemGlobals::StaticClass();
}
UAuraAbilitySystemGlobals::UAuraAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemGlobals);
UAuraAbilitySystemGlobals::~UAuraAbilitySystemGlobals() {}
// End Class UAuraAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Globals_AuraAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemGlobals, UAuraAbilitySystemGlobals::StaticClass, TEXT("UAuraAbilitySystemGlobals"), &Z_Registration_Info_UClass_UAuraAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemGlobals), 2154323067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Globals_AuraAbilitySystemGlobals_h_2316085407(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Globals_AuraAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Globals_AuraAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/GameplayAbilities/AuraAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilities() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraAbilities();
AURA_API UClass* Z_Construct_UClass_UAuraAbilities_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraAbilities
void UAuraAbilities::StaticRegisterNativesUAuraAbilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilities);
UClass* Z_Construct_UClass_UAuraAbilities_NoRegister()
{
	return UAuraAbilities::StaticClass();
}
struct Z_Construct_UClass_UAuraAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GameplayAbilities/AuraAbilities.h" },
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/AuraAbilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilities_Statics::ClassParams = {
	&UAuraAbilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAbilities()
{
	if (!Z_Registration_Info_UClass_UAuraAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilities.OuterSingleton, Z_Construct_UClass_UAuraAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAbilities.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraAbilities>()
{
	return UAuraAbilities::StaticClass();
}
UAuraAbilities::UAuraAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilities);
UAuraAbilities::~UAuraAbilities() {}
// End Class UAuraAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_AuraAbilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilities, UAuraAbilities::StaticClass, TEXT("UAuraAbilities"), &Z_Registration_Info_UClass_UAuraAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilities), 1210001700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_AuraAbilities_h_3867885271(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_AuraAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_AuraAbilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

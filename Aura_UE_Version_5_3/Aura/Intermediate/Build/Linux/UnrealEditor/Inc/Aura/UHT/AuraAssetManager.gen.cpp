// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAssetManager() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraAssetManager();
AURA_API UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraAssetManager
void UAuraAssetManager::StaticRegisterNativesUAuraAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAssetManager);
UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister()
{
	return UAuraAssetManager::StaticClass();
}
struct Z_Construct_UClass_UAuraAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AuraAssetManager.h" },
		{ "ModuleRelativePath", "Public/AuraAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAssetManager_Statics::ClassParams = {
	&UAuraAssetManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAssetManager()
{
	if (!Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton, Z_Construct_UClass_UAuraAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraAssetManager>()
{
	return UAuraAssetManager::StaticClass();
}
UAuraAssetManager::UAuraAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAssetManager);
UAuraAssetManager::~UAuraAssetManager() {}
// End Class UAuraAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAssetManager, UAuraAssetManager::StaticClass, TEXT("UAuraAssetManager"), &Z_Registration_Info_UClass_UAuraAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAssetManager), 2243331650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAssetManager_h_2888690735(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

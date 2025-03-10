// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/PlayerAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributeSet() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UPlayerAttributeSet();
AURA_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UPlayerAttributeSet
void UPlayerAttributeSet::StaticRegisterNativesUPlayerAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAttributeSet);
UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister()
{
	return UPlayerAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UPlayerAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/PlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams = {
	&UPlayerAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttributeSet()
{
	if (!Z_Registration_Info_UClass_UPlayerAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttributeSet.OuterSingleton, Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttributeSet.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UPlayerAttributeSet>()
{
	return UPlayerAttributeSet::StaticClass();
}
UPlayerAttributeSet::UPlayerAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributeSet);
UPlayerAttributeSet::~UPlayerAttributeSet() {}
// End Class UPlayerAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributeSet, UPlayerAttributeSet::StaticClass, TEXT("UPlayerAttributeSet"), &Z_Registration_Info_UClass_UPlayerAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributeSet), 1202340593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_4129096705(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

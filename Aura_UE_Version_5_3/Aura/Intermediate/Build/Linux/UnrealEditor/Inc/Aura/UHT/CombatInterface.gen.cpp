// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interfaces/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UCombatInterface();
AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Interface UCombatInterface
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UCombatInterface>()
{
	return UCombatInterface::StaticClass();
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
UCombatInterface::~UCombatInterface() {}
// End Interface UCombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 1312409880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_3421826720(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

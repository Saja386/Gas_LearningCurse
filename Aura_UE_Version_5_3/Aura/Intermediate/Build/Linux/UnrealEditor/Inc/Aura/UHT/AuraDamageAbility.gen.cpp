// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraDamageAbility() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraAbilities();
AURA_API UClass* Z_Construct_UClass_UAuraDamageAbility();
AURA_API UClass* Z_Construct_UClass_UAuraDamageAbility_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraDamageAbility
void UAuraDamageAbility::StaticRegisterNativesUAuraDamageAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraDamageAbility);
UClass* Z_Construct_UClass_UAuraDamageAbility_NoRegister()
{
	return UAuraDamageAbility::StaticClass();
}
struct Z_Construct_UClass_UAuraDamageAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTagMap_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTagMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTagMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTagMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraDamageAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraDamageAbility, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap_ValueProp = { "DamageTagMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(0, nullptr) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap_Key_KeyProp = { "DamageTagMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap = { "DamageTagMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraDamageAbility, DamageTagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTagMap_MetaData), NewProp_DamageTagMap_MetaData) }; // 1298103297 703790095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraDamageAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageAbility_Statics::NewProp_DamageTagMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraDamageAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraAbilities,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraDamageAbility_Statics::ClassParams = {
	&UAuraDamageAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAuraDamageAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraDamageAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraDamageAbility()
{
	if (!Z_Registration_Info_UClass_UAuraDamageAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraDamageAbility.OuterSingleton, Z_Construct_UClass_UAuraDamageAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraDamageAbility.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraDamageAbility>()
{
	return UAuraDamageAbility::StaticClass();
}
UAuraDamageAbility::UAuraDamageAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraDamageAbility);
UAuraDamageAbility::~UAuraDamageAbility() {}
// End Class UAuraDamageAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_DamagingAbility_AuraDamageAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraDamageAbility, UAuraDamageAbility::StaticClass, TEXT("UAuraDamageAbility"), &Z_Registration_Info_UClass_UAuraDamageAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraDamageAbility), 1319026601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_DamagingAbility_AuraDamageAbility_h_1129105085(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_DamagingAbility_AuraDamageAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_DamagingAbility_AuraDamageAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

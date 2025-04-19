// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraAbilitiesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitiesTypes() {}

// Begin Cross Module References
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin ScriptStruct FAuraGamePlayEffectContextStruct
static_assert(std::is_polymorphic<FAuraGamePlayEffectContextStruct>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FAuraGamePlayEffectContextStruct cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct;
class UScriptStruct* FAuraGamePlayEffectContextStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraGamePlayEffectContextStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraGamePlayEffectContextStruct>()
{
	return FAuraGamePlayEffectContextStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuraAbilitiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BIsBlock_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuraAbilitiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuraAbilitiesTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_BIsBlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BIsBlock;
	static void NewProp_BIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BIsCriticalHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraGamePlayEffectContextStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsBlock_SetBit(void* Obj)
{
	((FAuraGamePlayEffectContextStruct*)Obj)->BIsBlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsBlock = { "BIsBlock", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAuraGamePlayEffectContextStruct), &Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BIsBlock_MetaData), NewProp_BIsBlock_MetaData) };
void Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsCriticalHit_SetBit(void* Obj)
{
	((FAuraGamePlayEffectContextStruct*)Obj)->BIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsCriticalHit = { "BIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAuraGamePlayEffectContextStruct), &Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BIsCriticalHit_MetaData), NewProp_BIsCriticalHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewProp_BIsCriticalHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"AuraGamePlayEffectContextStruct",
	Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::PropPointers),
	sizeof(FAuraGamePlayEffectContextStruct),
	alignof(FAuraGamePlayEffectContextStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.InnerSingleton, Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct.InnerSingleton;
}
// End ScriptStruct FAuraGamePlayEffectContextStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAbilitiesTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAuraGamePlayEffectContextStruct::StaticStruct, Z_Construct_UScriptStruct_FAuraGamePlayEffectContextStruct_Statics::NewStructOps, TEXT("AuraGamePlayEffectContextStruct"), &Z_Registration_Info_UScriptStruct_AuraGamePlayEffectContextStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraGamePlayEffectContextStruct), 1645054152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAbilitiesTypes_h_43884168(TEXT("/Script/Aura"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAbilitiesTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AuraAbilitiesTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

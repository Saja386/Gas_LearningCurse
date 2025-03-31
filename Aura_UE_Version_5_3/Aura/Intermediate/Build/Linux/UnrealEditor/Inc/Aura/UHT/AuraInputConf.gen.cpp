// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/AuraInputConf.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraInputConf() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraInputConf();
AURA_API UClass* Z_Construct_UClass_UAuraInputConf_NoRegister();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraInputConfStruct();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin ScriptStruct FAuraInputConfStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraInputConfStruct;
class UScriptStruct* FAuraInputConfStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraInputConfStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraInputConfStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraInputConfStruct, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraInputConfStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AuraInputConfStruct.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraInputConfStruct>()
{
	return FAuraInputConfStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConf.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "AuraInputConfStruct" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConf.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGameplayTag_MetaData[] = {
		{ "Category", "AuraInputConfStruct" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConf.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputGameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraInputConfStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraInputConfStruct, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::NewProp_InputGameplayTag = { "InputGameplayTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraInputConfStruct, InputGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGameplayTag_MetaData), NewProp_InputGameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::NewProp_InputGameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"AuraInputConfStruct",
	Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::PropPointers),
	sizeof(FAuraInputConfStruct),
	alignof(FAuraInputConfStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuraInputConfStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraInputConfStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraInputConfStruct.InnerSingleton, Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuraInputConfStruct.InnerSingleton;
}
// End ScriptStruct FAuraInputConfStruct

// Begin Class UAuraInputConf
void UAuraInputConf::StaticRegisterNativesUAuraInputConf()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraInputConf);
UClass* Z_Construct_UClass_UAuraInputConf_NoRegister()
{
	return UAuraInputConf::StaticClass();
}
struct Z_Construct_UClass_UAuraInputConf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Input/AuraInputConf.h" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConf.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActionConf_MetaData[] = {
		{ "Category", "Aura Input" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConf.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActionConf_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActionConf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraInputConf>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraInputConf_Statics::NewProp_AbilityInputActionConf_Inner = { "AbilityInputActionConf", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraInputConfStruct, METADATA_PARAMS(0, nullptr) }; // 4194080884
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuraInputConf_Statics::NewProp_AbilityInputActionConf = { "AbilityInputActionConf", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraInputConf, AbilityInputActionConf), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActionConf_MetaData), NewProp_AbilityInputActionConf_MetaData) }; // 4194080884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraInputConf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraInputConf_Statics::NewProp_AbilityInputActionConf_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraInputConf_Statics::NewProp_AbilityInputActionConf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConf_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraInputConf_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConf_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraInputConf_Statics::ClassParams = {
	&UAuraInputConf::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAuraInputConf_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConf_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConf_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraInputConf_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraInputConf()
{
	if (!Z_Registration_Info_UClass_UAuraInputConf.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraInputConf.OuterSingleton, Z_Construct_UClass_UAuraInputConf_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraInputConf.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraInputConf>()
{
	return UAuraInputConf::StaticClass();
}
UAuraInputConf::UAuraInputConf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraInputConf);
UAuraInputConf::~UAuraInputConf() {}
// End Class UAuraInputConf

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAuraInputConfStruct::StaticStruct, Z_Construct_UScriptStruct_FAuraInputConfStruct_Statics::NewStructOps, TEXT("AuraInputConfStruct"), &Z_Registration_Info_UScriptStruct_AuraInputConfStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraInputConfStruct), 4194080884U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraInputConf, UAuraInputConf::StaticClass, TEXT("UAuraInputConf"), &Z_Registration_Info_UClass_UAuraInputConf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraInputConf), 194151253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_949877990(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputConf_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

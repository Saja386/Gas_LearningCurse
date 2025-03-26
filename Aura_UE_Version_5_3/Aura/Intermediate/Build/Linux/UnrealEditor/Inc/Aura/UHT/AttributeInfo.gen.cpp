// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/Data/AttributeInfo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeInfo() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAttributeInfo();
AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin ScriptStruct FAuraAttributeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraAttributeInfo;
class UScriptStruct* FAuraAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraAttributeInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraAttributeInfo>()
{
	return FAuraAttributeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDescription_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraAttributeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTag_MetaData), NewProp_AttributeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription = { "AttributeDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeDescription_MetaData), NewProp_AttributeDescription_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"AuraAttributeInfo",
	Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers),
	sizeof(FAuraAttributeInfo),
	alignof(FAuraAttributeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton;
}
// End ScriptStruct FAuraAttributeInfo

// Begin Class UAttributeInfo
void UAttributeInfo::StaticRegisterNativesUAttributeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeInfo);
UClass* Z_Construct_UClass_UAttributeInfo_NoRegister()
{
	return UAttributeInfo::StaticClass();
}
struct Z_Construct_UClass_UAttributeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Data/AttributeInfo.h" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfos_MetaData[] = {
		{ "Category", "AttributeInfo" },
		{ "ModuleRelativePath", "Public/GAS/Data/AttributeInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInfos_Inner = { "AttributeInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraAttributeInfo, METADATA_PARAMS(0, nullptr) }; // 598256776
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInfos = { "AttributeInfos", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeInfo, AttributeInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfos_MetaData), NewProp_AttributeInfos_MetaData) }; // 598256776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeInfo_Statics::ClassParams = {
	&UAttributeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeInfo()
{
	if (!Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton, Z_Construct_UClass_UAttributeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAttributeInfo>()
{
	return UAttributeInfo::StaticClass();
}
UAttributeInfo::UAttributeInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeInfo);
UAttributeInfo::~UAttributeInfo() {}
// End Class UAttributeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAuraAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewStructOps, TEXT("AuraAttributeInfo"), &Z_Registration_Info_UScriptStruct_AuraAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraAttributeInfo), 598256776U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeInfo, UAttributeInfo::StaticClass, TEXT("UAttributeInfo"), &Z_Registration_Info_UClass_UAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeInfo), 1265596251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_3848460409(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_AttributeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

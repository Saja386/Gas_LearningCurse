// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/Data/CharacterDefaultClassInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDefaultClassInfo() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo();
AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClasses();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefaultClassInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Enum ECharacterClasses
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterClasses;
static UEnum* ECharacterClasses_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterClasses.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterClasses.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_ECharacterClasses, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("ECharacterClasses"));
	}
	return Z_Registration_Info_UEnum_ECharacterClasses.OuterSingleton;
}
template<> AURA_API UEnum* StaticEnum<ECharacterClasses>()
{
	return ECharacterClasses_StaticEnum();
}
struct Z_Construct_UEnum_Aura_ECharacterClasses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Elementalist.Name", "ECharacterClasses::Elementalist" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
		{ "Ranger.Name", "ECharacterClasses::Ranger" },
		{ "Warrior.Name", "ECharacterClasses::Warrior" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterClasses::Elementalist", (int64)ECharacterClasses::Elementalist },
		{ "ECharacterClasses::Warrior", (int64)ECharacterClasses::Warrior },
		{ "ECharacterClasses::Ranger", (int64)ECharacterClasses::Ranger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_ECharacterClasses_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	"ECharacterClasses",
	"ECharacterClasses",
	Z_Construct_UEnum_Aura_ECharacterClasses_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_ECharacterClasses_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_ECharacterClasses_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_ECharacterClasses_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Aura_ECharacterClasses()
{
	if (!Z_Registration_Info_UEnum_ECharacterClasses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterClasses.InnerSingleton, Z_Construct_UEnum_Aura_ECharacterClasses_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterClasses.InnerSingleton;
}
// End Enum ECharacterClasses

// Begin ScriptStruct FCharacterDefaultClassInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo;
class UScriptStruct* FCharacterDefaultClassInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDefaultClassInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("CharacterDefaultClassInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FCharacterDefaultClassInfo>()
{
	return FCharacterDefaultClassInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributes_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDefaultClassInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::NewProp_PrimaryAttributes = { "PrimaryAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultClassInfo, PrimaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAttributes_MetaData), NewProp_PrimaryAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::NewProp_PrimaryAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"CharacterDefaultClassInfo",
	Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::PropPointers),
	sizeof(FCharacterDefaultClassInfo),
	alignof(FCharacterDefaultClassInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefaultClassInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo.InnerSingleton;
}
// End ScriptStruct FCharacterDefaultClassInfo

// Begin Class UCharacterClassInfo
void UCharacterClassInfo::StaticRegisterNativesUCharacterClassInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterClassInfo);
UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister()
{
	return UCharacterClassInfo::StaticClass();
}
struct Z_Construct_UClass_UCharacterClassInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Data/CharacterDefaultClassInfo.h" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VitalAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInformation_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/GAS/Data/CharacterDefaultClassInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VitalAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassInformation_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClassInformation_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClassInformation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterClassInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterClassInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_SecondaryAttributes = { "SecondaryAttributes", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClassInfo, SecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAttributes_MetaData), NewProp_SecondaryAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_VitalAttributes = { "VitalAttributes", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClassInfo, VitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VitalAttributes_MetaData), NewProp_VitalAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterDefaultClassInfo, METADATA_PARAMS(0, nullptr) }; // 2951234089
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp = { "CharacterClassInformation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Aura_ECharacterClasses, METADATA_PARAMS(0, nullptr) }; // 4023798841
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClassInfo, CharacterClassInformation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassInformation_MetaData), NewProp_CharacterClassInformation_MetaData) }; // 4023798841 2951234089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_SecondaryAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_VitalAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterClassInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams = {
	&UCharacterClassInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterClassInfo()
{
	if (!Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton, Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UCharacterClassInfo>()
{
	return UCharacterClassInfo::StaticClass();
}
UCharacterClassInfo::UCharacterClassInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterClassInfo);
UCharacterClassInfo::~UCharacterClassInfo() {}
// End Class UCharacterClassInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterClasses_StaticEnum, TEXT("ECharacterClasses"), &Z_Registration_Info_UEnum_ECharacterClasses, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4023798841U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterDefaultClassInfo::StaticStruct, Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics::NewStructOps, TEXT("CharacterDefaultClassInfo"), &Z_Registration_Info_UScriptStruct_CharacterDefaultClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterDefaultClassInfo), 2951234089U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterClassInfo, UCharacterClassInfo::StaticClass, TEXT("UCharacterClassInfo"), &Z_Registration_Info_UClass_UCharacterClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterClassInfo), 1113547466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_4259702960(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

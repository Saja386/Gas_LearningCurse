// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/AuraAbilitySystemLiberary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemLiberary() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary_NoRegister();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClasses();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraAbilitySystemLiberary Function GetAttributeMenuWidgetController
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics
{
	struct AuraAbilitySystemLiberary_eventGetAttributeMenuWidgetController_Parms
	{
		const UObject* WorldContextObject;
		UAttributeMenuWidgetController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|AttributeWidgetController" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetAttributeMenuWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetAttributeMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "GetAttributeMenuWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemLiberary_eventGetAttributeMenuWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemLiberary_eventGetAttributeMenuWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execGetAttributeMenuWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAttributeMenuWidgetController**)Z_Param__Result=UAuraAbilitySystemLiberary::GetAttributeMenuWidgetController(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function GetAttributeMenuWidgetController

// Begin Class UAuraAbilitySystemLiberary Function GetOverlayWidgetController
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics
{
	struct AuraAbilitySystemLiberary_eventGetOverlayWidgetController_Parms
	{
		const UObject* WorldContextObject;
		UOverlayWidgetController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|OverLayWidgetController" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetOverlayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "GetOverlayWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::AuraAbilitySystemLiberary_eventGetOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::AuraAbilitySystemLiberary_eventGetOverlayWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execGetOverlayWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOverlayWidgetController**)Z_Param__Result=UAuraAbilitySystemLiberary::GetOverlayWidgetController(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function GetOverlayWidgetController

// Begin Class UAuraAbilitySystemLiberary Function InitializeDefaultAttributesbyClass
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics
{
	struct AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms
	{
		const UObject* WorldContextObject;
		ECharacterClasses CharacterClasses;
		float Level;
		UAbilitySystemComponent* ASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|AttributeWidgetController" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClasses_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_CharacterClasses_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_CharacterClasses = { "CharacterClasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms, CharacterClasses), Z_Construct_UEnum_Aura_ECharacterClasses, METADATA_PARAMS(0, nullptr) }; // 4023798841
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_CharacterClasses_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_CharacterClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "InitializeDefaultAttributesbyClass", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::AuraAbilitySystemLiberary_eventInitializeDefaultAttributesbyClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execInitializeDefaultAttributesbyClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ECharacterClasses,Z_Param_CharacterClasses);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAuraAbilitySystemLiberary::InitializeDefaultAttributesbyClass(Z_Param_WorldContextObject,ECharacterClasses(Z_Param_CharacterClasses),Z_Param_Level,Z_Param_ASC);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function InitializeDefaultAttributesbyClass

// Begin Class UAuraAbilitySystemLiberary
void UAuraAbilitySystemLiberary::StaticRegisterNativesUAuraAbilitySystemLiberary()
{
	UClass* Class = UAuraAbilitySystemLiberary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeMenuWidgetController", &UAuraAbilitySystemLiberary::execGetAttributeMenuWidgetController },
		{ "GetOverlayWidgetController", &UAuraAbilitySystemLiberary::execGetOverlayWidgetController },
		{ "InitializeDefaultAttributesbyClass", &UAuraAbilitySystemLiberary::execInitializeDefaultAttributesbyClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemLiberary);
UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary_NoRegister()
{
	return UAuraAbilitySystemLiberary::StaticClass();
}
struct Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/AuraAbilitySystemLiberary.h" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetAttributeMenuWidgetController, "GetAttributeMenuWidgetController" }, // 149676906
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 1073682621
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass, "InitializeDefaultAttributesbyClass" }, // 3153204970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemLiberary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::ClassParams = {
	&UAuraAbilitySystemLiberary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary()
{
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemLiberary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemLiberary.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAbilitySystemLiberary.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraAbilitySystemLiberary>()
{
	return UAuraAbilitySystemLiberary::StaticClass();
}
UAuraAbilitySystemLiberary::UAuraAbilitySystemLiberary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemLiberary);
UAuraAbilitySystemLiberary::~UAuraAbilitySystemLiberary() {}
// End Class UAuraAbilitySystemLiberary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemLiberary, UAuraAbilitySystemLiberary::StaticClass, TEXT("UAuraAbilitySystemLiberary"), &Z_Registration_Info_UClass_UAuraAbilitySystemLiberary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemLiberary), 1087563313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_2559812531(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

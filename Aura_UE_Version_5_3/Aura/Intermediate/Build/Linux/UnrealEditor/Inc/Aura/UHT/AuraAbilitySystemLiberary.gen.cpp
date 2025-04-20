// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/AuraAbilitySystemLiberary.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemLiberary() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLiberary_NoRegister();
AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClasses();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
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

// Begin Class UAuraAbilitySystemLiberary Function GetCharacterClassInfo
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics
{
	struct AuraAbilitySystemLiberary_eventGetCharacterClassInfo_Parms
	{
		const UObject* WorldContextObject;
		UCharacterClassInfo* ReturnValue;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetCharacterClassInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGetCharacterClassInfo_Parms, ReturnValue), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "GetCharacterClassInfo", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::AuraAbilitySystemLiberary_eventGetCharacterClassInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::AuraAbilitySystemLiberary_eventGetCharacterClassInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execGetCharacterClassInfo)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterClassInfo**)Z_Param__Result=UAuraAbilitySystemLiberary::GetCharacterClassInfo(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function GetCharacterClassInfo

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

// Begin Class UAuraAbilitySystemLiberary Function GiveStartUpAbilitys
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics
{
	struct AuraAbilitySystemLiberary_eventGiveStartUpAbilitys_Parms
	{
		const UObject* WorldContextObject;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGiveStartUpAbilitys_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventGiveStartUpAbilitys_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "GiveStartUpAbilitys", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::AuraAbilitySystemLiberary_eventGiveStartUpAbilitys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::AuraAbilitySystemLiberary_eventGiveStartUpAbilitys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execGiveStartUpAbilitys)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAuraAbilitySystemLiberary::GiveStartUpAbilitys(Z_Param_WorldContextObject,Z_Param_ASC);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function GiveStartUpAbilitys

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

// Begin Class UAuraAbilitySystemLiberary Function IsBlockHit
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics
{
	struct AuraAbilitySystemLiberary_eventIsBlockHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|GamePlayEffect" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventIsBlockHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1628379207
void Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AuraAbilitySystemLiberary_eventIsBlockHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLiberary_eventIsBlockHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "IsBlockHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::AuraAbilitySystemLiberary_eventIsBlockHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::AuraAbilitySystemLiberary_eventIsBlockHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execIsBlockHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAuraAbilitySystemLiberary::IsBlockHit(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function IsBlockHit

// Begin Class UAuraAbilitySystemLiberary Function IsCriticalHit
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics
{
	struct AuraAbilitySystemLiberary_eventIsCriticalHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|GamePlayEffect" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1628379207
void Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AuraAbilitySystemLiberary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLiberary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::AuraAbilitySystemLiberary_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::AuraAbilitySystemLiberary_eventIsCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execIsCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAuraAbilitySystemLiberary::IsCriticalHit(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function IsCriticalHit

// Begin Class UAuraAbilitySystemLiberary Function SetIsBlockHit
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics
{
	struct AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool IsBlockedHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|GamePlayEffect" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_IsBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBlockedHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_IsBlockedHit_SetBit(void* Obj)
{
	((AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms*)Obj)->IsBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_IsBlockedHit = { "IsBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_IsBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::NewProp_IsBlockedHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "SetIsBlockHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::AuraAbilitySystemLiberary_eventSetIsBlockHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execSetIsBlockHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_UBOOL(Z_Param_IsBlockedHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAuraAbilitySystemLiberary::SetIsBlockHit(Z_Param_Out_EffectContextHandle,Z_Param_IsBlockedHit);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function SetIsBlockHit

// Begin Class UAuraAbilitySystemLiberary Function SetIsCritical
struct Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics
{
	struct AuraAbilitySystemLiberary_eventSetIsCritical_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool IsCritical;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aura Ability System|GamePlayEffect" },
		{ "ModuleRelativePath", "Public/GAS/AuraAbilitySystemLiberary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLiberary_eventSetIsCritical_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((AuraAbilitySystemLiberary_eventSetIsCritical_Parms*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLiberary_eventSetIsCritical_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::NewProp_IsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLiberary, nullptr, "SetIsCritical", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::AuraAbilitySystemLiberary_eventSetIsCritical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::AuraAbilitySystemLiberary_eventSetIsCritical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLiberary::execSetIsCritical)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_UBOOL(Z_Param_IsCritical);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAuraAbilitySystemLiberary::SetIsCritical(Z_Param_Out_EffectContextHandle,Z_Param_IsCritical);
	P_NATIVE_END;
}
// End Class UAuraAbilitySystemLiberary Function SetIsCritical

// Begin Class UAuraAbilitySystemLiberary
void UAuraAbilitySystemLiberary::StaticRegisterNativesUAuraAbilitySystemLiberary()
{
	UClass* Class = UAuraAbilitySystemLiberary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeMenuWidgetController", &UAuraAbilitySystemLiberary::execGetAttributeMenuWidgetController },
		{ "GetCharacterClassInfo", &UAuraAbilitySystemLiberary::execGetCharacterClassInfo },
		{ "GetOverlayWidgetController", &UAuraAbilitySystemLiberary::execGetOverlayWidgetController },
		{ "GiveStartUpAbilitys", &UAuraAbilitySystemLiberary::execGiveStartUpAbilitys },
		{ "InitializeDefaultAttributesbyClass", &UAuraAbilitySystemLiberary::execInitializeDefaultAttributesbyClass },
		{ "IsBlockHit", &UAuraAbilitySystemLiberary::execIsBlockHit },
		{ "IsCriticalHit", &UAuraAbilitySystemLiberary::execIsCriticalHit },
		{ "SetIsBlockHit", &UAuraAbilitySystemLiberary::execSetIsBlockHit },
		{ "SetIsCritical", &UAuraAbilitySystemLiberary::execSetIsCritical },
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
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetCharacterClassInfo, "GetCharacterClassInfo" }, // 2382444909
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 1073682621
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_GiveStartUpAbilitys, "GiveStartUpAbilitys" }, // 1403954715
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_InitializeDefaultAttributesbyClass, "InitializeDefaultAttributesbyClass" }, // 3153204970
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsBlockHit, "IsBlockHit" }, // 3615928414
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_IsCriticalHit, "IsCriticalHit" }, // 4065414525
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsBlockHit, "SetIsBlockHit" }, // 2504516829
		{ &Z_Construct_UFunction_UAuraAbilitySystemLiberary_SetIsCritical, "SetIsCritical" }, // 3463417035
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
		{ Z_Construct_UClass_UAuraAbilitySystemLiberary, UAuraAbilitySystemLiberary::StaticClass, TEXT("UAuraAbilitySystemLiberary"), &Z_Registration_Info_UClass_UAuraAbilitySystemLiberary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemLiberary), 197492176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_462581350(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

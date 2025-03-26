// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/PlayerAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributeSet() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UPlayerAttributeSet();
AURA_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FEffectGamePlayProperties();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin ScriptStruct FEffectGamePlayProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectGamePlayProperties;
class UScriptStruct* FEffectGamePlayProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectGamePlayProperties, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EffectGamePlayProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FEffectGamePlayProperties>()
{
	return FEffectGamePlayProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectGamePlayProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectGamePlayProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewProp_TargetCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"EffectGamePlayProperties",
	Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::PropPointers),
	sizeof(FEffectGamePlayProperties),
	alignof(FEffectGamePlayProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectGamePlayProperties()
{
	if (!Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffectGamePlayProperties.InnerSingleton;
}
// End ScriptStruct FEffectGamePlayProperties

// Begin Class UPlayerAttributeSet Function OnRep_Armor
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics
{
	struct PlayerAttributeSet_eventOnRep_Armor_Parms
	{
		FGameplayAttributeData CurrentArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::NewProp_CurrentArmor = { "CurrentArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Armor_Parms, CurrentArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArmor_MetaData), NewProp_CurrentArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::NewProp_CurrentArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PlayerAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::PlayerAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Armor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor(Z_Param_Out_CurrentArmor);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Armor

// Begin Class UPlayerAttributeSet Function OnRep_ArmorPenetration
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics
{
	struct PlayerAttributeSet_eventOnRep_ArmorPenetration_Parms
	{
		FGameplayAttributeData CurrentArmorPenetration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArmorPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentArmorPenetration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_CurrentArmorPenetration = { "CurrentArmorPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_ArmorPenetration_Parms, CurrentArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArmorPenetration_MetaData), NewProp_CurrentArmorPenetration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_CurrentArmorPenetration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_ArmorPenetration", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PlayerAttributeSet_eventOnRep_ArmorPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::PlayerAttributeSet_eventOnRep_ArmorPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_ArmorPenetration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentArmorPenetration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ArmorPenetration(Z_Param_Out_CurrentArmorPenetration);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_ArmorPenetration

// Begin Class UPlayerAttributeSet Function OnRep_BlockChance
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics
{
	struct PlayerAttributeSet_eventOnRep_BlockChance_Parms
	{
		FGameplayAttributeData CurrentBlockChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBlockChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::NewProp_CurrentBlockChance = { "CurrentBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_BlockChance_Parms, CurrentBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBlockChance_MetaData), NewProp_CurrentBlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::NewProp_CurrentBlockChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PlayerAttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::PlayerAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_BlockChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentBlockChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockChance(Z_Param_Out_CurrentBlockChance);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_BlockChance

// Begin Class UPlayerAttributeSet Function OnRep_CriticalHitChance
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics
{
	struct PlayerAttributeSet_eventOnRep_CriticalHitChance_Parms
	{
		FGameplayAttributeData CurrentCriticalHitChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCriticalHitChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCriticalHitChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_CurrentCriticalHitChance = { "CurrentCriticalHitChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_CriticalHitChance_Parms, CurrentCriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCriticalHitChance_MetaData), NewProp_CurrentCriticalHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_CurrentCriticalHitChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_CriticalHitChance", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PlayerAttributeSet_eventOnRep_CriticalHitChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::PlayerAttributeSet_eventOnRep_CriticalHitChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_CriticalHitChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentCriticalHitChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitChance(Z_Param_Out_CurrentCriticalHitChance);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_CriticalHitChance

// Begin Class UPlayerAttributeSet Function OnRep_CriticalHitDamage
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics
{
	struct PlayerAttributeSet_eventOnRep_CriticalHitDamage_Parms
	{
		FGameplayAttributeData CurrentCriticalHitDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCriticalHitDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCriticalHitDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_CurrentCriticalHitDamage = { "CurrentCriticalHitDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_CriticalHitDamage_Parms, CurrentCriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCriticalHitDamage_MetaData), NewProp_CurrentCriticalHitDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_CurrentCriticalHitDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_CriticalHitDamage", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PlayerAttributeSet_eventOnRep_CriticalHitDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::PlayerAttributeSet_eventOnRep_CriticalHitDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_CriticalHitDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentCriticalHitDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitDamage(Z_Param_Out_CurrentCriticalHitDamage);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_CriticalHitDamage

// Begin Class UPlayerAttributeSet Function OnRep_CriticalHitResistance
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics
{
	struct PlayerAttributeSet_eventOnRep_CriticalHitResistance_Parms
	{
		FGameplayAttributeData CurrentCriticalHitResistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCriticalHitResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCriticalHitResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_CurrentCriticalHitResistance = { "CurrentCriticalHitResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_CriticalHitResistance_Parms, CurrentCriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCriticalHitResistance_MetaData), NewProp_CurrentCriticalHitResistance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_CurrentCriticalHitResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_CriticalHitResistance", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PlayerAttributeSet_eventOnRep_CriticalHitResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::PlayerAttributeSet_eventOnRep_CriticalHitResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_CriticalHitResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentCriticalHitResistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitResistance(Z_Param_Out_CurrentCriticalHitResistance);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_CriticalHitResistance

// Begin Class UPlayerAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics
{
	struct PlayerAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData CurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Then we need to notify the GAS That our variable has changed from the server .\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Then we need to notify the GAS That our variable has changed from the server ." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Health_Parms, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PlayerAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::PlayerAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_CurrentHealth);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Health

// Begin Class UPlayerAttributeSet Function OnRep_HealthRegeneration
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics
{
	struct PlayerAttributeSet_eventOnRep_HealthRegeneration_Parms
	{
		FGameplayAttributeData CurrentHealthRegeneration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealthRegeneration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_CurrentHealthRegeneration = { "CurrentHealthRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_HealthRegeneration_Parms, CurrentHealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealthRegeneration_MetaData), NewProp_CurrentHealthRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_CurrentHealthRegeneration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_HealthRegeneration", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PlayerAttributeSet_eventOnRep_HealthRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::PlayerAttributeSet_eventOnRep_HealthRegeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_HealthRegeneration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentHealthRegeneration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegeneration(Z_Param_Out_CurrentHealthRegeneration);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_HealthRegeneration

// Begin Class UPlayerAttributeSet Function OnRep_Intelligence
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics
{
	struct PlayerAttributeSet_eventOnRep_Intelligence_Parms
	{
		FGameplayAttributeData CurrentIntelligence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIntelligence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::NewProp_CurrentIntelligence = { "CurrentIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Intelligence_Parms, CurrentIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIntelligence_MetaData), NewProp_CurrentIntelligence_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::NewProp_CurrentIntelligence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PlayerAttributeSet_eventOnRep_Intelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::PlayerAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Intelligence)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentIntelligence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intelligence(Z_Param_Out_CurrentIntelligence);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Intelligence

// Begin Class UPlayerAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics
{
	struct PlayerAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData CurrentMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Mana_Parms, CurrentMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::NewProp_CurrentMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PlayerAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::PlayerAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_CurrentMana);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Mana

// Begin Class UPlayerAttributeSet Function OnRep_ManaRegeneration
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics
{
	struct PlayerAttributeSet_eventOnRep_ManaRegeneration_Parms
	{
		FGameplayAttributeData CurrentManaRegeneration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentManaRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentManaRegeneration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_CurrentManaRegeneration = { "CurrentManaRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_ManaRegeneration_Parms, CurrentManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentManaRegeneration_MetaData), NewProp_CurrentManaRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_CurrentManaRegeneration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_ManaRegeneration", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PlayerAttributeSet_eventOnRep_ManaRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::PlayerAttributeSet_eventOnRep_ManaRegeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_ManaRegeneration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentManaRegeneration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManaRegeneration(Z_Param_Out_CurrentManaRegeneration);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_ManaRegeneration

// Begin Class UPlayerAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics
{
	struct PlayerAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData CurrentMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::NewProp_CurrentMaxHealth = { "CurrentMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_MaxHealth_Parms, CurrentMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMaxHealth_MetaData), NewProp_CurrentMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::NewProp_CurrentMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PlayerAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::PlayerAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_CurrentMaxHealth);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_MaxHealth

// Begin Class UPlayerAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics
{
	struct PlayerAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData CurrentMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::NewProp_CurrentMaxMana = { "CurrentMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_MaxMana_Parms, CurrentMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMaxMana_MetaData), NewProp_CurrentMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::NewProp_CurrentMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PlayerAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::PlayerAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_CurrentMaxMana);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_MaxMana

// Begin Class UPlayerAttributeSet Function OnRep_Resilience
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics
{
	struct PlayerAttributeSet_eventOnRep_Resilience_Parms
	{
		FGameplayAttributeData CurrentResilience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentResilience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentResilience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::NewProp_CurrentResilience = { "CurrentResilience", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Resilience_Parms, CurrentResilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentResilience_MetaData), NewProp_CurrentResilience_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::NewProp_CurrentResilience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Resilience", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PlayerAttributeSet_eventOnRep_Resilience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::PlayerAttributeSet_eventOnRep_Resilience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Resilience)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentResilience);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Resilience(Z_Param_Out_CurrentResilience);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Resilience

// Begin Class UPlayerAttributeSet Function OnRep_Strength
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics
{
	struct PlayerAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData CurrentStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::NewProp_CurrentStrength = { "CurrentStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Strength_Parms, CurrentStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStrength_MetaData), NewProp_CurrentStrength_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::NewProp_CurrentStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PlayerAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::PlayerAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_CurrentStrength);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Strength

// Begin Class UPlayerAttributeSet Function OnRep_Vigor
struct Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics
{
	struct PlayerAttributeSet_eventOnRep_Vigor_Parms
	{
		FGameplayAttributeData CurrentVigor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVigor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVigor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::NewProp_CurrentVigor = { "CurrentVigor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttributeSet_eventOnRep_Vigor_Parms, CurrentVigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVigor_MetaData), NewProp_CurrentVigor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::NewProp_CurrentVigor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributeSet, nullptr, "OnRep_Vigor", nullptr, nullptr, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PlayerAttributeSet_eventOnRep_Vigor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::PlayerAttributeSet_eventOnRep_Vigor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttributeSet::execOnRep_Vigor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_CurrentVigor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Vigor(Z_Param_Out_CurrentVigor);
	P_NATIVE_END;
}
// End Class UPlayerAttributeSet Function OnRep_Vigor

// Begin Class UPlayerAttributeSet
void UPlayerAttributeSet::StaticRegisterNativesUPlayerAttributeSet()
{
	UClass* Class = UPlayerAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Armor", &UPlayerAttributeSet::execOnRep_Armor },
		{ "OnRep_ArmorPenetration", &UPlayerAttributeSet::execOnRep_ArmorPenetration },
		{ "OnRep_BlockChance", &UPlayerAttributeSet::execOnRep_BlockChance },
		{ "OnRep_CriticalHitChance", &UPlayerAttributeSet::execOnRep_CriticalHitChance },
		{ "OnRep_CriticalHitDamage", &UPlayerAttributeSet::execOnRep_CriticalHitDamage },
		{ "OnRep_CriticalHitResistance", &UPlayerAttributeSet::execOnRep_CriticalHitResistance },
		{ "OnRep_Health", &UPlayerAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegeneration", &UPlayerAttributeSet::execOnRep_HealthRegeneration },
		{ "OnRep_Intelligence", &UPlayerAttributeSet::execOnRep_Intelligence },
		{ "OnRep_Mana", &UPlayerAttributeSet::execOnRep_Mana },
		{ "OnRep_ManaRegeneration", &UPlayerAttributeSet::execOnRep_ManaRegeneration },
		{ "OnRep_MaxHealth", &UPlayerAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UPlayerAttributeSet::execOnRep_MaxMana },
		{ "OnRep_Resilience", &UPlayerAttributeSet::execOnRep_Resilience },
		{ "OnRep_Strength", &UPlayerAttributeSet::execOnRep_Strength },
		{ "OnRep_Vigor", &UPlayerAttributeSet::execOnRep_Vigor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "GAS/PlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// primary attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "primary attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Secondary Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitDamage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitResistance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegeneration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegeneration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// vital attributes \n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "vital attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vigor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegeneration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegeneration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 324689839
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ArmorPenetration, "OnRep_ArmorPenetration" }, // 978175133
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 992739581
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitChance, "OnRep_CriticalHitChance" }, // 466838421
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitDamage, "OnRep_CriticalHitDamage" }, // 3588293797
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_CriticalHitResistance, "OnRep_CriticalHitResistance" }, // 3085664058
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Health, "OnRep_Health" }, // 3960616376
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_HealthRegeneration, "OnRep_HealthRegeneration" }, // 2405917892
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 2100145762
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 936165344
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_ManaRegeneration, "OnRep_ManaRegeneration" }, // 2113754575
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 593668236
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 4080375914
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Resilience, "OnRep_Resilience" }, // 2296915545
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 2429425055
		{ &Z_Construct_UFunction_UPlayerAttributeSet_OnRep_Vigor, "OnRep_Vigor" }, // 2577449335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Resilience = { "Resilience", "OnRep_Resilience", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Resilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resilience_MetaData), NewProp_Resilience_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Vigor = { "Vigor", "OnRep_Vigor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Vigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", "OnRep_ArmorPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorPenetration_MetaData), NewProp_ArmorPenetration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitChance = { "CriticalHitChance", "OnRep_CriticalHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, CriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitChance_MetaData), NewProp_CriticalHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitDamage = { "CriticalHitDamage", "OnRep_CriticalHitDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, CriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitDamage_MetaData), NewProp_CriticalHitDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitResistance = { "CriticalHitResistance", "OnRep_CriticalHitResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, CriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitResistance_MetaData), NewProp_CriticalHitResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_HealthRegeneration = { "HealthRegeneration", "OnRep_HealthRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, HealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegeneration_MetaData), NewProp_HealthRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_ManaRegeneration = { "ManaRegeneration", "OnRep_ManaRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, ManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegeneration_MetaData), NewProp_ManaRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Resilience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_ArmorPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_CriticalHitResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_HealthRegeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_ManaRegeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_Mana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers),
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
void UPlayerAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Intelligence(TEXT("Intelligence"));
	static const FName Name_Resilience(TEXT("Resilience"));
	static const FName Name_Vigor(TEXT("Vigor"));
	static const FName Name_Armor(TEXT("Armor"));
	static const FName Name_ArmorPenetration(TEXT("ArmorPenetration"));
	static const FName Name_BlockChance(TEXT("BlockChance"));
	static const FName Name_CriticalHitChance(TEXT("CriticalHitChance"));
	static const FName Name_CriticalHitDamage(TEXT("CriticalHitDamage"));
	static const FName Name_CriticalHitResistance(TEXT("CriticalHitResistance"));
	static const FName Name_HealthRegeneration(TEXT("HealthRegeneration"));
	static const FName Name_ManaRegeneration(TEXT("ManaRegeneration"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_Mana(TEXT("Mana"));
	const bool bIsValid = true
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
		&& Name_Resilience == ClassReps[(int32)ENetFields_Private::Resilience].Property->GetFName()
		&& Name_Vigor == ClassReps[(int32)ENetFields_Private::Vigor].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
		&& Name_ArmorPenetration == ClassReps[(int32)ENetFields_Private::ArmorPenetration].Property->GetFName()
		&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
		&& Name_CriticalHitChance == ClassReps[(int32)ENetFields_Private::CriticalHitChance].Property->GetFName()
		&& Name_CriticalHitDamage == ClassReps[(int32)ENetFields_Private::CriticalHitDamage].Property->GetFName()
		&& Name_CriticalHitResistance == ClassReps[(int32)ENetFields_Private::CriticalHitResistance].Property->GetFName()
		&& Name_HealthRegeneration == ClassReps[(int32)ENetFields_Private::HealthRegeneration].Property->GetFName()
		&& Name_ManaRegeneration == ClassReps[(int32)ENetFields_Private::ManaRegeneration].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributeSet);
UPlayerAttributeSet::~UPlayerAttributeSet() {}
// End Class UPlayerAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectGamePlayProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectGamePlayProperties_Statics::NewStructOps, TEXT("EffectGamePlayProperties"), &Z_Registration_Info_UScriptStruct_EffectGamePlayProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectGamePlayProperties), 4058800946U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributeSet, UPlayerAttributeSet::StaticClass, TEXT("UPlayerAttributeSet"), &Z_Registration_Info_UClass_UPlayerAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributeSet), 49248707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_786160645(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAttributeSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

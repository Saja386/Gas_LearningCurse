// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/GameplayAbilities/Spells/AuraSpell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraSpell() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraProjectile_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraDamageAbility();
AURA_API UClass* Z_Construct_UClass_UAuraSpell();
AURA_API UClass* Z_Construct_UClass_UAuraSpell_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraSpell Function SpawnProjectile
struct Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics
{
	struct AuraSpell_eventSpawnProjectile_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/Spells/AuraSpell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraSpell_eventSpawnProjectile_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraSpell, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::AuraSpell_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::AuraSpell_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraSpell_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraSpell_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraSpell::execSpawnProjectile)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_Out_TargetLocation);
	P_NATIVE_END;
}
// End Class UAuraSpell Function SpawnProjectile

// Begin Class UAuraSpell
void UAuraSpell::StaticRegisterNativesUAuraSpell()
{
	UClass* Class = UAuraSpell::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UAuraSpell::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraSpell);
UClass* Z_Construct_UClass_UAuraSpell_NoRegister()
{
	return UAuraSpell::StaticClass();
}
struct Z_Construct_UClass_UAuraSpell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GameplayAbilities/Spells/AuraSpell.h" },
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/Spells/AuraSpell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AuraSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/GameplayAbilities/Spells/AuraSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraSpell_SpawnProjectile, "SpawnProjectile" }, // 1271293608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraSpell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuraSpell_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSpell, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAuraProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSpell_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSpell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraSpell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraDamageAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSpell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraSpell_Statics::ClassParams = {
	&UAuraSpell::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAuraSpell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSpell_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraSpell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraSpell()
{
	if (!Z_Registration_Info_UClass_UAuraSpell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraSpell.OuterSingleton, Z_Construct_UClass_UAuraSpell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraSpell.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraSpell>()
{
	return UAuraSpell::StaticClass();
}
UAuraSpell::UAuraSpell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraSpell);
UAuraSpell::~UAuraSpell() {}
// End Class UAuraSpell

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_Spells_AuraSpell_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraSpell, UAuraSpell::StaticClass, TEXT("UAuraSpell"), &Z_Registration_Info_UClass_UAuraSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraSpell), 649798975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_Spells_AuraSpell_h_3870828186(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_Spells_AuraSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GameplayAbilities_Spells_AuraSpell_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

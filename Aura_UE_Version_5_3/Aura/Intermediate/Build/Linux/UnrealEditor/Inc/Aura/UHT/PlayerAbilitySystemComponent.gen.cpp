// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/PlayerAbilitySystemComponent.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAbilitySystemComponent() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent();
AURA_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UPlayerAbilitySystemComponent Function ClientEffectApplied
struct PlayerAbilitySystemComponent_eventClientEffectApplied_Parms
{
	UAbilitySystemComponent* ASC;
	FGameplayEffectSpec Spec;
	FActiveGameplayEffectHandle GameplayEffectHandle;
};
static FName NAME_UPlayerAbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
void UPlayerAbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* ASC, FGameplayEffectSpec const& Spec, FActiveGameplayEffectHandle GameplayEffectHandle)
{
	PlayerAbilitySystemComponent_eventClientEffectApplied_Parms Parms;
	Parms.ASC=ASC;
	Parms.Spec=Spec;
	Parms.GameplayEffectHandle=GameplayEffectHandle;
	ProcessEvent(FindFunctionChecked(NAME_UPlayerAbilitySystemComponent_ClientEffectApplied),&Parms);
}
struct Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/PlayerAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAbilitySystemComponent_eventClientEffectApplied_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAbilitySystemComponent_eventClientEffectApplied_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_GameplayEffectHandle = { "GameplayEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAbilitySystemComponent_eventClientEffectApplied_Parms, GameplayEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_GameplayEffectHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), sizeof(PlayerAbilitySystemComponent_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerAbilitySystemComponent_eventClientEffectApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAbilitySystemComponent::execClientEffectApplied)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_GET_STRUCT(FGameplayEffectSpec,Z_Param_Spec);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_GameplayEffectHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEffectApplied_Implementation(Z_Param_ASC,Z_Param_Spec,Z_Param_GameplayEffectHandle);
	P_NATIVE_END;
}
// End Class UPlayerAbilitySystemComponent Function ClientEffectApplied

// Begin Class UPlayerAbilitySystemComponent
void UPlayerAbilitySystemComponent::StaticRegisterNativesUPlayerAbilitySystemComponent()
{
	UClass* Class = UPlayerAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientEffectApplied", &UPlayerAbilitySystemComponent::execClientEffectApplied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAbilitySystemComponent);
UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister()
{
	return UPlayerAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/PlayerAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GAS/PlayerAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 1766386454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams = {
	&UPlayerAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UPlayerAbilitySystemComponent>()
{
	return UPlayerAbilitySystemComponent::StaticClass();
}
UPlayerAbilitySystemComponent::UPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAbilitySystemComponent);
UPlayerAbilitySystemComponent::~UPlayerAbilitySystemComponent() {}
// End Class UPlayerAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAbilitySystemComponent, UPlayerAbilitySystemComponent::StaticClass, TEXT("UPlayerAbilitySystemComponent"), &Z_Registration_Info_UClass_UPlayerAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAbilitySystemComponent), 3342946509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_3423115843(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

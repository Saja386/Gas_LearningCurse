// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interfaces/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UCombatInterface();
AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Interface UCombatInterface Function GetHitReactMontage
struct CombatInterface_eventGetHitReactMontage_Parms
{
	UAnimMontage* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventGetHitReactMontage_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimMontage* ICombatInterface::GetHitReactMontage()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitReactMontage instead.");
	CombatInterface_eventGetHitReactMontage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_GetHitReactMontage = FName(TEXT("GetHitReactMontage"));
UAnimMontage* ICombatInterface::Execute_GetHitReactMontage(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventGetHitReactMontage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetHitReactMontage);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetHitReactMontage_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetHitReactMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetHitReactMontage", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers), sizeof(CombatInterface_eventGetHitReactMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatInterface_eventGetHitReactMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_GetHitReactMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execGetHitReactMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetHitReactMontage_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatInterface Function GetHitReactMontage

// Begin Interface UCombatInterface Function SetFacingTarget
struct CombatInterface_eventSetFacingTarget_Parms
{
	FVector target;
};
void ICombatInterface::SetFacingTarget(FVector const& target)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFacingTarget instead.");
}
static FName NAME_UCombatInterface_SetFacingTarget = FName(TEXT("SetFacingTarget"));
void ICombatInterface::Execute_SetFacingTarget(UObject* O, FVector const& target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventSetFacingTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_SetFacingTarget);
	if (Func)
	{
		Parms.target=target;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventSetFacingTarget_Parms, target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::NewProp_target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "SetFacingTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::PropPointers), sizeof(CombatInterface_eventSetFacingTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatInterface_eventSetFacingTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_SetFacingTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_SetFacingTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCombatInterface Function SetFacingTarget

// Begin Interface UCombatInterface
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
	UClass* Class = UCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHitReactMontage", &ICombatInterface::execGetHitReactMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetHitReactMontage, "GetHitReactMontage" }, // 2817589384
		{ &Z_Construct_UFunction_UCombatInterface_SetFacingTarget, "SetFacingTarget" }, // 56861439
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UCombatInterface>()
{
	return UCombatInterface::StaticClass();
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
UCombatInterface::~UCombatInterface() {}
// End Interface UCombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 3707477865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_846473166(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Interfaces_CombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

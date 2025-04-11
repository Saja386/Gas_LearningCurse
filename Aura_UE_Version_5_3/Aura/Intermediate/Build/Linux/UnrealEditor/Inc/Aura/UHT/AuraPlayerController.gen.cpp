// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Controllers/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraInputConf_NoRegister();
AURA_API UClass* Z_Construct_UClass_UDamageTextComp_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraPlayerController Function ShowTextDamage
struct AuraPlayerController_eventShowTextDamage_Parms
{
	float DamageAmount;
	ACharacter* DamageTarget;
};
static FName NAME_AAuraPlayerController_ShowTextDamage = FName(TEXT("ShowTextDamage"));
void AAuraPlayerController::ShowTextDamage(float DamageAmount, ACharacter* DamageTarget)
{
	AuraPlayerController_eventShowTextDamage_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.DamageTarget=DamageTarget;
	ProcessEvent(FindFunctionChecked(NAME_AAuraPlayerController_ShowTextDamage),&Parms);
}
struct Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowTextDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::NewProp_DamageTarget = { "DamageTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowTextDamage_Parms, DamageTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::NewProp_DamageTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerController, nullptr, "ShowTextDamage", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::PropPointers), sizeof(AuraPlayerController_eventShowTextDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AuraPlayerController_eventShowTextDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerController::execShowTextDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(ACharacter,Z_Param_DamageTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTextDamage_Implementation(Z_Param_DamageAmount,Z_Param_DamageTarget);
	P_NATIVE_END;
}
// End Class AAuraPlayerController Function ShowTextDamage

// Begin Class AAuraPlayerController
void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
{
	UClass* Class = AAuraPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowTextDamage", &AAuraPlayerController::execShowTextDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
{
	return AAuraPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAuraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConf_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRunAcceptanceRadius_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTextCompo_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Controllers/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConf;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRunAcceptanceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTextCompo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraPlayerController_ShowTextDamage, "ShowTextDamage" }, // 1346557921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraMappingContext = { "AuraMappingContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraMappingContext_MetaData), NewProp_AuraMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction = { "ShiftAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, ShiftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftAction_MetaData), NewProp_ShiftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConf = { "InputConf", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, InputConf), Z_Construct_UClass_UAuraInputConf_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConf_MetaData), NewProp_InputConf_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius = { "AutoRunAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AutoRunAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRunAcceptanceRadius_MetaData), NewProp_AutoRunAcceptanceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextCompo = { "DamageTextCompo", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, DamageTextCompo), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageTextComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTextCompo_MetaData), NewProp_DamageTextCompo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextCompo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
	&AAuraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraPlayerController()
{
	if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
{
	return AAuraPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
AAuraPlayerController::~AAuraPlayerController() {}
// End Class AAuraPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_AuraPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 4059587815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_AuraPlayerController_h_2191999909(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_AuraPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

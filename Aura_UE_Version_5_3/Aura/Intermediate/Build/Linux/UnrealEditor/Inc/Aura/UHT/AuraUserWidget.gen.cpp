// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/Widgets/AuraUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraUserWidget() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget();
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraUserWidget Function OnWidgetControllerSet
static FName NAME_UAuraUserWidget_OnWidgetControllerSet = FName(TEXT("OnWidgetControllerSet"));
void UAuraUserWidget::OnWidgetControllerSet()
{
	ProcessEvent(FindFunctionChecked(NAME_UAuraUserWidget_OnWidgetControllerSet),NULL);
}
struct Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraUserWidget, nullptr, "OnWidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAuraUserWidget Function OnWidgetControllerSet

// Begin Class UAuraUserWidget Function SetWidgetController
struct Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics
{
	struct AuraUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraUserWidget_eventSetWidgetController_Parms, InWidget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::AuraUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::AuraUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidget);
	P_NATIVE_END;
}
// End Class UAuraUserWidget Function SetWidgetController

// Begin Class UAuraUserWidget
void UAuraUserWidget::StaticRegisterNativesUAuraUserWidget()
{
	UClass* Class = UAuraUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetController", &UAuraUserWidget::execSetWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraUserWidget);
UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister()
{
	return UAuraUserWidget::StaticClass();
}
struct Z_Construct_UClass_UAuraUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widgets/AuraUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/AuraUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "AuraUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Widgets/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraUserWidget_OnWidgetControllerSet, "OnWidgetControllerSet" }, // 3643563479
		{ &Z_Construct_UFunction_UAuraUserWidget_SetWidgetController, "SetWidgetController" }, // 3386088815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams = {
	&UAuraUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraUserWidget()
{
	if (!Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton, Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraUserWidget>()
{
	return UAuraUserWidget::StaticClass();
}
UAuraUserWidget::UAuraUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraUserWidget);
UAuraUserWidget::~UAuraUserWidget() {}
// End Class UAuraUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_AuraUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraUserWidget, UAuraUserWidget::StaticClass, TEXT("UAuraUserWidget"), &Z_Registration_Info_UClass_UAuraUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraUserWidget), 3267716405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_AuraUserWidget_h_1150522862(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_AuraUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_AuraUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

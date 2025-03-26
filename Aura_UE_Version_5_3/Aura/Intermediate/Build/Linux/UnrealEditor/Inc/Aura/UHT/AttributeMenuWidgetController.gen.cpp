// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetControllers/AttributeMenuWidgetController.h"
#include "Aura/Public/GAS/Data/AttributeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Delegate FAttributeMenueStructSigneture
struct Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics
{
	struct _Script_Aura_eventAttributeMenueStructSigneture_Parms
	{
		FAuraAttributeInfo AttributeInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventAttributeMenueStructSigneture_Parms, AttributeInfo), Z_Construct_UScriptStruct_FAuraAttributeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfo_MetaData), NewProp_AttributeInfo_MetaData) }; // 598256776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::NewProp_AttributeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "AttributeMenueStructSigneture__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::_Script_Aura_eventAttributeMenueStructSigneture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::_Script_Aura_eventAttributeMenueStructSigneture_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAttributeMenueStructSigneture_DelegateWrapper(const FMulticastScriptDelegate& AttributeMenueStructSigneture, FAuraAttributeInfo const& AttributeInfo)
{
	struct _Script_Aura_eventAttributeMenueStructSigneture_Parms
	{
		FAuraAttributeInfo AttributeInfo;
	};
	_Script_Aura_eventAttributeMenueStructSigneture_Parms Parms;
	Parms.AttributeInfo=AttributeInfo;
	AttributeMenueStructSigneture.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAttributeMenueStructSigneture

// Begin Class UAttributeMenuWidgetController
void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeMenuWidgetController);
UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
{
	return UAttributeMenuWidgetController::StaticClass();
}
struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetControllers/AttributeMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "AttributeMenuWidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/AttributeMenuWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_Aura_AttributeMenueStructSigneture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfoDelegate_MetaData), NewProp_AttributeInfoDelegate_MetaData) }; // 2175145310
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfo), Z_Construct_UClass_UAttributeInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfo_MetaData), NewProp_AttributeInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
	&UAttributeMenuWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
{
	if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAttributeMenuWidgetController>()
{
	return UAttributeMenuWidgetController::StaticClass();
}
UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
// End Class UAttributeMenuWidgetController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_AttributeMenuWidgetController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 1615674296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_AttributeMenuWidgetController_h_3846213274(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_AttributeMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_AttributeMenuWidgetController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

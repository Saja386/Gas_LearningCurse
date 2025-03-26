// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetControllers/OverlayWidgetController.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Delegate FOnAttributeChangedSignuture
struct Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics
{
	struct _Script_Aura_eventOnAttributeChangedSignuture_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnAttributeChangedSignuture_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnAttributeChangedSignuture__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::_Script_Aura_eventOnAttributeChangedSignuture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::_Script_Aura_eventOnAttributeChangedSignuture_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChangedSignuture_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignuture, float NewMaxHealth)
{
	struct _Script_Aura_eventOnAttributeChangedSignuture_Parms
	{
		float NewMaxHealth;
	};
	_Script_Aura_eventOnAttributeChangedSignuture_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnAttributeChangedSignuture.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttributeChangedSignuture

// Begin ScriptStruct FUIWidgetRow
static_assert(std::is_polymorphic<FUIWidgetRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUIWidgetRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIWidgetRow;
class UScriptStruct* FUIWidgetRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIWidgetRow, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("UIWidgetRow"));
	}
	return Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FUIWidgetRow>()
{
	return FUIWidgetRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassageTag_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassageText_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassageWidget_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassageTexture_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MassageTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MassageText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MassageWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassageTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIWidgetRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageTag = { "MassageTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MassageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassageTag_MetaData), NewProp_MassageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageText = { "MassageText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MassageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassageText_MetaData), NewProp_MassageText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageWidget = { "MassageWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MassageWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassageWidget_MetaData), NewProp_MassageWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageTexture = { "MassageTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MassageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassageTexture_MetaData), NewProp_MassageTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MassageTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"UIWidgetRow",
	Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers),
	sizeof(FUIWidgetRow),
	alignof(FUIWidgetRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow()
{
	if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton;
}
// End ScriptStruct FUIWidgetRow

// Begin Delegate FMessageWidgetRowSignuture
struct Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics
{
	struct _Script_Aura_eventMessageWidgetRowSignuture_Parms
	{
		FUIWidgetRow Row;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventMessageWidgetRowSignuture_Parms, Row), Z_Construct_UScriptStruct_FUIWidgetRow, METADATA_PARAMS(0, nullptr) }; // 2280690684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::NewProp_Row,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "MessageWidgetRowSignuture__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignuture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignuture_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMessageWidgetRowSignuture_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignuture, FUIWidgetRow Row)
{
	struct _Script_Aura_eventMessageWidgetRowSignuture_Parms
	{
		FUIWidgetRow Row;
	};
	_Script_Aura_eventMessageWidgetRowSignuture_Parms Parms;
	Parms.Row=Row;
	MessageWidgetRowSignuture.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMessageWidgetRowSignuture

// Begin Class UOverlayWidgetController
void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
{
	return UOverlayWidgetController::StaticClass();
}
struct Z_Construct_UClass_UOverlayWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetControllers/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetRowSignuture_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetDataTable_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageWidgetRowSignuture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageWidgetDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3537192775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 3537192775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnManaChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaChanged_MetaData), NewProp_OnManaChanged_MetaData) }; // 3537192775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxManaChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxManaChanged_MetaData), NewProp_OnMaxManaChanged_MetaData) }; // 3537192775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowSignuture = { "MessageWidgetRowSignuture", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetRowSignuture), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageWidgetRowSignuture_MetaData), NewProp_MessageWidgetRowSignuture_MetaData) }; // 2001681839
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable = { "MessageWidgetDataTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageWidgetDataTable_MetaData), NewProp_MessageWidgetDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowSignuture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
	&UOverlayWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlayWidgetController()
{
	if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UOverlayWidgetController>()
{
	return UOverlayWidgetController::StaticClass();
}
UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
UOverlayWidgetController::~UOverlayWidgetController() {}
// End Class UOverlayWidgetController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUIWidgetRow::StaticStruct, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps, TEXT("UIWidgetRow"), &Z_Registration_Info_UScriptStruct_UIWidgetRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWidgetRow), 2280690684U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 1076197258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_1651219641(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/HUD/AuraBaseHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraBaseHUD() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraBaseHUD();
AURA_API UClass* Z_Construct_UClass_AAuraBaseHUD_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraBaseHUD
void AAuraBaseHUD::StaticRegisterNativesAAuraBaseHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraBaseHUD);
UClass* Z_Construct_UClass_AAuraBaseHUD_NoRegister()
{
	return AAuraBaseHUD::StaticClass();
}
struct Z_Construct_UClass_AAuraBaseHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/AuraBaseHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraBaseHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverLayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraBaseHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverLayWidgetClass_MetaData[] = {
		{ "Category", "AuraBaseHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraBaseHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/AuraBaseHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "AuraBaseHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraBaseHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverLayWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverLayWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidgetController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraBaseHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverLayWidget = { "OverLayWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraBaseHUD, OverLayWidget), Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverLayWidget_MetaData), NewProp_OverLayWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverLayWidgetClass = { "OverLayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraBaseHUD, OverLayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverLayWidgetClass_MetaData), NewProp_OverLayWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraBaseHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetController_MetaData), NewProp_OverlayWidgetController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraBaseHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetControllerClass_MetaData), NewProp_OverlayWidgetControllerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraBaseHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverLayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverLayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverlayWidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraBaseHUD_Statics::NewProp_OverlayWidgetControllerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraBaseHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraBaseHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraBaseHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraBaseHUD_Statics::ClassParams = {
	&AAuraBaseHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraBaseHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraBaseHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraBaseHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraBaseHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraBaseHUD()
{
	if (!Z_Registration_Info_UClass_AAuraBaseHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraBaseHUD.OuterSingleton, Z_Construct_UClass_AAuraBaseHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraBaseHUD.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraBaseHUD>()
{
	return AAuraBaseHUD::StaticClass();
}
AAuraBaseHUD::AAuraBaseHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraBaseHUD);
AAuraBaseHUD::~AAuraBaseHUD() {}
// End Class AAuraBaseHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_HUD_AuraBaseHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraBaseHUD, AAuraBaseHUD::StaticClass, TEXT("AAuraBaseHUD"), &Z_Registration_Info_UClass_AAuraBaseHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraBaseHUD), 1953425275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_HUD_AuraBaseHUD_h_2089720975(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_HUD_AuraBaseHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_HUD_AuraBaseHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/Widgets/DamageTextComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTextComp() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UDamageTextComp();
AURA_API UClass* Z_Construct_UClass_UDamageTextComp_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UDamageTextComp Function SetDamageText
struct DamageTextComp_eventSetDamageText_Parms
{
	float damageText;
	bool IsBlocked;
	bool ISCriticalHit;
};
static FName NAME_UDamageTextComp_SetDamageText = FName(TEXT("SetDamageText"));
void UDamageTextComp::SetDamageText(float damageText, bool IsBlocked, bool ISCriticalHit)
{
	DamageTextComp_eventSetDamageText_Parms Parms;
	Parms.damageText=damageText;
	Parms.IsBlocked=IsBlocked ? true : false;
	Parms.ISCriticalHit=ISCriticalHit ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UDamageTextComp_SetDamageText),&Parms);
}
struct Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/DamageTextComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageText;
	static void NewProp_IsBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBlocked;
	static void NewProp_ISCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ISCriticalHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_damageText = { "damageText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageTextComp_eventSetDamageText_Parms, damageText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_IsBlocked_SetBit(void* Obj)
{
	((DamageTextComp_eventSetDamageText_Parms*)Obj)->IsBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_IsBlocked = { "IsBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageTextComp_eventSetDamageText_Parms), &Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_IsBlocked_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_ISCriticalHit_SetBit(void* Obj)
{
	((DamageTextComp_eventSetDamageText_Parms*)Obj)->ISCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_ISCriticalHit = { "ISCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageTextComp_eventSetDamageText_Parms), &Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_ISCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_damageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_IsBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::NewProp_ISCriticalHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageTextComp, nullptr, "SetDamageText", nullptr, nullptr, Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::PropPointers), sizeof(DamageTextComp_eventSetDamageText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::Function_MetaDataParams) };
static_assert(sizeof(DamageTextComp_eventSetDamageText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageTextComp_SetDamageText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageTextComp_SetDamageText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDamageTextComp Function SetDamageText

// Begin Class UDamageTextComp
void UDamageTextComp::StaticRegisterNativesUDamageTextComp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageTextComp);
UClass* Z_Construct_UClass_UDamageTextComp_NoRegister()
{
	return UDamageTextComp::StaticClass();
}
struct Z_Construct_UClass_UDamageTextComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/Widgets/DamageTextComp.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/DamageTextComp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageTextComp_SetDamageText, "SetDamageText" }, // 4020087406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageTextComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageTextComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageTextComp_Statics::ClassParams = {
	&UDamageTextComp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageTextComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageTextComp()
{
	if (!Z_Registration_Info_UClass_UDamageTextComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageTextComp.OuterSingleton, Z_Construct_UClass_UDamageTextComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageTextComp.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UDamageTextComp>()
{
	return UDamageTextComp::StaticClass();
}
UDamageTextComp::UDamageTextComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageTextComp);
UDamageTextComp::~UDamageTextComp() {}
// End Class UDamageTextComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_DamageTextComp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageTextComp, UDamageTextComp::StaticClass, TEXT("UDamageTextComp"), &Z_Registration_Info_UClass_UDamageTextComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageTextComp), 1527595210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_DamageTextComp_h_1087641656(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_DamageTextComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_UI_Widgets_DamageTextComp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

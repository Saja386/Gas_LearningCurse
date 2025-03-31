// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/AuraInputCpmponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraInputCpmponent() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UAuraInputCpmponent();
AURA_API UClass* Z_Construct_UClass_UAuraInputCpmponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UAuraInputCpmponent
void UAuraInputCpmponent::StaticRegisterNativesUAuraInputCpmponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraInputCpmponent);
UClass* Z_Construct_UClass_UAuraInputCpmponent_NoRegister()
{
	return UAuraInputCpmponent::StaticClass();
}
struct Z_Construct_UClass_UAuraInputCpmponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/AuraInputCpmponent.h" },
		{ "ModuleRelativePath", "Public/Input/AuraInputCpmponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraInputCpmponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraInputCpmponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputCpmponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraInputCpmponent_Statics::ClassParams = {
	&UAuraInputCpmponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputCpmponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraInputCpmponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraInputCpmponent()
{
	if (!Z_Registration_Info_UClass_UAuraInputCpmponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraInputCpmponent.OuterSingleton, Z_Construct_UClass_UAuraInputCpmponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraInputCpmponent.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UAuraInputCpmponent>()
{
	return UAuraInputCpmponent::StaticClass();
}
UAuraInputCpmponent::UAuraInputCpmponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraInputCpmponent);
UAuraInputCpmponent::~UAuraInputCpmponent() {}
// End Class UAuraInputCpmponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputCpmponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraInputCpmponent, UAuraInputCpmponent::StaticClass, TEXT("UAuraInputCpmponent"), &Z_Registration_Info_UClass_UAuraInputCpmponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraInputCpmponent), 3076375139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputCpmponent_h_1733752219(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputCpmponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Input_AuraInputCpmponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

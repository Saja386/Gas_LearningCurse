// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/PlayerAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAbilitySystemComponent() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent();
AURA_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class UPlayerAbilitySystemComponent
void UPlayerAbilitySystemComponent::StaticRegisterNativesUPlayerAbilitySystemComponent()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UPlayerAbilitySystemComponent, UPlayerAbilitySystemComponent::StaticClass, TEXT("UPlayerAbilitySystemComponent"), &Z_Registration_Info_UClass_UPlayerAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAbilitySystemComponent), 946145781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_1711614360(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_PlayerAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

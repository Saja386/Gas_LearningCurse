// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Game/AuraGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameModeBase() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase();
AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister();
AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraGameModeBase
void AAuraGameModeBase::StaticRegisterNativesAAuraGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraGameModeBase);
UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister()
{
	return AAuraGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AAuraGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/AuraGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInfo_MetaData[] = {
		{ "Category", "CharactersDefault" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterClassInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo = { "CharacterClassInfo", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraGameModeBase, CharacterClassInfo), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassInfo_MetaData), NewProp_CharacterClassInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams = {
	&AAuraGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraGameModeBase()
{
	if (!Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton, Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraGameModeBase>()
{
	return AAuraGameModeBase::StaticClass();
}
AAuraGameModeBase::AAuraGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraGameModeBase);
AAuraGameModeBase::~AAuraGameModeBase() {}
// End Class AAuraGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraGameModeBase, AAuraGameModeBase::StaticClass, TEXT("AAuraGameModeBase"), &Z_Registration_Info_UClass_AAuraGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraGameModeBase), 3889573563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_3541530101(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

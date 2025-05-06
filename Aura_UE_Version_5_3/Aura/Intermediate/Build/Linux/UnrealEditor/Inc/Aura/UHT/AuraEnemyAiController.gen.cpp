// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AI/AuraEnemyAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEnemyAiController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AURA_API UClass* Z_Construct_UClass_AAuraEnemyAiController();
AURA_API UClass* Z_Construct_UClass_AAuraEnemyAiController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraEnemyAiController
void AAuraEnemyAiController::StaticRegisterNativesAAuraEnemyAiController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEnemyAiController);
UClass* Z_Construct_UClass_AAuraEnemyAiController_NoRegister()
{
	return AAuraEnemyAiController::StaticClass();
}
struct Z_Construct_UClass_AAuraEnemyAiController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AuraEnemyAiController.h" },
		{ "ModuleRelativePath", "Public/AI/AuraEnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AuraEnemyAiController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEnemyAiController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraEnemyAiController_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemyAiController, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEnemyAiController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemyAiController_Statics::NewProp_BehaviorTreeComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemyAiController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraEnemyAiController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemyAiController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEnemyAiController_Statics::ClassParams = {
	&AAuraEnemyAiController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraEnemyAiController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemyAiController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemyAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEnemyAiController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEnemyAiController()
{
	if (!Z_Registration_Info_UClass_AAuraEnemyAiController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEnemyAiController.OuterSingleton, Z_Construct_UClass_AAuraEnemyAiController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEnemyAiController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraEnemyAiController>()
{
	return AAuraEnemyAiController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEnemyAiController);
AAuraEnemyAiController::~AAuraEnemyAiController() {}
// End Class AAuraEnemyAiController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AI_AuraEnemyAiController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEnemyAiController, AAuraEnemyAiController::StaticClass, TEXT("AAuraEnemyAiController"), &Z_Registration_Info_UClass_AAuraEnemyAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEnemyAiController), 1138046697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AI_AuraEnemyAiController_h_598368409(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AI_AuraEnemyAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_AI_AuraEnemyAiController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

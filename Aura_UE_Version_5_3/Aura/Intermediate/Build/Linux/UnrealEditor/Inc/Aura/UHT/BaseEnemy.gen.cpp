// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ABaseCharacter();
AURA_API UClass* Z_Construct_UClass_ABaseEnemy();
AURA_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClasses();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ABaseEnemy
void ABaseEnemy::StaticRegisterNativesABaseEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
{
	return ABaseEnemy::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BHitReacting_MetaData[] = {
		{ "Category", "CombatStates" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaxWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarComponent_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static void NewProp_BHitReacting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BHitReacting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMaxWalkSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3537192775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignuture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 3537192775
void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BHitReacting_SetBit(void* Obj)
{
	((ABaseEnemy*)Obj)->BHitReacting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BHitReacting = { "BHitReacting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BHitReacting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BHitReacting_MetaData), NewProp_BHitReacting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BaseMaxWalkSpeed = { "BaseMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, BaseMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMaxWalkSpeed_MetaData), NewProp_BaseMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, EnemyClass), Z_Construct_UEnum_Aura_ECharacterClasses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) }; // 4023798841
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthBarComponent = { "HealthBarComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, HealthBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarComponent_MetaData), NewProp_HealthBarComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BHitReacting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BaseMaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthBarComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseEnemy, IEnemyInterface), false },  // 3819103162
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
	&ABaseEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemy()
{
	if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ABaseEnemy>()
{
	return ABaseEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
ABaseEnemy::~ABaseEnemy() {}
// End Class ABaseEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_BaseEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 758572979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_BaseEnemy_h_2951424896(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_BaseEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

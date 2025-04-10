// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/AuraAbilitySystemLiberary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UAttributeMenuWidgetController;
class UObject;
class UOverlayWidgetController;
enum class ECharacterClasses : uint8;
#ifdef AURA_AuraAbilitySystemLiberary_generated_h
#error "AuraAbilitySystemLiberary.generated.h already included, missing '#pragma once' in AuraAbilitySystemLiberary.h"
#endif
#define AURA_AuraAbilitySystemLiberary_generated_h

#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGiveStartUpAbilitys); \
	DECLARE_FUNCTION(execInitializeDefaultAttributesbyClass); \
	DECLARE_FUNCTION(execGetAttributeMenuWidgetController); \
	DECLARE_FUNCTION(execGetOverlayWidgetController);


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAbilitySystemLiberary(); \
	friend struct Z_Construct_UClass_UAuraAbilitySystemLiberary_Statics; \
public: \
	DECLARE_CLASS(UAuraAbilitySystemLiberary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAbilitySystemLiberary)


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAbilitySystemLiberary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAuraAbilitySystemLiberary(UAuraAbilitySystemLiberary&&); \
	UAuraAbilitySystemLiberary(const UAuraAbilitySystemLiberary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAbilitySystemLiberary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAbilitySystemLiberary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAbilitySystemLiberary) \
	NO_API virtual ~UAuraAbilitySystemLiberary();


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_16_PROLOG
#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UAuraAbilitySystemLiberary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_AuraAbilitySystemLiberary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

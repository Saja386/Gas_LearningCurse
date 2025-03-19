// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
#ifdef AURA_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define AURA_AuraEffectActor_generated_h

#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execApplyEffectOnTarget);


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
public: \
	DECLARE_CLASS(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraEffectActor(AAuraEffectActor&&); \
	AAuraEffectActor(const AAuraEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_25_PROLOG
#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraEffectActor_h


#define FOREACH_ENUM_EAPPLICATIONPOLICY(op) \
	op(EApplicationPolicy::ApplyOverlap) \
	op(EApplicationPolicy::ApplyOnEndOverlap) \
	op(EApplicationPolicy::DoNotApply) 

enum class EApplicationPolicy : uint8;
template<> struct TIsUEnumClass<EApplicationPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EApplicationPolicy>();

#define FOREACH_ENUM_EREMOVALPOLICY(op) \
	op(ERemovalPolicy::RemoveOnEndOverlap) \
	op(ERemovalPolicy::DoNotRemove) 

enum class ERemovalPolicy : uint8;
template<> struct TIsUEnumClass<ERemovalPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<ERemovalPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

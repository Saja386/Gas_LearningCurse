// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AURA_AuraProjectile_generated_h
#error "AuraProjectile.generated.h already included, missing '#pragma once' in AuraProjectile.h"
#endif
#define AURA_AuraProjectile_generated_h

#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraProjectile(); \
	friend struct Z_Construct_UClass_AAuraProjectile_Statics; \
public: \
	DECLARE_CLASS(AAuraProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraProjectile)


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraProjectile(AAuraProjectile&&); \
	AAuraProjectile(const AAuraProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraProjectile) \
	NO_API virtual ~AAuraProjectile();


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_14_PROLOG
#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Actor_AuraProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

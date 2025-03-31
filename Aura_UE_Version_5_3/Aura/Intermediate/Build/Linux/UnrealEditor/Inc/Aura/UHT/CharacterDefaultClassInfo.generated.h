// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Data/CharacterDefaultClassInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_CharacterDefaultClassInfo_generated_h
#error "CharacterDefaultClassInfo.generated.h already included, missing '#pragma once' in CharacterDefaultClassInfo.h"
#endif
#define AURA_CharacterDefaultClassInfo_generated_h

#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterDefaultClassInfo_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FCharacterDefaultClassInfo>();

#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterClassInfo(); \
	friend struct Z_Construct_UClass_UCharacterClassInfo_Statics; \
public: \
	DECLARE_CLASS(UCharacterClassInfo, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UCharacterClassInfo)


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterClassInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterClassInfo(UCharacterClassInfo&&); \
	UCharacterClassInfo(const UCharacterClassInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterClassInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterClassInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterClassInfo) \
	NO_API virtual ~UCharacterClassInfo();


#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_29_PROLOG
#define FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_32_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UCharacterClassInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_Gas_LearningCurse_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_Data_CharacterDefaultClassInfo_h


#define FOREACH_ENUM_ECHARACTERCLASSES(op) \
	op(ECharacterClasses::Elementalist) \
	op(ECharacterClasses::Warrior) \
	op(ECharacterClasses::Ranger) 

enum class ECharacterClasses : uint8;
template<> struct TIsUEnumClass<ECharacterClasses> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<ECharacterClasses>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

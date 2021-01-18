// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSExtractZone_generated_h
#error "FPSExtractZone.generated.h already included, missing '#pragma once' in FPSExtractZone.h"
#endif
#define FPSGAME_FPSExtractZone_generated_h

#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractZone(); \
	friend struct Z_Construct_UClass_AFPSExtractZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractZone(); \
	friend struct Z_Construct_UClass_AFPSExtractZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractZone(AFPSExtractZone&&); \
	NO_API AFPSExtractZone(const AFPSExtractZone&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractZone(AFPSExtractZone&&); \
	NO_API AFPSExtractZone(const AFPSExtractZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSExtractZone, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPSExtractZone, DecalComp); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMissingSound() { return STRUCT_OFFSET(AFPSExtractZone, ObjectiveMissingSound); }


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSExtractZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSExtractZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

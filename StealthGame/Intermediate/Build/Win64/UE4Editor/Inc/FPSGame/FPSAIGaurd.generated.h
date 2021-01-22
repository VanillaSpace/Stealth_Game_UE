// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGaurd_generated_h
#error "FPSAIGaurd.generated.h already included, missing '#pragma once' in FPSAIGaurd.h"
#endif
#define FPSGAME_FPSAIGaurd_generated_h

#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetOrientation); \
	DECLARE_FUNCTION(execOnNoiseHeard); \
	DECLARE_FUNCTION(execOnPawnSeen);


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetOrientation); \
	DECLARE_FUNCTION(execOnNoiseHeard); \
	DECLARE_FUNCTION(execOnPawnSeen);


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_EVENT_PARMS \
	struct FPSAIGaurd_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_CALLBACK_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGaurd(); \
	friend struct Z_Construct_UClass_AFPSAIGaurd_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGaurd, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGaurd)


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGaurd(); \
	friend struct Z_Construct_UClass_AFPSAIGaurd_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGaurd, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGaurd)


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGaurd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGaurd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGaurd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGaurd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGaurd(AFPSAIGaurd&&); \
	NO_API AFPSAIGaurd(const AFPSAIGaurd&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGaurd(AFPSAIGaurd&&); \
	NO_API AFPSAIGaurd(const AFPSAIGaurd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGaurd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGaurd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGaurd)


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGaurd, PawnSensingComp); }


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_21_PROLOG \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_EVENT_PARMS


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGaurd_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSAIGaurd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSAIGaurd_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) 

enum class EAIState : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

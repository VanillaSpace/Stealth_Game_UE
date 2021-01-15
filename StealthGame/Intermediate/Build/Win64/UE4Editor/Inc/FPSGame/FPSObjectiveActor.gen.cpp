// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSObjectiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSObjectiveActor() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	void AFPSObjectiveActor::StaticRegisterNativesAFPSObjectiveActor()
	{
	}
	UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AFPSObjectiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSObjectiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSObjectiveActor.h" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSObjectiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSObjectiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams = {
		&AFPSObjectiveActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSObjectiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSObjectiveActor, 1632196896);
	template<> FPSGAME_API UClass* StaticClass<AFPSObjectiveActor>()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSObjectiveActor(Z_Construct_UClass_AFPSObjectiveActor, &AFPSObjectiveActor::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSObjectiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSObjectiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

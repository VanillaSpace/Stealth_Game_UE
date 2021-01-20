// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/AFPSLaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPSLaunchPad() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AAFPSLaunchPad_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AAFPSLaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAFPSLaunchPad::execOverlapLaunchPad)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapLaunchPad(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAFPSLaunchPad::StaticRegisterNativesAAFPSLaunchPad()
	{
		UClass* Class = AAFPSLaunchPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapLaunchPad", &AAFPSLaunchPad::execOverlapLaunchPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics
	{
		struct AFPSLaunchPad_eventOverlapLaunchPad_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad_eventOverlapLaunchPad_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AFPSLaunchPad_eventOverlapLaunchPad_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSLaunchPad_eventOverlapLaunchPad_Parms), &Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad_eventOverlapLaunchPad_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad_eventOverlapLaunchPad_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad_eventOverlapLaunchPad_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad_eventOverlapLaunchPad_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Marked with ufunction to bind to overlap event\n" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
		{ "ToolTip", "Marked with ufunction to bind to overlap event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSLaunchPad, nullptr, "OverlapLaunchPad", nullptr, nullptr, sizeof(AFPSLaunchPad_eventOverlapLaunchPad_Parms), Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAFPSLaunchPad_NoRegister()
	{
		return AAFPSLaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_AAFPSLaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpPadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jumpPadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateLaunchPadEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateLaunchPadEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFPSLaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAFPSLaunchPad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAFPSLaunchPad_OverlapLaunchPad, "OverlapLaunchPad" }, // 4116967404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AFPSLaunchPad.h" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_jumpPadSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/*if the player goes to the extract zone without the objective, it will make a sound*/" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
		{ "ToolTip", "if the player goes to the extract zone without the objective, it will make a sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_jumpPadSound = { "jumpPadSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, jumpPadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_jumpPadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_jumpPadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "Comment", "/* Effect to play when activating launch pad */" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
		{ "ToolTip", "Effect to play when activating launch pad" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect = { "ActivateLaunchPadEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, ActivateLaunchPadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "Comment", "/* Angle added on top of actor rotation to launch the character.\n\x09\x09Marked 'EditInstanceOnly' to allow in-level editing of this property per instance. */" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
		{ "ToolTip", "Angle added on top of actor rotation to launch the character.\n              Marked 'EditInstanceOnly' to allow in-level editing of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchPitchAngle = { "LaunchPitchAngle", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, LaunchPitchAngle), METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "Comment", "/* Total impulse added to the character on overlap\n\x09\x09Marked 'EditInstanceOnly' to allow in-level editing of this property per instance. */" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
		{ "ToolTip", "Total impulse added to the character on overlap\n              Marked 'EditInstanceOnly' to allow in-level editing of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchStrength = { "LaunchStrength", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, LaunchStrength), METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_OverlapComp = { "OverlapComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, OverlapComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSLaunchPad, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFPSLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_jumpPadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_LaunchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_OverlapComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSLaunchPad_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFPSLaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFPSLaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAFPSLaunchPad_Statics::ClassParams = {
		&AAFPSLaunchPad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAFPSLaunchPad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAFPSLaunchPad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSLaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAFPSLaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAFPSLaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAFPSLaunchPad, 3442622030);
	template<> FPSGAME_API UClass* StaticClass<AAFPSLaunchPad>()
	{
		return AAFPSLaunchPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAFPSLaunchPad(Z_Construct_UClass_AAFPSLaunchPad, &AAFPSLaunchPad::StaticClass, TEXT("/Script/FPSGame"), TEXT("AAFPSLaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFPSLaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

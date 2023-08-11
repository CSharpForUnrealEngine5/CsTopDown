// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown/Game.Generated/CSharpPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSharpPlayerController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOPDOWN_API UClass* Z_Construct_UClass_ACSharpPlayerController();
	TOPDOWN_API UClass* Z_Construct_UClass_ACSharpPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDown();
// End Cross Module References
	DEFINE_FUNCTION(ACSharpPlayerController::execOnTouchReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTouchReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execOnTouchTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTouchTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execOnSetDestinationReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetDestinationReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execOnSetDestinationTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetDestinationTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execOnInputStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpPlayerController::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void ACSharpPlayerController::StaticRegisterNativesACSharpPlayerController()
	{
		UClass* Class = ACSharpPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &ACSharpPlayerController::execBeginPlay },
			{ "OnInputStarted", &ACSharpPlayerController::execOnInputStarted },
			{ "OnSetDestinationReleased", &ACSharpPlayerController::execOnSetDestinationReleased },
			{ "OnSetDestinationTriggered", &ACSharpPlayerController::execOnSetDestinationTriggered },
			{ "OnTouchReleased", &ACSharpPlayerController::execOnTouchReleased },
			{ "OnTouchTriggered", &ACSharpPlayerController::execOnTouchTriggered },
			{ "SetupInputComponent", &ACSharpPlayerController::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "OnInputStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "OnSetDestinationReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "OnSetDestinationTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "OnTouchReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "OnTouchTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpPlayerController, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSharpPlayerController);
	UClass* Z_Construct_UClass_ACSharpPlayerController_NoRegister()
	{
		return ACSharpPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACSharpPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveToMouseCursor_MetaData[];
#endif
		static void NewProp_bMoveToMouseCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveToMouseCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDestination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTouch_MetaData[];
#endif
		static void NewProp_bIsTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSharpPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSharpPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSharpPlayerController_BeginPlay, "BeginPlay" }, // 696668857
		{ &Z_Construct_UFunction_ACSharpPlayerController_OnInputStarted, "OnInputStarted" }, // 486213999
		{ &Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationReleased, "OnSetDestinationReleased" }, // 1681485672
		{ &Z_Construct_UFunction_ACSharpPlayerController_OnSetDestinationTriggered, "OnSetDestinationTriggered" }, // 1638960685
		{ &Z_Construct_UFunction_ACSharpPlayerController_OnTouchReleased, "OnTouchReleased" }, // 2490046437
		{ &Z_Construct_UFunction_ACSharpPlayerController_OnTouchTriggered, "OnTouchTriggered" }, // 1660849541
		{ &Z_Construct_UFunction_ACSharpPlayerController_SetupInputComponent, "SetupInputComponent" }, // 151997210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game.Generated/CSharpPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FXCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor_SetBit(void* Obj)
	{
		((ACSharpPlayerController*)Obj)->bMoveToMouseCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor = { "bMoveToMouseCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACSharpPlayerController), &Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_CachedDestination_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_CachedDestination = { "CachedDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, CachedDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_CachedDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_CachedDestination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch_SetBit(void* Obj)
	{
		((ACSharpPlayerController*)Obj)->bIsTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch = { "bIsTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACSharpPlayerController), &Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FollowTime_MetaData[] = {
		{ "Category", "CSharpPlayerController" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FollowTime = { "FollowTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpPlayerController, FollowTime), METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FollowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FollowTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSharpPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_SetDestinationTouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bMoveToMouseCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_CachedDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_bIsTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpPlayerController_Statics::NewProp_FollowTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSharpPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSharpPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSharpPlayerController_Statics::ClassParams = {
		&ACSharpPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSharpPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSharpPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSharpPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACSharpPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSharpPlayerController.OuterSingleton, Z_Construct_UClass_ACSharpPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSharpPlayerController.OuterSingleton;
	}
	template<> TOPDOWN_API UClass* StaticClass<ACSharpPlayerController>()
	{
		return ACSharpPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSharpPlayerController);
	ACSharpPlayerController::~ACSharpPlayerController() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSharpPlayerController, ACSharpPlayerController::StaticClass, TEXT("ACSharpPlayerController"), &Z_Registration_Info_UClass_ACSharpPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSharpPlayerController), 820919472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpPlayerController_h_3468329273(TEXT("/Script/TopDown"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

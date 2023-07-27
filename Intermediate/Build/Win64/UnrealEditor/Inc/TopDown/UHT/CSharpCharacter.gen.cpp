// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown/Game.Generated/CSharpCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSharpCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TOPDOWN_API UClass* Z_Construct_UClass_ACSharpCharacter();
	TOPDOWN_API UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDown();
// End Cross Module References
	void ACSharpCharacter::StaticRegisterNativesACSharpCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSharpCharacter);
	UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister()
	{
		return ACSharpCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACSharpCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSharpCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game.Generated/CSharpCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSharpCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSharpCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSharpCharacter_Statics::ClassParams = {
		&ACSharpCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSharpCharacter()
	{
		if (!Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton, Z_Construct_UClass_ACSharpCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton;
	}
	template<> TOPDOWN_API UClass* StaticClass<ACSharpCharacter>()
	{
		return ACSharpCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSharpCharacter);
	ACSharpCharacter::~ACSharpCharacter() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSharpCharacter, ACSharpCharacter::StaticClass, TEXT("ACSharpCharacter"), &Z_Registration_Info_UClass_ACSharpCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSharpCharacter), 1538983450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpCharacter_h_232632609(TEXT("/Script/TopDown"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_Game_Generated_CSharpCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

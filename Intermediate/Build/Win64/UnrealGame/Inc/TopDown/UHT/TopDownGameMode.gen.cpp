// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown/TopDownGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOPDOWN_API UClass* Z_Construct_UClass_ATopDownGameMode();
	TOPDOWN_API UClass* Z_Construct_UClass_ATopDownGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDown();
// End Cross Module References
	void ATopDownGameMode::StaticRegisterNativesATopDownGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownGameMode);
	UClass* Z_Construct_UClass_ATopDownGameMode_NoRegister()
	{
		return ATopDownGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownGameMode.h" },
		{ "ModuleRelativePath", "TopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownGameMode_Statics::ClassParams = {
		&ATopDownGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownGameMode()
	{
		if (!Z_Registration_Info_UClass_ATopDownGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownGameMode.OuterSingleton, Z_Construct_UClass_ATopDownGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownGameMode.OuterSingleton;
	}
	template<> TOPDOWN_API UClass* StaticClass<ATopDownGameMode>()
	{
		return ATopDownGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownGameMode);
	ATopDownGameMode::~ATopDownGameMode() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_TopDownGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_TopDownGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownGameMode, ATopDownGameMode::StaticClass, TEXT("ATopDownGameMode"), &Z_Registration_Info_UClass_ATopDownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownGameMode), 3343203599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_TopDownGameMode_h_1898782702(TEXT("/Script/TopDown"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_TopDownGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTopDown_Source_TopDown_TopDownGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

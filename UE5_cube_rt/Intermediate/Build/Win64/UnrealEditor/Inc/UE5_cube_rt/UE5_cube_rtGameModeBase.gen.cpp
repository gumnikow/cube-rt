// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_cube_rt/UE5_cube_rtGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_cube_rtGameModeBase() {}
// Cross Module References
	UE5_CUBE_RT_API UClass* Z_Construct_UClass_AUE5_cube_rtGameModeBase_NoRegister();
	UE5_CUBE_RT_API UClass* Z_Construct_UClass_AUE5_cube_rtGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_cube_rt();
// End Cross Module References
	void AUE5_cube_rtGameModeBase::StaticRegisterNativesAUE5_cube_rtGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_cube_rtGameModeBase);
	UClass* Z_Construct_UClass_AUE5_cube_rtGameModeBase_NoRegister()
	{
		return AUE5_cube_rtGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_cube_rt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_cube_rtGameModeBase.h" },
		{ "ModuleRelativePath", "UE5_cube_rtGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_cube_rtGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::ClassParams = {
		&AUE5_cube_rtGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_cube_rtGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_cube_rtGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_cube_rtGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_cube_rtGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_cube_rtGameModeBase.OuterSingleton;
	}
	template<> UE5_CUBE_RT_API UClass* StaticClass<AUE5_cube_rtGameModeBase>()
	{
		return AUE5_cube_rtGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_cube_rtGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_cube_rt_Source_UE5_cube_rt_UE5_cube_rtGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_cube_rt_Source_UE5_cube_rt_UE5_cube_rtGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_cube_rtGameModeBase, AUE5_cube_rtGameModeBase::StaticClass, TEXT("AUE5_cube_rtGameModeBase"), &Z_Registration_Info_UClass_AUE5_cube_rtGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_cube_rtGameModeBase), 1496695623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_cube_rt_Source_UE5_cube_rt_UE5_cube_rtGameModeBase_h_4283210770(TEXT("/Script/UE5_cube_rt"),
		Z_CompiledInDeferFile_FID_UE5_cube_rt_Source_UE5_cube_rt_UE5_cube_rtGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_cube_rt_Source_UE5_cube_rt_UE5_cube_rtGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

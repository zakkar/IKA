// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BombermanBombsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanBombsManager() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBombsManager_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBombsManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void ABombermanBombsManager::StaticRegisterNativesABombermanBombsManager()
	{
	}
	UClass* Z_Construct_UClass_ABombermanBombsManager_NoRegister()
	{
		return ABombermanBombsManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanBombsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BombermanBombsManager.h" },
				{ "ModuleRelativePath", "Public/BombermanBombsManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorySpawnBombLimit_MetaData[] = {
				{ "Category", "BombermanBombsManager" },
				{ "ModuleRelativePath", "Public/BombermanBombsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FactorySpawnBombLimit = { UE4CodeGen_Private::EPropertyClass::Int, "FactorySpawnBombLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanBombsManager, FactorySpawnBombLimit), METADATA_PARAMS(NewProp_FactorySpawnBombLimit_MetaData, ARRAY_COUNT(NewProp_FactorySpawnBombLimit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FactorySpawnBombLimit,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanBombsManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanBombsManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanBombsManager, 3778549079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBombsManager(Z_Construct_UClass_ABombermanBombsManager, &ABombermanBombsManager::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBombsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBombsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BombermanGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameInstance() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_UBombermanGameInstance_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_UBombermanGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void UBombermanGameInstance::StaticRegisterNativesUBombermanGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UBombermanGameInstance_NoRegister()
	{
		return UBombermanGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UBombermanGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BombermanGameInstance.h" },
				{ "ModuleRelativePath", "Public/BombermanGameInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBombermanGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBombermanGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBombermanGameInstance, 875881125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBombermanGameInstance(Z_Construct_UClass_UBombermanGameInstance, &UBombermanGameInstance::StaticClass, TEXT("/Script/Bomberman"), TEXT("UBombermanGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombermanGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

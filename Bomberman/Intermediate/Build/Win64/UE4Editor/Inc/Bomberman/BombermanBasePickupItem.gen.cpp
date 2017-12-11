// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BombermanBasePickupItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanBasePickupItem() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBasePickupItem_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBasePickupItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void ABombermanBasePickupItem::StaticRegisterNativesABombermanBasePickupItem()
	{
	}
	UClass* Z_Construct_UClass_ABombermanBasePickupItem_NoRegister()
	{
		return ABombermanBasePickupItem::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanBasePickupItem()
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
				{ "IncludePath", "BombermanBasePickupItem.h" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanBasePickupItem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanBasePickupItem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ABombermanBasePickupItem, 1663887504);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBasePickupItem(Z_Construct_UClass_ABombermanBasePickupItem, &ABombermanBasePickupItem::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBasePickupItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBasePickupItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

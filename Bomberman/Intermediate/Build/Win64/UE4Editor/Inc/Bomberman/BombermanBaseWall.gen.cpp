// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BombermanBaseWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanBaseWall() {}
// Cross Module References
	BOMBERMAN_API UEnum* Z_Construct_UEnum_Bomberman_EWallType();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBaseWall_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBaseWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EWallType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Bomberman_EWallType, Z_Construct_UPackage__Script_Bomberman(), TEXT("EWallType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWallType(EWallType_StaticEnum, TEXT("/Script/Bomberman"), TEXT("EWallType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Bomberman_EWallType_CRC() { return 1887995297U; }
	UEnum* Z_Construct_UEnum_Bomberman_EWallType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Bomberman();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWallType"), 0, Get_Z_Construct_UEnum_Bomberman_EWallType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWallType::WallType_Normal", (int64)EWallType::WallType_Normal },
				{ "EWallType::WallType_Destructible", (int64)EWallType::WallType_Destructible },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
				{ "WallType_Destructible.DisplayName", "Destructible" },
				{ "WallType_Normal.DisplayName", "Normal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Bomberman,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWallType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWallType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABombermanBaseWall::StaticRegisterNativesABombermanBaseWall()
	{
	}
	UClass* Z_Construct_UClass_ABombermanBaseWall_NoRegister()
	{
		return ABombermanBaseWall::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanBaseWall()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "BombermanBaseWall.h" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, CollisionMesh), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionMesh_MetaData, ARRAY_COUNT(NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallType_MetaData[] = {
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WallType = { UE4CodeGen_Private::EPropertyClass::Enum, "WallType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, WallType), Z_Construct_UEnum_Bomberman_EWallType, METADATA_PARAMS(NewProp_WallType_MetaData, ARRAY_COUNT(NewProp_WallType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WallType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[] = {
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh = { UE4CodeGen_Private::EPropertyClass::Object, "WallMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, WallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_WallMesh_MetaData, ARRAY_COUNT(NewProp_WallMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanBaseWall>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanBaseWall::StaticClass,
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
	IMPLEMENT_CLASS(ABombermanBaseWall, 2392823363);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBaseWall(Z_Construct_UClass_ABombermanBaseWall, &ABombermanBaseWall::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBaseWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBaseWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

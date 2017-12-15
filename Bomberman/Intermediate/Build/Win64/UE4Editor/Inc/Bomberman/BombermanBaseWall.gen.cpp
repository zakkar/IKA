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
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanBaseWall_OnDestroyWall();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBasePickupItem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
	static FName NAME_ABombermanBaseWall_OnDestroyWall = FName(TEXT("OnDestroyWall"));
	void ABombermanBaseWall::OnDestroyWall()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABombermanBaseWall_OnDestroyWall),NULL);
	}
	void ABombermanBaseWall::StaticRegisterNativesABombermanBaseWall()
	{
		UClass* Class = ABombermanBaseWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDestroyWall", (Native)&ABombermanBaseWall::execOnDestroyWall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanBaseWall_OnDestroyWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanBaseWall, "OnDestroyWall", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanBaseWall_OnDestroyWall, "OnDestroyWall" }, // 93270127
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BombermanBaseWall.h" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallVisual_MetaData[] = {
				{ "Category", "BombermanBaseWall" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallVisual = { UE4CodeGen_Private::EPropertyClass::Object, "WallVisual", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, WallVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_WallVisual_MetaData, ARRAY_COUNT(NewProp_WallVisual_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToSpawn_MetaData[] = {
				{ "Category", "BombermanBaseWall" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemToSpawn = { UE4CodeGen_Private::EPropertyClass::Array, "ItemToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, ItemToSpawn), METADATA_PARAMS(NewProp_ItemToSpawn_MetaData, ARRAY_COUNT(NewProp_ItemToSpawn_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemToSpawn_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ItemToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_ABombermanBasePickupItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
				{ "Category", "BombermanBaseWall" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoxExtent_MetaData, ARRAY_COUNT(NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
				{ "Category", "BombermanBaseWall" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, CollisionMesh), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionMesh_MetaData, ARRAY_COUNT(NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallType_MetaData[] = {
				{ "Category", "Enum" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WallType = { UE4CodeGen_Private::EPropertyClass::Enum, "WallType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, WallType), Z_Construct_UEnum_Bomberman_EWallType, METADATA_PARAMS(NewProp_WallType_MetaData, ARRAY_COUNT(NewProp_WallType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WallType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[] = {
				{ "Category", "BombermanBaseWall" },
				{ "ModuleRelativePath", "Public/BombermanBaseWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh = { UE4CodeGen_Private::EPropertyClass::Object, "WallMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBaseWall, WallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_WallMesh_MetaData, ARRAY_COUNT(NewProp_WallMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallVisual,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemToSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemToSpawn_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
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
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ABombermanBaseWall, 4034446929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBaseWall(Z_Construct_UClass_ABombermanBaseWall, &ABombermanBaseWall::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBaseWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBaseWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BombermanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanCharacter() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_FillInventory();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_Init();
// End Cross Module References
	void ABombermanCharacter::StaticRegisterNativesABombermanCharacter()
	{
		UClass* Class = ABombermanCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillInventory", (Native)&ABombermanCharacter::execFillInventory },
			{ "Init", (Native)&ABombermanCharacter::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_FillInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "FillInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister()
	{
		return ABombermanCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanCharacter_FillInventory, "FillInventory" }, // 2199507394
				{ &Z_Construct_UFunction_ABombermanCharacter_Init, "Init" }, // 84751288
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BombermanCharacter.h" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetBombSpawn_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Used to offset spawwning bomb to avoid physics problem" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetBombSpawn = { UE4CodeGen_Private::EPropertyClass::Float, "OffsetBombSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, OffsetBombSpawn), METADATA_PARAMS(NewProp_OffsetBombSpawn_MetaData, ARRAY_COUNT(NewProp_OffsetBombSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBombInventory_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Number of maximum Bomb that the player can carry(including upgrades)" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxBombInventory = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBombInventory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, MaxBombInventory), METADATA_PARAMS(NewProp_MaxBombInventory_MetaData, ARRAY_COUNT(NewProp_MaxBombInventory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBombCanBeSpawned_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Number of maximum Bomb that the player can spawn from the start" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxBombCanBeSpawned = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBombCanBeSpawned", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, MaxBombCanBeSpawned), METADATA_PARAMS(NewProp_MaxBombCanBeSpawned_MetaData, ARRAY_COUNT(NewProp_MaxBombCanBeSpawned_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetBombSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBombInventory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBombCanBeSpawned,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanCharacter, 2381980662);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanCharacter(Z_Construct_UClass_ABombermanCharacter, &ABombermanCharacter::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

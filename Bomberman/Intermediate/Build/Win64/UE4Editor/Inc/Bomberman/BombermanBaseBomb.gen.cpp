// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BombermanBaseBomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanBaseBomb() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBaseBomb_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBaseBomb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanBaseBomb_OnUse();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void ABombermanBaseBomb::StaticRegisterNativesABombermanBaseBomb()
	{
		UClass* Class = ABombermanBaseBomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUse", (Native)&ABombermanBaseBomb::execOnUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanBaseBomb_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanBaseBomb, "OnUse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABombermanBaseBomb_NoRegister()
	{
		return ABombermanBaseBomb::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanBaseBomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanBaseBomb_OnUse, "OnUse" }, // 754725621
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BombermanBaseBomb.h" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombVisual_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BombVisual = { UE4CodeGen_Private::EPropertyClass::Object, "BombVisual", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, BombVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BombVisual_MetaData, ARRAY_COUNT(NewProp_BombVisual_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComponent_MetaData, ARRAY_COUNT(NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlastDuration_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
				{ "ToolTip", "Length of the blast when the bomb explode" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlastDuration = { UE4CodeGen_Private::EPropertyClass::Float, "BlastDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, BlastDuration), METADATA_PARAMS(NewProp_BlastDuration_MetaData, ARRAY_COUNT(NewProp_BlastDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlastLengthMultiplier_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
				{ "ToolTip", "Initial Length of the blast when the bomb explode" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BlastLengthMultiplier = { UE4CodeGen_Private::EPropertyClass::Int, "BlastLengthMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, BlastLengthMultiplier), METADATA_PARAMS(NewProp_BlastLengthMultiplier_MetaData, ARRAY_COUNT(NewProp_BlastLengthMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombTimer_MetaData[] = {
				{ "Category", "BombermanBaseBomb" },
				{ "ModuleRelativePath", "Public/BombermanBaseBomb.h" },
				{ "ToolTip", "Timer for the bomb before it explode" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BombTimer = { UE4CodeGen_Private::EPropertyClass::Float, "BombTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanBaseBomb, BombTimer), METADATA_PARAMS(NewProp_BombTimer_MetaData, ARRAY_COUNT(NewProp_BombTimer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BombVisual,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlastDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlastLengthMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BombTimer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanBaseBomb>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanBaseBomb::StaticClass,
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
	IMPLEMENT_CLASS(ABombermanBaseBomb, 1974959713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBaseBomb(Z_Construct_UClass_ABombermanBaseBomb, &ABombermanBaseBomb::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBaseBomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBaseBomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

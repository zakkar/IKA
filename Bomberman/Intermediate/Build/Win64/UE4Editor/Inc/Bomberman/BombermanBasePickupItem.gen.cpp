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
	BOMBERMAN_API UEnum* Z_Construct_UEnum_Bomberman_EPickupType();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBasePickupItem_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanBasePickupItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanBasePickupItem_OnPickup();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanBasePickupItem_OnTriggerEnter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* EPickupType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Bomberman_EPickupType, Z_Construct_UPackage__Script_Bomberman(), TEXT("EPickupType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickupType(EPickupType_StaticEnum, TEXT("/Script/Bomberman"), TEXT("EPickupType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Bomberman_EPickupType_CRC() { return 932994373U; }
	UEnum* Z_Construct_UEnum_Bomberman_EPickupType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Bomberman();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickupType"), 0, Get_Z_Construct_UEnum_Bomberman_EPickupType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPickupType::PickupType_LongerBlast", (int64)EPickupType::PickupType_LongerBlast },
				{ "EPickupType::PickupType_MoreBomb", (int64)EPickupType::PickupType_MoreBomb },
				{ "EPickupType::PickupType_FasterRun", (int64)EPickupType::PickupType_FasterRun },
				{ "EPickupType::PickupType_RemoteBomb", (int64)EPickupType::PickupType_RemoteBomb },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
				{ "PickupType_FasterRun.DisplayName", "Faster run" },
				{ "PickupType_LongerBlast.DisplayName", "Longer Blast" },
				{ "PickupType_MoreBomb.DisplayName", "More bomb" },
				{ "PickupType_RemoteBomb.DisplayName", "Remote Bomb" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Bomberman,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPickupType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPickupType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ABombermanBasePickupItem_OnPickup = FName(TEXT("OnPickup"));
	void ABombermanBasePickupItem::OnPickup(ABombermanCharacter* PlayerCharacter)
	{
		BombermanBasePickupItem_eventOnPickup_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ABombermanBasePickupItem_OnPickup),&Parms);
	}
	void ABombermanBasePickupItem::StaticRegisterNativesABombermanBasePickupItem()
	{
		UClass* Class = ABombermanBasePickupItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPickup", (Native)&ABombermanBasePickupItem::execOnPickup },
			{ "OnTriggerEnter", (Native)&ABombermanBasePickupItem::execOnTriggerEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanBasePickupItem_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnPickup_Parms, PlayerCharacter), Z_Construct_UClass_ABombermanCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerCharacter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanBasePickupItem, "OnPickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(BombermanBasePickupItem_eventOnPickup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanBasePickupItem_OnTriggerEnter()
	{
		struct BombermanBasePickupItem_eventOnTriggerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((BombermanBasePickupItem_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BombermanBasePickupItem_eventOnTriggerEnter_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnTriggerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnTriggerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnTriggerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BombermanBasePickupItem_eventOnTriggerEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanBasePickupItem, "OnTriggerEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480400, sizeof(BombermanBasePickupItem_eventOnTriggerEnter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanBasePickupItem_OnPickup, "OnPickup" }, // 519527543
				{ &Z_Construct_UFunction_ABombermanBasePickupItem_OnTriggerEnter, "OnTriggerEnter" }, // 1014379362
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BombermanBasePickupItem.h" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
				{ "Category", "BombermanBasePickupItem" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
				{ "ToolTip", "Multiplier of the player speed when item pickup" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, SpeedMultiplier), METADATA_PARAMS(NewProp_SpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombBlastLengthIncreaseValue_MetaData[] = {
				{ "Category", "BombermanBasePickupItem" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BombBlastLengthIncreaseValue = { UE4CodeGen_Private::EPropertyClass::Int, "BombBlastLengthIncreaseValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, BombBlastLengthIncreaseValue), METADATA_PARAMS(NewProp_BombBlastLengthIncreaseValue_MetaData, ARRAY_COUNT(NewProp_BombBlastLengthIncreaseValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombNumberIncreaseValue_MetaData[] = {
				{ "Category", "BombermanBasePickupItem" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BombNumberIncreaseValue = { UE4CodeGen_Private::EPropertyClass::Int, "BombNumberIncreaseValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, BombNumberIncreaseValue), METADATA_PARAMS(NewProp_BombNumberIncreaseValue_MetaData, ARRAY_COUNT(NewProp_BombNumberIncreaseValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
				{ "Category", "BombermanBasePickupItem" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoxExtent_MetaData, ARRAY_COUNT(NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[] = {
				{ "Category", "Enum" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupType = { UE4CodeGen_Private::EPropertyClass::Enum, "PickupType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, PickupType), Z_Construct_UEnum_Bomberman_EPickupType, METADATA_PARAMS(NewProp_PickupType_MetaData, ARRAY_COUNT(NewProp_PickupType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
				{ "Category", "BombermanBasePickupItem" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BombermanBasePickupItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ABombermanBasePickupItem, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_BoxComponent_MetaData, ARRAY_COUNT(NewProp_BoxComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BombBlastLengthIncreaseValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BombNumberIncreaseValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PickupType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PickupType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanBasePickupItem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanBasePickupItem::StaticClass,
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
	IMPLEMENT_CLASS(ABombermanBasePickupItem, 3394154913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanBasePickupItem(Z_Construct_UClass_ABombermanBasePickupItem, &ABombermanBasePickupItem::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanBasePickupItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanBasePickupItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

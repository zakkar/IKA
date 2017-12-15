// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABombermanCharacter;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOMBERMAN_BombermanBasePickupItem_generated_h
#error "BombermanBasePickupItem.generated.h already included, missing '#pragma once' in BombermanBasePickupItem.h"
#endif
#define BOMBERMAN_BombermanBasePickupItem_generated_h

#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_RPC_WRAPPERS \
	virtual void OnPickup_Implementation(ABombermanCharacter* PlayerCharacter); \
 \
	DECLARE_FUNCTION(execOnPickup) \
	{ \
		P_GET_OBJECT(ABombermanCharacter,Z_Param_PlayerCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPickup_Implementation(Z_Param_PlayerCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTriggerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickup_Implementation(ABombermanCharacter* PlayerCharacter); \
 \
	DECLARE_FUNCTION(execOnPickup) \
	{ \
		P_GET_OBJECT(ABombermanCharacter,Z_Param_PlayerCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPickup_Implementation(Z_Param_PlayerCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTriggerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_EVENT_PARMS \
	struct BombermanBasePickupItem_eventOnPickup_Parms \
	{ \
		ABombermanCharacter* PlayerCharacter; \
	};


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_CALLBACK_WRAPPERS
#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanBasePickupItem(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBasePickupItem(); \
public: \
	DECLARE_CLASS(ABombermanBasePickupItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBasePickupItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABombermanBasePickupItem(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBasePickupItem(); \
public: \
	DECLARE_CLASS(ABombermanBasePickupItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBasePickupItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanBasePickupItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanBasePickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBasePickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBasePickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBasePickupItem(ABombermanBasePickupItem&&); \
	NO_API ABombermanBasePickupItem(const ABombermanBasePickupItem&); \
public:


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBasePickupItem(ABombermanBasePickupItem&&); \
	NO_API ABombermanBasePickupItem(const ABombermanBasePickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBasePickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBasePickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanBasePickupItem)


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_PRIVATE_PROPERTY_OFFSET
#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_18_PROLOG \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_EVENT_PARMS


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_CALLBACK_WRAPPERS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_INCLASS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_CALLBACK_WRAPPERS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Public_BombermanBasePickupItem_h


#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickupType::PickupType_LongerBlast) \
	op(EPickupType::PickupType_MoreBomb) \
	op(EPickupType::PickupType_FasterRun) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

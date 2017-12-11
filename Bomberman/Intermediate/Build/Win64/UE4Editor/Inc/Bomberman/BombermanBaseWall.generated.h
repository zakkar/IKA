// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BombermanBaseWall_generated_h
#error "BombermanBaseWall.generated.h already included, missing '#pragma once' in BombermanBaseWall.h"
#endif
#define BOMBERMAN_BombermanBaseWall_generated_h

#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_RPC_WRAPPERS
#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanBaseWall(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBaseWall(); \
public: \
	DECLARE_CLASS(ABombermanBaseWall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBaseWall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABombermanBaseWall(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBaseWall(); \
public: \
	DECLARE_CLASS(ABombermanBaseWall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBaseWall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanBaseWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanBaseWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBaseWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBaseWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBaseWall(ABombermanBaseWall&&); \
	NO_API ABombermanBaseWall(const ABombermanBaseWall&); \
public:


#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBaseWall(ABombermanBaseWall&&); \
	NO_API ABombermanBaseWall(const ABombermanBaseWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBaseWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBaseWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanBaseWall)


#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_PRIVATE_PROPERTY_OFFSET
#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_16_PROLOG
#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_INCLASS \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBaseWall_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Public_BombermanBaseWall_h


#define FOREACH_ENUM_EWALLTYPE(op) \
	op(EWallType::WallType_Normal) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

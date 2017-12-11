// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BombermanBaseBomb_generated_h
#error "BombermanBaseBomb.generated.h already included, missing '#pragma once' in BombermanBaseBomb.h"
#endif
#define BOMBERMAN_BombermanBaseBomb_generated_h

#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUse(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUse(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanBaseBomb(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBaseBomb(); \
public: \
	DECLARE_CLASS(ABombermanBaseBomb, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBaseBomb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABombermanBaseBomb(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanBaseBomb(); \
public: \
	DECLARE_CLASS(ABombermanBaseBomb, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanBaseBomb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanBaseBomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanBaseBomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBaseBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBaseBomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBaseBomb(ABombermanBaseBomb&&); \
	NO_API ABombermanBaseBomb(const ABombermanBaseBomb&); \
public:


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanBaseBomb(ABombermanBaseBomb&&); \
	NO_API ABombermanBaseBomb(const ABombermanBaseBomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanBaseBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanBaseBomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanBaseBomb)


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_PRIVATE_PROPERTY_OFFSET
#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_9_PROLOG
#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_INCLASS \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Public_BombermanBaseBomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

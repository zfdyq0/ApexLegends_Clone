// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APEX_LEGENDS_CLONE_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define APEX_LEGENDS_CLONE_BaseCharacter_generated_h

#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Apex_Legends_Clone"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Apex_Legends_Clone"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_11_PROLOG
#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_RPC_WRAPPERS \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_INCLASS \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Apex_Legends_Clone_Source_Apex_Legends_Clone_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

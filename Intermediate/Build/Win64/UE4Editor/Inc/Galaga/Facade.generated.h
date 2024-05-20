// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_Facade_generated_h
#error "Facade.generated.h already included, missing '#pragma once' in Facade.h"
#endif
#define GALAGA_Facade_generated_h

#define Galaga_Source_Galaga_Facade_h_12_SPARSE_DATA
#define Galaga_Source_Galaga_Facade_h_12_RPC_WRAPPERS
#define Galaga_Source_Galaga_Facade_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_Source_Galaga_Facade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacade(); \
	friend struct Z_Construct_UClass_AFacade_Statics; \
public: \
	DECLARE_CLASS(AFacade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga"), NO_API) \
	DECLARE_SERIALIZER(AFacade)


#define Galaga_Source_Galaga_Facade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFacade(); \
	friend struct Z_Construct_UClass_AFacade_Statics; \
public: \
	DECLARE_CLASS(AFacade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga"), NO_API) \
	DECLARE_SERIALIZER(AFacade)


#define Galaga_Source_Galaga_Facade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade(AFacade&&); \
	NO_API AFacade(const AFacade&); \
public:


#define Galaga_Source_Galaga_Facade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade(AFacade&&); \
	NO_API AFacade(const AFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacade)


#define Galaga_Source_Galaga_Facade_h_12_PRIVATE_PROPERTY_OFFSET
#define Galaga_Source_Galaga_Facade_h_9_PROLOG
#define Galaga_Source_Galaga_Facade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Source_Galaga_Facade_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_Source_Galaga_Facade_h_12_SPARSE_DATA \
	Galaga_Source_Galaga_Facade_h_12_RPC_WRAPPERS \
	Galaga_Source_Galaga_Facade_h_12_INCLASS \
	Galaga_Source_Galaga_Facade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Source_Galaga_Facade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Source_Galaga_Facade_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_Source_Galaga_Facade_h_12_SPARSE_DATA \
	Galaga_Source_Galaga_Facade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_Source_Galaga_Facade_h_12_INCLASS_NO_PURE_DECLS \
	Galaga_Source_Galaga_Facade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class AFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_Source_Galaga_Facade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

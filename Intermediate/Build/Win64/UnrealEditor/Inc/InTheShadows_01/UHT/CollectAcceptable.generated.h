// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectAcceptable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTHESHADOWS_01_CollectAcceptable_generated_h
#error "CollectAcceptable.generated.h already included, missing '#pragma once' in CollectAcceptable.h"
#endif
#define INTHESHADOWS_01_CollectAcceptable_generated_h

#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_SPARSE_DATA
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_CALLBACK_WRAPPERS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTHESHADOWS_01_API UCollectAcceptable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INTHESHADOWS_01_API UCollectAcceptable(UCollectAcceptable&&); \
	INTHESHADOWS_01_API UCollectAcceptable(const UCollectAcceptable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTHESHADOWS_01_API, UCollectAcceptable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectAcceptable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectAcceptable) \
	INTHESHADOWS_01_API virtual ~UCollectAcceptable();


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCollectAcceptable(); \
	friend struct Z_Construct_UClass_UCollectAcceptable_Statics; \
public: \
	DECLARE_CLASS(UCollectAcceptable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InTheShadows_01"), INTHESHADOWS_01_API) \
	DECLARE_SERIALIZER(UCollectAcceptable)


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICollectAcceptable() {} \
public: \
	typedef UCollectAcceptable UClassType; \
	typedef ICollectAcceptable ThisClass; \
	static void Execute_Collect(UObject* O, UObject* SourceObj, float Count); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_10_PROLOG
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_SPARSE_DATA \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_CALLBACK_WRAPPERS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTHESHADOWS_01_API UClass* StaticClass<class UCollectAcceptable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

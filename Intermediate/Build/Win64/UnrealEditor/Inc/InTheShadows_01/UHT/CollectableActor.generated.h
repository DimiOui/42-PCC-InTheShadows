// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INTHESHADOWS_01_CollectableActor_generated_h
#error "CollectableActor.generated.h already included, missing '#pragma once' in CollectableActor.h"
#endif
#define INTHESHADOWS_01_CollectableActor_generated_h

#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_12_DELEGATE \
INTHESHADOWS_01_API void FOnJumpTriggerSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpTriggerSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp);


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_SPARSE_DATA
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execJump);


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_ACCESSORS
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectableActor(); \
	friend struct Z_Construct_UClass_ACollectableActor_Statics; \
public: \
	DECLARE_CLASS(ACollectableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InTheShadows_01"), NO_API) \
	DECLARE_SERIALIZER(ACollectableActor)


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectableActor(ACollectableActor&&); \
	NO_API ACollectableActor(const ACollectableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectableActor) \
	NO_API virtual ~ACollectableActor();


#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_14_PROLOG
#define FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_SPARSE_DATA \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_ACCESSORS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTHESHADOWS_01_API UClass* StaticClass<class ACollectableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/CollectableActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACollectableActor();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACollectableActor_NoRegister();
	INTHESHADOWS_01_API UFunction* Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics
	{
		struct _Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InTheShadows_01, nullptr, "OnJumpTriggerSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::_Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::_Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJumpTriggerSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpTriggerSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp)
{
	struct _Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms
	{
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
	};
	_Script_InTheShadows_01_eventOnJumpTriggerSignature_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	OnJumpTriggerSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACollectableActor::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_Component);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_Component,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectableActor::execJump)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump(Z_Param_Velocity);
		P_NATIVE_END;
	}
	void ACollectableActor::StaticRegisterNativesACollectableActor()
	{
		UClass* Class = ACollectableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Jump", &ACollectableActor::execJump },
			{ "OnComponentBeginOverlap", &ACollectableActor::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectableActor_Jump_Statics
	{
		struct CollectableActor_eventJump_Parms
		{
			float Velocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectableActor_Jump_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventJump_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectableActor_Jump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_Jump_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectableActor_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectableActor_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectableActor, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_ACollectableActor_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectableActor_Jump_Statics::CollectableActor_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectableActor_Jump_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_Jump_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollectableActor_Jump_Statics::CollectableActor_eventJump_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollectableActor_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectableActor_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics
	{
		struct CollectableActor_eventOnComponentBeginOverlap_Parms
		{
			UBoxComponent* Component;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventOnComponentBeginOverlap_Parms, Component), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CollectableActor_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CollectableActor_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectableActor_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when an actor overlaps with the box collider\n" },
#endif
		{ "ModuleRelativePath", "CollectableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an actor overlaps with the box collider" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectableActor, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::CollectableActor_eventOnComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::CollectableActor_eventOnComponentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectableActor);
	UClass* Z_Construct_UClass_ACollectableActor_NoRegister()
	{
		return ACollectableActor::StaticClass();
	}
	struct Z_Construct_UClass_ACollectableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TriggerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJumpTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJumpTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectableActor_Jump, "Jump" }, // 4121514075
		{ &Z_Construct_UFunction_ACollectableActor_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 2151227398
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectableActor.h" },
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_TriggerClass_MetaData[] = {
		{ "Category", "CollectableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reference to the character blueprint\n" },
#endif
		{ "ModuleRelativePath", "CollectableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the character blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_TriggerClass = { "TriggerClass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, TriggerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_TriggerClass_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_TriggerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "CollectableActor" },
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_Lifetime_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_Lifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "CollectableActor" },
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, JumpVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_JumpVelocity_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_JumpVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_CollectableMesh_MetaData[] = {
		{ "Category", "CollectableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static Mesh for rendering\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh for rendering" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_CollectableMesh = { "CollectableMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, CollectableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_CollectableMesh_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_CollectableMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "CollectableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_BoxCollider_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_BoxCollider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableActor_Statics::NewProp_OnJumpTrigger_MetaData[] = {
		{ "ModuleRelativePath", "CollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACollectableActor_Statics::NewProp_OnJumpTrigger = { "OnJumpTrigger", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableActor, OnJumpTrigger), Z_Construct_UDelegateFunction_InTheShadows_01_OnJumpTriggerSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::NewProp_OnJumpTrigger_MetaData), Z_Construct_UClass_ACollectableActor_Statics::NewProp_OnJumpTrigger_MetaData) }; // 2968471655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_TriggerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_JumpVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_CollectableMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_BoxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableActor_Statics::NewProp_OnJumpTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectableActor_Statics::ClassParams = {
		&ACollectableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACollectableActor()
	{
		if (!Z_Registration_Info_UClass_ACollectableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectableActor.OuterSingleton, Z_Construct_UClass_ACollectableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectableActor.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<ACollectableActor>()
	{
		return ACollectableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectableActor);
	ACollectableActor::~ACollectableActor() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectableActor, ACollectableActor::StaticClass, TEXT("ACollectableActor"), &Z_Registration_Info_UClass_ACollectableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectableActor), 1036963371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_2260445601(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

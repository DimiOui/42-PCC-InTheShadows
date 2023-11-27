// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/CollectibleSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectibleSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACollectibleSpawner();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACollectibleSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	DEFINE_FUNCTION(ACollectibleSpawner::execSpawnActorScheduled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorScheduled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectibleSpawner::execEnableSpawning)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSpawning(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectibleSpawner::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void ACollectibleSpawner::StaticRegisterNativesACollectibleSpawner()
	{
		UClass* Class = ACollectibleSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableSpawning", &ACollectibleSpawner::execEnableSpawning },
			{ "SpawnActor", &ACollectibleSpawner::execSpawnActor },
			{ "SpawnActorScheduled", &ACollectibleSpawner::execSpawnActorScheduled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics
	{
		struct CollectibleSpawner_eventEnableSpawning_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((CollectibleSpawner_eventEnableSpawning_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CollectibleSpawner_eventEnableSpawning_Parms), &Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Change if actors are spawned\n" },
#endif
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change if actors are spawned" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectibleSpawner, nullptr, "EnableSpawning", nullptr, nullptr, Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::CollectibleSpawner_eventEnableSpawning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::CollectibleSpawner_eventEnableSpawning_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics
	{
		struct CollectibleSpawner_eventSpawnActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CollectibleSpawner_eventSpawnActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CollectibleSpawner_eventSpawnActor_Parms), &Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will spawn an actor if the spawn box is valid\n" },
#endif
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will spawn an actor if the spawn box is valid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectibleSpawner, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::CollectibleSpawner_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::CollectibleSpawner_eventSpawnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollectibleSpawner_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectibleSpawner_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectibleSpawner, nullptr, "SpawnActorScheduled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectibleSpawner);
	UClass* Z_Construct_UClass_ACollectibleSpawner_NoRegister()
	{
		return ACollectibleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACollectibleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSpawnTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSpawnTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawn_MetaData[];
#endif
		static void NewProp_bShouldSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectibleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectibleSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectibleSpawner_EnableSpawning, "EnableSpawning" }, // 3338308902
		{ &Z_Construct_UFunction_ACollectibleSpawner_SpawnActor, "SpawnActor" }, // 3298447304
		{ &Z_Construct_UFunction_ACollectibleSpawner_SpawnActorScheduled, "SpawnActorScheduled" }, // 2302546302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectibleSpawner.h" },
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "CollectibleSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor class to spawn\n" },
#endif
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor class to spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectibleSpawner, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_ActorToSpawn_MetaData), Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_ActorToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_AverageSpawnDelay_MetaData[] = {
		{ "Category", "CollectibleSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average time between spawns\n" },
#endif
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average time between spawns" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_AverageSpawnDelay = { "AverageSpawnDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectibleSpawner, AverageSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_AverageSpawnDelay_MetaData), Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_AverageSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData[] = {
		{ "Category", "CollectibleSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random +/- offset to the spawn delay\n" },
#endif
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random +/- offset to the spawn delay" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_RandomSpawnTimeOffset = { "RandomSpawnTimeOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectibleSpawner, RandomSpawnTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData), Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "Category", "CollectibleSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Box component to specify the spawn area\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box component to specify the spawn area" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectibleSpawner, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_SpawnBox_MetaData), Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_SpawnBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn_MetaData[] = {
		{ "Category", "CollectibleSpawner" },
		{ "ModuleRelativePath", "CollectibleSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn_SetBit(void* Obj)
	{
		((ACollectibleSpawner*)Obj)->bShouldSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn = { "bShouldSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACollectibleSpawner), &Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn_MetaData), Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectibleSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_ActorToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_AverageSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_RandomSpawnTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_SpawnBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpawner_Statics::NewProp_bShouldSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectibleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectibleSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectibleSpawner_Statics::ClassParams = {
		&ACollectibleSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectibleSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectibleSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACollectibleSpawner()
	{
		if (!Z_Registration_Info_UClass_ACollectibleSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectibleSpawner.OuterSingleton, Z_Construct_UClass_ACollectibleSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectibleSpawner.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<ACollectibleSpawner>()
	{
		return ACollectibleSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectibleSpawner);
	ACollectibleSpawner::~ACollectibleSpawner() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectibleSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectibleSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectibleSpawner, ACollectibleSpawner::StaticClass, TEXT("ACollectibleSpawner"), &Z_Registration_Info_UClass_ACollectibleSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectibleSpawner), 2633374107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectibleSpawner_h_1415284161(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectibleSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectibleSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

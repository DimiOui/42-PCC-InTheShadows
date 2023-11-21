// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/MoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UMoveComponent();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	DEFINE_FUNCTION(UMoveComponent::execSetMoveDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveDirection(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveComponent::execResetMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveComponent::execEnableMovement)
	{
		P_GET_UBOOL(Z_Param_bShouldMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableMovement(Z_Param_bShouldMove);
		P_NATIVE_END;
	}
	void UMoveComponent::StaticRegisterNativesUMoveComponent()
	{
		UClass* Class = UMoveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableMovement", &UMoveComponent::execEnableMovement },
			{ "ResetMovement", &UMoveComponent::execResetMovement },
			{ "SetMoveDirection", &UMoveComponent::execSetMoveDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics
	{
		struct MoveComponent_eventEnableMovement_Parms
		{
			bool bShouldMove;
		};
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((MoveComponent_eventEnableMovement_Parms*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoveComponent_eventEnableMovement_Parms), &Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_bShouldMove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "EnableMovement", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoveComponent_EnableMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "ResetMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoveComponent_ResetMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics
	{
		struct MoveComponent_eventSetMoveDirection_Parms
		{
			int32 Direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveComponent_eventSetMoveDirection_Parms, Direction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "SetMoveDirection", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::MoveComponent_eventSetMoveDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::MoveComponent_eventSetMoveDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoveComponent_SetMoveDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveComponent);
	UClass* Z_Construct_UClass_UMoveComponent_NoRegister()
	{
		return UMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMovement_MetaData[];
#endif
		static void NewProp_bEnableMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRelativeLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveComponent_EnableMovement, "EnableMovement" }, // 737647579
		{ &Z_Construct_UFunction_UMoveComponent_ResetMovement, "ResetMovement" }, // 931225959
		{ &Z_Construct_UFunction_UMoveComponent_SetMoveDirection, "SetMoveDirection" }, // 584296062
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InTheShadows_01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UDELEGATE(BlueprintAuthorityOnly)\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveComponentReachEndPointSignature, bool, bIsEndPoint);\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MoveComponent.h" },
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UDELEGATE(BlueprintAuthorityOnly)\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveComponentReachEndPointSignature, bool, bIsEndPoint);" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset to move\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to move" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable movement\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable movement" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement_SetBit(void* Obj)
	{
		((UMoveComponent*)Obj)->bEnableMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement = { "bEnableMovement", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveComponent), &Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_StartRelativeLocation_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Computed locations\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computed locations" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_StartRelativeLocation = { "StartRelativeLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, StartRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_StartRelativeLocation_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_StartRelativeLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_bEnableMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_StartRelativeLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponent_Statics::ClassParams = {
		&UMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoveComponent()
	{
		if (!Z_Registration_Info_UClass_UMoveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveComponent.OuterSingleton, Z_Construct_UClass_UMoveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveComponent.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<UMoveComponent>()
	{
		return UMoveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveComponent);
	UMoveComponent::~UMoveComponent() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_MoveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_MoveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveComponent, UMoveComponent::StaticClass, TEXT("UMoveComponent"), &Z_Registration_Info_UClass_UMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveComponent), 1848320045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_MoveComponent_h_2096495079(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_MoveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

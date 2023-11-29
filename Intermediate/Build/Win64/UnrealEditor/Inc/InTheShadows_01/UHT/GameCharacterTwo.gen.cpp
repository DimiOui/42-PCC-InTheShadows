// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/GameCharacterTwo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacterTwo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACharacterHUD_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_AGameCharacterTwo();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_AGameCharacterTwo_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	INTHESHADOWS_01_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionData;
class UScriptStruct* FInteractionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, (UObject*)Z_Construct_UPackage__Script_InTheShadows_01(), TEXT("InteractionData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton;
}
template<> INTHESHADOWS_01_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData), Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData), Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
		nullptr,
		&NewStructOps,
		"InteractionData",
		Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
		sizeof(FInteractionData),
		alignof(FInteractionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton, Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton;
	}
	void AGameCharacterTwo::StaticRegisterNativesAGameCharacterTwo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameCharacterTwo);
	UClass* Z_Construct_UClass_AGameCharacterTwo_NoRegister()
	{
		return AGameCharacterTwo::StaticClass();
	}
	struct Z_Construct_UClass_AGameCharacterTwo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TargetInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameCharacterTwo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameCharacterTwo.h" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, HUD), Z_Construct_UClass_ACharacterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_HUD_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_HUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_BaseMappingContext_MetaData[] = {
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_BaseMappingContext = { "BaseMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, BaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_BaseMappingContext_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_BaseMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_TargetInteractable_MetaData[] = {
		{ "Category", "Character | Interaction" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_TargetInteractable = { "TargetInteractable", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, TargetInteractable), Z_Construct_UClass_UInteractionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_TargetInteractable_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_TargetInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "GameCharacterTwo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh being displayed\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh being displayed" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, PlayerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_PlayerMesh_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_PlayerMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera boom to position the camera above the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom to position the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera to view the scene\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacterTwo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera to view the scene" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterTwo, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_FollowCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacterTwo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_BaseMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_TargetInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterTwo_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameCharacterTwo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacterTwo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacterTwo_Statics::ClassParams = {
		&AGameCharacterTwo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameCharacterTwo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacterTwo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterTwo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameCharacterTwo()
	{
		if (!Z_Registration_Info_UClass_AGameCharacterTwo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacterTwo.OuterSingleton, Z_Construct_UClass_AGameCharacterTwo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameCharacterTwo.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<AGameCharacterTwo>()
	{
		return AGameCharacterTwo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacterTwo);
	AGameCharacterTwo::~AGameCharacterTwo() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ScriptStructInfo[] = {
		{ FInteractionData::StaticStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps, TEXT("InteractionData"), &Z_Registration_Info_UScriptStruct_InteractionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionData), 604662490U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacterTwo, AGameCharacterTwo::StaticClass, TEXT("AGameCharacterTwo"), &Z_Registration_Info_UClass_AGameCharacterTwo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacterTwo), 3125959605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_3613433917(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacterTwo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

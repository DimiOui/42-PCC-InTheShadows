// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/GameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_AGameCharacter();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	void AGameCharacter::StaticRegisterNativesAGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameCharacter);
	UClass* Z_Construct_UClass_AGameCharacter_NoRegister()
	{
		return AGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameCharacter.h" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "GameCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main Pawn camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Pawn camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AGameCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacter_Statics::NewProp_CameraMesh_MetaData[] = {
		{ "Category", "GameCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CameraMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::NewProp_CameraMesh_MetaData), Z_Construct_UClass_AGameCharacter_Statics::NewProp_CameraMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Character Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speed\n" },
#endif
		{ "ModuleRelativePath", "GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CameraMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacter_Statics::ClassParams = {
		&AGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacter.OuterSingleton, Z_Construct_UClass_AGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameCharacter.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<AGameCharacter>()
	{
		return AGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacter);
	AGameCharacter::~AGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacter, AGameCharacter::StaticClass, TEXT("AGameCharacter"), &Z_Registration_Info_UClass_AGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacter), 2794575038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacter_h_1252848362(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_GameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

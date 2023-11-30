// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/CharacterHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACharacterHUD();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_ACharacterHUD_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	void ACharacterHUD::StaticRegisterNativesACharacterHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterHUD);
	UClass* Z_Construct_UClass_ACharacterHUD_NoRegister()
	{
		return ACharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CharacterHUD.h" },
		{ "ModuleRelativePath", "CharacterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "CharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterHUD, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuClass_MetaData), Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "CharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterHUD, InteractionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData), Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterHUD, MainMenuWidget), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuWidget_MetaData), Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterHUD, InteractionWidget), Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidget_MetaData), Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterHUD_Statics::NewProp_MainMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterHUD_Statics::NewProp_InteractionWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterHUD_Statics::ClassParams = {
		&ACharacterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterHUD()
	{
		if (!Z_Registration_Info_UClass_ACharacterHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterHUD.OuterSingleton, Z_Construct_UClass_ACharacterHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterHUD.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<ACharacterHUD>()
	{
		return ACharacterHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterHUD);
	ACharacterHUD::~ACharacterHUD() {}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CharacterHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CharacterHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterHUD, ACharacterHUD::StaticClass, TEXT("ACharacterHUD"), &Z_Registration_Info_UClass_ACharacterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterHUD), 3198927322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CharacterHUD_h_460186909(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CharacterHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CharacterHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

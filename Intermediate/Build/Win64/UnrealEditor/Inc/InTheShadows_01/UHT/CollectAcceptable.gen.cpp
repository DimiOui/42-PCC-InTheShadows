// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/CollectAcceptable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectAcceptable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UCollectAcceptable();
	INTHESHADOWS_01_API UClass* Z_Construct_UClass_UCollectAcceptable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References
	struct CollectAcceptable_eventCollect_Parms
	{
		UObject* SourceObj;
		float Count;
	};
	void ICollectAcceptable::Collect(UObject* SourceObj, float Count)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Collect instead.");
	}
	void UCollectAcceptable::StaticRegisterNativesUCollectAcceptable()
	{
	}
	struct Z_Construct_UFunction_UCollectAcceptable_Collect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObj;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::NewProp_SourceObj = { "SourceObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectAcceptable_eventCollect_Parms, SourceObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollectAcceptable_eventCollect_Parms, Count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::NewProp_SourceObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectAcceptable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollectAcceptable, nullptr, "Collect", nullptr, nullptr, Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::PropPointers), sizeof(CollectAcceptable_eventCollect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::PropPointers) < 2048);
	static_assert(sizeof(CollectAcceptable_eventCollect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollectAcceptable_Collect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollectAcceptable_Collect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectAcceptable);
	UClass* Z_Construct_UClass_UCollectAcceptable_NoRegister()
	{
		return UCollectAcceptable::StaticClass();
	}
	struct Z_Construct_UClass_UCollectAcceptable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectAcceptable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectAcceptable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollectAcceptable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollectAcceptable_Collect, "Collect" }, // 1123805033
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectAcceptable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectAcceptable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CollectAcceptable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectAcceptable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICollectAcceptable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectAcceptable_Statics::ClassParams = {
		&UCollectAcceptable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectAcceptable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectAcceptable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCollectAcceptable()
	{
		if (!Z_Registration_Info_UClass_UCollectAcceptable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectAcceptable.OuterSingleton, Z_Construct_UClass_UCollectAcceptable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollectAcceptable.OuterSingleton;
	}
	template<> INTHESHADOWS_01_API UClass* StaticClass<UCollectAcceptable>()
	{
		return UCollectAcceptable::StaticClass();
	}
	UCollectAcceptable::UCollectAcceptable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectAcceptable);
	UCollectAcceptable::~UCollectAcceptable() {}
	static FName NAME_UCollectAcceptable_Collect = FName(TEXT("Collect"));
	void ICollectAcceptable::Execute_Collect(UObject* O, UObject* SourceObj, float Count)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCollectAcceptable::StaticClass()));
		CollectAcceptable_eventCollect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCollectAcceptable_Collect);
		if (Func)
		{
			Parms.SourceObj=SourceObj;
			Parms.Count=Count;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollectAcceptable, UCollectAcceptable::StaticClass, TEXT("UCollectAcceptable"), &Z_Registration_Info_UClass_UCollectAcceptable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectAcceptable), 3072519378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_1468367187(TEXT("/Script/InTheShadows_01"),
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_CollectAcceptable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InTheShadows_01/PuzzleDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleDataStruct() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	INTHESHADOWS_01_API UScriptStruct* Z_Construct_UScriptStruct_FPuzzleData();
	UPackage* Z_Construct_UPackage__Script_InTheShadows_01();
// End Cross Module References

static_assert(std::is_polymorphic<FPuzzleData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPuzzleData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PuzzleData;
class UScriptStruct* FPuzzleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PuzzleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PuzzleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPuzzleData, (UObject*)Z_Construct_UPackage__Script_InTheShadows_01(), TEXT("PuzzleData"));
	}
	return Z_Registration_Info_UScriptStruct_PuzzleData.OuterSingleton;
}
template<> INTHESHADOWS_01_API UScriptStruct* StaticStruct<FPuzzleData>()
{
	return FPuzzleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPuzzleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PuzzleID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[];
#endif
		static void NewProp_bIsCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPuzzleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPuzzleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPuzzleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_PuzzleID_MetaData[] = {
		{ "Category", "Puzzle Data" },
		{ "ModuleRelativePath", "PuzzleDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_PuzzleID = { "PuzzleID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPuzzleData, PuzzleID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_PuzzleID_MetaData), Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_PuzzleID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Puzzle Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A unique identifier for the puzzle\n" },
#endif
		{ "ModuleRelativePath", "PuzzleDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A unique identifier for the puzzle" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
	{
		((FPuzzleData*)Obj)->bIsCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPuzzleData), &Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted_MetaData), Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPuzzleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_PuzzleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPuzzleData_Statics::NewProp_bIsCompleted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPuzzleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InTheShadows_01,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PuzzleData",
		Z_Construct_UScriptStruct_FPuzzleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPuzzleData_Statics::PropPointers),
		sizeof(FPuzzleData),
		alignof(FPuzzleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPuzzleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPuzzleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPuzzleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPuzzleData()
	{
		if (!Z_Registration_Info_UScriptStruct_PuzzleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PuzzleData.InnerSingleton, Z_Construct_UScriptStruct_FPuzzleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PuzzleData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_PuzzleDataStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_PuzzleDataStruct_h_Statics::ScriptStructInfo[] = {
		{ FPuzzleData::StaticStruct, Z_Construct_UScriptStruct_FPuzzleData_Statics::NewStructOps, TEXT("PuzzleData"), &Z_Registration_Info_UScriptStruct_PuzzleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPuzzleData), 189289751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_PuzzleDataStruct_h_2183928619(TEXT("/Script/InTheShadows_01"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_PuzzleDataStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InTheShadows_01_Source_InTheShadows_01_PuzzleDataStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

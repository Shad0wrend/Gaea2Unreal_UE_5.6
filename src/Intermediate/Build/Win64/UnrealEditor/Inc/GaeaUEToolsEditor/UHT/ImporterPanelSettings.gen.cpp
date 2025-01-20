// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaeaUEToolsEditor/Public/ImporterPanelSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImporterPanelSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings();
	GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor();
// End Cross Module References
	DEFINE_FUNCTION(UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLandscapeMaterialLayerNamesNotEmpty();
		P_NATIVE_END;
	}
	void UImporterPanelSettings::StaticRegisterNativesUImporterPanelSettings()
	{
		UClass* Class = UImporterPanelSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLandscapeMaterialLayerNamesNotEmpty", &UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics
	{
		struct ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms
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
	void Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms), &Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImporterPanelSettings, nullptr, "IsLandscapeMaterialLayerNamesNotEmpty", nullptr, nullptr, Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImporterPanelSettings);
	UClass* Z_Construct_UClass_UImporterPanelSettings_NoRegister()
	{
		return UImporterPanelSettings::StaticClass();
	}
	struct Z_Construct_UClass_UImporterPanelSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeightMapFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jsonFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFileNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFileNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFileNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFilePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StoredPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditLayers_MetaData[];
#endif
		static void NewProp_EnableEditLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipYAxis_MetaData[];
#endif
		static void NewProp_FlipYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldPartition_MetaData[];
#endif
		static void NewProp_bIsWorldPartition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPartitionGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeMaterial;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeMaterialLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeMaterialLayerNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfoFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImporterPanelSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UImporterPanelSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty, "IsLandscapeMaterialLayerNamesNotEmpty" }, // 908844607
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImporterPanelSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "Heightmap Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName = { "HeightMapFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, HeightMapFileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "JSON Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName = { "jsonFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, jsonFileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_Inner = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "Comment", "//Reorder these to match the desired landscape layer.\n" },
		{ "DisplayName", "Weightmap Filenames" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Reorder these to match the desired landscape layer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_Inner = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath = { "StoredPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, StoredPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_MetaData[] = {
		{ "Category", "Landscape Actor Settings" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->EnableEditLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers = { "EnableEditLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_MetaData[] = {
		{ "Category", "Landscape Actor Settings" },
		{ "DisplayName", "Flip Y Axis" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->FlipYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis = { "FlipYAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "DisplayName", "Enable World Partition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->bIsWorldPartition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition = { "bIsWorldPartition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "// Used only if the level has world partition support.\n" },
		{ "EditCondition", "bIsWorldPartition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Used only if the level has world partition support." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize = { "WorldPartitionGridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WorldPartitionGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category=\"Landscape Actor Settings|World Partition\", meta = (EditCondition = \"bIsWorldPartition\", UIMin=\"4\", UIMax=\"64\", ClampMin=\"4\", ClampMax=\"64\"))\n\x09int32 WorldPartitionRegionSize = 16;*///Must be set to automatically setup layer weightmaps.\n" },
		{ "DisplayName", "Landscape Material" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=\"Landscape Actor Settings|World Partition\", meta = (EditCondition = \"bIsWorldPartition\", UIMin=\"4\", UIMax=\"64\", ClampMin=\"4\", ClampMax=\"64\"))\n       int32 WorldPartitionRegionSize = 16;//Must be set to automatically setup layer weightmaps." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_Inner = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Landscape Layer Names" },
		{ "EditCondition", "IsLandscapeMaterialLayerNamesNotEmpty()" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterialLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//Where to create layer info objects.\n" },
		{ "ContentDir", "" },
		{ "DisplayName", "Layer Info Folder" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Where to create layer info objects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder = { "LayerInfoFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LayerInfoFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Components), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents = { "TotalComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, TotalComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents_MetaData), Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImporterPanelSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImporterPanelSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImporterPanelSettings_Statics::ClassParams = {
		&UImporterPanelSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UImporterPanelSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UImporterPanelSettings()
	{
		if (!Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton, Z_Construct_UClass_UImporterPanelSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton;
	}
	template<> GAEAUETOOLSEDITOR_API UClass* StaticClass<UImporterPanelSettings>()
	{
		return UImporterPanelSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImporterPanelSettings);
	struct Z_CompiledInDeferFile_FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImporterPanelSettings, UImporterPanelSettings::StaticClass, TEXT("UImporterPanelSettings"), &Z_Registration_Info_UClass_UImporterPanelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImporterPanelSettings), 784110646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h_1454361793(TEXT("/Script/GaeaUEToolsEditor"),
		Z_CompiledInDeferFile_FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

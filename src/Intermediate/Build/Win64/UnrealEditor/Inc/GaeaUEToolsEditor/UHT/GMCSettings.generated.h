// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GMCSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAEAUETOOLSEDITOR_GMCSettings_generated_h
#error "GMCSettings.generated.h already included, missing '#pragma once' in GMCSettings.h"
#endif
#define GAEAUETOOLSEDITOR_GMCSettings_generated_h

#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAEAUETOOLSEDITOR_API UScriptStruct* StaticStruct<struct FGaeaLandscapeSetting>();

#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_SPARSE_DATA
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ACCESSORS
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMCSettings(); \
	friend struct Z_Construct_UClass_UGMCSettings_Statics; \
public: \
	DECLARE_CLASS(UGMCSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaeaUEToolsEditor"), NO_API) \
	DECLARE_SERIALIZER(UGMCSettings)


#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGMCSettings(UGMCSettings&&); \
	NO_API UGMCSettings(const UGMCSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMCSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMCSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGMCSettings)


#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_47_PROLOG
#define FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_SPARSE_DATA \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ACCESSORS \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_INCLASS_NO_PURE_DECLS \
	FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAEAUETOOLSEDITOR_API UClass* StaticClass<class UGMCSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G53_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h


#define FOREACH_ENUM_ELANDSCAPEBLENDLAYERSTYPE(op) \
	op(ELandscapeBlendLayersType::LB_WeightedBlend) \
	op(ELandscapeBlendLayersType::LB_AlphaBlends) \
	op(ELandscapeBlendLayersType::LB_HeightBlends) 

enum class ELandscapeBlendLayersType : uint8;
template<> struct TIsUEnumClass<ELandscapeBlendLayersType> { enum { Value = true }; };
template<> GAEAUETOOLSEDITOR_API UEnum* StaticEnum<ELandscapeBlendLayersType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

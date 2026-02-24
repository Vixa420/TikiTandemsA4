// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_ProductUserId;
struct FEIK_Stats_Stat;
#ifdef ONLINESUBSYSTEMEIK_EIK_StatsSubsystem_generated_h
#error "EIK_StatsSubsystem.generated.h already included, missing '#pragma once' in EIK_StatsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_StatsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Stats_GetStatsCount); \
	DECLARE_FUNCTION(execEIK_Stats_CopyStatByName); \
	DECLARE_FUNCTION(execEIK_Stats_CopyStatByIndex);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_StatsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_StatsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_StatsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_StatsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_StatsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_StatsSubsystem(UEIK_StatsSubsystem&&); \
	UEIK_StatsSubsystem(const UEIK_StatsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_StatsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_StatsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_StatsSubsystem) \
	NO_API virtual ~UEIK_StatsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_18_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_StatsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

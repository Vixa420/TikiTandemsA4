// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Stats_QueryStats;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Stats_QueryStats_generated_h
#error "EIK_Stats_QueryStats.generated.h already included, missing '#pragma once' in EIK_Stats_QueryStats.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Stats_QueryStats_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnStatsQueryStatsComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnStatsQueryStatsComplete, FEIK_ProductUserId const& LocalUserId, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_ProductUserId const& TargetUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Stats_QueryStats);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Stats_QueryStats(); \
	friend struct Z_Construct_UClass_UEIK_Stats_QueryStats_Statics; \
public: \
	DECLARE_CLASS(UEIK_Stats_QueryStats, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Stats_QueryStats)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Stats_QueryStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Stats_QueryStats(UEIK_Stats_QueryStats&&); \
	UEIK_Stats_QueryStats(const UEIK_Stats_QueryStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Stats_QueryStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Stats_QueryStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Stats_QueryStats) \
	NO_API virtual ~UEIK_Stats_QueryStats();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Stats_QueryStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

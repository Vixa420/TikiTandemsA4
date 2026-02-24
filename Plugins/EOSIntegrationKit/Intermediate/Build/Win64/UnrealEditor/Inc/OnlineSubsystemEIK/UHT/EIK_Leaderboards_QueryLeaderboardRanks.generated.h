// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Leaderboards_QueryLeaderboardRanks;
struct FEIK_Leaderboards_QueryLeaderboardRanksOptions;
#ifdef ONLINESUBSYSTEMEIK_EIK_Leaderboards_QueryLeaderboardRanks_generated_h
#error "EIK_Leaderboards_QueryLeaderboardRanks.generated.h already included, missing '#pragma once' in EIK_Leaderboards_QueryLeaderboardRanks.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Leaderboards_QueryLeaderboardRanks_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Leaderboards_QueryLeaderboardRanksOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_45_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback, TEnumAsByte<EEIK_Result> const& Result, const FString& LeaderboardId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Leaderboards_QueryLeaderboardRanks);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Leaderboards_QueryLeaderboardRanks(); \
	friend struct Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics; \
public: \
	DECLARE_CLASS(UEIK_Leaderboards_QueryLeaderboardRanks, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Leaderboards_QueryLeaderboardRanks)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Leaderboards_QueryLeaderboardRanks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Leaderboards_QueryLeaderboardRanks(UEIK_Leaderboards_QueryLeaderboardRanks&&); \
	UEIK_Leaderboards_QueryLeaderboardRanks(const UEIK_Leaderboards_QueryLeaderboardRanks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Leaderboards_QueryLeaderboardRanks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Leaderboards_QueryLeaderboardRanks); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Leaderboards_QueryLeaderboardRanks) \
	NO_API virtual ~UEIK_Leaderboards_QueryLeaderboardRanks();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_47_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Leaderboards_QueryLeaderboardRanks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

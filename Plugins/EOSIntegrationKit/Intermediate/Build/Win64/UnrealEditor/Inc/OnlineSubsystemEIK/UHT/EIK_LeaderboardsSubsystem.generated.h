// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_Leaderboards_Definition;
struct FEIK_Leaderboards_LeaderboardRecord;
struct FEIK_Leaderboards_LeaderboardUserScore;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_LeaderboardsSubsystem_generated_h
#error "EIK_LeaderboardsSubsystem.generated.h already included, missing '#pragma once' in EIK_LeaderboardsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_LeaderboardsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Leaderboards_LeaderboardUserScore_Release); \
	DECLARE_FUNCTION(execEIK_Leaderboards_LeaderboardRecord_Release); \
	DECLARE_FUNCTION(execEIK_Leaderboards_GetLeaderboardUserScoreCount); \
	DECLARE_FUNCTION(execEIK_Leaderboards_GetLeaderboardRecordCount); \
	DECLARE_FUNCTION(execEIK_Leaderboards_GetLeaderboardDefinitionCount); \
	DECLARE_FUNCTION(execEIK_Leaderboards_LeaderboardDefinition_Release); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardUserScoreByUserId); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardUserScoreByIndex); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardRecordByUserId); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardRecordByIndex); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId); \
	DECLARE_FUNCTION(execEIK_Leaderboards_CopyLeaderboardDefinitionByIndex);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_LeaderboardsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_LeaderboardsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_LeaderboardsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_LeaderboardsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_LeaderboardsSubsystem(UEIK_LeaderboardsSubsystem&&); \
	UEIK_LeaderboardsSubsystem(const UEIK_LeaderboardsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_LeaderboardsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_LeaderboardsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_LeaderboardsSubsystem) \
	NO_API virtual ~UEIK_LeaderboardsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_LeaderboardsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

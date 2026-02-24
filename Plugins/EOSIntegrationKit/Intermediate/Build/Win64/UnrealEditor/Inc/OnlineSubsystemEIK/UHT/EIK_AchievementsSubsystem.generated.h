// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_Achievements_DefinitionV2;
struct FEIK_Achievements_PlayerAchievement;
struct FEIK_NotificationId;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_AchievementsSubsystem_generated_h
#error "EIK_AchievementsSubsystem.generated.h already included, missing '#pragma once' in EIK_AchievementsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_AchievementsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnAchievementsUnlockedV2Callback_DelegateWrapper(const FScriptDelegate& OnAchievementsUnlockedV2Callback, FEIK_ProductUserId UserId, const FString& AchievementId, int64 UnlockTime);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Achievements_RemoveNotifyAchievementsUnlocked); \
	DECLARE_FUNCTION(execEIK_Achievements_QueryDefinitions); \
	DECLARE_FUNCTION(execEIK_Achievements_PlayerAchievement_Release); \
	DECLARE_FUNCTION(execEIK_Achievements_GetPlayerAchievementCount); \
	DECLARE_FUNCTION(execEIK_Achievements_GetAchievementDefinitionCount); \
	DECLARE_FUNCTION(execEIK_Achievements_DefinitionV2_Release); \
	DECLARE_FUNCTION(execEIK_Achievements_CopyPlayerAchievementByIndex); \
	DECLARE_FUNCTION(execEIK_Achievements_CopyPlayerAchievementByAchievementId); \
	DECLARE_FUNCTION(execEIK_Achievements_CopyAchievementDefinitionV2ByIndex); \
	DECLARE_FUNCTION(execEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId); \
	DECLARE_FUNCTION(execEIK_Achievements_AddNotifyAchievementsUnlockedV2);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_AchievementsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_AchievementsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_AchievementsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_AchievementsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_AchievementsSubsystem(UEIK_AchievementsSubsystem&&); \
	UEIK_AchievementsSubsystem(const UEIK_AchievementsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_AchievementsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_AchievementsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_AchievementsSubsystem) \
	NO_API virtual ~UEIK_AchievementsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_AchievementsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

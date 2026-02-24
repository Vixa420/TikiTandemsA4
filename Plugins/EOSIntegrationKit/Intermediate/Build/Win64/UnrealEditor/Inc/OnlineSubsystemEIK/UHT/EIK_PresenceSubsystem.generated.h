// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_EpicAccountId;
struct FEIK_HPresenceModification;
struct FEIK_NotificationId;
struct FEIK_Presence_DataRecord;
struct FEIK_Presence_Info;
struct FEIK_PresenceModification_DataRecordId;
struct FEIK_UI_EventId;
#ifdef ONLINESUBSYSTEMEIK_EIK_PresenceSubsystem_generated_h
#error "EIK_PresenceSubsystem.generated.h already included, missing '#pragma once' in EIK_PresenceSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_PresenceSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Presence_JoinGameAcceptedCallbackInfo_DelegateWrapper(const FScriptDelegate& EIK_Presence_JoinGameAcceptedCallbackInfo, const FString& JoinInfo, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, FEIK_UI_EventId const& UiEventId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_11_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Presence_OnPresenceChangedCallbackInfo_DelegateWrapper(const FScriptDelegate& EIK_Presence_OnPresenceChangedCallbackInfo, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& PresenceUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_PresenceModification_SetStatus); \
	DECLARE_FUNCTION(execEIK_PresenceModification_SetRawRichText); \
	DECLARE_FUNCTION(execEIK_PresenceModification_SetJoinInfo); \
	DECLARE_FUNCTION(execEIK_PresenceModification_SetData); \
	DECLARE_FUNCTION(execEIK_PresenceModification_Release); \
	DECLARE_FUNCTION(execEIK_PresenceModification_DeleteData); \
	DECLARE_FUNCTION(execEIK_Presence_RemoveNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEIK_Presence_RemoveNotifyJoinGameAccepted); \
	DECLARE_FUNCTION(execEIK_Presence_Info_Release); \
	DECLARE_FUNCTION(execEIK_Presence_HasPresence); \
	DECLARE_FUNCTION(execEIK_Presence_GetJoinInfo); \
	DECLARE_FUNCTION(execEIK_Presence_CreatePresenceModification); \
	DECLARE_FUNCTION(execEIK_Presence_CopyPresence); \
	DECLARE_FUNCTION(execEIK_Presence_AddNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEIK_Presence_AddNotifyJoinGameAccepted);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_PresenceSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_PresenceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_PresenceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_PresenceSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_PresenceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_PresenceSubsystem(UEIK_PresenceSubsystem&&); \
	UEIK_PresenceSubsystem(const UEIK_PresenceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_PresenceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_PresenceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_PresenceSubsystem) \
	NO_API virtual ~UEIK_PresenceSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_13_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_PresenceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

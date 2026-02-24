// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_ActiveSession_Info;
struct FEIK_HActiveSession;
struct FEIK_HSessionDetails;
struct FEIK_HSessionModification;
struct FEIK_HSessionSearch;
struct FEIK_NotificationId;
struct FEIK_ProductUserId;
struct FEIK_SessionDetails_Attribute;
struct FEIK_SessionDetails_Info;
struct FEIK_Sessions_AttributeData;
struct FEIK_Sessions_CreateSessionModificationOptions;
struct FEIK_UI_EventId;
#ifdef ONLINESUBSYSTEMEIK_EIK_SessionsSubsystem_generated_h
#error "EIK_SessionsSubsystem.generated.h already included, missing '#pragma once' in EIK_SessionsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_SessionsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnJoinSessionAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnJoinSessionAcceptedCallback, FEIK_ProductUserId const& LocalUserId, FEIK_UI_EventId const& UIEventId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnLeaveSessionRequestedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnLeaveSessionRequestedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionName);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_17_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnSendSessionInviteCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSendSessionInviteCallback, FEIK_ProductUserId const& LocalUserId, FEIK_UI_EventId const& UIEventId, const FString& TargetNativeAccountType, const FString& TargetUserNativeAccountId, const FString& SessionId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_18_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnSessionInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteAcceptedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionId, FEIK_ProductUserId const& TargetUserId, const FString& InviteId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_19_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnSessionInviteReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteReceivedCallback, FEIK_ProductUserId const& LocalUserId, const FString& InviteId, FEIK_ProductUserId const& TargetUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_20_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sessions_OnSessionInviteRejectedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteRejectedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionId, FEIK_ProductUserId const& TargetUserId, const FString& InviteId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Sessions_CreateSessionModificationOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_SessionSearch_SetTargetUserId); \
	DECLARE_FUNCTION(execEIK_SessionSearch_SetSessionId); \
	DECLARE_FUNCTION(execEIK_SessionSearch_SetParameter); \
	DECLARE_FUNCTION(execEIK_SessionSearch_SetMaxResults); \
	DECLARE_FUNCTION(execEIK_SessionSearch_RemoveParameter); \
	DECLARE_FUNCTION(execEIK_SessionSearch_Release); \
	DECLARE_FUNCTION(execEIK_SessionSearch_GetSearchResultCount); \
	DECLARE_FUNCTION(execEIK_SessionSearch_CopySearchResultByIndex); \
	DECLARE_FUNCTION(execEIK_Sessions_UpdateSessionModification); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifySessionInviteRejected); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifyLeaveSessionRequested); \
	DECLARE_FUNCTION(execEIK_Sessions_RemoveNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEIK_Sessions_IsUserInSession); \
	DECLARE_FUNCTION(execEIK_Sessions_GetInviteIdByIndex); \
	DECLARE_FUNCTION(execEIK_Sessions_GetInviteCount); \
	DECLARE_FUNCTION(execEIK_Sessions_DumpSessionState); \
	DECLARE_FUNCTION(execEIK_Sessions_CreateSessionSearch); \
	DECLARE_FUNCTION(execEIK_Sessions_CreateSessionModification); \
	DECLARE_FUNCTION(execEIK_Sessions_CopySessionHandleForPresence); \
	DECLARE_FUNCTION(execEIK_Sessions_CopySessionHandleByUiEventId); \
	DECLARE_FUNCTION(execEIK_Sessions_CopySessionHandleByInviteId); \
	DECLARE_FUNCTION(execEIK_Sessions_CopyActiveSessionHandle); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifySessionInviteRejected); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifySendSessionNativeInviteRequested); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifyLeaveSessionRequested); \
	DECLARE_FUNCTION(execEIK_Sessions_AddNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetPermissionLevel); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetMaxPlayers); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetJoinInProgressAllowed); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetInvitesAllowed); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetHostAddress); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetBucketId); \
	DECLARE_FUNCTION(execEIK_SessionModification_SetAllowedPlatformIds); \
	DECLARE_FUNCTION(execEIK_SessionModification_RemoveAttribute); \
	DECLARE_FUNCTION(execEIK_SessionModification_Release); \
	DECLARE_FUNCTION(execEIK_SessionModification_AddAttribute); \
	DECLARE_FUNCTION(execEIK_SessionDetails_GetSessionAttributeCount); \
	DECLARE_FUNCTION(execEIK_SessionDetails_CopySessionAttributeByKey); \
	DECLARE_FUNCTION(execEIK_SessionDetails_CopySessionAttributeByIndex); \
	DECLARE_FUNCTION(execEIK_SessionDetails_CopyInfo); \
	DECLARE_FUNCTION(execEIK_ActiveSession_Release); \
	DECLARE_FUNCTION(execEIK_ActiveSession_GetRegisteredPlayerByIndex); \
	DECLARE_FUNCTION(execEIK_ActiveSession_CopyInfo);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_SessionsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_SessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_SessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_SessionsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_SessionsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_SessionsSubsystem(UEIK_SessionsSubsystem&&); \
	UEIK_SessionsSubsystem(const UEIK_SessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_SessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_SessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_SessionsSubsystem) \
	NO_API virtual ~UEIK_SessionsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_90_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_SessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

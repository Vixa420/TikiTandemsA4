// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_HLobbyDetails;
struct FEIK_HLobbyModification;
struct FEIK_HLobbySearch;
struct FEIK_Lobby_Attribute;
struct FEIK_Lobby_AttributeData;
struct FEIK_LobbyDetails_MemberInfo;
struct FEIK_LobbyDetailsInfo;
struct FEIK_LobbyId;
struct FEIK_NotificationId;
struct FEIK_ProductUserId;
struct FEIK_UI_EventId;
#ifdef ONLINESUBSYSTEMEIK_EIK_LobbySubsystem_generated_h
#error "EIK_LobbySubsystem.generated.h already included, missing '#pragma once' in EIK_LobbySubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_LobbySubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnJoinLobbyAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnJoinLobbyAcceptedCallback, FEIK_ProductUserId LocalUserId, FEIK_UI_EventId const& UiEventId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_11_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLeaveLobbyRequestedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLeaveLobbyRequestedCallback, FEIK_ProductUserId LocalUserId, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteAcceptedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, const FString& InviteId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyInviteReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteReceivedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, const FString& InviteId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyInviteRejectedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteRejectedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, const FString& InviteId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyMemberStatusReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyMemberStatusReceivedCallback, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, TEnumAsByte<EEIK_ELobbyMemberStatus> const& CurrentStatus);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyMemberUpdateReceivedCallback, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_17_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnLobbyUpdateReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyUpdateReceivedCallback, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_18_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnRTCRoomConnectionChangedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnRTCRoomConnectionChangedCallback, FEIK_LobbyId const& LobbyId, FEIK_ProductUserId const& LocalUserId, bool bIsConnected, TEnumAsByte<EEIK_Result> const& DisconnectReason);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_19_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_OnSendLobbyNativeInviteCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnSendLobbyNativeInviteCallback, FEIK_UI_EventId UiEventId, FEIK_ProductUserId LocalUserId, const FString& TargetNativeAccountType, const FString& TargetUserNativeAccountId, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_LobbySearch_SetTargetUserId); \
	DECLARE_FUNCTION(execEIK_LobbySearch_SetParameter); \
	DECLARE_FUNCTION(execEIK_LobbySearch_SetMaxResults); \
	DECLARE_FUNCTION(execEIK_LobbySearch_SetLobbyId); \
	DECLARE_FUNCTION(execEIK_LobbySearch_RemoveParameter); \
	DECLARE_FUNCTION(execEIK_LobbySearch_Release); \
	DECLARE_FUNCTION(execEIK_LobbySearch_GetSearchResultCount); \
	DECLARE_FUNCTION(execEIK_LobbySearch_CopySearchResultByIndex); \
	DECLARE_FUNCTION(execEIK_LobbyModification_SetPermissionLevel); \
	DECLARE_FUNCTION(execEIK_LobbyModification_SetMaxMembers); \
	DECLARE_FUNCTION(execEIK_LobbyModification_SetInvitesAllowed); \
	DECLARE_FUNCTION(execEIK_LobbyModification_SetBucketId); \
	DECLARE_FUNCTION(execEIK_LobbyModification_SetAllowedPlatformIds); \
	DECLARE_FUNCTION(execEIK_LobbyModification_RemoveMemberAttribute); \
	DECLARE_FUNCTION(execEIK_LobbyModification_RemoveAttribute); \
	DECLARE_FUNCTION(execEIK_LobbyModification_Release); \
	DECLARE_FUNCTION(execEIK_LobbyModification_AddMemberAttribute); \
	DECLARE_FUNCTION(execEIK_LobbyModification_AddAttribute); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_Release); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_MemberInfo_Release); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_Info_Release); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_GetMemberCount); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_GetMemberByIndex); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_GetMemberAttributeCount); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_GetLobbyOwner); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_GetAttributeCount); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyMemberInfo); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyMemberAttributeByKey); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyMemberAttributeByIndex); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyInfo); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyAttributeByKey); \
	DECLARE_FUNCTION(execEIK_LobbyDetails_CopyAttributeByIndex); \
	DECLARE_FUNCTION(execEIK_Lobby_UpdateLobbyModification); \
	DECLARE_FUNCTION(execEIK_Lobby_ParseLobbyIdFromConnectString); \
	DECLARE_FUNCTION(execEIK_Lobby_IsRTCRoomConnected); \
	DECLARE_FUNCTION(execEIK_Lobby_GetRTCRoomName); \
	DECLARE_FUNCTION(execEIK_Lobby_GetInviteIdByIndex); \
	DECLARE_FUNCTION(execEIK_Lobby_GetInviteCount); \
	DECLARE_FUNCTION(execEIK_Lobby_GetConnectString); \
	DECLARE_FUNCTION(execEIK_Lobby_CreateLobbySearch); \
	DECLARE_FUNCTION(execEIK_Lobby_CopyLobbyDetailsHandleByUiEventId); \
	DECLARE_FUNCTION(execEIK_Lobby_CopyLobbyDetailsHandleByInviteId); \
	DECLARE_FUNCTION(execEIK_Lobby_CopyLobbyDetailsHandle); \
	DECLARE_FUNCTION(execEIK_Lobby_Attribute_Release); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifySendLobbyNativeInviteRequested); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyRTCRoomConnectionChanged); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyInviteRejected); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyInviteRejected); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyLeaveLobbyRequested); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyLeaveLobbyRequested); \
	DECLARE_FUNCTION(execEIK_Lobby_RemoveNotifyJoinLobbyAccepted); \
	DECLARE_FUNCTION(execEIK_Lobby_AddNotifyJoinLobbyAccepted);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_LobbySubsystem(); \
	friend struct Z_Construct_UClass_UEIK_LobbySubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_LobbySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_LobbySubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_LobbySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_LobbySubsystem(UEIK_LobbySubsystem&&); \
	UEIK_LobbySubsystem(const UEIK_LobbySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_LobbySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_LobbySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_LobbySubsystem) \
	NO_API virtual ~UEIK_LobbySubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_21_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_LobbySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_Connect_ExternalAccountInfo;
struct FEIK_Connect_IdToken;
struct FEIK_NotificationId;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_ConnectSubsystem_generated_h
#error "EIK_ConnectSubsystem.generated.h already included, missing '#pragma once' in EIK_ConnectSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_ConnectSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_11_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnAuthExpirationCallback_DelegateWrapper(const FScriptDelegate& OnAuthExpirationCallback, FEIK_ProductUserId LocalUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnLoginStatusChangedCallback_DelegateWrapper(const FScriptDelegate& OnLoginStatusChangedCallback, FEIK_ProductUserId LocalUserId, TEnumAsByte<EIK_ELoginStatus> const& LoginStatus);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Connect_RemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEIK_Connect_RemoveNotifyAuthExpiration); \
	DECLARE_FUNCTION(execEIK_Connect_IdToken_Release); \
	DECLARE_FUNCTION(execEIK_Connect_GetProductUserIdMapping); \
	DECLARE_FUNCTION(execEIK_Connect_GetProductUserExternalAccountCount); \
	DECLARE_FUNCTION(execEIK_Connect_GetLoginStatus); \
	DECLARE_FUNCTION(execEIK_Connect_GetLoggedInUsersCount); \
	DECLARE_FUNCTION(execEIK_Connect_GetLoggedInUserByIndex); \
	DECLARE_FUNCTION(execEIK_Connect_GetExternalAccountMapping); \
	DECLARE_FUNCTION(execEIK_Connect_ExternalAccountInfo_Release); \
	DECLARE_FUNCTION(execEIK_Connect_CopyProductUserInfo); \
	DECLARE_FUNCTION(execEIK_Connect_CopyProductUserExternalAccountByIndex); \
	DECLARE_FUNCTION(execEIK_Connect_CopyProductUserExternalAccountByAccountType); \
	DECLARE_FUNCTION(execEIK_Connect_CopyProductUserExternalAccountByAccountId); \
	DECLARE_FUNCTION(execEIK_Connect_CopyIdToken); \
	DECLARE_FUNCTION(execEIK_Connect_AddNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEIK_Connect_AddNotifyAuthExpiration);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_ConnectSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_ConnectSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_ConnectSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_ConnectSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_ConnectSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_ConnectSubsystem(UEIK_ConnectSubsystem&&); \
	UEIK_ConnectSubsystem(const UEIK_ConnectSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_ConnectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_ConnectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_ConnectSubsystem) \
	NO_API virtual ~UEIK_ConnectSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_ConnectSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

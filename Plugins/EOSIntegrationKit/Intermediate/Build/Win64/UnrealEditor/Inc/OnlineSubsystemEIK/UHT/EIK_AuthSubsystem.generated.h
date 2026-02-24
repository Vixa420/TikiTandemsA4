// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_Auth_IdToken;
struct FEIK_Auth_Token;
struct FEIK_EpicAccountId;
struct FEIK_NotificationId;
#ifdef ONLINESUBSYSTEMEIK_EIK_AuthSubsystem_generated_h
#error "EIK_AuthSubsystem.generated.h already included, missing '#pragma once' in EIK_AuthSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_AuthSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Auth_OnLoginStatusChangedCallback_DelegateWrapper(const FScriptDelegate& EIK_Auth_OnLoginStatusChangedCallback, FEIK_EpicAccountId LocalUserId, TEnumAsByte<EIK_ELoginStatus> const& PrevStatus, TEnumAsByte<EIK_ELoginStatus> const& CurrentStatus);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Auth_Token_Release); \
	DECLARE_FUNCTION(execEIK_Auth_RemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEIK_Auth_IdToken_Release); \
	DECLARE_FUNCTION(execEIK_Auth_GetSelectedAccountId); \
	DECLARE_FUNCTION(execEIK_Auth_GetMergedAccountsCount); \
	DECLARE_FUNCTION(execEIK_Auth_GetMergedAccountByIndex); \
	DECLARE_FUNCTION(execEIK_Auth_GetLoginStatus); \
	DECLARE_FUNCTION(execEIK_Auth_GetLoggedInAccountsCount); \
	DECLARE_FUNCTION(execEIK_Auth_GetLoggedInAccountByIndex); \
	DECLARE_FUNCTION(execEIK_Auth_CopyUserAuthToken); \
	DECLARE_FUNCTION(execEIK_Auth_CopyIdToken); \
	DECLARE_FUNCTION(execEIK_Auth_AddNotifyLoginStatusChanged);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_AuthSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_AuthSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_AuthSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_AuthSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_AuthSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_AuthSubsystem(UEIK_AuthSubsystem&&); \
	UEIK_AuthSubsystem(const UEIK_AuthSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_AuthSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_AuthSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_AuthSubsystem) \
	NO_API virtual ~UEIK_AuthSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_AuthSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

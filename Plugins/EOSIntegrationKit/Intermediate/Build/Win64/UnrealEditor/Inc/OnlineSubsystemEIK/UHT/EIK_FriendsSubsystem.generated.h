// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_EpicAccountId;
struct FEIK_NotificationId;
#ifdef ONLINESUBSYSTEMEIK_EIK_FriendsSubsystem_generated_h
#error "EIK_FriendsSubsystem.generated.h already included, missing '#pragma once' in EIK_FriendsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_FriendsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Friends_OnBlockedUsersUpdateCallback_DelegateWrapper(const FScriptDelegate& EIK_Friends_OnBlockedUsersUpdateCallback, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, bool bBlocked);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Friends_OnFriendsUpdateCallback_DelegateWrapper(const FScriptDelegate& EIK_Friends_OnFriendsUpdateCallback, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, TEnumAsByte<EEIK_EFriendsStatus> const& PreviousStatus, TEnumAsByte<EEIK_EFriendsStatus> const& CurrentStatus);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Friends_RemoveNotifyFriendsUpdate); \
	DECLARE_FUNCTION(execEIK_Friends_RemoveNotifyBlockedUsersUpdate); \
	DECLARE_FUNCTION(execEIK_Friends_GetStatus); \
	DECLARE_FUNCTION(execEIK_Friends_GetFriendsCount); \
	DECLARE_FUNCTION(execEIK_Friends_GetFriendAtIndex); \
	DECLARE_FUNCTION(execEIK_Friends_GetBlockedUsersCount); \
	DECLARE_FUNCTION(execEIK_Friends_GetBlockedUserAtIndex); \
	DECLARE_FUNCTION(execEIK_Friends_AddNotifyFriendsUpdate); \
	DECLARE_FUNCTION(execEIK_Friends_AddNotifyBlockedUsersUpdate);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_FriendsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_FriendsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_FriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_FriendsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_FriendsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_FriendsSubsystem(UEIK_FriendsSubsystem&&); \
	UEIK_FriendsSubsystem(const UEIK_FriendsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_FriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_FriendsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_FriendsSubsystem) \
	NO_API virtual ~UEIK_FriendsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_FriendsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

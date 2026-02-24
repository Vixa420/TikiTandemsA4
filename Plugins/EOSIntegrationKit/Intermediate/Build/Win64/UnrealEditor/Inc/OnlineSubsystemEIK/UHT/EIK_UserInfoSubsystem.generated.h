// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_EpicAccountId;
struct FEIK_UserInfo;
struct FEIK_UserInfo_BestDisplayName;
struct FEIK_UserInfo_ExternalUserInfo;
#ifdef ONLINESUBSYSTEMEIK_EIK_UserInfoSubsystem_generated_h
#error "EIK_UserInfoSubsystem.generated.h already included, missing '#pragma once' in EIK_UserInfoSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_UserInfoSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_UserInfo_GetLocalPlatformType); \
	DECLARE_FUNCTION(execEIK_UserInfo_GetExternalUserInfoCount); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyUserInfo); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyExternalUserInfoByIndex); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyExternalUserInfoByAccountType); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyExternalUserInfoByAccountId); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyBestDisplayNameWithPlatform); \
	DECLARE_FUNCTION(execEIK_UserInfo_CopyBestDisplayName);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_UserInfoSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_UserInfoSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_UserInfoSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_UserInfoSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_UserInfoSubsystem(UEIK_UserInfoSubsystem&&); \
	UEIK_UserInfoSubsystem(const UEIK_UserInfoSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_UserInfoSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_UserInfoSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_UserInfoSubsystem) \
	NO_API virtual ~UEIK_UserInfoSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_13_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_UserInfoSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

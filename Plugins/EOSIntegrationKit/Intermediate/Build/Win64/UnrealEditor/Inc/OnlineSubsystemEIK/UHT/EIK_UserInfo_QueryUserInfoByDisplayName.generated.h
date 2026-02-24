// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfoByDisplayName.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_UserInfo_QueryUserInfoByDisplayName;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_UserInfo_QueryUserInfoByDisplayName_generated_h
#error "EIK_UserInfo_QueryUserInfoByDisplayName.generated.h already included, missing '#pragma once' in EIK_UserInfo_QueryUserInfoByDisplayName.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_UserInfo_QueryUserInfoByDisplayName_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnQueryUserInfoByDisplayNameCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnQueryUserInfoByDisplayNameCallback, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, const FString& DisplayName);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_UserInfo_QueryUserInfoByDisplayName);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_UserInfo_QueryUserInfoByDisplayName(); \
	friend struct Z_Construct_UClass_UEIK_UserInfo_QueryUserInfoByDisplayName_Statics; \
public: \
	DECLARE_CLASS(UEIK_UserInfo_QueryUserInfoByDisplayName, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_UserInfo_QueryUserInfoByDisplayName)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_UserInfo_QueryUserInfoByDisplayName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_UserInfo_QueryUserInfoByDisplayName(UEIK_UserInfo_QueryUserInfoByDisplayName&&); \
	UEIK_UserInfo_QueryUserInfoByDisplayName(const UEIK_UserInfo_QueryUserInfoByDisplayName&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_UserInfo_QueryUserInfoByDisplayName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_UserInfo_QueryUserInfoByDisplayName); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_UserInfo_QueryUserInfoByDisplayName) \
	NO_API virtual ~UEIK_UserInfo_QueryUserInfoByDisplayName();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_UserInfo_QueryUserInfoByDisplayName>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfoByDisplayName_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

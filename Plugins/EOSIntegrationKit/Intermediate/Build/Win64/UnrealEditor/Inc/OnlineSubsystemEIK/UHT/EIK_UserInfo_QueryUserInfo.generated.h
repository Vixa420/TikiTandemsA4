// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_UserInfo_QueryUserInfo;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_UserInfo_QueryUserInfo_generated_h
#error "EIK_UserInfo_QueryUserInfo.generated.h already included, missing '#pragma once' in EIK_UserInfo_QueryUserInfo.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_UserInfo_QueryUserInfo_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnQueryUserInfoCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnQueryUserInfoCallback, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_UserInfo_QueryUserInfo);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_UserInfo_QueryUserInfo(); \
	friend struct Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics; \
public: \
	DECLARE_CLASS(UEIK_UserInfo_QueryUserInfo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_UserInfo_QueryUserInfo)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_UserInfo_QueryUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_UserInfo_QueryUserInfo(UEIK_UserInfo_QueryUserInfo&&); \
	UEIK_UserInfo_QueryUserInfo(const UEIK_UserInfo_QueryUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_UserInfo_QueryUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_UserInfo_QueryUserInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_UserInfo_QueryUserInfo) \
	NO_API virtual ~UEIK_UserInfo_QueryUserInfo();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_UserInfo_QueryUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

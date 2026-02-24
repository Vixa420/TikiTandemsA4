// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/ConnectInterface/EIK_Connect_Login.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Connect_Login;
struct FEIK_Connect_Credentials;
struct FEIK_Connect_UserLoginInfo;
struct FEIK_ContinuanceToken;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Connect_Login_generated_h
#error "EIK_Connect_Login.generated.h already included, missing '#pragma once' in EIK_Connect_Login.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Connect_Login_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Connect_UserLoginInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Connect_Credentials>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_105_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnLoginCallback_DelegateWrapper(const FMulticastScriptDelegate& OnLoginCallback, EEIK_Result ResultCode, FEIK_ProductUserId LocalUserId, FEIK_ContinuanceToken ContinuanceToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Connect_Login);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Connect_Login(); \
	friend struct Z_Construct_UClass_UEIK_Connect_Login_Statics; \
public: \
	DECLARE_CLASS(UEIK_Connect_Login, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Connect_Login)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Connect_Login(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Connect_Login(UEIK_Connect_Login&&); \
	UEIK_Connect_Login(const UEIK_Connect_Login&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Connect_Login); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Connect_Login); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Connect_Login) \
	NO_API virtual ~UEIK_Connect_Login();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_106_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Connect_Login>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

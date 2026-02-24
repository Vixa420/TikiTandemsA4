// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AuthInterface/EIK_Auth_Login.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Auth_Login;
struct FEIK_Auth_LoginCallbackInfo;
struct FEIK_Auth_LoginOptions;
#ifdef ONLINESUBSYSTEMEIK_EIK_Auth_Login_generated_h
#error "EIK_Auth_Login.generated.h already included, missing '#pragma once' in EIK_Auth_Login.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Auth_Login_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Auth_LoginCallbackInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Auth_LoginOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_80_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Auth_LoginCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_LoginCallback, FEIK_Auth_LoginCallbackInfo const& Data);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogin);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Auth_Login(); \
	friend struct Z_Construct_UClass_UEIK_Auth_Login_Statics; \
public: \
	DECLARE_CLASS(UEIK_Auth_Login, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Auth_Login)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Auth_Login(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Auth_Login(UEIK_Auth_Login&&); \
	UEIK_Auth_Login(const UEIK_Auth_Login&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Auth_Login); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Auth_Login); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Auth_Login) \
	NO_API virtual ~UEIK_Auth_Login();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_82_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Auth_Login>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

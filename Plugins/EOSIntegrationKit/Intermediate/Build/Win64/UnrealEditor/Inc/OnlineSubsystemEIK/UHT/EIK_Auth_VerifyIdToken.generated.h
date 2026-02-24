// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Auth_VerifyIdToken;
struct FEIK_Auth_IdToken;
struct FEIK_Auth_VerifyIdTokenCallbackInfo;
#ifdef ONLINESUBSYSTEMEIK_EIK_Auth_VerifyIdToken_generated_h
#error "EIK_Auth_VerifyIdToken.generated.h already included, missing '#pragma once' in EIK_Auth_VerifyIdToken.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Auth_VerifyIdToken_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Auth_VerifyIdTokenCallbackInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_93_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Auth_OnVerifyIdTokenCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_OnVerifyIdTokenCallback, FEIK_Auth_VerifyIdTokenCallbackInfo const& Data);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVerifyIdToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Auth_VerifyIdToken(); \
	friend struct Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics; \
public: \
	DECLARE_CLASS(UEIK_Auth_VerifyIdToken, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Auth_VerifyIdToken)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Auth_VerifyIdToken(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Auth_VerifyIdToken(UEIK_Auth_VerifyIdToken&&); \
	UEIK_Auth_VerifyIdToken(const UEIK_Auth_VerifyIdToken&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Auth_VerifyIdToken); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Auth_VerifyIdToken); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Auth_VerifyIdToken) \
	NO_API virtual ~UEIK_Auth_VerifyIdToken();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_94_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Auth_VerifyIdToken>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

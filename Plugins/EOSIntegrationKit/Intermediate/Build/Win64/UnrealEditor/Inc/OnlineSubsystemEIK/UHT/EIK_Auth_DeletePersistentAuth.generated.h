// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Auth_DeletePersistentAuth;
#ifdef ONLINESUBSYSTEMEIK_EIK_Auth_DeletePersistentAuth_generated_h
#error "EIK_Auth_DeletePersistentAuth.generated.h already included, missing '#pragma once' in EIK_Auth_DeletePersistentAuth.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Auth_DeletePersistentAuth_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnDeletePersistentAuthCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDeletePersistentAuthCallback, EEIK_Result ResultCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeletePersistentAuth);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Auth_DeletePersistentAuth(); \
	friend struct Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics; \
public: \
	DECLARE_CLASS(UEIK_Auth_DeletePersistentAuth, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Auth_DeletePersistentAuth)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Auth_DeletePersistentAuth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Auth_DeletePersistentAuth(UEIK_Auth_DeletePersistentAuth&&); \
	UEIK_Auth_DeletePersistentAuth(const UEIK_Auth_DeletePersistentAuth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Auth_DeletePersistentAuth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Auth_DeletePersistentAuth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Auth_DeletePersistentAuth) \
	NO_API virtual ~UEIK_Auth_DeletePersistentAuth();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_16_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Auth_DeletePersistentAuth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

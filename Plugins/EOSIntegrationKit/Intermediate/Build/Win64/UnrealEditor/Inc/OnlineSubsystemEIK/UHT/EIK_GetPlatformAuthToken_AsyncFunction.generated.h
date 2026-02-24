// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetPlatformAuthToken_AsyncFunction;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetPlatformAuthToken_AsyncFunction_generated_h
#error "EIK_GetPlatformAuthToken_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetPlatformAuthToken_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetPlatformAuthToken_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_17_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnGetPlatformAuthTokenComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetPlatformAuthTokenComplete, const FString& AuthToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlatformAuthToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetPlatformAuthToken_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetPlatformAuthToken_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetPlatformAuthToken_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetPlatformAuthToken_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_GetPlatformAuthToken_AsyncFunction(UEIK_GetPlatformAuthToken_AsyncFunction&&); \
	UEIK_GetPlatformAuthToken_AsyncFunction(const UEIK_GetPlatformAuthToken_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetPlatformAuthToken_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetPlatformAuthToken_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetPlatformAuthToken_AsyncFunction) \
	NO_API virtual ~UEIK_GetPlatformAuthToken_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_19_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetPlatformAuthToken_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h


#define FOREACH_ENUM_EEIK_PLATFORMTOUSE(op) \
	op(Steam) \
	op(Apple) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetIdToken_AsyncFunction;
struct FEIKCopyAuthToken;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetIdToken_AsyncFunction_generated_h
#error "EIK_GetIdToken_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetIdToken_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetIdToken_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKCopyAuthToken>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_25_DELEGATE \
ONLINESUBSYSTEMEIK_API void FGetIdToken_Delegate_DelegateWrapper(const FMulticastScriptDelegate& GetIdToken_Delegate, const FEIKCopyAuthToken EIKCopyAuthToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEIKAuthToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetIdToken_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetIdToken_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetIdToken_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetIdToken_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_GetIdToken_AsyncFunction(UEIK_GetIdToken_AsyncFunction&&); \
	UEIK_GetIdToken_AsyncFunction(const UEIK_GetIdToken_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetIdToken_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetIdToken_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetIdToken_AsyncFunction) \
	NO_API virtual ~UEIK_GetIdToken_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_28_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetIdToken_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_CreateDeviceId_AsyncFunction;
#ifdef ONLINESUBSYSTEMEIK_EIK_CreateDeviceId_AsyncFunction_generated_h
#error "EIK_CreateDeviceId_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_CreateDeviceId_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_CreateDeviceId_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnCreateDeviceIdComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCreateDeviceIdComplete, TEnumAsByte<EEIK_Result> const& Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDeviceId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_CreateDeviceId_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_CreateDeviceId_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_CreateDeviceId_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_CreateDeviceId_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_CreateDeviceId_AsyncFunction(UEIK_CreateDeviceId_AsyncFunction&&); \
	UEIK_CreateDeviceId_AsyncFunction(const UEIK_CreateDeviceId_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_CreateDeviceId_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_CreateDeviceId_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_CreateDeviceId_AsyncFunction) \
	NO_API virtual ~UEIK_CreateDeviceId_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_CreateDeviceId_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Connect_QueryProductUserIdMappings;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Connect_QueryProductUserIdMappings_generated_h
#error "EIK_Connect_QueryProductUserIdMappings.generated.h already included, missing '#pragma once' in EIK_Connect_QueryProductUserIdMappings.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Connect_QueryProductUserIdMappings_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Connect_QueryProductUserIdMappings_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_QueryProductUserIdMappings_Delegate, FEIK_ProductUserId const& LocalUserId, EEIK_Result Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Connect_QueryProductUserIdMappings);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Connect_QueryProductUserIdMappings(); \
	friend struct Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics; \
public: \
	DECLARE_CLASS(UEIK_Connect_QueryProductUserIdMappings, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Connect_QueryProductUserIdMappings)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Connect_QueryProductUserIdMappings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Connect_QueryProductUserIdMappings(UEIK_Connect_QueryProductUserIdMappings&&); \
	UEIK_Connect_QueryProductUserIdMappings(const UEIK_Connect_QueryProductUserIdMappings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Connect_QueryProductUserIdMappings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Connect_QueryProductUserIdMappings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Connect_QueryProductUserIdMappings) \
	NO_API virtual ~UEIK_Connect_QueryProductUserIdMappings();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Connect_QueryProductUserIdMappings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

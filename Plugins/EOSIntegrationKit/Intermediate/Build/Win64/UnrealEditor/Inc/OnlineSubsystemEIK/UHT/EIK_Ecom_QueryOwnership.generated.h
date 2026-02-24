// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Ecom_QueryOwnership;
struct FEIK_Ecom_QueryOwnershipCallbackInfo;
struct FEIK_Ecom_QueryOwnershipOptions;
#ifdef ONLINESUBSYSTEMEIK_EIK_Ecom_QueryOwnership_generated_h
#error "EIK_Ecom_QueryOwnership.generated.h already included, missing '#pragma once' in EIK_Ecom_QueryOwnership.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Ecom_QueryOwnership_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Ecom_QueryOwnershipOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Ecom_QueryOwnershipCallbackInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_83_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Ecom_QueryOwnershipCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryOwnershipCallback, FEIK_Ecom_QueryOwnershipCallbackInfo const& Data);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Ecom_QueryOwnership);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Ecom_QueryOwnership(); \
	friend struct Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics; \
public: \
	DECLARE_CLASS(UEIK_Ecom_QueryOwnership, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Ecom_QueryOwnership)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Ecom_QueryOwnership(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Ecom_QueryOwnership(UEIK_Ecom_QueryOwnership&&); \
	UEIK_Ecom_QueryOwnership(const UEIK_Ecom_QueryOwnership&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Ecom_QueryOwnership); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Ecom_QueryOwnership); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Ecom_QueryOwnership) \
	NO_API virtual ~UEIK_Ecom_QueryOwnership();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_84_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Ecom_QueryOwnership>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

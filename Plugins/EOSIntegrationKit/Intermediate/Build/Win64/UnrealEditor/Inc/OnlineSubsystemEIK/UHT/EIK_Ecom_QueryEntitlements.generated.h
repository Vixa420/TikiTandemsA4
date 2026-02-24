// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/EcomInterface/EIK_Ecom_QueryEntitlements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Ecom_QueryEntitlements;
struct FEIK_Ecom_QueryEntitlementsOptions;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Ecom_QueryEntitlements_generated_h
#error "EIK_Ecom_QueryEntitlements.generated.h already included, missing '#pragma once' in EIK_Ecom_QueryEntitlements.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Ecom_QueryEntitlements_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryEntitlementsOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Ecom_QueryEntitlementsOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_49_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Ecom_QueryEntitlementsCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryEntitlementsCallback, FEIK_EpicAccountId const& LocalUserId, TEnumAsByte<EEIK_Result> const& Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Ecom_QueryEntitlements);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Ecom_QueryEntitlements(); \
	friend struct Z_Construct_UClass_UEIK_Ecom_QueryEntitlements_Statics; \
public: \
	DECLARE_CLASS(UEIK_Ecom_QueryEntitlements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Ecom_QueryEntitlements)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Ecom_QueryEntitlements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Ecom_QueryEntitlements(UEIK_Ecom_QueryEntitlements&&); \
	UEIK_Ecom_QueryEntitlements(const UEIK_Ecom_QueryEntitlements&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Ecom_QueryEntitlements); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Ecom_QueryEntitlements); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Ecom_QueryEntitlements) \
	NO_API virtual ~UEIK_Ecom_QueryEntitlements();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_51_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Ecom_QueryEntitlements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryEntitlements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

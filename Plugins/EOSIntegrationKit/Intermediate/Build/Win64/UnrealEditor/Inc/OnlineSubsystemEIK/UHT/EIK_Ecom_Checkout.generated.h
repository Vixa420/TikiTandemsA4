// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Ecom_Checkout;
struct FEIK_Ecom_CheckoutCallbackInfo;
struct FEIK_Ecom_CheckoutOptions;
#ifdef ONLINESUBSYSTEMEIK_EIK_Ecom_Checkout_generated_h
#error "EIK_Ecom_Checkout.generated.h already included, missing '#pragma once' in EIK_Ecom_Checkout.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Ecom_Checkout_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Ecom_CheckoutOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Ecom_CheckoutCallbackInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_93_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Ecom_CheckoutCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_CheckoutCallback, FEIK_Ecom_CheckoutCallbackInfo const& Data);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Ecom_Checkout);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Ecom_Checkout(); \
	friend struct Z_Construct_UClass_UEIK_Ecom_Checkout_Statics; \
public: \
	DECLARE_CLASS(UEIK_Ecom_Checkout, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Ecom_Checkout)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Ecom_Checkout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Ecom_Checkout(UEIK_Ecom_Checkout&&); \
	UEIK_Ecom_Checkout(const UEIK_Ecom_Checkout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Ecom_Checkout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Ecom_Checkout); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Ecom_Checkout) \
	NO_API virtual ~UEIK_Ecom_Checkout();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_95_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Ecom_Checkout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

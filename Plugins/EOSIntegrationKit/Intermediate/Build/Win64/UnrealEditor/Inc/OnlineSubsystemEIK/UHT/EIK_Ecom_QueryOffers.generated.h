// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/EcomInterface/EIK_Ecom_QueryOffers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Ecom_QueryOffers;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Ecom_QueryOffers_generated_h
#error "EIK_Ecom_QueryOffers.generated.h already included, missing '#pragma once' in EIK_Ecom_QueryOffers.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Ecom_QueryOffers_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Ecom_QueryOffersCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryOffersCallback, FEIK_EpicAccountId LocalUserId, TEnumAsByte<EEIK_Result> const& ResultCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Ecom_QueryOffers);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Ecom_QueryOffers(); \
	friend struct Z_Construct_UClass_UEIK_Ecom_QueryOffers_Statics; \
public: \
	DECLARE_CLASS(UEIK_Ecom_QueryOffers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Ecom_QueryOffers)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Ecom_QueryOffers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Ecom_QueryOffers(UEIK_Ecom_QueryOffers&&); \
	UEIK_Ecom_QueryOffers(const UEIK_Ecom_QueryOffers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Ecom_QueryOffers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Ecom_QueryOffers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Ecom_QueryOffers) \
	NO_API virtual ~UEIK_Ecom_QueryOffers();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Ecom_QueryOffers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOffers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

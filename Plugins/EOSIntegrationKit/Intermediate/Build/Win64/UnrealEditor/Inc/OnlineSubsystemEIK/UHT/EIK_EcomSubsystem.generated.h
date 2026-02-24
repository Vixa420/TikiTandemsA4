// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_Ecom_CatalogItem;
struct FEIK_Ecom_CatalogItemId;
struct FEIK_Ecom_CatalogOffer;
struct FEIK_Ecom_CatalogOfferId;
struct FEIK_Ecom_CatalogRelease;
struct FEIK_Ecom_Entitlement;
struct FEIK_Ecom_EntitlementName;
struct FEIK_Ecom_HTransaction;
struct FEIK_Ecom_KeyImageInfo;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_EcomSubsystem_generated_h
#error "EIK_EcomSubsystem.generated.h already included, missing '#pragma once' in EIK_EcomSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_EcomSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Ecom_Transaction_GetTransactionId); \
	DECLARE_FUNCTION(execEIK_Ecom_Transaction_GetEntitlementsCount); \
	DECLARE_FUNCTION(execEIK_Ecom_Transaction_CopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_KeyImageInfo_Release); \
	DECLARE_FUNCTION(execEIK_Ecom_GetTransactionCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetOfferItemCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetOfferImageInfoCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetOfferCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetLastRedeemedEntitlementsCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetItemReleaseCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetItemImageInfoCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetEntitlementsCount); \
	DECLARE_FUNCTION(execEIK_Ecom_GetEntitlementsByNameCount); \
	DECLARE_FUNCTION(execEIK_Ecom_Entitlement_Release); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyTransactionByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyTransactionById); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyOfferByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyOfferItemByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyOfferImageInfoByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyOfferById); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyLastRedeemedEntitlementByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyItemReleaseByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyItemImageInfoByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyItemById); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyEntitlementByNameAndIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEIK_Ecom_CopyEntitlementById); \
	DECLARE_FUNCTION(execEIK_Ecom_CatalogRelease_Release); \
	DECLARE_FUNCTION(execEIK_Ecom_CatalogOffer_Release); \
	DECLARE_FUNCTION(execEIK_Ecom_CatalogItem_Release);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_EcomSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_EcomSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_EcomSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_EcomSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_EcomSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_EcomSubsystem(UEIK_EcomSubsystem&&); \
	UEIK_EcomSubsystem(const UEIK_EcomSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_EcomSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_EcomSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_EcomSubsystem) \
	NO_API virtual ~UEIK_EcomSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_13_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_EcomSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

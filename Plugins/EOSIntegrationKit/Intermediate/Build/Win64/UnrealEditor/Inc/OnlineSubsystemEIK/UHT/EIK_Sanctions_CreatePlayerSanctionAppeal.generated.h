// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Sanctions_CreatePlayerSanctionAppeal;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Sanctions_CreatePlayerSanctionAppeal_generated_h
#error "EIK_Sanctions_CreatePlayerSanctionAppeal.generated.h already included, missing '#pragma once' in EIK_Sanctions_CreatePlayerSanctionAppeal.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Sanctions_CreatePlayerSanctionAppeal_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Sanctions_CreatePlayerSanctionAppealComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Sanctions_CreatePlayerSanctionAppealComplete, FEIK_ProductUserId const& LocalUserId, TEnumAsByte<EEIK_Result> const& Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Sanctions_CreatePlayerSanctionAppeal);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Sanctions_CreatePlayerSanctionAppeal(); \
	friend struct Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics; \
public: \
	DECLARE_CLASS(UEIK_Sanctions_CreatePlayerSanctionAppeal, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Sanctions_CreatePlayerSanctionAppeal)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Sanctions_CreatePlayerSanctionAppeal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Sanctions_CreatePlayerSanctionAppeal(UEIK_Sanctions_CreatePlayerSanctionAppeal&&); \
	UEIK_Sanctions_CreatePlayerSanctionAppeal(const UEIK_Sanctions_CreatePlayerSanctionAppeal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Sanctions_CreatePlayerSanctionAppeal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Sanctions_CreatePlayerSanctionAppeal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Sanctions_CreatePlayerSanctionAppeal) \
	NO_API virtual ~UEIK_Sanctions_CreatePlayerSanctionAppeal();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_15_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Sanctions_CreatePlayerSanctionAppeal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

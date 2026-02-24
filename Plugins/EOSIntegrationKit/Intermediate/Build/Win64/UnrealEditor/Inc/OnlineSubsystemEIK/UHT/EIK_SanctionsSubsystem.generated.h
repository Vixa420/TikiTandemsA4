// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_ProductUserId;
struct FEIK_Sanctions_PlayerSanction;
#ifdef ONLINESUBSYSTEMEIK_EIK_SanctionsSubsystem_generated_h
#error "EIK_SanctionsSubsystem.generated.h already included, missing '#pragma once' in EIK_SanctionsSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_SanctionsSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Sanctions_GetPlayerSanctionCount); \
	DECLARE_FUNCTION(execEIK_Sanctions_CopyPlayerSanctionByIndex);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_SanctionsSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_SanctionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_SanctionsSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_SanctionsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_SanctionsSubsystem(UEIK_SanctionsSubsystem&&); \
	UEIK_SanctionsSubsystem(const UEIK_SanctionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_SanctionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_SanctionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_SanctionsSubsystem) \
	NO_API virtual ~UEIK_SanctionsSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_18_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_SanctionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

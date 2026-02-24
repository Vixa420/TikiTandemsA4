// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Sessions_RegisterPlayers;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Sessions_RegisterPlayers_generated_h
#error "EIK_Sessions_RegisterPlayers.generated.h already included, missing '#pragma once' in EIK_Sessions_RegisterPlayers.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Sessions_RegisterPlayers_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnRegisterPlayersCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnRegisterPlayersCallback, TEnumAsByte<EEIK_Result> const& ResultCode, TArray<FEIK_ProductUserId> const& RegisteredPlayers, TArray<FEIK_ProductUserId> const& SanctionedPlayers);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Sessions_RegisterPlayers);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Sessions_RegisterPlayers(); \
	friend struct Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UEIK_Sessions_RegisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Sessions_RegisterPlayers)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Sessions_RegisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Sessions_RegisterPlayers(UEIK_Sessions_RegisterPlayers&&); \
	UEIK_Sessions_RegisterPlayers(const UEIK_Sessions_RegisterPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Sessions_RegisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Sessions_RegisterPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Sessions_RegisterPlayers) \
	NO_API virtual ~UEIK_Sessions_RegisterPlayers();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_18_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Sessions_RegisterPlayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

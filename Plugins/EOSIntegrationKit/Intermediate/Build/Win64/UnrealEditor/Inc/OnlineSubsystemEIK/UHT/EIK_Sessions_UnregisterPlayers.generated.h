// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Sessions_UnregisterPlayers;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Sessions_UnregisterPlayers_generated_h
#error "EIK_Sessions_UnregisterPlayers.generated.h already included, missing '#pragma once' in EIK_Sessions_UnregisterPlayers.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Sessions_UnregisterPlayers_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnUnregisterPlayersCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnUnregisterPlayersCallback, TEnumAsByte<EEIK_Result> const& ResultCode, TArray<FEIK_ProductUserId> const& UnregisteredPlayers);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Sessions_UnregisterPlayers);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Sessions_UnregisterPlayers(); \
	friend struct Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UEIK_Sessions_UnregisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Sessions_UnregisterPlayers)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Sessions_UnregisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Sessions_UnregisterPlayers(UEIK_Sessions_UnregisterPlayers&&); \
	UEIK_Sessions_UnregisterPlayers(const UEIK_Sessions_UnregisterPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Sessions_UnregisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Sessions_UnregisterPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Sessions_UnregisterPlayers) \
	NO_API virtual ~UEIK_Sessions_UnregisterPlayers();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Sessions_UnregisterPlayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

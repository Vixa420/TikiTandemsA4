// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Lobby_CreateLobby;
struct FEIK_Lobby_CreateLobbyOptions;
struct FEIK_LobbyId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Lobby_CreateLobby_generated_h
#error "EIK_Lobby_CreateLobby.generated.h already included, missing '#pragma once' in EIK_Lobby_CreateLobby.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Lobby_CreateLobby_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Lobby_CreateLobbyOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_113_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_CreateLobbyComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Lobby_CreateLobbyComplete, TEnumAsByte<EEIK_Result> const& Result, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Lobby_CreateLobby);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Lobby_CreateLobby(); \
	friend struct Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics; \
public: \
	DECLARE_CLASS(UEIK_Lobby_CreateLobby, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Lobby_CreateLobby)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Lobby_CreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Lobby_CreateLobby(UEIK_Lobby_CreateLobby&&); \
	UEIK_Lobby_CreateLobby(const UEIK_Lobby_CreateLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Lobby_CreateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Lobby_CreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Lobby_CreateLobby) \
	NO_API virtual ~UEIK_Lobby_CreateLobby();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_115_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Lobby_CreateLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

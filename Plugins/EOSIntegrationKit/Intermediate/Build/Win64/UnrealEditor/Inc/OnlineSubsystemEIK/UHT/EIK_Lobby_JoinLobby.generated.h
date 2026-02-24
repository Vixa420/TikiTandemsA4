// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Lobby_JoinLobby;
struct FEIK_Lobby_JoinLobbyOptions;
struct FEIK_LobbyId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Lobby_JoinLobby_generated_h
#error "EIK_Lobby_JoinLobby.generated.h already included, missing '#pragma once' in EIK_Lobby_JoinLobby.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Lobby_JoinLobby_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Lobby_JoinLobbyOptions>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_54_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Lobby_JoinLobbyDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Lobby_JoinLobbyDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Lobby_JoinLobby);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Lobby_JoinLobby(); \
	friend struct Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics; \
public: \
	DECLARE_CLASS(UEIK_Lobby_JoinLobby, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Lobby_JoinLobby)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Lobby_JoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Lobby_JoinLobby(UEIK_Lobby_JoinLobby&&); \
	UEIK_Lobby_JoinLobby(const UEIK_Lobby_JoinLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Lobby_JoinLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Lobby_JoinLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Lobby_JoinLobby) \
	NO_API virtual ~UEIK_Lobby_JoinLobby();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_56_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Lobby_JoinLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

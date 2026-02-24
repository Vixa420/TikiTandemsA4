// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameModeBase;
class APlayerController;
class UObject;
class USaveGame;
struct FDateTime;
struct FEIK_CurrentSessionInfo;
struct FEIKUniqueNetId;
struct FSessionFindStruct;
#ifdef ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h
#error "EIK_BlueprintFunctions.generated.h already included, missing '#pragma once' in EIK_BlueprintFunctions.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_20_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnResponseFromSanctions_DelegateWrapper(const FScriptDelegate& OnResponseFromSanctions, bool bWasSuccess);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_22_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnResponseFromEpicForAccessToken_DelegateWrapper(const FScriptDelegate& OnResponseFromEpicForAccessToken, bool bWasSuccess, const FString& AccessToken);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_CurrentSessionInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertPosixTimeToDateTime); \
	DECLARE_FUNCTION(execRequestEOSAccessToken); \
	DECLARE_FUNCTION(execMakeSanctionAppeal); \
	DECLARE_FUNCTION(execGetCurrentPort); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execGetEIKPluginVersion); \
	DECLARE_FUNCTION(execGetEOSSDKVersion); \
	DECLARE_FUNCTION(execGetUserUniqueID); \
	DECLARE_FUNCTION(execSaveGameObjectToByteArray); \
	DECLARE_FUNCTION(execByteArrayToSaveGameObject); \
	DECLARE_FUNCTION(execStringToByteArray); \
	DECLARE_FUNCTION(execByteArrayToString); \
	DECLARE_FUNCTION(execGetActiveSubsystem); \
	DECLARE_FUNCTION(execIsEIKActive); \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execRejectSessionInvite); \
	DECLARE_FUNCTION(execAcceptSessionInvite); \
	DECLARE_FUNCTION(execMakeEIKUniqueNetId); \
	DECLARE_FUNCTION(execShowFriendsList); \
	DECLARE_FUNCTION(execGetLobbyPlayerVoiceChatVolume); \
	DECLARE_FUNCTION(execSetLobbyPlayerVoiceChatVolume); \
	DECLARE_FUNCTION(execGetLobbyVoiceChatInputVolume); \
	DECLARE_FUNCTION(execSetLobbyVoiceChatInputVolume); \
	DECLARE_FUNCTION(execSetLobbyVoiceChatOutputVolume); \
	DECLARE_FUNCTION(execGetLobbyVoiceChatOutputVolume); \
	DECLARE_FUNCTION(execUnblockLobbyVoiceChatPlayers); \
	DECLARE_FUNCTION(execBlockLobbyVoiceChatPlayers); \
	DECLARE_FUNCTION(execSetLobbyInputMethod); \
	DECLARE_FUNCTION(execSetLobbyOutputMethod); \
	DECLARE_FUNCTION(execIsLobbyVoiceChatMuted); \
	DECLARE_FUNCTION(execMuteLobbyVoiceChat); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetAllCurrentSessionNames); \
	DECLARE_FUNCTION(execGetCurrentSessionInfo); \
	DECLARE_FUNCTION(execGetEpicAccountId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_BlueprintFunctions(); \
	friend struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UEIK_BlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_BlueprintFunctions)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_BlueprintFunctions(UEIK_BlueprintFunctions&&); \
	UEIK_BlueprintFunctions(const UEIK_BlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_BlueprintFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_BlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_BlueprintFunctions) \
	NO_API virtual ~UEIK_BlueprintFunctions();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_179_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_BlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h


#define FOREACH_ENUM_EEOSSANCTIONTYPE(op) \
	op(IncorrectSanction) \
	op(CompromisedAccount) \
	op(UnfairPunishment) \
	op(AppealForForgiveness) 
#define FOREACH_ENUM_EEIK_LOGINSTATUS(op) \
	op(NotLoggedIn) \
	op(UsingLocalProfile) \
	op(LoggedIn) 
#define FOREACH_ENUM_ESESSIONCURRENTSTATE(op) \
	op(NoSession) \
	op(Creating) \
	op(Pending) \
	op(Starting) \
	op(InProgress) \
	op(Ending) \
	op(Ended) \
	op(Destroying) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

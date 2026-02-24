// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_Lobby_KickMember.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Lobby_KickMember;
struct FEIK_LobbyId;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Lobby_KickMember_generated_h
#error "EIK_Lobby_KickMember.generated.h already included, missing '#pragma once' in EIK_Lobby_KickMember.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Lobby_KickMember_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIKLobbyKickMember_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbyKickMember, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Lobby_KickMember);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Lobby_KickMember(); \
	friend struct Z_Construct_UClass_UEIK_Lobby_KickMember_Statics; \
public: \
	DECLARE_CLASS(UEIK_Lobby_KickMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Lobby_KickMember)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Lobby_KickMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Lobby_KickMember(UEIK_Lobby_KickMember&&); \
	UEIK_Lobby_KickMember(const UEIK_Lobby_KickMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Lobby_KickMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Lobby_KickMember); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Lobby_KickMember) \
	NO_API virtual ~UEIK_Lobby_KickMember();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_16_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Lobby_KickMember>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_KickMember_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

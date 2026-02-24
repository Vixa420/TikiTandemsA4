// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_Lobby_PromoteMember.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Lobby_PromoteMember;
struct FEIK_LobbyId;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Lobby_PromoteMember_generated_h
#error "EIK_Lobby_PromoteMember.generated.h already included, missing '#pragma once' in EIK_Lobby_PromoteMember.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Lobby_PromoteMember_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIKLobbyPromoteMember_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbyPromoteMember, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_LobbyId const& LobbyId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Lobby_PromoteMember);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Lobby_PromoteMember(); \
	friend struct Z_Construct_UClass_UEIK_Lobby_PromoteMember_Statics; \
public: \
	DECLARE_CLASS(UEIK_Lobby_PromoteMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Lobby_PromoteMember)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Lobby_PromoteMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Lobby_PromoteMember(UEIK_Lobby_PromoteMember&&); \
	UEIK_Lobby_PromoteMember(const UEIK_Lobby_PromoteMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Lobby_PromoteMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Lobby_PromoteMember); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Lobby_PromoteMember) \
	NO_API virtual ~UEIK_Lobby_PromoteMember();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_16_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Lobby_PromoteMember>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_PromoteMember_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

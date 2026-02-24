// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/FriendsInterface/EIK_Friends_RejectInvite.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Friends_RejectInvite;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Friends_RejectInvite_generated_h
#error "EIK_Friends_RejectInvite.generated.h already included, missing '#pragma once' in EIK_Friends_RejectInvite.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Friends_RejectInvite_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Friends_RejectInviteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Friends_RejectInviteCallback, TEnumAsByte<EEIK_Result> const& Result, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Friends_RejectInvite);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Friends_RejectInvite(); \
	friend struct Z_Construct_UClass_UEIK_Friends_RejectInvite_Statics; \
public: \
	DECLARE_CLASS(UEIK_Friends_RejectInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Friends_RejectInvite)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Friends_RejectInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Friends_RejectInvite(UEIK_Friends_RejectInvite&&); \
	UEIK_Friends_RejectInvite(const UEIK_Friends_RejectInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Friends_RejectInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Friends_RejectInvite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Friends_RejectInvite) \
	NO_API virtual ~UEIK_Friends_RejectInvite();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_16_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Friends_RejectInvite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_RejectInvite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

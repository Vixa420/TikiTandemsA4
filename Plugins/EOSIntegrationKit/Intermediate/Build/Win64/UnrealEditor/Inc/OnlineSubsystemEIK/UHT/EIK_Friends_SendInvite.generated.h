// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/FriendsInterface/EIK_Friends_SendInvite.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Friends_SendInvite;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Friends_SendInvite_generated_h
#error "EIK_Friends_SendInvite.generated.h already included, missing '#pragma once' in EIK_Friends_SendInvite.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Friends_SendInvite_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_17_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Friends_SendInviteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Friends_SendInviteCallback, TEnumAsByte<EEIK_Result> const& Result, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Friends_SendInvite);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Friends_SendInvite(); \
	friend struct Z_Construct_UClass_UEIK_Friends_SendInvite_Statics; \
public: \
	DECLARE_CLASS(UEIK_Friends_SendInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Friends_SendInvite)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Friends_SendInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Friends_SendInvite(UEIK_Friends_SendInvite&&); \
	UEIK_Friends_SendInvite(const UEIK_Friends_SendInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Friends_SendInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Friends_SendInvite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Friends_SendInvite) \
	NO_API virtual ~UEIK_Friends_SendInvite();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_19_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Friends_SendInvite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_SendInvite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

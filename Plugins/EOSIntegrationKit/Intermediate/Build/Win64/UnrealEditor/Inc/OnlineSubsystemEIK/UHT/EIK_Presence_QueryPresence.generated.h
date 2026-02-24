// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PresenceInterface/EIK_Presence_QueryPresence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Presence_QueryPresence;
struct FEIK_EpicAccountId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Presence_QueryPresence_generated_h
#error "EIK_Presence_QueryPresence.generated.h already included, missing '#pragma once' in EIK_Presence_QueryPresence.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Presence_QueryPresence_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Presence_QueryPresenceComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Presence_QueryPresenceComplete, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, TEnumAsByte<EEIK_Result> const& Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Presence_QueryPresence);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Presence_QueryPresence(); \
	friend struct Z_Construct_UClass_UEIK_Presence_QueryPresence_Statics; \
public: \
	DECLARE_CLASS(UEIK_Presence_QueryPresence, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Presence_QueryPresence)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Presence_QueryPresence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Presence_QueryPresence(UEIK_Presence_QueryPresence&&); \
	UEIK_Presence_QueryPresence(const UEIK_Presence_QueryPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Presence_QueryPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Presence_QueryPresence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Presence_QueryPresence) \
	NO_API virtual ~UEIK_Presence_QueryPresence();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Presence_QueryPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_QueryPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Presence_SetPresence;
struct FEIK_EpicAccountId;
struct FEIK_HPresenceModification;
#ifdef ONLINESUBSYSTEMEIK_EIK_Presence_SetPresence_generated_h
#error "EIK_Presence_SetPresence.generated.h already included, missing '#pragma once' in EIK_Presence_SetPresence.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Presence_SetPresence_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_12_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_Presence_SetPresenceComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Presence_SetPresenceComplete, FEIK_EpicAccountId const& LocalUserId, TEnumAsByte<EEIK_Result> const& Result);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Presence_SetPresence);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Presence_SetPresence(); \
	friend struct Z_Construct_UClass_UEIK_Presence_SetPresence_Statics; \
public: \
	DECLARE_CLASS(UEIK_Presence_SetPresence, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Presence_SetPresence)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Presence_SetPresence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Presence_SetPresence(UEIK_Presence_SetPresence&&); \
	UEIK_Presence_SetPresence(const UEIK_Presence_SetPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Presence_SetPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Presence_SetPresence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Presence_SetPresence) \
	NO_API virtual ~UEIK_Presence_SetPresence();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Presence_SetPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/UIInterface/EIK_UiSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_EpicAccountId;
struct FEIK_NotificationId;
struct FEIK_UI_EventId;
#ifdef ONLINESUBSYSTEMEIK_EIK_UiSubsystem_generated_h
#error "EIK_UiSubsystem.generated.h already included, missing '#pragma once' in EIK_UiSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_UiSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnDisplaySettingsUpdated_DelegateWrapper(const FScriptDelegate& EIK_OnDisplaySettingsUpdated, bool bIsVisible, bool bIsExclusiveInput);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnMemoryMonitor_DelegateWrapper(const FScriptDelegate& EIK_OnMemoryMonitor);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_UI_SetDisplayPreference); \
	DECLARE_FUNCTION(execEIK_UI_RemoveNotifyMemoryMonitor); \
	DECLARE_FUNCTION(execEIK_UI_RemoveNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEIK_UI_PauseSocialOverlay); \
	DECLARE_FUNCTION(execEIK_UI_GetNotificationLocationPreference); \
	DECLARE_FUNCTION(execEIK_UI_GetFriendsVisible); \
	DECLARE_FUNCTION(execEIK_UI_GetFriendsExclusiveInput); \
	DECLARE_FUNCTION(execEIK_UI_AddNotifyMemoryMonitor); \
	DECLARE_FUNCTION(execEIK_UI_AddNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEIK_UI_AcknowledgeEventId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_UiSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_UiSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_UiSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_UiSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_UiSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_UiSubsystem(UEIK_UiSubsystem&&); \
	UEIK_UiSubsystem(const UEIK_UiSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_UiSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_UiSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_UiSubsystem) \
	NO_API virtual ~UEIK_UiSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_17_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_UiSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

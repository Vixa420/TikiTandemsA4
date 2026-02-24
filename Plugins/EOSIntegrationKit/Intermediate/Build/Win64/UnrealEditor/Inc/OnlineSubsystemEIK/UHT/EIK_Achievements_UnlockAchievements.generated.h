// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Achievements_UnlockAchievements;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Achievements_UnlockAchievements_generated_h
#error "EIK_Achievements_UnlockAchievements.generated.h already included, missing '#pragma once' in EIK_Achievements_UnlockAchievements.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Achievements_UnlockAchievements_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_11_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnEIK_Achievements_UnlockAchievementsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnEIK_Achievements_UnlockAchievementsComplete, EEIK_Result ResultCode, FEIK_ProductUserId UserId, int32 AchievementCount);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_Achievements_UnlockAchievements);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Achievements_UnlockAchievements(); \
	friend struct Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics; \
public: \
	DECLARE_CLASS(UEIK_Achievements_UnlockAchievements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Achievements_UnlockAchievements)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Achievements_UnlockAchievements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Achievements_UnlockAchievements(UEIK_Achievements_UnlockAchievements&&); \
	UEIK_Achievements_UnlockAchievements(const UEIK_Achievements_UnlockAchievements&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Achievements_UnlockAchievements); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Achievements_UnlockAchievements); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Achievements_UnlockAchievements) \
	NO_API virtual ~UEIK_Achievements_UnlockAchievements();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Achievements_UnlockAchievements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

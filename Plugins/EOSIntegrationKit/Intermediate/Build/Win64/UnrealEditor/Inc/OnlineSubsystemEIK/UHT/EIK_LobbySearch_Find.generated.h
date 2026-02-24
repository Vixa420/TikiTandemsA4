// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_LobbySearch_Find;
struct FEIK_HLobbySearch;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_LobbySearch_Find_generated_h
#error "EIK_LobbySearch_Find.generated.h already included, missing '#pragma once' in EIK_LobbySearch_Find.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_LobbySearch_Find_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIKLobbySearchFind_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbySearchFind, TEnumAsByte<EEIK_Result> const& ResultCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_LobbySearch_Find);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_LobbySearch_Find(); \
	friend struct Z_Construct_UClass_UEIK_LobbySearch_Find_Statics; \
public: \
	DECLARE_CLASS(UEIK_LobbySearch_Find, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_LobbySearch_Find)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_LobbySearch_Find(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_LobbySearch_Find(UEIK_LobbySearch_Find&&); \
	UEIK_LobbySearch_Find(const UEIK_LobbySearch_Find&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_LobbySearch_Find); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_LobbySearch_Find); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_LobbySearch_Find) \
	NO_API virtual ~UEIK_LobbySearch_Find();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_15_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_LobbySearch_Find>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

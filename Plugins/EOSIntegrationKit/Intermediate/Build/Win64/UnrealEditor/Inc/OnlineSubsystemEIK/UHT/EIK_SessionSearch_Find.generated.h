// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_SessionSearch_Find;
struct FEIK_HSessionSearch;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_SessionSearch_Find_generated_h
#error "EIK_SessionSearch_Find.generated.h already included, missing '#pragma once' in EIK_SessionSearch_Find.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_SessionSearch_Find_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnSessionSearch_FindCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnSessionSearch_FindCallback, TEnumAsByte<EEIK_Result> const& ResultCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_SessionSearch_Find);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_SessionSearch_Find(); \
	friend struct Z_Construct_UClass_UEIK_SessionSearch_Find_Statics; \
public: \
	DECLARE_CLASS(UEIK_SessionSearch_Find, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_SessionSearch_Find)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_SessionSearch_Find(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_SessionSearch_Find(UEIK_SessionSearch_Find&&); \
	UEIK_SessionSearch_Find(const UEIK_SessionSearch_Find&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_SessionSearch_Find); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_SessionSearch_Find); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_SessionSearch_Find) \
	NO_API virtual ~UEIK_SessionSearch_Find();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_18_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_SessionSearch_Find>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

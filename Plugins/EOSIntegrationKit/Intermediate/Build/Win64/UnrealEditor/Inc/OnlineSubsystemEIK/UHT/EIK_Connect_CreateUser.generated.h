// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Connect_CreateUser;
struct FEIK_ContinuanceToken;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_Connect_CreateUser_generated_h
#error "EIK_Connect_CreateUser.generated.h already included, missing '#pragma once' in EIK_Connect_CreateUser.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Connect_CreateUser_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnCreateUserCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateUserCallback, EEIK_Result ResultCode, FEIK_ProductUserId LocalUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateUser);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Connect_CreateUser(); \
	friend struct Z_Construct_UClass_UEIK_Connect_CreateUser_Statics; \
public: \
	DECLARE_CLASS(UEIK_Connect_CreateUser, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Connect_CreateUser)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Connect_CreateUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_Connect_CreateUser(UEIK_Connect_CreateUser&&); \
	UEIK_Connect_CreateUser(const UEIK_Connect_CreateUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Connect_CreateUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Connect_CreateUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Connect_CreateUser) \
	NO_API virtual ~UEIK_Connect_CreateUser();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Connect_CreateUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

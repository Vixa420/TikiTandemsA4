// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_FindUserByDisplayName_Async;
struct FEIKUserInfo;
#ifdef ONLINESUBSYSTEMEIK_EIK_FindUserByDisplayName_Async_generated_h
#error "EIK_FindUserByDisplayName_Async.generated.h already included, missing '#pragma once' in EIK_FindUserByDisplayName_Async.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_FindUserByDisplayName_Async_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKUserInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKUserInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_49_DELEGATE \
ONLINESUBSYSTEMEIK_API void FFindUserByDisplayNameDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindUserByDisplayNameDelegate, const FEIKUserInfo EIKUserInfo);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindEIkUserByDisplayName);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_FindUserByDisplayName_Async(); \
	friend struct Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics; \
public: \
	DECLARE_CLASS(UEIK_FindUserByDisplayName_Async, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_FindUserByDisplayName_Async)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_FindUserByDisplayName_Async(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_FindUserByDisplayName_Async(UEIK_FindUserByDisplayName_Async&&); \
	UEIK_FindUserByDisplayName_Async(const UEIK_FindUserByDisplayName_Async&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_FindUserByDisplayName_Async); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_FindUserByDisplayName_Async); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_FindUserByDisplayName_Async) \
	NO_API virtual ~UEIK_FindUserByDisplayName_Async();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_51_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_FindUserByDisplayName_Async>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

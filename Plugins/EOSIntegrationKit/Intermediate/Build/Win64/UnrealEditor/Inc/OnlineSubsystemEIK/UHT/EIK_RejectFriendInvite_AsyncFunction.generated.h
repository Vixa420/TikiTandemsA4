// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Friends/EIK_RejectFriendInvite_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_RejectFriendInvite_AsyncFunction;
struct FEIKUniqueNetId;
#ifdef ONLINESUBSYSTEMEIK_EIK_RejectFriendInvite_AsyncFunction_generated_h
#error "EIK_RejectFriendInvite_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_RejectFriendInvite_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_RejectFriendInvite_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnRejectFriendInviteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRejectFriendInviteComplete, const FString& Error);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRejectFriendInvite);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_RejectFriendInvite_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_RejectFriendInvite_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_RejectFriendInvite_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_RejectFriendInvite_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_RejectFriendInvite_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_RejectFriendInvite_AsyncFunction(UEIK_RejectFriendInvite_AsyncFunction&&); \
	UEIK_RejectFriendInvite_AsyncFunction(const UEIK_RejectFriendInvite_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_RejectFriendInvite_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_RejectFriendInvite_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_RejectFriendInvite_AsyncFunction) \
	NO_API virtual ~UEIK_RejectFriendInvite_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_11_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_RejectFriendInvite_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_RejectFriendInvite_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

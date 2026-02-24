// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_AcceptFriendInvite_AsyncFunction;
struct FEIKUniqueNetId;
#ifdef ONLINESUBSYSTEMEIK_EIK_AcceptFriendInvite_AsyncFunction_generated_h
#error "EIK_AcceptFriendInvite_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_AcceptFriendInvite_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_AcceptFriendInvite_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnAcceptFriendInviteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAcceptFriendInviteComplete, const FString& Error);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcceptFriendInvite);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_AcceptFriendInvite_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_AcceptFriendInvite_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_AcceptFriendInvite_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_AcceptFriendInvite_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_AcceptFriendInvite_AsyncFunction(UEIK_AcceptFriendInvite_AsyncFunction&&); \
	UEIK_AcceptFriendInvite_AsyncFunction(const UEIK_AcceptFriendInvite_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_AcceptFriendInvite_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_AcceptFriendInvite_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_AcceptFriendInvite_AsyncFunction) \
	NO_API virtual ~UEIK_AcceptFriendInvite_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_11_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_AcceptFriendInvite_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

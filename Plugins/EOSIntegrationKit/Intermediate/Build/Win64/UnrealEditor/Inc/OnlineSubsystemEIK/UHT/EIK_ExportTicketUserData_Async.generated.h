// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_ExportTicketUserData_Async;
struct FConversationData;
#ifdef ONLINESUBSYSTEMEIK_EIK_ExportTicketUserData_Async_generated_h
#error "EIK_ExportTicketUserData_Async.generated.h already included, missing '#pragma once' in EIK_ExportTicketUserData_Async.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_ExportTicketUserData_Async_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessageData_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FMessageData>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationData_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FConversationData>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_63_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnTicketExportComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTicketExportComplete, const FString& ResponseStr, TArray<FConversationData> const& Conversations, int32 const& HTTP_ResponseCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportEIKTicketDataAsyncFunction);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_ExportTicketUserData_Async(); \
	friend struct Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics; \
public: \
	DECLARE_CLASS(UEIK_ExportTicketUserData_Async, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_ExportTicketUserData_Async)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_ExportTicketUserData_Async(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_ExportTicketUserData_Async(UEIK_ExportTicketUserData_Async&&); \
	UEIK_ExportTicketUserData_Async(const UEIK_ExportTicketUserData_Async&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_ExportTicketUserData_Async); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_ExportTicketUserData_Async); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_ExportTicketUserData_Async) \
	NO_API virtual ~UEIK_ExportTicketUserData_Async();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_65_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_ExportTicketUserData_Async>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

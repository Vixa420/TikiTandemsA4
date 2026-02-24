// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_SendSupportTicket_Async;
struct FSupportTicketData;
struct FSupportTicketResponseData;
#ifdef ONLINESUBSYSTEMEIK_EIK_SendSupportTicket_Async_generated_h
#error "EIK_SendSupportTicket_Async.generated.h already included, missing '#pragma once' in EIK_SendSupportTicket_Async.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_SendSupportTicket_Async_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportTicketData_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FSupportTicketData>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FSupportTicketResponseData>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_100_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnTicketRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTicketRequestComplete, const FString& ResponseStr, FSupportTicketResponseData const& ResponseData, int32 const& HTTP_ResponseCode);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendEIKTicketRequestAsyncFunction);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_SendSupportTicket_Async(); \
	friend struct Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics; \
public: \
	DECLARE_CLASS(UEIK_SendSupportTicket_Async, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_SendSupportTicket_Async)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_SendSupportTicket_Async(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_SendSupportTicket_Async(UEIK_SendSupportTicket_Async&&); \
	UEIK_SendSupportTicket_Async(const UEIK_SendSupportTicket_Async&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_SendSupportTicket_Async); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_SendSupportTicket_Async); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_SendSupportTicket_Async) \
	NO_API virtual ~UEIK_SendSupportTicket_Async();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_102_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_SendSupportTicket_Async>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h


#define FOREACH_ENUM_ESUPPORTTICKETSUBJECT(op) \
	op(ESupportTicketSubject::ST_open_question) \
	op(ESupportTicketSubject::ST_technical_support) \
	op(ESupportTicketSubject::ST_ban_appeal) 

enum class ESupportTicketSubject : uint8;
template<> struct TIsUEnumClass<ESupportTicketSubject> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ESupportTicketSubject>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

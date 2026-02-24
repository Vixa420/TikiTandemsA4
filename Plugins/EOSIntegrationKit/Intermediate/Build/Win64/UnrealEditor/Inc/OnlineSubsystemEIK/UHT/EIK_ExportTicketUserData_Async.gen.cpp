// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_ExportTicketUserData_Async() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ExportTicketUserData_Async();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ExportTicketUserData_Async_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FConversationData();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FMessageData();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FMessageData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageData;
class UScriptStruct* FMessageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("MessageData"));
	}
	return Z_Registration_Info_UScriptStruct_MessageData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FMessageData>()
{
	return FMessageData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMessageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[] = {
		{ "Category", "Message Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Message Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "Category", "Message Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderEmail_MetaData[] = {
		{ "Category", "Message Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "Message Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TicketId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderEmail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageData, TicketId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicketId_MetaData), NewProp_TicketId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageData, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageData, SenderEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderEmail_MetaData), NewProp_SenderEmail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageData, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_TicketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_SenderEmail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"MessageData",
	Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers),
	sizeof(FMessageData),
	alignof(FMessageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMessageData()
{
	if (!Z_Registration_Info_UScriptStruct_MessageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageData.InnerSingleton, Z_Construct_UScriptStruct_FMessageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MessageData.InnerSingleton;
}
// End ScriptStruct FMessageData

// Begin ScriptStruct FConversationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationData;
class UScriptStruct* FConversationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ConversationData"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FConversationData>()
{
	return FConversationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConversationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderEmail_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "Category", "Conversation Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderEmail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, Subject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, SenderEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderEmail_MetaData), NewProp_SenderEmail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMessageData, METADATA_PARAMS(0, nullptr) }; // 3499982859
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConversationData, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 3499982859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_SenderEmail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationData_Statics::NewProp_Messages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"ConversationData",
	Z_Construct_UScriptStruct_FConversationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationData_Statics::PropPointers),
	sizeof(FConversationData),
	alignof(FConversationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConversationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConversationData()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationData.InnerSingleton, Z_Construct_UScriptStruct_FConversationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConversationData.InnerSingleton;
}
// End ScriptStruct FConversationData

// Begin Delegate FOnTicketExportComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms
	{
		FString ResponseStr;
		TArray<FConversationData> Conversations;
		int32 HTTP_ResponseCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conversations_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HTTP_ResponseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseStr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Conversations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conversations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HTTP_ResponseCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_ResponseStr = { "ResponseStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms, ResponseStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseStr_MetaData), NewProp_ResponseStr_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_Conversations_Inner = { "Conversations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConversationData, METADATA_PARAMS(0, nullptr) }; // 2705770203
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_Conversations = { "Conversations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms, Conversations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conversations_MetaData), NewProp_Conversations_MetaData) }; // 2705770203
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_HTTP_ResponseCode = { "HTTP_ResponseCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms, HTTP_ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HTTP_ResponseCode_MetaData), NewProp_HTTP_ResponseCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_ResponseStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_Conversations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_Conversations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::NewProp_HTTP_ResponseCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnTicketExportComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTicketExportComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTicketExportComplete, const FString& ResponseStr, TArray<FConversationData> const& Conversations, int32 const& HTTP_ResponseCode)
{
	struct _Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms
	{
		FString ResponseStr;
		TArray<FConversationData> Conversations;
		int32 HTTP_ResponseCode;
	};
	_Script_OnlineSubsystemEIK_eventOnTicketExportComplete_Parms Parms;
	Parms.ResponseStr=ResponseStr;
	Parms.Conversations=Conversations;
	Parms.HTTP_ResponseCode=HTTP_ResponseCode;
	OnTicketExportComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTicketExportComplete

// Begin Class UEIK_ExportTicketUserData_Async Function ExportEIKTicketDataAsyncFunction
struct Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics
{
	struct EIK_ExportTicketUserData_Async_eventExportEIKTicketDataAsyncFunction_Parms
	{
		FString Email;
		UEIK_ExportTicketUserData_Async* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit | Support Tickets" },
		{ "DisplayName", "Export EIK Support Ticket Data" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ExportTicketUserData_Async_eventExportEIKTicketDataAsyncFunction_Parms, Email), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ExportTicketUserData_Async_eventExportEIKTicketDataAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UEIK_ExportTicketUserData_Async_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ExportTicketUserData_Async, nullptr, "ExportEIKTicketDataAsyncFunction", nullptr, nullptr, Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::EIK_ExportTicketUserData_Async_eventExportEIKTicketDataAsyncFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::EIK_ExportTicketUserData_Async_eventExportEIKTicketDataAsyncFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ExportTicketUserData_Async::execExportEIKTicketDataAsyncFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_ExportTicketUserData_Async**)Z_Param__Result=UEIK_ExportTicketUserData_Async::ExportEIKTicketDataAsyncFunction(Z_Param_Email);
	P_NATIVE_END;
}
// End Class UEIK_ExportTicketUserData_Async Function ExportEIKTicketDataAsyncFunction

// Begin Class UEIK_ExportTicketUserData_Async
void UEIK_ExportTicketUserData_Async::StaticRegisterNativesUEIK_ExportTicketUserData_Async()
{
	UClass* Class = UEIK_ExportTicketUserData_Async::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportEIKTicketDataAsyncFunction", &UEIK_ExportTicketUserData_Async::execExportEIKTicketDataAsyncFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_ExportTicketUserData_Async);
UClass* Z_Construct_UClass_UEIK_ExportTicketUserData_Async_NoRegister()
{
	return UEIK_ExportTicketUserData_Async::StaticClass();
}
struct Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_ExportTicketUserData_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_ExportTicketUserData_Async_ExportEIKTicketDataAsyncFunction, "ExportEIKTicketDataAsyncFunction" }, // 384532648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_ExportTicketUserData_Async>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_ExportTicketUserData_Async, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2825680451
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_ExportTicketUserData_Async, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketExportComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 2825680451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::ClassParams = {
	&UEIK_ExportTicketUserData_Async::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_ExportTicketUserData_Async()
{
	if (!Z_Registration_Info_UClass_UEIK_ExportTicketUserData_Async.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_ExportTicketUserData_Async.OuterSingleton, Z_Construct_UClass_UEIK_ExportTicketUserData_Async_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_ExportTicketUserData_Async.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_ExportTicketUserData_Async>()
{
	return UEIK_ExportTicketUserData_Async::StaticClass();
}
UEIK_ExportTicketUserData_Async::UEIK_ExportTicketUserData_Async(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_ExportTicketUserData_Async);
UEIK_ExportTicketUserData_Async::~UEIK_ExportTicketUserData_Async() {}
// End Class UEIK_ExportTicketUserData_Async

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMessageData::StaticStruct, Z_Construct_UScriptStruct_FMessageData_Statics::NewStructOps, TEXT("MessageData"), &Z_Registration_Info_UScriptStruct_MessageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageData), 3499982859U) },
		{ FConversationData::StaticStruct, Z_Construct_UScriptStruct_FConversationData_Statics::NewStructOps, TEXT("ConversationData"), &Z_Registration_Info_UScriptStruct_ConversationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationData), 2705770203U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_ExportTicketUserData_Async, UEIK_ExportTicketUserData_Async::StaticClass, TEXT("UEIK_ExportTicketUserData_Async"), &Z_Registration_Info_UClass_UEIK_ExportTicketUserData_Async, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_ExportTicketUserData_Async), 443407596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_3924848849(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_ExportTicketUserData_Async_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

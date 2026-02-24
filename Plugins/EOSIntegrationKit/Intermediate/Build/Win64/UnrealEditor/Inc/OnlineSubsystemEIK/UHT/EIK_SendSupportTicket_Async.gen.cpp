// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SendSupportTicket_Async() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SendSupportTicket_Async();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SendSupportTicket_Async_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSupportTicketData();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSupportTicketResponseData();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum ESupportTicketSubject
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESupportTicketSubject;
static UEnum* ESupportTicketSubject_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESupportTicketSubject.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESupportTicketSubject.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ESupportTicketSubject"));
	}
	return Z_Registration_Info_UEnum_ESupportTicketSubject.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ESupportTicketSubject>()
{
	return ESupportTicketSubject_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
		{ "ST_ban_appeal.DisplayName", "Ban Appeal" },
		{ "ST_ban_appeal.Name", "ESupportTicketSubject::ST_ban_appeal" },
		{ "ST_open_question.DisplayName", "Open Question" },
		{ "ST_open_question.Name", "ESupportTicketSubject::ST_open_question" },
		{ "ST_technical_support.DisplayName", "Technical Support" },
		{ "ST_technical_support.Name", "ESupportTicketSubject::ST_technical_support" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESupportTicketSubject::ST_open_question", (int64)ESupportTicketSubject::ST_open_question },
		{ "ESupportTicketSubject::ST_technical_support", (int64)ESupportTicketSubject::ST_technical_support },
		{ "ESupportTicketSubject::ST_ban_appeal", (int64)ESupportTicketSubject::ST_ban_appeal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"ESupportTicketSubject",
	"ESupportTicketSubject",
	Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject()
{
	if (!Z_Registration_Info_UEnum_ESupportTicketSubject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESupportTicketSubject.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESupportTicketSubject.InnerSingleton;
}
// End Enum ESupportTicketSubject

// Begin ScriptStruct FSupportTicketData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportTicketData;
class UScriptStruct* FSupportTicketData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportTicketData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportTicketData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportTicketData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("SupportTicketData"));
	}
	return Z_Registration_Info_UScriptStruct_SupportTicketData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FSupportTicketData>()
{
	return FSupportTicketData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSupportTicketData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subject of the support ticket. This is a required field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message or description for the support ticket. This is a required field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderEmail_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Email address of the sender. This is a required field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the sender." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique identifier for the end-user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Error code for technical support emails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemOS_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Operating system of the end-user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemAntiMalware_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anti-malware system of the end-user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemOther_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other information about the end-user's system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Subject_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderEmail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemOS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemAntiMalware;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemOther;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportTicketData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Subject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, Subject), Z_Construct_UEnum_OnlineSubsystemEIK_ESupportTicketSubject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) }; // 83177728
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, SenderEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderEmail_MetaData), NewProp_SenderEmail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemOS = { "SystemOS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, SystemOS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemOS_MetaData), NewProp_SystemOS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemAntiMalware = { "SystemAntiMalware", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, SystemAntiMalware), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemAntiMalware_MetaData), NewProp_SystemAntiMalware_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemOther = { "SystemOther", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketData, SystemOther), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemOther_MetaData), NewProp_SystemOther_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportTicketData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Subject_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SenderEmail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemAntiMalware,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewProp_SystemOther,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportTicketData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"SupportTicketData",
	Z_Construct_UScriptStruct_FSupportTicketData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketData_Statics::PropPointers),
	sizeof(FSupportTicketData),
	alignof(FSupportTicketData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSupportTicketData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSupportTicketData()
{
	if (!Z_Registration_Info_UScriptStruct_SupportTicketData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportTicketData.InnerSingleton, Z_Construct_UScriptStruct_FSupportTicketData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SupportTicketData.InnerSingleton;
}
// End ScriptStruct FSupportTicketData

// Begin ScriptStruct FSupportTicketResponseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportTicketResponseData;
class UScriptStruct* FSupportTicketResponseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportTicketResponseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportTicketResponseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportTicketResponseData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("SupportTicketResponseData"));
	}
	return Z_Registration_Info_UScriptStruct_SupportTicketResponseData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FSupportTicketResponseData>()
{
	return FSupportTicketResponseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_prod_name_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_prod_slug_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sender_name_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sender_email_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_subject_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_error_code_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_system_os_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_system_antimalware_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_system_other_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_prod_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_prod_slug;
	static const UECodeGen_Private::FStrPropertyParams NewProp_guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sender_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sender_email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_subject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_error_code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_system_os;
	static const UECodeGen_Private::FStrPropertyParams NewProp_system_antimalware;
	static const UECodeGen_Private::FStrPropertyParams NewProp_system_other;
	static const UECodeGen_Private::FStrPropertyParams NewProp_timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportTicketResponseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_prod_name = { "prod_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, prod_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_prod_name_MetaData), NewProp_prod_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_prod_slug = { "prod_slug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, prod_slug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_prod_slug_MetaData), NewProp_prod_slug_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, guid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_guid_MetaData), NewProp_guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_sender_name = { "sender_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, sender_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sender_name_MetaData), NewProp_sender_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_sender_email = { "sender_email", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, sender_email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sender_email_MetaData), NewProp_sender_email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, subject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_subject_MetaData), NewProp_subject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_message_MetaData), NewProp_message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_error_code = { "error_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, error_code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_error_code_MetaData), NewProp_error_code_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_os = { "system_os", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, system_os), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_system_os_MetaData), NewProp_system_os_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_antimalware = { "system_antimalware", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, system_antimalware), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_system_antimalware_MetaData), NewProp_system_antimalware_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_other = { "system_other", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, system_other), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_system_other_MetaData), NewProp_system_other_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportTicketResponseData, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timestamp_MetaData), NewProp_timestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_prod_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_prod_slug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_sender_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_sender_email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_error_code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_os,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_antimalware,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_system_other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewProp_timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"SupportTicketResponseData",
	Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::PropPointers),
	sizeof(FSupportTicketResponseData),
	alignof(FSupportTicketResponseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSupportTicketResponseData()
{
	if (!Z_Registration_Info_UScriptStruct_SupportTicketResponseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportTicketResponseData.InnerSingleton, Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SupportTicketResponseData.InnerSingleton;
}
// End ScriptStruct FSupportTicketResponseData

// Begin Delegate FOnTicketRequestComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms
	{
		FString ResponseStr;
		FSupportTicketResponseData ResponseData;
		int32 HTTP_ResponseCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HTTP_ResponseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseStr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HTTP_ResponseCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_ResponseStr = { "ResponseStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms, ResponseStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseStr_MetaData), NewProp_ResponseStr_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_ResponseData = { "ResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms, ResponseData), Z_Construct_UScriptStruct_FSupportTicketResponseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseData_MetaData), NewProp_ResponseData_MetaData) }; // 1921242324
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_HTTP_ResponseCode = { "HTTP_ResponseCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms, HTTP_ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HTTP_ResponseCode_MetaData), NewProp_HTTP_ResponseCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_ResponseStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_ResponseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::NewProp_HTTP_ResponseCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnTicketRequestComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTicketRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTicketRequestComplete, const FString& ResponseStr, FSupportTicketResponseData const& ResponseData, int32 const& HTTP_ResponseCode)
{
	struct _Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms
	{
		FString ResponseStr;
		FSupportTicketResponseData ResponseData;
		int32 HTTP_ResponseCode;
	};
	_Script_OnlineSubsystemEIK_eventOnTicketRequestComplete_Parms Parms;
	Parms.ResponseStr=ResponseStr;
	Parms.ResponseData=ResponseData;
	Parms.HTTP_ResponseCode=HTTP_ResponseCode;
	OnTicketRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTicketRequestComplete

// Begin Class UEIK_SendSupportTicket_Async Function SendEIKTicketRequestAsyncFunction
struct Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics
{
	struct EIK_SendSupportTicket_Async_eventSendEIKTicketRequestAsyncFunction_Parms
	{
		FSupportTicketData TicketData;
		UEIK_SendSupportTicket_Async* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit | Support Tickets" },
		{ "DisplayName", "Send EIK Support Ticket Request" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicketData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::NewProp_TicketData = { "TicketData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendSupportTicket_Async_eventSendEIKTicketRequestAsyncFunction_Parms, TicketData), Z_Construct_UScriptStruct_FSupportTicketData, METADATA_PARAMS(0, nullptr) }; // 911955401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendSupportTicket_Async_eventSendEIKTicketRequestAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UEIK_SendSupportTicket_Async_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::NewProp_TicketData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SendSupportTicket_Async, nullptr, "SendEIKTicketRequestAsyncFunction", nullptr, nullptr, Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::EIK_SendSupportTicket_Async_eventSendEIKTicketRequestAsyncFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::EIK_SendSupportTicket_Async_eventSendEIKTicketRequestAsyncFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SendSupportTicket_Async::execSendEIKTicketRequestAsyncFunction)
{
	P_GET_STRUCT(FSupportTicketData,Z_Param_TicketData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SendSupportTicket_Async**)Z_Param__Result=UEIK_SendSupportTicket_Async::SendEIKTicketRequestAsyncFunction(Z_Param_TicketData);
	P_NATIVE_END;
}
// End Class UEIK_SendSupportTicket_Async Function SendEIKTicketRequestAsyncFunction

// Begin Class UEIK_SendSupportTicket_Async
void UEIK_SendSupportTicket_Async::StaticRegisterNativesUEIK_SendSupportTicket_Async()
{
	UClass* Class = UEIK_SendSupportTicket_Async::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendEIKTicketRequestAsyncFunction", &UEIK_SendSupportTicket_Async::execSendEIKTicketRequestAsyncFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SendSupportTicket_Async);
UClass* Z_Construct_UClass_UEIK_SendSupportTicket_Async_NoRegister()
{
	return UEIK_SendSupportTicket_Async::StaticClass();
}
struct Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit || Support Tickets" },
		{ "ModuleRelativePath", "AsyncFunctions/SupportTickets/EIK_SendSupportTicket_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SendSupportTicket_Async_SendEIKTicketRequestAsyncFunction, "SendEIKTicketRequestAsyncFunction" }, // 3063271329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SendSupportTicket_Async>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SendSupportTicket_Async, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 682811269
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SendSupportTicket_Async, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnTicketRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 682811269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::ClassParams = {
	&UEIK_SendSupportTicket_Async::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SendSupportTicket_Async()
{
	if (!Z_Registration_Info_UClass_UEIK_SendSupportTicket_Async.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SendSupportTicket_Async.OuterSingleton, Z_Construct_UClass_UEIK_SendSupportTicket_Async_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SendSupportTicket_Async.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SendSupportTicket_Async>()
{
	return UEIK_SendSupportTicket_Async::StaticClass();
}
UEIK_SendSupportTicket_Async::UEIK_SendSupportTicket_Async(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SendSupportTicket_Async);
UEIK_SendSupportTicket_Async::~UEIK_SendSupportTicket_Async() {}
// End Class UEIK_SendSupportTicket_Async

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESupportTicketSubject_StaticEnum, TEXT("ESupportTicketSubject"), &Z_Registration_Info_UEnum_ESupportTicketSubject, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 83177728U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSupportTicketData::StaticStruct, Z_Construct_UScriptStruct_FSupportTicketData_Statics::NewStructOps, TEXT("SupportTicketData"), &Z_Registration_Info_UScriptStruct_SupportTicketData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportTicketData), 911955401U) },
		{ FSupportTicketResponseData::StaticStruct, Z_Construct_UScriptStruct_FSupportTicketResponseData_Statics::NewStructOps, TEXT("SupportTicketResponseData"), &Z_Registration_Info_UScriptStruct_SupportTicketResponseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportTicketResponseData), 1921242324U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SendSupportTicket_Async, UEIK_SendSupportTicket_Async::StaticClass, TEXT("UEIK_SendSupportTicket_Async"), &Z_Registration_Info_UClass_UEIK_SendSupportTicket_Async, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SendSupportTicket_Async), 1453381460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_841169405(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_SupportTickets_EIK_SendSupportTicket_Async_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

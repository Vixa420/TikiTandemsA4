// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PresenceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PresenceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PresenceSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Presence_EStatus();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HPresenceModification();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Presence_DataRecord();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Presence_Info();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_PresenceModification_DataRecordId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UI_EventId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Presence_JoinGameAcceptedCallbackInfo
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms
	{
		FString JoinInfo;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FEIK_UI_EventId UiEventId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_JoinInfo = { "JoinInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms, JoinInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInfo_MetaData), NewProp_JoinInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiEventId_MetaData), NewProp_UiEventId_MetaData) }; // 272776284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_JoinInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::NewProp_UiEventId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Presence_JoinGameAcceptedCallbackInfo_DelegateWrapper(const FScriptDelegate& EIK_Presence_JoinGameAcceptedCallbackInfo, const FString& JoinInfo, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, FEIK_UI_EventId const& UiEventId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms
	{
		FString JoinInfo;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FEIK_UI_EventId UiEventId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Presence_JoinGameAcceptedCallbackInfo_Parms Parms;
	Parms.JoinInfo=JoinInfo;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.UiEventId=UiEventId;
	EIK_Presence_JoinGameAcceptedCallbackInfo.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Presence_JoinGameAcceptedCallbackInfo

// Begin Delegate FEIK_Presence_OnPresenceChangedCallbackInfo
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId PresenceUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::NewProp_PresenceUserId = { "PresenceUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms, PresenceUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceUserId_MetaData), NewProp_PresenceUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::NewProp_PresenceUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Presence_OnPresenceChangedCallbackInfo_DelegateWrapper(const FScriptDelegate& EIK_Presence_OnPresenceChangedCallbackInfo, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& PresenceUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId PresenceUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Presence_OnPresenceChangedCallbackInfo_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.PresenceUserId=PresenceUserId;
	EIK_Presence_OnPresenceChangedCallbackInfo.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Presence_OnPresenceChangedCallbackInfo

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_AddNotifyJoinGameAccepted
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyJoinGameAccepted_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a user accepts a join game option via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Presence_AddNotifyJoinGameAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a user accepts a join game option via the social overlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyJoinGameAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_JoinGameAcceptedCallbackInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3573625951
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyJoinGameAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_AddNotifyJoinGameAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyJoinGameAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyJoinGameAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_AddNotifyJoinGameAccepted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Presence_AddNotifyJoinGameAccepted(FEIK_Presence_JoinGameAcceptedCallbackInfo(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_AddNotifyJoinGameAccepted

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_AddNotifyOnPresenceChanged
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyOnPresenceChanged_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when presence changes.\n" },
#endif
		{ "DisplayName", "EOS_Presence_AddNotifyOnPresenceChanged" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when presence changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyOnPresenceChanged_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_OnPresenceChangedCallbackInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 893318357
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyOnPresenceChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_AddNotifyOnPresenceChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyOnPresenceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::EIK_PresenceSubsystem_eventEIK_Presence_AddNotifyOnPresenceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_AddNotifyOnPresenceChanged)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Presence_AddNotifyOnPresenceChanged(FEIK_Presence_OnPresenceChangedCallbackInfo(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_AddNotifyOnPresenceChanged

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_CopyPresence
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FEIK_Presence_Info OutPresence;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get a user's cached presence object. If successful, this data must be released by calling EOS_Presence_Info_Release\n" },
#endif
		{ "DisplayName", "EOS_Presence_CopyPresence" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a user's cached presence object. If successful, this data must be released by calling EOS_Presence_Info_Release" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPresence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_OutPresence = { "OutPresence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms, OutPresence), Z_Construct_UScriptStruct_FEIK_Presence_Info, METADATA_PARAMS(0, nullptr) }; // 3866298504
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_OutPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_CopyPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::EIK_PresenceSubsystem_eventEIK_Presence_CopyPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_CopyPresence)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetUserId);
	P_GET_STRUCT_REF(FEIK_Presence_Info,Z_Param_Out_OutPresence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Presence_CopyPresence(Z_Param_LocalUserId,Z_Param_TargetUserId,Z_Param_Out_OutPresence);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_CopyPresence

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_CreatePresenceModification
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_HPresenceModification OutPresenceModificationHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a presence modification handle. This handle can used to add multiple changes to your presence that can be applied with EOS_Presence_SetPresence. The resulting handle must be released by calling EOS_PresenceModification_Release once it has been passed to EOS_Presence_SetPresence.\n" },
#endif
		{ "DisplayName", "EOS_Presence_CreatePresenceModification" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a presence modification handle. This handle can used to add multiple changes to your presence that can be applied with EOS_Presence_SetPresence. The resulting handle must be released by calling EOS_PresenceModification_Release once it has been passed to EOS_Presence_SetPresence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPresenceModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_OutPresenceModificationHandle = { "OutPresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms, OutPresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_OutPresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_CreatePresenceModification", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::EIK_PresenceSubsystem_eventEIK_Presence_CreatePresenceModification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_CreatePresenceModification)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_HPresenceModification,Z_Param_Out_OutPresenceModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Presence_CreatePresenceModification(Z_Param_LocalUserId,Z_Param_Out_OutPresenceModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_CreatePresenceModification

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_GetJoinInfo
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FString OutBuffer;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets a join info custom game-data string for a specific user. This is a helper function for reading the presence data related to how a user can be joined. Its meaning is entirely application dependent. This value will be valid only after a QueryPresence call has successfully completed.\n" },
#endif
		{ "DisplayName", "EOS_Presence_GetJoinInfo" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a join info custom game-data string for a specific user. This is a helper function for reading the presence data related to how a user can be joined. Its meaning is entirely application dependent. This value will be valid only after a QueryPresence call has successfully completed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms, OutBuffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_GetJoinInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::EIK_PresenceSubsystem_eventEIK_Presence_GetJoinInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_GetJoinInfo)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetUserId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Presence_GetJoinInfo(Z_Param_LocalUserId,Z_Param_TargetUserId,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_GetJoinInfo

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_HasPresence
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Check if we already have presence for a user\n" },
#endif
		{ "DisplayName", "EOS_Presence_HasPresence" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if we already have presence for a user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
void Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms), &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_HasPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::EIK_PresenceSubsystem_eventEIK_Presence_HasPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_HasPresence)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EIK_Presence_HasPresence(Z_Param_LocalUserId,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_HasPresence

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_Info_Release
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_Info_Release_Parms
	{
		FEIK_Presence_Info PresenceInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Presence_Info structure and its sub-objects. This must be called on data retrieved from EOS_Presence_CopyPresence. This can be safely called on a NULL presence info object.\n" },
#endif
		{ "DisplayName", "EOS_Presence_Info_Release" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Presence_Info structure and its sub-objects. This must be called on data retrieved from EOS_Presence_CopyPresence. This can be safely called on a NULL presence info object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::NewProp_PresenceInfo = { "PresenceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_Info_Release_Parms, PresenceInfo), Z_Construct_UScriptStruct_FEIK_Presence_Info, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceInfo_MetaData), NewProp_PresenceInfo_MetaData) }; // 3866298504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::NewProp_PresenceInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_Info_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::EIK_PresenceSubsystem_eventEIK_Presence_Info_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::EIK_PresenceSubsystem_eventEIK_Presence_Info_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_Info_Release)
{
	P_GET_STRUCT_REF(FEIK_Presence_Info,Z_Param_Out_PresenceInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Presence_Info_Release(Z_Param_Out_PresenceInfo);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_Info_Release

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_RemoveNotifyJoinGameAccepted
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyJoinGameAccepted_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user accepts a join game option via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Presence_RemoveNotifyJoinGameAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a join game option via the social overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyJoinGameAccepted_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_RemoveNotifyJoinGameAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyJoinGameAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyJoinGameAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_RemoveNotifyJoinGameAccepted)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Presence_RemoveNotifyJoinGameAccepted(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_RemoveNotifyJoinGameAccepted

// Begin Class UEIK_PresenceSubsystem Function EIK_Presence_RemoveNotifyOnPresenceChanged
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyOnPresenceChanged_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister a previously bound notification handler from receiving presence update notifications\n" },
#endif
		{ "DisplayName", "EOS_Presence_RemoveNotifyOnPresenceChanged" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister a previously bound notification handler from receiving presence update notifications" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyOnPresenceChanged_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_Presence_RemoveNotifyOnPresenceChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyOnPresenceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::EIK_PresenceSubsystem_eventEIK_Presence_RemoveNotifyOnPresenceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_Presence_RemoveNotifyOnPresenceChanged)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Presence_RemoveNotifyOnPresenceChanged(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_Presence_RemoveNotifyOnPresenceChanged

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_DeleteData
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
		FEIK_PresenceModification_DataRecordId Data;
		int32 Count;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Removes one or more rows of user-defined presence data for a local user. At least one DeleteDataInfo object must be specified.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_DeleteData" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes one or more rows of user-defined presence data for a local user. At least one DeleteDataInfo object must be specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms, Data), Z_Construct_UScriptStruct_FEIK_PresenceModification_DataRecordId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2617205628
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_DeleteData", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_DeleteData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_DeleteData)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_GET_STRUCT_REF(FEIK_PresenceModification_DataRecordId,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PresenceModification_DeleteData(Z_Param_PresenceModificationHandle,Z_Param_Out_Data,Z_Param_Count);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_DeleteData

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_Release
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_Release_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_HPresenceModification handle. This must be called on Handles retrieved from EOS_Presence_CreatePresenceModification. This can be safely called on a NULL presence modification handle. This also may be safely called while a call to SetPresence is still pending.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_Release" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_HPresenceModification handle. This must be called on Handles retrieved from EOS_Presence_CreatePresenceModification. This can be safely called on a NULL presence modification handle. This also may be safely called while a call to SetPresence is still pending." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_Release_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::NewProp_PresenceModificationHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_Release)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_PresenceModification_Release(Z_Param_PresenceModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_Release

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetData
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
		FEIK_Presence_DataRecord Data;
		int32 Count;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Modifies one or more rows of user-defined presence data for a local user. At least one InfoData object must be specified.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_SetData" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies one or more rows of user-defined presence data for a local user. At least one InfoData object must be specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms, Data), Z_Construct_UScriptStruct_FEIK_Presence_DataRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1666512216
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_SetData", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_SetData)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_GET_STRUCT_REF(FEIK_Presence_DataRecord,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PresenceModification_SetData(Z_Param_PresenceModificationHandle,Z_Param_Out_Data,Z_Param_Count);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetData

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetJoinInfo
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
		FString JoinInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets your new join info custom game-data string. This is a helper function for reading the presence data related to how a user can be joined. Its meaning is entirely application dependent.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_SetJoinInfo" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets your new join info custom game-data string. This is a helper function for reading the presence data related to how a user can be joined. Its meaning is entirely application dependent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_JoinInfo = { "JoinInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms, JoinInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInfo_MetaData), NewProp_JoinInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_JoinInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_SetJoinInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetJoinInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_SetJoinInfo)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_JoinInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PresenceModification_SetJoinInfo(Z_Param_PresenceModificationHandle,Z_Param_JoinInfo);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetJoinInfo

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetRawRichText
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
		FString RichText;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Modifies a user's Rich Presence string to a new state. This is the exact value other users will see when they query the local user's presence.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_SetRawRichText" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies a user's Rich Presence string to a new state. This is the exact value other users will see when they query the local user's presence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RichText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_RichText = { "RichText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms, RichText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichText_MetaData), NewProp_RichText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_RichText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_SetRawRichText", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetRawRichText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_SetRawRichText)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_RichText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PresenceModification_SetRawRichText(Z_Param_PresenceModificationHandle,Z_Param_RichText);
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetRawRichText

// Begin Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetStatus
struct Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics
{
	struct EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms
	{
		FEIK_HPresenceModification PresenceModificationHandle;
		TEnumAsByte<EEIK_Presence_EStatus> Status;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Modifies a user's online status to be the new state.\n" },
#endif
		{ "DisplayName", "EOS_PresenceModification_SetStatus" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies a user's online status to be the new state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms, Status), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Presence_EStatus, METADATA_PARAMS(0, nullptr) }; // 2800030752
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PresenceSubsystem, nullptr, "EIK_PresenceModification_SetStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::EIK_PresenceSubsystem_eventEIK_PresenceModification_SetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PresenceSubsystem::execEIK_PresenceModification_SetStatus)
{
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PresenceModification_SetStatus(Z_Param_PresenceModificationHandle,EEIK_Presence_EStatus(Z_Param_Status));
	P_NATIVE_END;
}
// End Class UEIK_PresenceSubsystem Function EIK_PresenceModification_SetStatus

// Begin Class UEIK_PresenceSubsystem
void UEIK_PresenceSubsystem::StaticRegisterNativesUEIK_PresenceSubsystem()
{
	UClass* Class = UEIK_PresenceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Presence_AddNotifyJoinGameAccepted", &UEIK_PresenceSubsystem::execEIK_Presence_AddNotifyJoinGameAccepted },
		{ "EIK_Presence_AddNotifyOnPresenceChanged", &UEIK_PresenceSubsystem::execEIK_Presence_AddNotifyOnPresenceChanged },
		{ "EIK_Presence_CopyPresence", &UEIK_PresenceSubsystem::execEIK_Presence_CopyPresence },
		{ "EIK_Presence_CreatePresenceModification", &UEIK_PresenceSubsystem::execEIK_Presence_CreatePresenceModification },
		{ "EIK_Presence_GetJoinInfo", &UEIK_PresenceSubsystem::execEIK_Presence_GetJoinInfo },
		{ "EIK_Presence_HasPresence", &UEIK_PresenceSubsystem::execEIK_Presence_HasPresence },
		{ "EIK_Presence_Info_Release", &UEIK_PresenceSubsystem::execEIK_Presence_Info_Release },
		{ "EIK_Presence_RemoveNotifyJoinGameAccepted", &UEIK_PresenceSubsystem::execEIK_Presence_RemoveNotifyJoinGameAccepted },
		{ "EIK_Presence_RemoveNotifyOnPresenceChanged", &UEIK_PresenceSubsystem::execEIK_Presence_RemoveNotifyOnPresenceChanged },
		{ "EIK_PresenceModification_DeleteData", &UEIK_PresenceSubsystem::execEIK_PresenceModification_DeleteData },
		{ "EIK_PresenceModification_Release", &UEIK_PresenceSubsystem::execEIK_PresenceModification_Release },
		{ "EIK_PresenceModification_SetData", &UEIK_PresenceSubsystem::execEIK_PresenceModification_SetData },
		{ "EIK_PresenceModification_SetJoinInfo", &UEIK_PresenceSubsystem::execEIK_PresenceModification_SetJoinInfo },
		{ "EIK_PresenceModification_SetRawRichText", &UEIK_PresenceSubsystem::execEIK_PresenceModification_SetRawRichText },
		{ "EIK_PresenceModification_SetStatus", &UEIK_PresenceSubsystem::execEIK_PresenceModification_SetStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PresenceSubsystem);
UClass* Z_Construct_UClass_UEIK_PresenceSubsystem_NoRegister()
{
	return UEIK_PresenceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_PresenceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Presense Interface" },
		{ "IncludePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_PresenceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyJoinGameAccepted, "EIK_Presence_AddNotifyJoinGameAccepted" }, // 1756294539
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_AddNotifyOnPresenceChanged, "EIK_Presence_AddNotifyOnPresenceChanged" }, // 1104511485
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CopyPresence, "EIK_Presence_CopyPresence" }, // 3004226939
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_CreatePresenceModification, "EIK_Presence_CreatePresenceModification" }, // 2036104007
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_GetJoinInfo, "EIK_Presence_GetJoinInfo" }, // 4127812295
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_HasPresence, "EIK_Presence_HasPresence" }, // 1712932290
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_Info_Release, "EIK_Presence_Info_Release" }, // 1859357250
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyJoinGameAccepted, "EIK_Presence_RemoveNotifyJoinGameAccepted" }, // 333156818
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_Presence_RemoveNotifyOnPresenceChanged, "EIK_Presence_RemoveNotifyOnPresenceChanged" }, // 2636403568
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_DeleteData, "EIK_PresenceModification_DeleteData" }, // 3444148537
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_Release, "EIK_PresenceModification_Release" }, // 2790109283
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetData, "EIK_PresenceModification_SetData" }, // 436963723
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetJoinInfo, "EIK_PresenceModification_SetJoinInfo" }, // 3575160638
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetRawRichText, "EIK_PresenceModification_SetRawRichText" }, // 1550775632
		{ &Z_Construct_UFunction_UEIK_PresenceSubsystem_EIK_PresenceModification_SetStatus, "EIK_PresenceModification_SetStatus" }, // 213590301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PresenceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::ClassParams = {
	&UEIK_PresenceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PresenceSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_PresenceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PresenceSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_PresenceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PresenceSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PresenceSubsystem>()
{
	return UEIK_PresenceSubsystem::StaticClass();
}
UEIK_PresenceSubsystem::UEIK_PresenceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PresenceSubsystem);
UEIK_PresenceSubsystem::~UEIK_PresenceSubsystem() {}
// End Class UEIK_PresenceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PresenceSubsystem, UEIK_PresenceSubsystem::StaticClass, TEXT("UEIK_PresenceSubsystem"), &Z_Registration_Info_UClass_UEIK_PresenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PresenceSubsystem), 1131040336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_1655845135(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_PresenceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

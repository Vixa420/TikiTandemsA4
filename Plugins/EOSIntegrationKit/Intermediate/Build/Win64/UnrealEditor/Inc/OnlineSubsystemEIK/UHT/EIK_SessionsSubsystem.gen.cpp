// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SessionsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SessionsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SessionsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EOnlineSessionPermissionLevel();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ESessionAttributeAdvertisementType();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ActiveSession_Info();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HActiveSession();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionDetails();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionModification();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionSearch();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_SessionDetails_Attribute();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_SessionDetails_Info();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Sessions_AttributeData();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UI_EventId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Sessions_OnJoinSessionAcceptedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UIEventId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UIEventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::NewProp_UIEventId = { "UIEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms, UIEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIEventId_MetaData), NewProp_UIEventId_MetaData) }; // 272776284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::NewProp_UIEventId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnJoinSessionAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnJoinSessionAcceptedCallback, FEIK_ProductUserId const& LocalUserId, FEIK_UI_EventId const& UIEventId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UIEventId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnJoinSessionAcceptedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.UIEventId=UIEventId;
	EIK_Sessions_OnJoinSessionAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnJoinSessionAcceptedCallback

// Begin Delegate FEIK_Sessions_OnLeaveSessionRequestedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnLeaveSessionRequestedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnLeaveSessionRequestedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionName)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionName;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnLeaveSessionRequestedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.SessionName=SessionName;
	EIK_Sessions_OnLeaveSessionRequestedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnLeaveSessionRequestedCallback

// Begin Delegate FEIK_Sessions_OnSendSessionInviteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UIEventId;
		FString TargetNativeAccountType;
		FString TargetUserNativeAccountId;
		FString SessionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNativeAccountType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserNativeAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UIEventId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNativeAccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUserNativeAccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_UIEventId = { "UIEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms, UIEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIEventId_MetaData), NewProp_UIEventId_MetaData) }; // 272776284
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_TargetNativeAccountType = { "TargetNativeAccountType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms, TargetNativeAccountType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNativeAccountType_MetaData), NewProp_TargetNativeAccountType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_TargetUserNativeAccountId = { "TargetUserNativeAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms, TargetUserNativeAccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserNativeAccountId_MetaData), NewProp_TargetUserNativeAccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_UIEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_TargetNativeAccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_TargetUserNativeAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::NewProp_SessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnSendSessionInviteCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSendSessionInviteCallback, FEIK_ProductUserId const& LocalUserId, FEIK_UI_EventId const& UIEventId, const FString& TargetNativeAccountType, const FString& TargetUserNativeAccountId, const FString& SessionId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UIEventId;
		FString TargetNativeAccountType;
		FString TargetUserNativeAccountId;
		FString SessionId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSendSessionInviteCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.UIEventId=UIEventId;
	Parms.TargetNativeAccountType=TargetNativeAccountType;
	Parms.TargetUserNativeAccountId=TargetUserNativeAccountId;
	Parms.SessionId=SessionId;
	EIK_Sessions_OnSendSessionInviteCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnSendSessionInviteCallback

// Begin Delegate FEIK_Sessions_OnSessionInviteAcceptedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnSessionInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteAcceptedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionId, FEIK_ProductUserId const& TargetUserId, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteAcceptedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.SessionId=SessionId;
	Parms.TargetUserId=TargetUserId;
	Parms.InviteId=InviteId;
	EIK_Sessions_OnSessionInviteAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnSessionInviteAcceptedCallback

// Begin Delegate FEIK_Sessions_OnSessionInviteReceivedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString InviteId;
		FEIK_ProductUserId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnSessionInviteReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteReceivedCallback, FEIK_ProductUserId const& LocalUserId, const FString& InviteId, FEIK_ProductUserId const& TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString InviteId;
		FEIK_ProductUserId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteReceivedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.InviteId=InviteId;
	Parms.TargetUserId=TargetUserId;
	EIK_Sessions_OnSessionInviteReceivedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnSessionInviteReceivedCallback

// Begin Delegate FEIK_Sessions_OnSessionInviteRejectedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sessions_OnSessionInviteRejectedCallback_DelegateWrapper(const FScriptDelegate& EIK_Sessions_OnSessionInviteRejectedCallback, FEIK_ProductUserId const& LocalUserId, const FString& SessionId, FEIK_ProductUserId const& TargetUserId, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SessionId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sessions_OnSessionInviteRejectedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.SessionId=SessionId;
	Parms.TargetUserId=TargetUserId;
	Parms.InviteId=InviteId;
	EIK_Sessions_OnSessionInviteRejectedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sessions_OnSessionInviteRejectedCallback

// Begin ScriptStruct FEIK_Sessions_CreateSessionModificationOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions;
class UScriptStruct* FEIK_Sessions_CreateSessionModificationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Sessions_CreateSessionModificationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Sessions_CreateSessionModificationOptions>()
{
	return FEIK_Sessions_CreateSessionModificationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Name of the session to create\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the session to create" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BucketId_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bucket ID associated with the session\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bucket ID associated with the session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Maximum number of players allowed in the session\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of players allowed in the session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Product User ID of the local user associated with the session\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Product User ID of the local user associated with the session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPresenceEnabled_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Determines whether or not this session should be the one associated with the local user's presence information. If true, this session will be associated with presence. Only one session at a time can have this flag true. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not this session should be the one associated with the local user's presence information. If true, this session will be associated with presence. Only one session at a time can have this flag true. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Optional session id - set to a globally unique value to override the backend assignment If not specified the backend service will assign one to the session. Do not mix and match. This value can be of size [EOS_SESSIONMODIFICATION_MIN_SESSIONIDOVERRIDE_LENGTH, EOS_SESSIONMODIFICATION_MAX_SESSIONIDOVERRIDE_LENGTH]\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional session id - set to a globally unique value to override the backend assignment If not specified the backend service will assign one to the session. Do not mix and match. This value can be of size [EOS_SESSIONMODIFICATION_MIN_SESSIONIDOVERRIDE_LENGTH, EOS_SESSIONMODIFICATION_MAX_SESSIONIDOVERRIDE_LENGTH]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSanctionsEnabled_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, sanctioned players can neither join nor register with this session and, in the case of join, will return EOS_EResult code EOS_Sessions_PlayerSanctioned\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, sanctioned players can neither join nor register with this session and, in the case of join, will return EOS_EResult code EOS_Sessions_PlayerSanctioned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedPlatformIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of platform IDs indicating the player platforms allowed to register with the session. Platform IDs are found in the EOS header file, e.g. EOS_OPT_Epic. For some platforms, the value will be in the EOS Platform specific header file. If null, the session will be unrestricted.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of platform IDs indicating the player platforms allowed to register with the session. Platform IDs are found in the EOS header file, e.g. EOS_OPT_Epic. For some platforms, the value will be in the EOS Platform specific header file. If null, the session will be unrestricted." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BucketId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_bPresenceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresenceEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static void NewProp_bSanctionsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSanctionsEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllowedPlatformIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedPlatformIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Sessions_CreateSessionModificationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_BucketId = { "BucketId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, BucketId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BucketId_MetaData), NewProp_BucketId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
void Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bPresenceEnabled_SetBit(void* Obj)
{
	((FEIK_Sessions_CreateSessionModificationOptions*)Obj)->bPresenceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bPresenceEnabled = { "bPresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Sessions_CreateSessionModificationOptions), &Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bPresenceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPresenceEnabled_MetaData), NewProp_bPresenceEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bSanctionsEnabled_SetBit(void* Obj)
{
	((FEIK_Sessions_CreateSessionModificationOptions*)Obj)->bSanctionsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bSanctionsEnabled = { "bSanctionsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Sessions_CreateSessionModificationOptions), &Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bSanctionsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSanctionsEnabled_MetaData), NewProp_bSanctionsEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_AllowedPlatformIds_Inner = { "AllowedPlatformIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_AllowedPlatformIds = { "AllowedPlatformIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Sessions_CreateSessionModificationOptions, AllowedPlatformIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedPlatformIds_MetaData), NewProp_AllowedPlatformIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_BucketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bPresenceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_bSanctionsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_AllowedPlatformIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewProp_AllowedPlatformIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Sessions_CreateSessionModificationOptions",
	Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::PropPointers),
	sizeof(FEIK_Sessions_CreateSessionModificationOptions),
	alignof(FEIK_Sessions_CreateSessionModificationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Sessions_CreateSessionModificationOptions

// Begin Class UEIK_SessionsSubsystem Function EIK_ActiveSession_CopyInfo
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms
	{
		FEIK_HActiveSession Handle;
		FEIK_ActiveSession_Info OutActiveSessionInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_ActiveSession_CopyInfo is used to immediately retrieve a copy of active session information If the call returns an EOS_Success result, the out parameter, OutActiveSessionInfo, must be passed to EOS_ActiveSession_Info_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_ActiveSession_CopyInfo" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_ActiveSession_CopyInfo is used to immediately retrieve a copy of active session information If the call returns an EOS_Success result, the out parameter, OutActiveSessionInfo, must be passed to EOS_ActiveSession_Info_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutActiveSessionInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HActiveSession, METADATA_PARAMS(0, nullptr) }; // 1300324408
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_OutActiveSessionInfo = { "OutActiveSessionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms, OutActiveSessionInfo), Z_Construct_UScriptStruct_FEIK_ActiveSession_Info, METADATA_PARAMS(0, nullptr) }; // 1368132278
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_OutActiveSessionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_ActiveSession_CopyInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_CopyInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_ActiveSession_CopyInfo)
{
	P_GET_STRUCT(FEIK_HActiveSession,Z_Param_Handle);
	P_GET_STRUCT_REF(FEIK_ActiveSession_Info,Z_Param_Out_OutActiveSessionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_ActiveSession_CopyInfo(Z_Param_Handle,Z_Param_Out_OutActiveSessionInfo);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_ActiveSession_CopyInfo

// Begin Class UEIK_SessionsSubsystem Function EIK_ActiveSession_GetRegisteredPlayerByIndex
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms
	{
		FEIK_HActiveSession Handle;
		int32 PlayerIndex;
		FEIK_ProductUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_ActiveSession_GetRegisteredPlayerByIndex is used to immediately retrieve individual players registered with the active session.\n" },
#endif
		{ "DisplayName", "EOS_ActiveSession_GetRegisteredPlayerByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_ActiveSession_GetRegisteredPlayerByIndex is used to immediately retrieve individual players registered with the active session." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HActiveSession, METADATA_PARAMS(0, nullptr) }; // 1300324408
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_ActiveSession_GetRegisteredPlayerByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_GetRegisteredPlayerByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_ActiveSession_GetRegisteredPlayerByIndex)
{
	P_GET_STRUCT(FEIK_HActiveSession,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_ProductUserId*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_ActiveSession_GetRegisteredPlayerByIndex(Z_Param_Handle,Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_ActiveSession_GetRegisteredPlayerByIndex

// Begin Class UEIK_SessionsSubsystem Function EIK_ActiveSession_Release
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_ActiveSession_Release_Parms
	{
		FEIK_HActiveSession Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an active session. This must be called on data retrieved from EOS_Sessions_CopyActiveSessionHandle\n" },
#endif
		{ "DisplayName", "EOS_ActiveSession_Release" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an active session. This must be called on data retrieved from EOS_Sessions_CopyActiveSessionHandle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_ActiveSession_Release_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HActiveSession, METADATA_PARAMS(0, nullptr) }; // 1300324408
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_ActiveSession_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::EIK_SessionsSubsystem_eventEIK_ActiveSession_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_ActiveSession_Release)
{
	P_GET_STRUCT(FEIK_HActiveSession,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_ActiveSession_Release(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_ActiveSession_Release

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopyInfo
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms
	{
		FEIK_HSessionDetails Handle;
		FEIK_SessionDetails_Info OutSessionInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_SessionDetails_CopyInfo is used to immediately retrieve a copy of session information from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionInfo, must be passed to EOS_SessionDetails_Info_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_SessionDetails_CopyInfo" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_SessionDetails_CopyInfo is used to immediately retrieve a copy of session information from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionInfo, must be passed to EOS_SessionDetails_Info_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_OutSessionInfo = { "OutSessionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms, OutSessionInfo), Z_Construct_UScriptStruct_FEIK_SessionDetails_Info, METADATA_PARAMS(0, nullptr) }; // 3846010184
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_OutSessionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionDetails_CopyInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopyInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionDetails_CopyInfo)
{
	P_GET_STRUCT(FEIK_HSessionDetails,Z_Param_Handle);
	P_GET_STRUCT_REF(FEIK_SessionDetails_Info,Z_Param_Out_OutSessionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionDetails_CopyInfo(Z_Param_Handle,Z_Param_Out_OutSessionInfo);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopyInfo

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopySessionAttributeByIndex
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms
	{
		FEIK_HSessionDetails Handle;
		int32 AttrIndex;
		FEIK_SessionDetails_Attribute OutSessionAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_SessionDetails_CopySessionAttributeByIndex is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_SessionDetails_CopySessionAttributeByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_SessionDetails_CopySessionAttributeByIndex is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttrIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_AttrIndex = { "AttrIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms, AttrIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_OutSessionAttribute = { "OutSessionAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms, OutSessionAttribute), Z_Construct_UScriptStruct_FEIK_SessionDetails_Attribute, METADATA_PARAMS(0, nullptr) }; // 4022585666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_AttrIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_OutSessionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionDetails_CopySessionAttributeByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionDetails_CopySessionAttributeByIndex)
{
	P_GET_STRUCT(FEIK_HSessionDetails,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_AttrIndex);
	P_GET_STRUCT_REF(FEIK_SessionDetails_Attribute,Z_Param_Out_OutSessionAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionDetails_CopySessionAttributeByIndex(Z_Param_Handle,Z_Param_AttrIndex,Z_Param_Out_OutSessionAttribute);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopySessionAttributeByIndex

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopySessionAttributeByKey
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms
	{
		FEIK_HSessionDetails Handle;
		FString AttrKey;
		FEIK_SessionDetails_Attribute OutSessionAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_SessionDetails_CopySessionAttributeByKey is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_SessionDetails_CopySessionAttributeByKey" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_SessionDetails_CopySessionAttributeByKey is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result. If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttrKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_AttrKey = { "AttrKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms, AttrKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrKey_MetaData), NewProp_AttrKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_OutSessionAttribute = { "OutSessionAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms, OutSessionAttribute), Z_Construct_UScriptStruct_FEIK_SessionDetails_Attribute, METADATA_PARAMS(0, nullptr) }; // 4022585666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_AttrKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_OutSessionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionDetails_CopySessionAttributeByKey", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_CopySessionAttributeByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionDetails_CopySessionAttributeByKey)
{
	P_GET_STRUCT(FEIK_HSessionDetails,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_AttrKey);
	P_GET_STRUCT_REF(FEIK_SessionDetails_Attribute,Z_Param_Out_OutSessionAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionDetails_CopySessionAttributeByKey(Z_Param_Handle,Z_Param_AttrKey,Z_Param_Out_OutSessionAttribute);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionDetails_CopySessionAttributeByKey

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionDetails_GetSessionAttributeCount
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionDetails_GetSessionAttributeCount_Parms
	{
		FEIK_HSessionDetails Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the number of attributes associated with this session\n" },
#endif
		{ "DisplayName", "EOS_SessionDetails_GetSessionAttributeCount" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of attributes associated with this session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_GetSessionAttributeCount_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionDetails_GetSessionAttributeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionDetails_GetSessionAttributeCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_GetSessionAttributeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::EIK_SessionsSubsystem_eventEIK_SessionDetails_GetSessionAttributeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionDetails_GetSessionAttributeCount)
{
	P_GET_STRUCT(FEIK_HSessionDetails,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionDetails_GetSessionAttributeCount(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionDetails_GetSessionAttributeCount

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_AddAttribute
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms
	{
		FEIK_HSessionModification Handle;
		FEIK_Sessions_AttributeData AttrData;
		TEnumAsByte<EIK_ESessionAttributeAdvertisementType> AdvertisementType;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Associate an attribute with this session An attribute is something that may or may not be advertised with the session. If advertised, it can be queried for in a search, otherwise the data remains local to the client\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_AddAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associate an attribute with this session An attribute is something that may or may not be advertised with the session. If advertised, it can be queried for in a search, otherwise the data remains local to the client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttrData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdvertisementType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_AttrData = { "AttrData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms, AttrData), Z_Construct_UScriptStruct_FEIK_Sessions_AttributeData, METADATA_PARAMS(0, nullptr) }; // 973514545
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_AdvertisementType = { "AdvertisementType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms, AdvertisementType), Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ESessionAttributeAdvertisementType, METADATA_PARAMS(0, nullptr) }; // 3678229135
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_AttrData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_AdvertisementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_AddAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_AddAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_AddAttribute)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_STRUCT(FEIK_Sessions_AttributeData,Z_Param_AttrData);
	P_GET_PROPERTY(FByteProperty,Z_Param_AdvertisementType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_AddAttribute(Z_Param_Handle,Z_Param_AttrData,EIK_ESessionAttributeAdvertisementType(Z_Param_AdvertisementType));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_AddAttribute

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_Release
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_Release_Parms
	{
		FEIK_HSessionModification Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with session modification. This must be called on data retrieved from EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_Release" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with session modification. This must be called on data retrieved from EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_Release_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_Release)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_SessionModification_Release(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_Release

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_RemoveAttribute
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms
	{
		FEIK_HSessionModification Handle;
		FString Key;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove an attribute from this session\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_RemoveAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove an attribute from this session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_RemoveAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_RemoveAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_RemoveAttribute)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_RemoveAttribute(Z_Param_Handle,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_RemoveAttribute

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetAllowedPlatformIds
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms
	{
		FEIK_HSessionModification Handle;
		TArray<int32> PlatformIds;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the Allowed Platform IDs for the session.\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetAllowedPlatformIds" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Allowed Platform IDs for the session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformIds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_PlatformIds_Inner = { "PlatformIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_PlatformIds = { "PlatformIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms, PlatformIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformIds_MetaData), NewProp_PlatformIds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_PlatformIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_PlatformIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetAllowedPlatformIds", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetAllowedPlatformIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetAllowedPlatformIds)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_PlatformIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetAllowedPlatformIds(Z_Param_Handle,Z_Param_Out_PlatformIds);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetAllowedPlatformIds

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetBucketId
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms
	{
		FEIK_HSessionModification Handle;
		FString BucketId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the bucket ID associated with this session. Values such as region, game mode, etc can be combined here depending on game need. Setting this is strongly recommended to improve search performance.\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetBucketId" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the bucket ID associated with this session. Values such as region, game mode, etc can be combined here depending on game need. Setting this is strongly recommended to improve search performance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BucketId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BucketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_BucketId = { "BucketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms, BucketId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BucketId_MetaData), NewProp_BucketId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_BucketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetBucketId", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetBucketId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetBucketId)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_BucketId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetBucketId(Z_Param_Handle,Z_Param_BucketId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetBucketId

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetHostAddress
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms
	{
		FEIK_HSessionModification Handle;
		FString HostAddress;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the host address associated with this session Setting this is optional, if the value is not set the SDK will fill the value in from the service. It is useful to set if other addressing mechanisms are desired or if LAN addresses are preferred during development\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetHostAddress" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the host address associated with this session Setting this is optional, if the value is not set the SDK will fill the value in from the service. It is useful to set if other addressing mechanisms are desired or if LAN addresses are preferred during development" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostAddress;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_HostAddress = { "HostAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms, HostAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostAddress_MetaData), NewProp_HostAddress_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_HostAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetHostAddress", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetHostAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetHostAddress)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_HostAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetHostAddress(Z_Param_Handle,Z_Param_HostAddress);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetHostAddress

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetInvitesAllowed
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms
	{
		FEIK_HSessionModification Handle;
		bool bInvitesAllowed;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allows enabling or disabling invites for this session. The session will also need to have bPresenceEnabled true.\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetInvitesAllowed" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows enabling or disabling invites for this session. The session will also need to have bPresenceEnabled true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bInvitesAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvitesAllowed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
void Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_bInvitesAllowed_SetBit(void* Obj)
{
	((EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms*)Obj)->bInvitesAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_bInvitesAllowed = { "bInvitesAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms), &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_bInvitesAllowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_bInvitesAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetInvitesAllowed", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetInvitesAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetInvitesAllowed)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bInvitesAllowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetInvitesAllowed(Z_Param_Handle,Z_Param_bInvitesAllowed);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetInvitesAllowed

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetJoinInProgressAllowed
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms
	{
		FEIK_HSessionModification Handle;
		bool bAllowJoinInProgress;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set whether or not join in progress is allowed Once a session is started, it will no longer be visible to search queries unless this flag is set or the session returns to the pending or ended state\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetJoinInProgressAllowed" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether or not join in progress is allowed Once a session is started, it will no longer be visible to search queries unless this flag is set or the session returns to the pending or ended state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
void Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms), &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetJoinInProgressAllowed", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetJoinInProgressAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetJoinInProgressAllowed)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetJoinInProgressAllowed(Z_Param_Handle,Z_Param_bAllowJoinInProgress);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetJoinInProgressAllowed

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetMaxPlayers
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms
	{
		FEIK_HSessionModification Handle;
		int32 MaxPlayers;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the maximum number of players allowed in this session. When updating the session, it is not possible to reduce this number below the current number of existing players\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetMaxPlayers" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of players allowed in this session. When updating the session, it is not possible to reduce this number below the current number of existing players" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetMaxPlayers", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetMaxPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetMaxPlayers)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetMaxPlayers(Z_Param_Handle,Z_Param_MaxPlayers);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetMaxPlayers

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetPermissionLevel
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms
	{
		FEIK_HSessionModification Handle;
		TEnumAsByte<EEIK_EOnlineSessionPermissionLevel> PermissionLevel;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the session permissions associated with this session. The permissions range from \"public\" to \"invite only\" and are described by EOS_EOnlineSessionPermissionLevel\n" },
#endif
		{ "DisplayName", "EOS_SessionModification_SetPermissionLevel" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the session permissions associated with this session. The permissions range from \"public\" to \"invite only\" and are described by EOS_EOnlineSessionPermissionLevel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PermissionLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_PermissionLevel = { "PermissionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms, PermissionLevel), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EOnlineSessionPermissionLevel, METADATA_PARAMS(0, nullptr) }; // 46452118
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_PermissionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionModification_SetPermissionLevel", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::EIK_SessionsSubsystem_eventEIK_SessionModification_SetPermissionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionModification_SetPermissionLevel)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_Handle);
	P_GET_PROPERTY(FByteProperty,Z_Param_PermissionLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionModification_SetPermissionLevel(Z_Param_Handle,EEIK_EOnlineSessionPermissionLevel(Z_Param_PermissionLevel));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionModification_SetPermissionLevel

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifyJoinSessionAccepted
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyJoinSessionAccepted_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a user accepts a session join game via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifyJoinSessionAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a user accepts a session join game via the social overlay." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyJoinSessionAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnJoinSessionAcceptedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3696430728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyJoinSessionAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifyJoinSessionAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyJoinSessionAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyJoinSessionAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifyJoinSessionAccepted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifyJoinSessionAccepted(FEIK_Sessions_OnJoinSessionAcceptedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifyJoinSessionAccepted

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifyLeaveSessionRequested
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyLeaveSessionRequested_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about leave session requests performed by local user via the overlay. When user requests to leave the session in the social overlay, the SDK does not automatically leave the session, it is up to the game to perform any necessary cleanup and call the EOS_Sessions_DestroySession method using the SessionName sent in the notification function.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifyLeaveSessionRequested" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about leave session requests performed by local user via the overlay. When user requests to leave the session in the social overlay, the SDK does not automatically leave the session, it is up to the game to perform any necessary cleanup and call the EOS_Sessions_DestroySession method using the SessionName sent in the notification function." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyLeaveSessionRequested_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnLeaveSessionRequestedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 443545076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyLeaveSessionRequested_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifyLeaveSessionRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyLeaveSessionRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifyLeaveSessionRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifyLeaveSessionRequested)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifyLeaveSessionRequested(FEIK_Sessions_OnLeaveSessionRequestedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifyLeaveSessionRequested

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySendSessionNativeInviteRequested
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySendSessionNativeInviteRequested_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about a session \"INVITE\" performed by a local user via the overlay. This is only needed when a configured integrated platform has EOS_IPMF_DisableSDKManagedSessions set. The EOS SDK will then use the state of EOS_IPMF_PreferEOSIdentity and EOS_IPMF_PreferIntegratedIdentity to determine when the NotificationFn is called.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifySendSessionNativeInviteRequested" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about a session \"INVITE\" performed by a local user via the overlay. This is only needed when a configured integrated platform has EOS_IPMF_DisableSDKManagedSessions set. The EOS SDK will then use the state of EOS_IPMF_PreferEOSIdentity and EOS_IPMF_PreferIntegratedIdentity to determine when the NotificationFn is called." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySendSessionNativeInviteRequested_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSendSessionInviteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1206409612
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySendSessionNativeInviteRequested_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifySendSessionNativeInviteRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySendSessionNativeInviteRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySendSessionNativeInviteRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySendSessionNativeInviteRequested)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifySendSessionNativeInviteRequested(FEIK_Sessions_OnSendSessionInviteCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySendSessionNativeInviteRequested

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteAccepted
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteAccepted_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a user accepts a session invite via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifySessionInviteAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a user accepts a session invite via the social overlay." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteAcceptedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2314965164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifySessionInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteAccepted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifySessionInviteAccepted(FEIK_Sessions_OnSessionInviteAcceptedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteAccepted

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteReceived
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteReceived_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive session invites.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifySessionInviteReceived" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive session invites." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteReceived_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteReceivedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1035040812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifySessionInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteReceived)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifySessionInviteReceived(FEIK_Sessions_OnSessionInviteReceivedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteReceived

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteRejected
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteRejected_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a user rejects a session invite.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_AddNotifySessionInviteRejected" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a user rejects a session invite." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteRejected_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sessions_OnSessionInviteRejectedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2907443667
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteRejected_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_AddNotifySessionInviteRejected", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteRejected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_AddNotifySessionInviteRejected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteRejected)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Sessions_AddNotifySessionInviteRejected(FEIK_Sessions_OnSessionInviteRejectedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_AddNotifySessionInviteRejected

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CopyActiveSessionHandle
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms
	{
		FString SessionName;
		FEIK_HActiveSession OutActiveSessionHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create a handle to an existing active session.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_CopyActiveSessionHandle" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a handle to an existing active session." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutActiveSessionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_OutActiveSessionHandle = { "OutActiveSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms, OutActiveSessionHandle), Z_Construct_UScriptStruct_FEIK_HActiveSession, METADATA_PARAMS(0, nullptr) }; // 1300324408
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_OutActiveSessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CopyActiveSessionHandle", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopyActiveSessionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CopyActiveSessionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_STRUCT_REF(FEIK_HActiveSession,Z_Param_Out_OutActiveSessionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CopyActiveSessionHandle(Z_Param_SessionName,Z_Param_Out_OutActiveSessionHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CopyActiveSessionHandle

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleByInviteId
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms
	{
		FString InviteId;
		FEIK_HSessionDetails OutSessionHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Sessions_CopySessionHandleByInviteId is used to immediately retrieve a handle to the session information from after notification of an invite If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_CopySessionHandleByInviteId" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Sessions_CopySessionHandleByInviteId is used to immediately retrieve a handle to the session information from after notification of an invite If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms, InviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_OutSessionHandle = { "OutSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms, OutSessionHandle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_OutSessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CopySessionHandleByInviteId", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByInviteId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleByInviteId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InviteId);
	P_GET_STRUCT_REF(FEIK_HSessionDetails,Z_Param_Out_OutSessionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CopySessionHandleByInviteId(Z_Param_InviteId,Z_Param_Out_OutSessionHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleByInviteId

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleByUiEventId
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms
	{
		FEIK_UI_EventId UiEventId;
		FEIK_HSessionDetails OutSessionHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Sessions_CopySessionHandleByUiEventId is used to immediately retrieve a handle to the session information from after notification of a join game event. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_CopySessionHandleByUiEventId" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Sessions_CopySessionHandleByUiEventId is used to immediately retrieve a handle to the session information from after notification of a join game event. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(0, nullptr) }; // 272776284
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_OutSessionHandle = { "OutSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms, OutSessionHandle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_UiEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_OutSessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CopySessionHandleByUiEventId", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleByUiEventId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleByUiEventId)
{
	P_GET_STRUCT(FEIK_UI_EventId,Z_Param_UiEventId);
	P_GET_STRUCT_REF(FEIK_HSessionDetails,Z_Param_Out_OutSessionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CopySessionHandleByUiEventId(Z_Param_UiEventId,Z_Param_Out_OutSessionHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleByUiEventId

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleForPresence
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_HSessionDetails OutSessionHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Sessions_CopySessionHandleForPresence is used to immediately retrieve a handle to the session information which was marked with bPresenceEnabled on create or join. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_CopySessionHandleForPresence" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Sessions_CopySessionHandleForPresence is used to immediately retrieve a handle to the session information which was marked with bPresenceEnabled on create or join. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_OutSessionHandle = { "OutSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms, OutSessionHandle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_OutSessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CopySessionHandleForPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CopySessionHandleForPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleForPresence)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_HSessionDetails,Z_Param_Out_OutSessionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CopySessionHandleForPresence(Z_Param_LocalUserId,Z_Param_Out_OutSessionHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CopySessionHandleForPresence

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CreateSessionModification
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms
	{
		FEIK_Sessions_CreateSessionModificationOptions Options;
		FEIK_HSessionModification OutSessionModificationHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to build a new session and can be applied with EOS_Sessions_UpdateSession The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it no longer needed.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_CreateSessionModification" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to build a new session and can be applied with EOS_Sessions_UpdateSession The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it no longer needed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms, Options), Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions, METADATA_PARAMS(0, nullptr) }; // 3332006105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_OutSessionModificationHandle = { "OutSessionModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms, OutSessionModificationHandle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_OutSessionModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CreateSessionModification", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionModification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CreateSessionModification)
{
	P_GET_STRUCT(FEIK_Sessions_CreateSessionModificationOptions,Z_Param_Options);
	P_GET_STRUCT_REF(FEIK_HSessionModification,Z_Param_Out_OutSessionModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CreateSessionModification(Z_Param_Options,Z_Param_Out_OutSessionModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CreateSessionModification

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_CreateSessionSearch
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms
	{
		int32 MaxSearchResults;
		FEIK_HSessionSearch OutSessionSearchHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*Create a session search handle. This handle may be modified to include various search parameters. Searching is possible in three methods, all mutually exclusive\n\n\x09\x09set the session ID to find a specific session\n\x09\x09set the target user ID to find a specific user\n\x09\x09set session parameters to find an array of sessions that match the search criteria\n\x09 */" },
#endif
		{ "DisplayName", "EOS_Sessions_CreateSessionSearch" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Create a session search handle. This handle may be modified to include various search parameters. Searching is possible in three methods, all mutually exclusive\n\n        set the session ID to find a specific session\n        set the target user ID to find a specific user\n        set session parameters to find an array of sessions that match the search criteria" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionSearchHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_MaxSearchResults = { "MaxSearchResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms, MaxSearchResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_OutSessionSearchHandle = { "OutSessionSearchHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms, OutSessionSearchHandle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_MaxSearchResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_OutSessionSearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_CreateSessionSearch", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_CreateSessionSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_CreateSessionSearch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSearchResults);
	P_GET_STRUCT_REF(FEIK_HSessionSearch,Z_Param_Out_OutSessionSearchHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_CreateSessionSearch(Z_Param_MaxSearchResults,Z_Param_Out_OutSessionSearchHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_CreateSessionSearch

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_DumpSessionState
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_DumpSessionState_Parms
	{
		FString SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dump the contents of active sessions that exist locally to the log output, purely for debug purposes\n" },
#endif
		{ "DisplayName", "EOS_Sessions_DumpSessionState" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dump the contents of active sessions that exist locally to the log output, purely for debug purposes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_DumpSessionState_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_DumpSessionState", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_DumpSessionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_DumpSessionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_DumpSessionState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_DumpSessionState(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_DumpSessionState

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_GetInviteCount
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteCount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the number of known invites for a given user\n" },
#endif
		{ "DisplayName", "EOS_Sessions_GetInviteCount" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of known invites for a given user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_GetInviteCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_GetInviteCount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_GetInviteCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_GetInviteCount

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_GetInviteIdByIndex
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Index;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve an invite ID from a list of active invites for a given user\n" },
#endif
		{ "DisplayName", "EOS_Sessions_GetInviteIdByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve an invite ID from a list of active invites for a given user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_GetInviteIdByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_GetInviteIdByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_GetInviteIdByIndex)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_GetInviteIdByIndex(Z_Param_LocalUserId,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_GetInviteIdByIndex

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_IsUserInSession
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FString SessionName;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Sessions_IsUserInSession returns whether or not a given user can be found in a specified session\n" },
#endif
		{ "DisplayName", "EOS_Sessions_IsUserInSession" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Sessions_IsUserInSession returns whether or not a given user can be found in a specified session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_IsUserInSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_IsUserInSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_IsUserInSession)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_IsUserInSession(Z_Param_TargetUserId,Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_IsUserInSession

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifyJoinSessionAccepted
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyJoinSessionAccepted_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user accepts a session join game via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifyJoinSessionAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a session join game via the social overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyJoinSessionAccepted_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifyJoinSessionAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyJoinSessionAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyJoinSessionAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifyJoinSessionAccepted)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifyJoinSessionAccepted(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifyJoinSessionAccepted

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifyLeaveSessionRequested
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyLeaveSessionRequested_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user performs a leave lobby action via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifyLeaveSessionRequested" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user performs a leave lobby action via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyLeaveSessionRequested_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifyLeaveSessionRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyLeaveSessionRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifyLeaveSessionRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifyLeaveSessionRequested)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifyLeaveSessionRequested(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifyLeaveSessionRequested

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user requests a send invite via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifySendSessionNativeInviteRequested" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user requests a send invite via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteAccepted
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteAccepted_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user accepts a session invite via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifySessionInviteAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a session invite via the social overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteAccepted_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifySessionInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteAccepted)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifySessionInviteAccepted(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteAccepted

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteReceived
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteReceived_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving session invites.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifySessionInviteReceived" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving session invites." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteReceived_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifySessionInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteReceived)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifySessionInviteReceived(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteReceived

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteRejected
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteRejected_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user rejects a session invite via the social overlay.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RemoveNotifySessionInviteRejected" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user rejects a session invite via the social overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteRejected_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_RemoveNotifySessionInviteRejected", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteRejected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_RemoveNotifySessionInviteRejected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteRejected)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_Sessions_RemoveNotifySessionInviteRejected(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_RemoveNotifySessionInviteRejected

// Begin Class UEIK_SessionsSubsystem Function EIK_Sessions_UpdateSessionModification
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms
	{
		FString SessionName;
		FEIK_HSessionModification OutSessionModificationHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to modify an existing session and can be applied with EOS_Sessions_UpdateSession. The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it is no longer needed.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_UpdateSessionModification" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to modify an existing session and can be applied with EOS_Sessions_UpdateSession. The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it is no longer needed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_OutSessionModificationHandle = { "OutSessionModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms, OutSessionModificationHandle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_OutSessionModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_Sessions_UpdateSessionModification", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::EIK_SessionsSubsystem_eventEIK_Sessions_UpdateSessionModification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_Sessions_UpdateSessionModification)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_STRUCT_REF(FEIK_HSessionModification,Z_Param_Out_OutSessionModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_Sessions_UpdateSessionModification(Z_Param_SessionName,Z_Param_Out_OutSessionModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_Sessions_UpdateSessionModification

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_CopySearchResultByIndex
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms
	{
		FEIK_HSessionSearch Handle;
		int32 SessionIndex;
		FEIK_HSessionDetails OutSessionHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_SessionSearch_CopySearchResultByIndex is used to immediately retrieve a handle to the session information from a given search result. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_CopySearchResultByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_SessionSearch_CopySearchResultByIndex is used to immediately retrieve a handle to the session information from a given search result. If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSessionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms, SessionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_OutSessionHandle = { "OutSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms, OutSessionHandle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_SessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_OutSessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_CopySearchResultByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_CopySearchResultByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_CopySearchResultByIndex)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
	P_GET_STRUCT_REF(FEIK_HSessionDetails,Z_Param_Out_OutSessionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_CopySearchResultByIndex(Z_Param_Handle,Z_Param_SessionIndex,Z_Param_Out_OutSessionHandle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_CopySearchResultByIndex

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_GetSearchResultCount
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_GetSearchResultCount_Parms
	{
		FEIK_HSessionSearch Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the number of search results found by the search parameters in this search\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_GetSearchResultCount" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of search results found by the search parameters in this search" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_GetSearchResultCount_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_GetSearchResultCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_GetSearchResultCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_GetSearchResultCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_GetSearchResultCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_GetSearchResultCount)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_GetSearchResultCount(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_GetSearchResultCount

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_Release
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_Release_Parms
	{
		FEIK_HSessionSearch Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with a session search. This must be called on data retrieved from EOS_Sessions_CreateSessionSearch.\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_Release" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with a session search. This must be called on data retrieved from EOS_Sessions_CreateSessionSearch." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_Release_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_Release)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_SessionsSubsystem::EIK_SessionSearch_Release(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_Release

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_RemoveParameter
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms
	{
		FEIK_HSessionSearch Handle;
		FString Key;
		TEnumAsByte<EEIK_EComparisonOp> ComparisonOp;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove a parameter from the array of search criteria.\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_RemoveParameter" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a parameter from the array of search criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms, ComparisonOp), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOp_MetaData), NewProp_ComparisonOp_MetaData) }; // 2969323196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_ComparisonOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_RemoveParameter", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_RemoveParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_RemoveParameter)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ComparisonOp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_RemoveParameter(Z_Param_Handle,Z_Param_Key,(TEnumAsByte<EEIK_EComparisonOp>&)(Z_Param_Out_ComparisonOp));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_RemoveParameter

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetMaxResults
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms
	{
		FEIK_HSessionSearch Handle;
		int32 MaxSearchResults;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the maximum number of search results to return in the query, can't be more than EOS_SESSIONS_MAX_SEARCH_RESULTS\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_SetMaxResults" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of search results to return in the query, can't be more than EOS_SESSIONS_MAX_SEARCH_RESULTS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchResults;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_MaxSearchResults = { "MaxSearchResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms, MaxSearchResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_MaxSearchResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_SetMaxResults", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetMaxResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_SetMaxResults)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSearchResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_SetMaxResults(Z_Param_Handle,Z_Param_MaxSearchResults);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetMaxResults

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetParameter
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms
	{
		FEIK_HSessionSearch Handle;
		FEIK_Sessions_AttributeData Parameter;
		TEnumAsByte<EEIK_EComparisonOp> ComparisonOp;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add a parameter to an array of search criteria combined via an implicit AND operator. Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_SetParameter" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a parameter to an array of search criteria combined via an implicit AND operator. Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms, Parameter), Z_Construct_UScriptStruct_FEIK_Sessions_AttributeData, METADATA_PARAMS(0, nullptr) }; // 973514545
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms, ComparisonOp), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOp_MetaData), NewProp_ComparisonOp_MetaData) }; // 2969323196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_ComparisonOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_SetParameter", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_SetParameter)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_STRUCT(FEIK_Sessions_AttributeData,Z_Param_Parameter);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ComparisonOp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_SetParameter(Z_Param_Handle,Z_Param_Parameter,(TEnumAsByte<EEIK_EComparisonOp>&)(Z_Param_Out_ComparisonOp));
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetParameter

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetSessionId
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms
	{
		FEIK_HSessionSearch Handle;
		FString SessionId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set a session ID to find and will return at most one search result. Setting TargetUserId or SearchParameters will result in EOS_SessionSearch_Find failing\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_SetSessionId" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a session ID to find and will return at most one search result. Setting TargetUserId or SearchParameters will result in EOS_SessionSearch_Find failing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_SetSessionId", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetSessionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_SetSessionId)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_SetSessionId(Z_Param_Handle,Z_Param_SessionId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetSessionId

// Begin Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetTargetUserId
struct Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics
{
	struct EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms
	{
		FEIK_HSessionSearch Handle;
		FEIK_ProductUserId TargetUserId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set a target user ID to find and will return at most one search result. Setting SessionId or SearchParameters will result in EOS_SessionSearch_Find failing\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_SetTargetUserId" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a target user ID to find and will return at most one search result. Setting SessionId or SearchParameters will result in EOS_SessionSearch_Find failing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionsSubsystem, nullptr, "EIK_SessionSearch_SetTargetUserId", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::EIK_SessionsSubsystem_eventEIK_SessionSearch_SetTargetUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionsSubsystem::execEIK_SessionSearch_SetTargetUserId)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_Handle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SessionsSubsystem::EIK_SessionSearch_SetTargetUserId(Z_Param_Handle,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_SessionsSubsystem Function EIK_SessionSearch_SetTargetUserId

// Begin Class UEIK_SessionsSubsystem
void UEIK_SessionsSubsystem::StaticRegisterNativesUEIK_SessionsSubsystem()
{
	UClass* Class = UEIK_SessionsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_ActiveSession_CopyInfo", &UEIK_SessionsSubsystem::execEIK_ActiveSession_CopyInfo },
		{ "EIK_ActiveSession_GetRegisteredPlayerByIndex", &UEIK_SessionsSubsystem::execEIK_ActiveSession_GetRegisteredPlayerByIndex },
		{ "EIK_ActiveSession_Release", &UEIK_SessionsSubsystem::execEIK_ActiveSession_Release },
		{ "EIK_SessionDetails_CopyInfo", &UEIK_SessionsSubsystem::execEIK_SessionDetails_CopyInfo },
		{ "EIK_SessionDetails_CopySessionAttributeByIndex", &UEIK_SessionsSubsystem::execEIK_SessionDetails_CopySessionAttributeByIndex },
		{ "EIK_SessionDetails_CopySessionAttributeByKey", &UEIK_SessionsSubsystem::execEIK_SessionDetails_CopySessionAttributeByKey },
		{ "EIK_SessionDetails_GetSessionAttributeCount", &UEIK_SessionsSubsystem::execEIK_SessionDetails_GetSessionAttributeCount },
		{ "EIK_SessionModification_AddAttribute", &UEIK_SessionsSubsystem::execEIK_SessionModification_AddAttribute },
		{ "EIK_SessionModification_Release", &UEIK_SessionsSubsystem::execEIK_SessionModification_Release },
		{ "EIK_SessionModification_RemoveAttribute", &UEIK_SessionsSubsystem::execEIK_SessionModification_RemoveAttribute },
		{ "EIK_SessionModification_SetAllowedPlatformIds", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetAllowedPlatformIds },
		{ "EIK_SessionModification_SetBucketId", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetBucketId },
		{ "EIK_SessionModification_SetHostAddress", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetHostAddress },
		{ "EIK_SessionModification_SetInvitesAllowed", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetInvitesAllowed },
		{ "EIK_SessionModification_SetJoinInProgressAllowed", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetJoinInProgressAllowed },
		{ "EIK_SessionModification_SetMaxPlayers", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetMaxPlayers },
		{ "EIK_SessionModification_SetPermissionLevel", &UEIK_SessionsSubsystem::execEIK_SessionModification_SetPermissionLevel },
		{ "EIK_Sessions_AddNotifyJoinSessionAccepted", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifyJoinSessionAccepted },
		{ "EIK_Sessions_AddNotifyLeaveSessionRequested", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifyLeaveSessionRequested },
		{ "EIK_Sessions_AddNotifySendSessionNativeInviteRequested", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySendSessionNativeInviteRequested },
		{ "EIK_Sessions_AddNotifySessionInviteAccepted", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteAccepted },
		{ "EIK_Sessions_AddNotifySessionInviteReceived", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteReceived },
		{ "EIK_Sessions_AddNotifySessionInviteRejected", &UEIK_SessionsSubsystem::execEIK_Sessions_AddNotifySessionInviteRejected },
		{ "EIK_Sessions_CopyActiveSessionHandle", &UEIK_SessionsSubsystem::execEIK_Sessions_CopyActiveSessionHandle },
		{ "EIK_Sessions_CopySessionHandleByInviteId", &UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleByInviteId },
		{ "EIK_Sessions_CopySessionHandleByUiEventId", &UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleByUiEventId },
		{ "EIK_Sessions_CopySessionHandleForPresence", &UEIK_SessionsSubsystem::execEIK_Sessions_CopySessionHandleForPresence },
		{ "EIK_Sessions_CreateSessionModification", &UEIK_SessionsSubsystem::execEIK_Sessions_CreateSessionModification },
		{ "EIK_Sessions_CreateSessionSearch", &UEIK_SessionsSubsystem::execEIK_Sessions_CreateSessionSearch },
		{ "EIK_Sessions_DumpSessionState", &UEIK_SessionsSubsystem::execEIK_Sessions_DumpSessionState },
		{ "EIK_Sessions_GetInviteCount", &UEIK_SessionsSubsystem::execEIK_Sessions_GetInviteCount },
		{ "EIK_Sessions_GetInviteIdByIndex", &UEIK_SessionsSubsystem::execEIK_Sessions_GetInviteIdByIndex },
		{ "EIK_Sessions_IsUserInSession", &UEIK_SessionsSubsystem::execEIK_Sessions_IsUserInSession },
		{ "EIK_Sessions_RemoveNotifyJoinSessionAccepted", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifyJoinSessionAccepted },
		{ "EIK_Sessions_RemoveNotifyLeaveSessionRequested", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifyLeaveSessionRequested },
		{ "EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySendSessionNativeInviteRequested },
		{ "EIK_Sessions_RemoveNotifySessionInviteAccepted", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteAccepted },
		{ "EIK_Sessions_RemoveNotifySessionInviteReceived", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteReceived },
		{ "EIK_Sessions_RemoveNotifySessionInviteRejected", &UEIK_SessionsSubsystem::execEIK_Sessions_RemoveNotifySessionInviteRejected },
		{ "EIK_Sessions_UpdateSessionModification", &UEIK_SessionsSubsystem::execEIK_Sessions_UpdateSessionModification },
		{ "EIK_SessionSearch_CopySearchResultByIndex", &UEIK_SessionsSubsystem::execEIK_SessionSearch_CopySearchResultByIndex },
		{ "EIK_SessionSearch_GetSearchResultCount", &UEIK_SessionsSubsystem::execEIK_SessionSearch_GetSearchResultCount },
		{ "EIK_SessionSearch_Release", &UEIK_SessionsSubsystem::execEIK_SessionSearch_Release },
		{ "EIK_SessionSearch_RemoveParameter", &UEIK_SessionsSubsystem::execEIK_SessionSearch_RemoveParameter },
		{ "EIK_SessionSearch_SetMaxResults", &UEIK_SessionsSubsystem::execEIK_SessionSearch_SetMaxResults },
		{ "EIK_SessionSearch_SetParameter", &UEIK_SessionsSubsystem::execEIK_SessionSearch_SetParameter },
		{ "EIK_SessionSearch_SetSessionId", &UEIK_SessionsSubsystem::execEIK_SessionSearch_SetSessionId },
		{ "EIK_SessionSearch_SetTargetUserId", &UEIK_SessionsSubsystem::execEIK_SessionSearch_SetTargetUserId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SessionsSubsystem);
UClass* Z_Construct_UClass_UEIK_SessionsSubsystem_NoRegister()
{
	return UEIK_SessionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_SessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_CopyInfo, "EIK_ActiveSession_CopyInfo" }, // 2319806463
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_GetRegisteredPlayerByIndex, "EIK_ActiveSession_GetRegisteredPlayerByIndex" }, // 3115518756
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_ActiveSession_Release, "EIK_ActiveSession_Release" }, // 3506919136
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopyInfo, "EIK_SessionDetails_CopyInfo" }, // 3040559094
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByIndex, "EIK_SessionDetails_CopySessionAttributeByIndex" }, // 1227323681
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_CopySessionAttributeByKey, "EIK_SessionDetails_CopySessionAttributeByKey" }, // 1124211424
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionDetails_GetSessionAttributeCount, "EIK_SessionDetails_GetSessionAttributeCount" }, // 3526583830
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_AddAttribute, "EIK_SessionModification_AddAttribute" }, // 3507461727
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_Release, "EIK_SessionModification_Release" }, // 3303512003
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_RemoveAttribute, "EIK_SessionModification_RemoveAttribute" }, // 793905129
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetAllowedPlatformIds, "EIK_SessionModification_SetAllowedPlatformIds" }, // 1123263078
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetBucketId, "EIK_SessionModification_SetBucketId" }, // 1570174185
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetHostAddress, "EIK_SessionModification_SetHostAddress" }, // 2903600891
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetInvitesAllowed, "EIK_SessionModification_SetInvitesAllowed" }, // 825600163
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetJoinInProgressAllowed, "EIK_SessionModification_SetJoinInProgressAllowed" }, // 2889095963
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetMaxPlayers, "EIK_SessionModification_SetMaxPlayers" }, // 3709542804
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionModification_SetPermissionLevel, "EIK_SessionModification_SetPermissionLevel" }, // 1266230940
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyJoinSessionAccepted, "EIK_Sessions_AddNotifyJoinSessionAccepted" }, // 2854178904
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifyLeaveSessionRequested, "EIK_Sessions_AddNotifyLeaveSessionRequested" }, // 979571190
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySendSessionNativeInviteRequested, "EIK_Sessions_AddNotifySendSessionNativeInviteRequested" }, // 2406420398
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteAccepted, "EIK_Sessions_AddNotifySessionInviteAccepted" }, // 4103541991
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteReceived, "EIK_Sessions_AddNotifySessionInviteReceived" }, // 869458522
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_AddNotifySessionInviteRejected, "EIK_Sessions_AddNotifySessionInviteRejected" }, // 2792319714
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopyActiveSessionHandle, "EIK_Sessions_CopyActiveSessionHandle" }, // 3293628963
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByInviteId, "EIK_Sessions_CopySessionHandleByInviteId" }, // 3441449058
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleByUiEventId, "EIK_Sessions_CopySessionHandleByUiEventId" }, // 2264487994
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CopySessionHandleForPresence, "EIK_Sessions_CopySessionHandleForPresence" }, // 1847904918
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionModification, "EIK_Sessions_CreateSessionModification" }, // 4215975634
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_CreateSessionSearch, "EIK_Sessions_CreateSessionSearch" }, // 3884227874
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_DumpSessionState, "EIK_Sessions_DumpSessionState" }, // 2109124247
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteCount, "EIK_Sessions_GetInviteCount" }, // 2360804312
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_GetInviteIdByIndex, "EIK_Sessions_GetInviteIdByIndex" }, // 850014587
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_IsUserInSession, "EIK_Sessions_IsUserInSession" }, // 1186497764
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyJoinSessionAccepted, "EIK_Sessions_RemoveNotifyJoinSessionAccepted" }, // 2999183637
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifyLeaveSessionRequested, "EIK_Sessions_RemoveNotifyLeaveSessionRequested" }, // 1786519825
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested, "EIK_Sessions_RemoveNotifySendSessionNativeInviteRequested" }, // 2897237401
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteAccepted, "EIK_Sessions_RemoveNotifySessionInviteAccepted" }, // 4167170443
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteReceived, "EIK_Sessions_RemoveNotifySessionInviteReceived" }, // 2161211952
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_RemoveNotifySessionInviteRejected, "EIK_Sessions_RemoveNotifySessionInviteRejected" }, // 3259329631
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_Sessions_UpdateSessionModification, "EIK_Sessions_UpdateSessionModification" }, // 4199148918
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_CopySearchResultByIndex, "EIK_SessionSearch_CopySearchResultByIndex" }, // 3654116414
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_GetSearchResultCount, "EIK_SessionSearch_GetSearchResultCount" }, // 341171680
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_Release, "EIK_SessionSearch_Release" }, // 506603578
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_RemoveParameter, "EIK_SessionSearch_RemoveParameter" }, // 1765784734
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetMaxResults, "EIK_SessionSearch_SetMaxResults" }, // 612506308
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetParameter, "EIK_SessionSearch_SetParameter" }, // 2977094705
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetSessionId, "EIK_SessionSearch_SetSessionId" }, // 1776037350
		{ &Z_Construct_UFunction_UEIK_SessionsSubsystem_EIK_SessionSearch_SetTargetUserId, "EIK_SessionSearch_SetTargetUserId" }, // 3264557140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::ClassParams = {
	&UEIK_SessionsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_SessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SessionsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_SessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SessionsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SessionsSubsystem>()
{
	return UEIK_SessionsSubsystem::StaticClass();
}
UEIK_SessionsSubsystem::UEIK_SessionsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SessionsSubsystem);
UEIK_SessionsSubsystem::~UEIK_SessionsSubsystem() {}
// End Class UEIK_SessionsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Sessions_CreateSessionModificationOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Sessions_CreateSessionModificationOptions_Statics::NewStructOps, TEXT("EIK_Sessions_CreateSessionModificationOptions"), &Z_Registration_Info_UScriptStruct_EIK_Sessions_CreateSessionModificationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Sessions_CreateSessionModificationOptions), 3332006105U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SessionsSubsystem, UEIK_SessionsSubsystem::StaticClass, TEXT("UEIK_SessionsSubsystem"), &Z_Registration_Info_UClass_UEIK_SessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SessionsSubsystem), 928884226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_3553799018(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionsSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

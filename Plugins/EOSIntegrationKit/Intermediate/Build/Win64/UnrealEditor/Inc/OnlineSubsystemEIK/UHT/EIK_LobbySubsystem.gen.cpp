// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_LobbySubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LobbySubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LobbySubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyAttributeVisibility();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyMemberStatus();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyPermissionLevel();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HLobbyDetails();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HLobbyModification();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HLobbySearch();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_Attribute();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_AttributeData();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyDetails_MemberInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyDetailsInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UI_EventId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Lobby_OnJoinLobbyAcceptedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UiEventId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiEventId_MetaData), NewProp_UiEventId_MetaData) }; // 272776284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::NewProp_UiEventId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnJoinLobbyAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnJoinLobbyAcceptedCallback, FEIK_ProductUserId LocalUserId, FEIK_UI_EventId const& UiEventId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_UI_EventId UiEventId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnJoinLobbyAcceptedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.UiEventId=UiEventId;
	EIK_Lobby_OnJoinLobbyAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnJoinLobbyAcceptedCallback

// Begin Delegate FEIK_Lobby_OnLeaveLobbyRequestedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLeaveLobbyRequestedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLeaveLobbyRequestedCallback, FEIK_ProductUserId LocalUserId, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLeaveLobbyRequestedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_OnLeaveLobbyRequestedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLeaveLobbyRequestedCallback

// Begin Delegate FEIK_Lobby_OnLobbyInviteAcceptedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteAcceptedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteAcceptedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.LobbyId=LobbyId;
	Parms.InviteId=InviteId;
	EIK_Lobby_OnLobbyInviteAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyInviteAcceptedCallback

// Begin Delegate FEIK_Lobby_OnLobbyInviteReceivedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyInviteReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteReceivedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteReceivedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.InviteId=InviteId;
	EIK_Lobby_OnLobbyInviteReceivedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyInviteReceivedCallback

// Begin Delegate FEIK_Lobby_OnLobbyInviteRejectedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyInviteRejectedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyInviteRejectedCallback, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyInviteRejectedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.LobbyId=LobbyId;
	Parms.InviteId=InviteId;
	EIK_Lobby_OnLobbyInviteRejectedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyInviteRejectedCallback

// Begin Delegate FEIK_Lobby_OnLobbyMemberStatusReceivedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		TEnumAsByte<EEIK_ELobbyMemberStatus> CurrentStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_CurrentStatus = { "CurrentStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms, CurrentStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyMemberStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStatus_MetaData), NewProp_CurrentStatus_MetaData) }; // 3248542721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::NewProp_CurrentStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyMemberStatusReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyMemberStatusReceivedCallback, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId, TEnumAsByte<EEIK_ELobbyMemberStatus> const& CurrentStatus)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
		TEnumAsByte<EEIK_ELobbyMemberStatus> CurrentStatus;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberStatusReceivedCallback_Parms Parms;
	Parms.TargetUserId=TargetUserId;
	Parms.LobbyId=LobbyId;
	Parms.CurrentStatus=CurrentStatus;
	EIK_Lobby_OnLobbyMemberStatusReceivedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyMemberStatusReceivedCallback

// Begin Delegate FEIK_Lobby_OnLobbyMemberUpdateReceivedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyMemberUpdateReceivedCallback, FEIK_ProductUserId TargetUserId, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyMemberUpdateReceivedCallback_Parms Parms;
	Parms.TargetUserId=TargetUserId;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_OnLobbyMemberUpdateReceivedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyMemberUpdateReceivedCallback

// Begin Delegate FEIK_Lobby_OnLobbyUpdateReceivedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms
	{
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnLobbyUpdateReceivedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnLobbyUpdateReceivedCallback, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms
	{
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnLobbyUpdateReceivedCallback_Parms Parms;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_OnLobbyUpdateReceivedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnLobbyUpdateReceivedCallback

// Begin Delegate FEIK_Lobby_OnRTCRoomConnectionChangedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms
	{
		FEIK_LobbyId LobbyId;
		FEIK_ProductUserId LocalUserId;
		bool bIsConnected;
		TEnumAsByte<EEIK_Result> DisconnectReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisconnectReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisconnectReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_DisconnectReason = { "DisconnectReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms, DisconnectReason), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisconnectReason_MetaData), NewProp_DisconnectReason_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::NewProp_DisconnectReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnRTCRoomConnectionChangedCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnRTCRoomConnectionChangedCallback, FEIK_LobbyId const& LobbyId, FEIK_ProductUserId const& LocalUserId, bool bIsConnected, TEnumAsByte<EEIK_Result> const& DisconnectReason)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms
	{
		FEIK_LobbyId LobbyId;
		FEIK_ProductUserId LocalUserId;
		bool bIsConnected;
		TEnumAsByte<EEIK_Result> DisconnectReason;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnRTCRoomConnectionChangedCallback_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.LocalUserId=LocalUserId;
	Parms.bIsConnected=bIsConnected ? true : false;
	Parms.DisconnectReason=DisconnectReason;
	EIK_Lobby_OnRTCRoomConnectionChangedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnRTCRoomConnectionChangedCallback

// Begin Delegate FEIK_Lobby_OnSendLobbyNativeInviteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms
	{
		FEIK_UI_EventId UiEventId;
		FEIK_ProductUserId LocalUserId;
		FString TargetNativeAccountType;
		FString TargetUserNativeAccountId;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNativeAccountType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserNativeAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNativeAccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUserNativeAccountId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(0, nullptr) }; // 272776284
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_TargetNativeAccountType = { "TargetNativeAccountType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms, TargetNativeAccountType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNativeAccountType_MetaData), NewProp_TargetNativeAccountType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_TargetUserNativeAccountId = { "TargetUserNativeAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms, TargetUserNativeAccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserNativeAccountId_MetaData), NewProp_TargetUserNativeAccountId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_UiEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_TargetNativeAccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_TargetUserNativeAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_OnSendLobbyNativeInviteCallback_DelegateWrapper(const FScriptDelegate& EIK_Lobby_OnSendLobbyNativeInviteCallback, FEIK_UI_EventId UiEventId, FEIK_ProductUserId LocalUserId, const FString& TargetNativeAccountType, const FString& TargetUserNativeAccountId, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms
	{
		FEIK_UI_EventId UiEventId;
		FEIK_ProductUserId LocalUserId;
		FString TargetNativeAccountType;
		FString TargetUserNativeAccountId;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_OnSendLobbyNativeInviteCallback_Parms Parms;
	Parms.UiEventId=UiEventId;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetNativeAccountType=TargetNativeAccountType;
	Parms.TargetUserNativeAccountId=TargetUserNativeAccountId;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_OnSendLobbyNativeInviteCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_OnSendLobbyNativeInviteCallback

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyJoinLobbyAccepted
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyJoinLobbyAccepted_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about lobby \"JOIN\" performed by local user (when no invite) via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyJoinLobbyAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about lobby \"JOIN\" performed by local user (when no invite) via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyJoinLobbyAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnJoinLobbyAcceptedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 177507568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyJoinLobbyAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyJoinLobbyAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyJoinLobbyAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyJoinLobbyAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyJoinLobbyAccepted)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyJoinLobbyAccepted(FEIK_Lobby_OnJoinLobbyAcceptedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyJoinLobbyAccepted

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLeaveLobbyRequested
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLeaveLobbyRequested_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about leave lobby requests performed by the local user via the overlay. When user requests to leave the lobby in the social overlay, the SDK does not automatically leave the lobby, it is up to the game to perform any necessary cleanup and call the EOS_Lobby_LeaveLobby method using the lobbyId sent in the notification function.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLeaveLobbyRequested" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about leave lobby requests performed by the local user via the overlay. When user requests to leave the lobby in the social overlay, the SDK does not automatically leave the lobby, it is up to the game to perform any necessary cleanup and call the EOS_Lobby_LeaveLobby method using the lobbyId sent in the notification function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLeaveLobbyRequested_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLeaveLobbyRequestedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1818888715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLeaveLobbyRequested_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLeaveLobbyRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLeaveLobbyRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLeaveLobbyRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLeaveLobbyRequested)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLeaveLobbyRequested(FEIK_Lobby_OnLeaveLobbyRequestedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLeaveLobbyRequested

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteAccepted
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteAccepted_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about lobby invites accepted by local user via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyInviteAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about lobby invites accepted by local user via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteAcceptedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1125612415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteAccepted)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyInviteAccepted(FEIK_Lobby_OnLobbyInviteAcceptedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteAccepted

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteReceived_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about lobby invites sent to local users.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyInviteReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about lobby invites sent to local users." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteReceived_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteReceivedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4259531807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteReceived)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyInviteReceived(FEIK_Lobby_OnLobbyInviteReceivedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteRejected
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteRejected_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about lobby invites rejected by local user.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyInviteRejected" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about lobby invites rejected by local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteRejected_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyInviteRejectedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 133365278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteRejected_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyInviteRejected", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteRejected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyInviteRejected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteRejected)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyInviteRejected(FEIK_Lobby_OnLobbyInviteRejectedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyInviteRejected

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyMemberStatusReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberStatusReceived_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about the changing status of lobby members.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyMemberStatusReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about the changing status of lobby members." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberStatusReceived_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberStatusReceivedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2491462817
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberStatusReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyMemberStatusReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberStatusReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberStatusReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyMemberStatusReceived)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyMemberStatusReceived(FEIK_Lobby_OnLobbyMemberStatusReceivedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyMemberStatusReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyMemberUpdateReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a lobby member updates the attributes associated with themselves inside the lobby.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyMemberUpdateReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a lobby member updates the attributes associated with themselves inside the lobby." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyMemberUpdateReceivedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2429009999
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyMemberUpdateReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyMemberUpdateReceived)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyMemberUpdateReceived(FEIK_Lobby_OnLobbyMemberUpdateReceivedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyMemberUpdateReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyUpdateReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyUpdateReceived_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when a lobby owner updates the attributes associated with the lobby.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyLobbyUpdateReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when a lobby owner updates the attributes associated with the lobby." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyUpdateReceived_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnLobbyUpdateReceivedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2948338998
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyUpdateReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyLobbyUpdateReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyUpdateReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyLobbyUpdateReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyUpdateReceived)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyLobbyUpdateReceived(FEIK_Lobby_OnLobbyUpdateReceivedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyLobbyUpdateReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyRTCRoomConnectionChanged
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyRTCRoomConnectionChanged_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications of when the RTC Room for a particular lobby has a connection status change. The RTC Room connection status is independent of the lobby connection status, however the lobby system will attempt to keep them consistent, automatically connecting to the RTC room after joining a lobby which has an associated RTC room and disconnecting from the RTC room when a lobby is left or disconnected. This notification is entirely informational and requires no action in response by the application. If the connected status is offline (bIsConnected is EOS_FALSE), the connection will automatically attempt to reconnect. The purpose of this notification is to allow applications to show the current connection status of the RTC room when the connection is not established. Unlike EOS_RTC_AddNotifyDisconnected, EOS_RTC_LeaveRoom should not be called when the RTC room is disconnected. This function will only succeed when called on a lobby the local user is currently a member of.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifyRTCRoomConnectionChanged" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications of when the RTC Room for a particular lobby has a connection status change. The RTC Room connection status is independent of the lobby connection status, however the lobby system will attempt to keep them consistent, automatically connecting to the RTC room after joining a lobby which has an associated RTC room and disconnecting from the RTC room when a lobby is left or disconnected. This notification is entirely informational and requires no action in response by the application. If the connected status is offline (bIsConnected is EOS_FALSE), the connection will automatically attempt to reconnect. The purpose of this notification is to allow applications to show the current connection status of the RTC room when the connection is not established. Unlike EOS_RTC_AddNotifyDisconnected, EOS_RTC_LeaveRoom should not be called when the RTC room is disconnected. This function will only succeed when called on a lobby the local user is currently a member of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyRTCRoomConnectionChanged_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnRTCRoomConnectionChangedCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3234019349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyRTCRoomConnectionChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifyRTCRoomConnectionChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyRTCRoomConnectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifyRTCRoomConnectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyRTCRoomConnectionChanged)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifyRTCRoomConnectionChanged(FEIK_Lobby_OnRTCRoomConnectionChangedCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifyRTCRoomConnectionChanged

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifySendLobbyNativeInviteRequested
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications about a lobby \"INVITE\" performed by a local user via the overlay. This is only needed when a configured integrated platform has EOS_IPMF_DisableSDKManagedSessions set. The EOS SDK will then use the state of EOS_IPMF_PreferEOSIdentity and EOS_IPMF_PreferIntegratedIdentity to determine when the NotificationFn is called.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_AddNotifySendLobbyNativeInviteRequested" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications about a lobby \"INVITE\" performed by a local user via the overlay. This is only needed when a configured integrated platform has EOS_IPMF_DisableSDKManagedSessions set. The EOS SDK will then use the state of EOS_IPMF_PreferEOSIdentity and EOS_IPMF_PreferIntegratedIdentity to determine when the NotificationFn is called." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_OnSendLobbyNativeInviteCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1089242561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_AddNotifySendLobbyNativeInviteRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_AddNotifySendLobbyNativeInviteRequested)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Lobby_AddNotifySendLobbyNativeInviteRequested(FEIK_Lobby_OnSendLobbyNativeInviteCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_AddNotifySendLobbyNativeInviteRequested

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_Attribute_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_Attribute_Release_Parms
	{
		FEIK_Lobby_Attribute Attribute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_Lobby_Attribute_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_Attribute_Release_Parms, Attribute), Z_Construct_UScriptStruct_FEIK_Lobby_Attribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 700497365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_Attribute_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::EIK_LobbySubsystem_eventEIK_Lobby_Attribute_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::EIK_LobbySubsystem_eventEIK_Lobby_Attribute_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_Attribute_Release)
{
	P_GET_STRUCT_REF(FEIK_Lobby_Attribute,Z_Param_Out_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_Attribute_Release(Z_Param_Out_Attribute);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_Attribute_Release

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandle
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms
	{
		FEIK_LobbyId LobbyId;
		FEIK_ProductUserId LocalUserId;
		FEIK_HLobbyDetails OutLobbyDetailsHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create a handle to an existing lobby. If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_CopyLobbyDetailsHandle" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a handle to an existing lobby. If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyDetailsHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_OutLobbyDetailsHandle = { "OutLobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms, OutLobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_OutLobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_CopyLobbyDetailsHandle", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandle)
{
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_HLobbyDetails,Z_Param_Out_OutLobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_CopyLobbyDetailsHandle(Z_Param_LobbyId,Z_Param_LocalUserId,Z_Param_Out_OutLobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandle

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandleByInviteId
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms
	{
		FString InviteId;
		FEIK_HLobbyDetails OutLobbyDetailsHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Lobby_CopyLobbyDetailsHandleByInviteId is used to immediately retrieve a handle to the lobby information from after notification of an invite If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_CopyLobbyDetailsHandleByInviteId" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Lobby_CopyLobbyDetailsHandleByInviteId is used to immediately retrieve a handle to the lobby information from after notification of an invite If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyDetailsHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms, InviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_OutLobbyDetailsHandle = { "OutLobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms, OutLobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_OutLobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_CopyLobbyDetailsHandleByInviteId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByInviteId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandleByInviteId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InviteId);
	P_GET_STRUCT_REF(FEIK_HLobbyDetails,Z_Param_Out_OutLobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_CopyLobbyDetailsHandleByInviteId(Z_Param_InviteId,Z_Param_Out_OutLobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandleByInviteId

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandleByUiEventId
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms
	{
		FEIK_UI_EventId UiEventId;
		FEIK_HLobbyDetails OutLobbyDetailsHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_Lobby_CopyLobbyDetailsHandleByUiEventId is used to immediately retrieve a handle to the lobby information from after notification of an join game If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_CopyLobbyDetailsHandleByUiEventId" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_Lobby_CopyLobbyDetailsHandleByUiEventId is used to immediately retrieve a handle to the lobby information from after notification of an join game If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsHandle, must be passed to EOS_LobbyDetails_Release to release the memory associated with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyDetailsHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiEventId_MetaData), NewProp_UiEventId_MetaData) }; // 272776284
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_OutLobbyDetailsHandle = { "OutLobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms, OutLobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_UiEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_OutLobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_CopyLobbyDetailsHandleByUiEventId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandleByUiEventId)
{
	P_GET_STRUCT_REF(FEIK_UI_EventId,Z_Param_Out_UiEventId);
	P_GET_STRUCT_REF(FEIK_HLobbyDetails,Z_Param_Out_OutLobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_CopyLobbyDetailsHandleByUiEventId(Z_Param_Out_UiEventId,Z_Param_Out_OutLobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_CopyLobbyDetailsHandleByUiEventId

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_CreateLobbySearch
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms
	{
		int32 MaxResults;
		FEIK_HLobbySearch OutLobbySearchHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""Create a lobby search handle. This handle may be modified to include various search parameters. Searching is possible in three methods, all mutually exclusive\n\n\x09set the lobby ID to find a specific lobby\n\x09set the target user ID to find a specific user\n\x09set lobby parameters to find an array of lobbies that match the search criteria\n\x09*/" },
#endif
		{ "DisplayName", "EOS_Lobby_CreateLobbySearch" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a lobby search handle. This handle may be modified to include various search parameters. Searching is possible in three methods, all mutually exclusive\n\nset the lobby ID to find a specific lobby\nset the target user ID to find a specific user\nset lobby parameters to find an array of lobbies that match the search criteria" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbySearchHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_OutLobbySearchHandle = { "OutLobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms, OutLobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_OutLobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_CreateLobbySearch", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::EIK_LobbySubsystem_eventEIK_Lobby_CreateLobbySearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_CreateLobbySearch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_STRUCT_REF(FEIK_HLobbySearch,Z_Param_Out_OutLobbySearchHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_CreateLobbySearch(Z_Param_MaxResults,Z_Param_Out_OutLobbySearchHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_CreateLobbySearch

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_GetConnectString
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
		FString OutConnectString;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the Connection string for an EOS lobby. The connection string describes the presence of a player in terms of game state. Xbox platforms expect titles to embed this into their MultiplayerActivity at creation. When present, the SDK will use this value to populate session presence in the social overlay and facilitate platform invitations.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_GetConnectString" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Connection string for an EOS lobby. The connection string describes the presence of a player in terms of game state. Xbox platforms expect titles to embed this into their MultiplayerActivity at creation. When present, the SDK will use this value to populate session presence in the social overlay and facilitate platform invitations." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutConnectString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_OutConnectString = { "OutConnectString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms, OutConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_OutConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_GetConnectString", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetConnectString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_GetConnectString)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_GetConnectString(Z_Param_LocalUserId,Z_Param_LobbyId,Z_Param_Out_OutConnectString);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_GetConnectString

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_GetInviteCount
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_GetInviteCount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the number of known invites for a given user\n" },
#endif
		{ "DisplayName", "EOS_Lobby_GetInviteCount" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_GetInviteCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetInviteCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetInviteCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_GetInviteCount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Lobby_GetInviteCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_GetInviteCount

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_GetInviteIdByIndex
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Index;
		FString OutInviteId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve an invite ID from a list of active invites for a given user\n" },
#endif
		{ "DisplayName", "EOS_Lobby_GetInviteIdByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve an invite ID from a list of active invites for a given user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInviteId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_OutInviteId = { "OutInviteId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms, OutInviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_OutInviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_GetInviteIdByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetInviteIdByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_GetInviteIdByIndex)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInviteId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_GetInviteIdByIndex(Z_Param_LocalUserId,Z_Param_Index,Z_Param_Out_OutInviteId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_GetInviteIdByIndex

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_GetRTCRoomName
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
		FString OutRTCRoomName;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the name of the RTC room associated with a specific lobby a local user belongs to. This value can be used whenever you need a RoomName value in the RTC_* suite of functions. RTC Room Names must not be used with EOS_RTC_JoinRoom, EOS_RTC_LeaveRoom, or EOS_RTC_AddNotifyDisconnected. Doing so will return EOS_AccessDenied or EOS_INVALID_NOTIFICATIONID if used with those functions. This function will only succeed when called on a lobby the local user is currently a member of.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_GetRTCRoomName" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the name of the RTC room associated with a specific lobby a local user belongs to. This value can be used whenever you need a RoomName value in the RTC_* suite of functions. RTC Room Names must not be used with EOS_RTC_JoinRoom, EOS_RTC_LeaveRoom, or EOS_RTC_AddNotifyDisconnected. Doing so will return EOS_AccessDenied or EOS_INVALID_NOTIFICATIONID if used with those functions. This function will only succeed when called on a lobby the local user is currently a member of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutRTCRoomName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_OutRTCRoomName = { "OutRTCRoomName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms, OutRTCRoomName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_OutRTCRoomName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_GetRTCRoomName", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::EIK_LobbySubsystem_eventEIK_Lobby_GetRTCRoomName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_GetRTCRoomName)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutRTCRoomName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_GetRTCRoomName(Z_Param_LocalUserId,Z_Param_LobbyId,Z_Param_Out_OutRTCRoomName);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_GetRTCRoomName

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_IsRTCRoomConnected
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
		bool bOutIsConnected;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the current connection status of the RTC Room for a lobby. The RTC Room connection status is independent of the lobby connection status, however the lobby system will attempt to keep them consistent, automatically connecting to the RTC room after joining a lobby which has an associated RTC room and disconnecting from the RTC room when a lobby is left or disconnected. This function will only succeed when called on a lobby the local user is currently a member of.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_IsRTCRoomConnected" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current connection status of the RTC Room for a lobby. The RTC Room connection status is independent of the lobby connection status, however the lobby system will attempt to keep them consistent, automatically connecting to the RTC room after joining a lobby which has an associated RTC room and disconnecting from the RTC room when a lobby is left or disconnected. This function will only succeed when called on a lobby the local user is currently a member of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static void NewProp_bOutIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutIsConnected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
void Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_bOutIsConnected_SetBit(void* Obj)
{
	((EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms*)Obj)->bOutIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_bOutIsConnected = { "bOutIsConnected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms), &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_bOutIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_bOutIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_IsRTCRoomConnected", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_IsRTCRoomConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_IsRTCRoomConnected)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_GET_UBOOL_REF(Z_Param_Out_bOutIsConnected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_IsRTCRoomConnected(Z_Param_LocalUserId,Z_Param_LobbyId,Z_Param_Out_bOutIsConnected);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_IsRTCRoomConnected

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_ParseLobbyIdFromConnectString
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms
	{
		FString ConnectString;
		FEIK_LobbyId OutLobbyId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Parse the ConnectString for an EOS lobby invitation to extract just the lobby ID. Used for joining a lobby from a connection string (as generated by GetConnectString) found in a platform invitation or presence.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_ParseLobbyIdFromConnectString" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse the ConnectString for an EOS lobby invitation to extract just the lobby ID. Used for joining a lobby from a connection string (as generated by GetConnectString) found in a platform invitation or presence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_OutLobbyId = { "OutLobbyId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms, OutLobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_OutLobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_ParseLobbyIdFromConnectString", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::EIK_LobbySubsystem_eventEIK_Lobby_ParseLobbyIdFromConnectString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_ParseLobbyIdFromConnectString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_STRUCT_REF(FEIK_LobbyId,Z_Param_Out_OutLobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_ParseLobbyIdFromConnectString(Z_Param_ConnectString,Z_Param_Out_OutLobbyId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_ParseLobbyIdFromConnectString

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyJoinLobbyAccepted
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyJoinLobbyAccepted_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user accepts a lobby invitation via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyJoinLobbyAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a lobby invitation via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyJoinLobbyAccepted_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyJoinLobbyAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyJoinLobbyAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyJoinLobbyAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyJoinLobbyAccepted)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyJoinLobbyAccepted(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyJoinLobbyAccepted

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLeaveLobbyRequested
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLeaveLobbyRequested_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user performs a leave lobby action via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLeaveLobbyRequested" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user performs a leave lobby action via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLeaveLobbyRequested_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLeaveLobbyRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLeaveLobbyRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLeaveLobbyRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLeaveLobbyRequested)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLeaveLobbyRequested(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLeaveLobbyRequested

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteAccepted
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteAccepted_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user accepts a lobby invitation via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyInviteAccepted" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a lobby invitation via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteAccepted_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteAccepted)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyInviteAccepted(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteAccepted

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteReceived_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user receives a lobby invitation.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyInviteReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user receives a lobby invitation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteReceived_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteReceived)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyInviteReceived(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteRejected
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteRejected_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user rejects a lobby invitation via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyInviteRejected" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user rejects a lobby invitation via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteRejected_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyInviteRejected", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteRejected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyInviteRejected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteRejected)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyInviteRejected(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyInviteRejected

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when lobby members status change.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when lobby members status change." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when lobby members change their data.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when lobby members change their data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyUpdateReceived
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyUpdateReceived_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a lobby changes its data.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyLobbyUpdateReceived" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a lobby changes its data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyUpdateReceived_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyLobbyUpdateReceived", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyUpdateReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyLobbyUpdateReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyUpdateReceived)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyLobbyUpdateReceived(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyLobbyUpdateReceived

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when an RTC Room's connection status changes. This should be called when the local user is leaving a lobby.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when an RTC Room's connection status changes. This should be called when the local user is leaving a lobby." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when a user requests a send invite via the overlay.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RemoveNotifySendLobbyNativeInviteRequested" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when a user requests a send invite via the overlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::EIK_LobbySubsystem_eventEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested

// Begin Class UEIK_LobbySubsystem Function EIK_Lobby_UpdateLobbyModification
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics
{
	struct EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
		FEIK_HLobbyModification OutLobbyModificationHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a lobby modification handle (EOS_HLobbyModification). The lobby modification handle is used to modify an existing lobby and can be applied with EOS_Lobby_UpdateLobby. The EOS_HLobbyModification must be released by calling EOS_LobbyModification_Release once it is no longer needed.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_UpdateLobbyModification" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a lobby modification handle (EOS_HLobbyModification). The lobby modification handle is used to modify an existing lobby and can be applied with EOS_Lobby_UpdateLobby. The EOS_HLobbyModification must be released by calling EOS_LobbyModification_Release once it is no longer needed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_OutLobbyModificationHandle = { "OutLobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms, OutLobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_OutLobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_Lobby_UpdateLobbyModification", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::EIK_LobbySubsystem_eventEIK_Lobby_UpdateLobbyModification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_Lobby_UpdateLobbyModification)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_GET_STRUCT_REF(FEIK_HLobbyModification,Z_Param_Out_OutLobbyModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Lobby_UpdateLobbyModification(Z_Param_LocalUserId,Z_Param_LobbyId,Z_Param_Out_OutLobbyModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_Lobby_UpdateLobbyModification

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyAttributeByIndex
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		int32 AttrIndex;
		FEIK_Lobby_Attribute OutAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_LobbyDetails_CopyAttributeByIndex is used to immediately retrieve a copy of a lobby attribute from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_LobbyDetails_CopyAttributeByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_LobbyDetails_CopyAttributeByIndex is used to immediately retrieve a copy of a lobby attribute from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttrIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_AttrIndex = { "AttrIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms, AttrIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms, OutAttribute), Z_Construct_UScriptStruct_FEIK_Lobby_Attribute, METADATA_PARAMS(0, nullptr) }; // 700497365
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_AttrIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_OutAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyAttributeByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyAttributeByIndex)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_AttrIndex);
	P_GET_STRUCT_REF(FEIK_Lobby_Attribute,Z_Param_Out_OutAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyAttributeByIndex(Z_Param_LobbyDetailsHandle,Z_Param_AttrIndex,Z_Param_Out_OutAttribute);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyAttributeByIndex

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyAttributeByKey
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FString AttrKey;
		FEIK_Lobby_Attribute OutAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_LobbyDetails_CopyAttributeByKey is used to immediately retrieve a copy of a lobby attribute from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_LobbyDetails_CopyAttributeByKey" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_LobbyDetails_CopyAttributeByKey is used to immediately retrieve a copy of a lobby attribute from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttrKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_AttrKey = { "AttrKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms, AttrKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrKey_MetaData), NewProp_AttrKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms, OutAttribute), Z_Construct_UScriptStruct_FEIK_Lobby_Attribute, METADATA_PARAMS(0, nullptr) }; // 700497365
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_AttrKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_OutAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyAttributeByKey", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyAttributeByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyAttributeByKey)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_AttrKey);
	P_GET_STRUCT_REF(FEIK_Lobby_Attribute,Z_Param_Out_OutAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyAttributeByKey(Z_Param_LobbyDetailsHandle,Z_Param_AttrKey,Z_Param_Out_OutAttribute);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyAttributeByKey

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyInfo
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_LobbyDetailsInfo OutLobbyDetailsInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_LobbyDetails_CopyInfo is used to immediately retrieve a copy of lobby information from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsInfo, must be passed to EOS_LobbyDetails_Info_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_LobbyDetails_CopyInfo" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_LobbyDetails_CopyInfo is used to immediately retrieve a copy of lobby information from a given source such as a existing lobby or a search result. If the call returns an EOS_Success result, the out parameter, OutLobbyDetailsInfo, must be passed to EOS_LobbyDetails_Info_Release to release the memory associated with it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyDetailsInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_OutLobbyDetailsInfo = { "OutLobbyDetailsInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms, OutLobbyDetailsInfo), Z_Construct_UScriptStruct_FEIK_LobbyDetailsInfo, METADATA_PARAMS(0, nullptr) }; // 4133790919
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_OutLobbyDetailsInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyInfo)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_STRUCT_REF(FEIK_LobbyDetailsInfo,Z_Param_Out_OutLobbyDetailsInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyInfo(Z_Param_LobbyDetailsHandle,Z_Param_Out_OutLobbyDetailsInfo);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyInfo

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberAttributeByIndex
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_ProductUserId TargetUserId;
		int32 AttrIndex;
		FEIK_Lobby_Attribute OutAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_LobbyDetails_CopyMemberAttributeByIndex is used to immediately retrieve a copy of a lobby member attribute from an existing lobby. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it. Note: this information is only available if you are actively in the lobby. It is not available for search results.\n" },
#endif
		{ "DisplayName", "EOS_LobbyDetails_CopyMemberAttributeByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_LobbyDetails_CopyMemberAttributeByIndex is used to immediately retrieve a copy of a lobby member attribute from an existing lobby. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it. Note: this information is only available if you are actively in the lobby. It is not available for search results." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttrIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_AttrIndex = { "AttrIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms, AttrIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms, OutAttribute), Z_Construct_UScriptStruct_FEIK_Lobby_Attribute, METADATA_PARAMS(0, nullptr) }; // 700497365
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_AttrIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_OutAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyMemberAttributeByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberAttributeByIndex)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AttrIndex);
	P_GET_STRUCT_REF(FEIK_Lobby_Attribute,Z_Param_Out_OutAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyMemberAttributeByIndex(Z_Param_LobbyDetailsHandle,Z_Param_TargetUserId,Z_Param_AttrIndex,Z_Param_Out_OutAttribute);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberAttributeByIndex

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberAttributeByKey
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_ProductUserId TargetUserId;
		FString AttrKey;
		FEIK_Lobby_Attribute OutAttribute;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_LobbyDetails_CopyMemberAttributeByIndex is used to immediately retrieve a copy of a lobby member attribute from an existing lobby. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it. Note: this information is only available if you are actively in the lobby. It is not available for search results.\n" },
#endif
		{ "DisplayName", "EOS_LobbyDetails_CopyMemberAttributeByKey" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_LobbyDetails_CopyMemberAttributeByIndex is used to immediately retrieve a copy of a lobby member attribute from an existing lobby. If the call returns an EOS_Success result, the out parameter, OutAttribute, must be passed to EOS_Lobby_Attribute_Release to release the memory associated with it. Note: this information is only available if you are actively in the lobby. It is not available for search results." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttrKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_AttrKey = { "AttrKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms, AttrKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrKey_MetaData), NewProp_AttrKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms, OutAttribute), Z_Construct_UScriptStruct_FEIK_Lobby_Attribute, METADATA_PARAMS(0, nullptr) }; // 700497365
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_AttrKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_OutAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyMemberAttributeByKey", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberAttributeByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberAttributeByKey)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AttrKey);
	P_GET_STRUCT_REF(FEIK_Lobby_Attribute,Z_Param_Out_OutAttribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyMemberAttributeByKey(Z_Param_LobbyDetailsHandle,Z_Param_TargetUserId,Z_Param_AttrKey,Z_Param_Out_OutAttribute);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberAttributeByKey

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberInfo
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_ProductUserId TargetUserId;
		FEIK_LobbyDetails_MemberInfo OutMemberInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_CopyMemberInfo" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMemberInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_OutMemberInfo = { "OutMemberInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms, OutMemberInfo), Z_Construct_UScriptStruct_FEIK_LobbyDetails_MemberInfo, METADATA_PARAMS(0, nullptr) }; // 2416135890
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_OutMemberInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_CopyMemberInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_CopyMemberInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberInfo)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_STRUCT_REF(FEIK_LobbyDetails_MemberInfo,Z_Param_Out_OutMemberInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyDetails_CopyMemberInfo(Z_Param_LobbyDetailsHandle,Z_Param_TargetUserId,Z_Param_Out_OutMemberInfo);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_CopyMemberInfo

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetAttributeCount
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_GetAttributeCount_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_GetAttributeCount" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetAttributeCount_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetAttributeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_GetAttributeCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetAttributeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetAttributeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_GetAttributeCount)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_LobbyDetails_GetAttributeCount(Z_Param_LobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetAttributeCount

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetLobbyOwner
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_GetLobbyOwner_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_ProductUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_GetLobbyOwner" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetLobbyOwner_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_GetLobbyOwner", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetLobbyOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_GetLobbyOwner)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_ProductUserId*)Z_Param__Result=P_THIS->EIK_LobbyDetails_GetLobbyOwner(Z_Param_LobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetLobbyOwner

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberAttributeCount
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		FEIK_ProductUserId TargetUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_GetMemberAttributeCount" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_GetMemberAttributeCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberAttributeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberAttributeCount)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_LobbyDetails_GetMemberAttributeCount(Z_Param_LobbyDetailsHandle,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberAttributeCount

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberByIndex
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		int32 MemberIndex;
		FEIK_ProductUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_GetMemberByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemberIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms, MemberIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_MemberIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_GetMemberByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberByIndex)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MemberIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_ProductUserId*)Z_Param__Result=P_THIS->EIK_LobbyDetails_GetMemberByIndex(Z_Param_LobbyDetailsHandle,Z_Param_MemberIndex);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberByIndex

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberCount
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberCount_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_GetMemberCount" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberCount_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_GetMemberCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_GetMemberCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberCount)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_LobbyDetails_GetMemberCount(Z_Param_LobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_GetMemberCount

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_Info_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_Info_Release_Parms
	{
		FEIK_LobbyDetailsInfo LobbyDetailsInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_Info_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::NewProp_LobbyDetailsInfo = { "LobbyDetailsInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_Info_Release_Parms, LobbyDetailsInfo), Z_Construct_UScriptStruct_FEIK_LobbyDetailsInfo, METADATA_PARAMS(0, nullptr) }; // 4133790919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::NewProp_LobbyDetailsInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_Info_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_Info_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_Info_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_Info_Release)
{
	P_GET_STRUCT_REF(FEIK_LobbyDetailsInfo,Z_Param_Out_LobbyDetailsInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_LobbyDetails_Info_Release(Z_Param_Out_LobbyDetailsInfo);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_Info_Release

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_MemberInfo_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_MemberInfo_Release_Parms
	{
		FEIK_LobbyDetails_MemberInfo MemberInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_MemberInfo_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemberInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::NewProp_MemberInfo = { "MemberInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_MemberInfo_Release_Parms, MemberInfo), Z_Construct_UScriptStruct_FEIK_LobbyDetails_MemberInfo, METADATA_PARAMS(0, nullptr) }; // 2416135890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::NewProp_MemberInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_MemberInfo_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_MemberInfo_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_MemberInfo_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_MemberInfo_Release)
{
	P_GET_STRUCT_REF(FEIK_LobbyDetails_MemberInfo,Z_Param_Out_MemberInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_LobbyDetails_MemberInfo_Release(Z_Param_Out_MemberInfo);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_MemberInfo_Release

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyDetails_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyDetails_Release_Parms
	{
		FEIK_HLobbyDetails LobbyDetailsHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyDetails_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyDetails_Release_Parms, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::NewProp_LobbyDetailsHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyDetails_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyDetails_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyDetails_Release)
{
	P_GET_STRUCT(FEIK_HLobbyDetails,Z_Param_LobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_LobbyDetails_Release(Z_Param_LobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyDetails_Release

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_AddAttribute
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		FEIK_Lobby_AttributeData Attribute;
		TEnumAsByte<EEIK_ELobbyAttributeVisibility> Visibility;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_AddAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FEIK_Lobby_AttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3012024995
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms, Visibility), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyAttributeVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 1247860732
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_AddAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_AddAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_AddAttribute)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_STRUCT_REF(FEIK_Lobby_AttributeData,Z_Param_Out_Attribute);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_AddAttribute(Z_Param_LobbyModificationHandle,Z_Param_Out_Attribute,(TEnumAsByte<EEIK_ELobbyAttributeVisibility>&)(Z_Param_Out_Visibility));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_AddAttribute

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_AddMemberAttribute
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		FEIK_Lobby_AttributeData Attribute;
		TEnumAsByte<EEIK_ELobbyAttributeVisibility> Visibility;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_AddMemberAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FEIK_Lobby_AttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3012024995
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms, Visibility), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyAttributeVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 1247860732
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_AddMemberAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_AddMemberAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_AddMemberAttribute)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_STRUCT_REF(FEIK_Lobby_AttributeData,Z_Param_Out_Attribute);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_AddMemberAttribute(Z_Param_LobbyModificationHandle,Z_Param_Out_Attribute,(TEnumAsByte<EEIK_ELobbyAttributeVisibility>&)(Z_Param_Out_Visibility));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_AddMemberAttribute

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_Release_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_Release_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::NewProp_LobbyModificationHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_Release)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_LobbyModification_Release(Z_Param_LobbyModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_Release

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_RemoveAttribute
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		FString Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_RemoveAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms, Options), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_RemoveAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_RemoveAttribute)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_RemoveAttribute(Z_Param_LobbyModificationHandle,Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_RemoveAttribute

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_RemoveMemberAttribute
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		FString Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_RemoveMemberAttribute" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms, Options), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_RemoveMemberAttribute", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_RemoveMemberAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_RemoveMemberAttribute)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_RemoveMemberAttribute(Z_Param_LobbyModificationHandle,Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_RemoveMemberAttribute

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetAllowedPlatformIds
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		TArray<int32> Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_SetAllowedPlatformIds" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_SetAllowedPlatformIds", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetAllowedPlatformIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_SetAllowedPlatformIds)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_SetAllowedPlatformIds(Z_Param_LobbyModificationHandle,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetAllowedPlatformIds

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetBucketId
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		FString Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_SetBucketId" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms, Options), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_SetBucketId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetBucketId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_SetBucketId)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_SetBucketId(Z_Param_LobbyModificationHandle,Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetBucketId

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetInvitesAllowed
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		bool Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_SetInvitesAllowed" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static void NewProp_Options_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
void Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_Options_SetBit(void* Obj)
{
	((EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms*)Obj)->Options = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms), &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_Options_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_SetInvitesAllowed", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetInvitesAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_SetInvitesAllowed)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_UBOOL_REF(Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_SetInvitesAllowed(Z_Param_LobbyModificationHandle,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetInvitesAllowed

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetMaxMembers
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		int32 Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_SetMaxMembers" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms, Options), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_SetMaxMembers", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetMaxMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_SetMaxMembers)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_SetMaxMembers(Z_Param_LobbyModificationHandle,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetMaxMembers

// Begin Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetPermissionLevel
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms
	{
		FEIK_HLobbyModification LobbyModificationHandle;
		TEnumAsByte<EEIK_ELobbyPermissionLevel> Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbyModification_SetPermissionLevel" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyModificationHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_LobbyModificationHandle = { "LobbyModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms, LobbyModificationHandle), Z_Construct_UScriptStruct_FEIK_HLobbyModification, METADATA_PARAMS(0, nullptr) }; // 3761932762
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms, Options), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyPermissionLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 30299788
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_LobbyModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbyModification_SetPermissionLevel", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::EIK_LobbySubsystem_eventEIK_LobbyModification_SetPermissionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbyModification_SetPermissionLevel)
{
	P_GET_STRUCT(FEIK_HLobbyModification,Z_Param_LobbyModificationHandle);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbyModification_SetPermissionLevel(Z_Param_LobbyModificationHandle,(TEnumAsByte<EEIK_ELobbyPermissionLevel>&)(Z_Param_Out_Options));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbyModification_SetPermissionLevel

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_CopySearchResultByIndex
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		int32 LobbyIndex;
		FEIK_HLobbyDetails OutLobbyDetailsHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_CopySearchResultByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLobbyDetailsHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_LobbyIndex = { "LobbyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms, LobbyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_OutLobbyDetailsHandle = { "OutLobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms, OutLobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(0, nullptr) }; // 1933862346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_LobbyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_OutLobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_CopySearchResultByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_CopySearchResultByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_CopySearchResultByIndex)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_LobbyIndex);
	P_GET_STRUCT_REF(FEIK_HLobbyDetails,Z_Param_Out_OutLobbyDetailsHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_CopySearchResultByIndex(Z_Param_LobbySearchHandle,Z_Param_LobbyIndex,Z_Param_Out_OutLobbyDetailsHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_CopySearchResultByIndex

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_GetSearchResultCount
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_GetSearchResultCount_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_GetSearchResultCount" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_GetSearchResultCount_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_GetSearchResultCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_GetSearchResultCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_GetSearchResultCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_GetSearchResultCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_GetSearchResultCount)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_LobbySearch_GetSearchResultCount(Z_Param_LobbySearchHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_GetSearchResultCount

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_Release
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_Release_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_Release_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::NewProp_LobbySearchHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_Release)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_LobbySearch_Release(Z_Param_LobbySearchHandle);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_Release

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_RemoveParameter
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		FString Key;
		TEnumAsByte<EEIK_EComparisonOp> ComparisonOp;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_RemoveParameter" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms, ComparisonOp), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOp_MetaData), NewProp_ComparisonOp_MetaData) }; // 2969323196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_ComparisonOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_RemoveParameter", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_RemoveParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_RemoveParameter)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ComparisonOp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_RemoveParameter(Z_Param_LobbySearchHandle,Z_Param_Key,(TEnumAsByte<EEIK_EComparisonOp>&)(Z_Param_Out_ComparisonOp));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_RemoveParameter

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetLobbyId
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		FEIK_LobbyId Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_SetLobbyId" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms, Options), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3666982492
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_SetLobbyId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetLobbyId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_SetLobbyId)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_STRUCT_REF(FEIK_LobbyId,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_SetLobbyId(Z_Param_LobbySearchHandle,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetLobbyId

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetMaxResults
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		int32 MaxResults;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_SetMaxResults" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms, MaxResults), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxResults_MetaData), NewProp_MaxResults_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_SetMaxResults", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetMaxResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_SetMaxResults)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_SetMaxResults(Z_Param_LobbySearchHandle,Z_Param_MaxResults);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetMaxResults

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetParameter
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		FEIK_Lobby_AttributeData Parameter;
		TEnumAsByte<EEIK_EComparisonOp> ComparisonOp;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_SetParameter" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms, Parameter), Z_Construct_UScriptStruct_FEIK_Lobby_AttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) }; // 3012024995
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms, ComparisonOp), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOp_MetaData), NewProp_ComparisonOp_MetaData) }; // 2969323196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_ComparisonOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_SetParameter", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_SetParameter)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_STRUCT_REF(FEIK_Lobby_AttributeData,Z_Param_Out_Parameter);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ComparisonOp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_SetParameter(Z_Param_LobbySearchHandle,Z_Param_Out_Parameter,(TEnumAsByte<EEIK_EComparisonOp>&)(Z_Param_Out_ComparisonOp));
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetParameter

// Begin Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetTargetUserId
struct Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics
{
	struct EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms
	{
		FEIK_HLobbySearch LobbySearchHandle;
		FEIK_ProductUserId Options;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "DisplayName", "EOS_LobbySearch_SetTargetUserId" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySearchHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_LobbySearchHandle = { "LobbySearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms, LobbySearchHandle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms, Options), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_LobbySearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySubsystem, nullptr, "EIK_LobbySearch_SetTargetUserId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::EIK_LobbySubsystem_eventEIK_LobbySearch_SetTargetUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySubsystem::execEIK_LobbySearch_SetTargetUserId)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_LobbySearchHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_LobbySearch_SetTargetUserId(Z_Param_LobbySearchHandle,Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_LobbySubsystem Function EIK_LobbySearch_SetTargetUserId

// Begin Class UEIK_LobbySubsystem
void UEIK_LobbySubsystem::StaticRegisterNativesUEIK_LobbySubsystem()
{
	UClass* Class = UEIK_LobbySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_AddNotifyJoinLobbyAccepted", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyJoinLobbyAccepted },
		{ "EIK_Lobby_AddNotifyLeaveLobbyRequested", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLeaveLobbyRequested },
		{ "EIK_Lobby_AddNotifyLobbyInviteAccepted", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteAccepted },
		{ "EIK_Lobby_AddNotifyLobbyInviteReceived", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteReceived },
		{ "EIK_Lobby_AddNotifyLobbyInviteRejected", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyInviteRejected },
		{ "EIK_Lobby_AddNotifyLobbyMemberStatusReceived", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyMemberStatusReceived },
		{ "EIK_Lobby_AddNotifyLobbyMemberUpdateReceived", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyMemberUpdateReceived },
		{ "EIK_Lobby_AddNotifyLobbyUpdateReceived", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyLobbyUpdateReceived },
		{ "EIK_Lobby_AddNotifyRTCRoomConnectionChanged", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifyRTCRoomConnectionChanged },
		{ "EIK_Lobby_AddNotifySendLobbyNativeInviteRequested", &UEIK_LobbySubsystem::execEIK_Lobby_AddNotifySendLobbyNativeInviteRequested },
		{ "EIK_Lobby_Attribute_Release", &UEIK_LobbySubsystem::execEIK_Lobby_Attribute_Release },
		{ "EIK_Lobby_CopyLobbyDetailsHandle", &UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandle },
		{ "EIK_Lobby_CopyLobbyDetailsHandleByInviteId", &UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandleByInviteId },
		{ "EIK_Lobby_CopyLobbyDetailsHandleByUiEventId", &UEIK_LobbySubsystem::execEIK_Lobby_CopyLobbyDetailsHandleByUiEventId },
		{ "EIK_Lobby_CreateLobbySearch", &UEIK_LobbySubsystem::execEIK_Lobby_CreateLobbySearch },
		{ "EIK_Lobby_GetConnectString", &UEIK_LobbySubsystem::execEIK_Lobby_GetConnectString },
		{ "EIK_Lobby_GetInviteCount", &UEIK_LobbySubsystem::execEIK_Lobby_GetInviteCount },
		{ "EIK_Lobby_GetInviteIdByIndex", &UEIK_LobbySubsystem::execEIK_Lobby_GetInviteIdByIndex },
		{ "EIK_Lobby_GetRTCRoomName", &UEIK_LobbySubsystem::execEIK_Lobby_GetRTCRoomName },
		{ "EIK_Lobby_IsRTCRoomConnected", &UEIK_LobbySubsystem::execEIK_Lobby_IsRTCRoomConnected },
		{ "EIK_Lobby_ParseLobbyIdFromConnectString", &UEIK_LobbySubsystem::execEIK_Lobby_ParseLobbyIdFromConnectString },
		{ "EIK_Lobby_RemoveNotifyJoinLobbyAccepted", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyJoinLobbyAccepted },
		{ "EIK_Lobby_RemoveNotifyLeaveLobbyRequested", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLeaveLobbyRequested },
		{ "EIK_Lobby_RemoveNotifyLobbyInviteAccepted", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteAccepted },
		{ "EIK_Lobby_RemoveNotifyLobbyInviteReceived", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteReceived },
		{ "EIK_Lobby_RemoveNotifyLobbyInviteRejected", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyInviteRejected },
		{ "EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyMemberStatusReceived },
		{ "EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived },
		{ "EIK_Lobby_RemoveNotifyLobbyUpdateReceived", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyLobbyUpdateReceived },
		{ "EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifyRTCRoomConnectionChanged },
		{ "EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested", &UEIK_LobbySubsystem::execEIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested },
		{ "EIK_Lobby_UpdateLobbyModification", &UEIK_LobbySubsystem::execEIK_Lobby_UpdateLobbyModification },
		{ "EIK_LobbyDetails_CopyAttributeByIndex", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyAttributeByIndex },
		{ "EIK_LobbyDetails_CopyAttributeByKey", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyAttributeByKey },
		{ "EIK_LobbyDetails_CopyInfo", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyInfo },
		{ "EIK_LobbyDetails_CopyMemberAttributeByIndex", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberAttributeByIndex },
		{ "EIK_LobbyDetails_CopyMemberAttributeByKey", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberAttributeByKey },
		{ "EIK_LobbyDetails_CopyMemberInfo", &UEIK_LobbySubsystem::execEIK_LobbyDetails_CopyMemberInfo },
		{ "EIK_LobbyDetails_GetAttributeCount", &UEIK_LobbySubsystem::execEIK_LobbyDetails_GetAttributeCount },
		{ "EIK_LobbyDetails_GetLobbyOwner", &UEIK_LobbySubsystem::execEIK_LobbyDetails_GetLobbyOwner },
		{ "EIK_LobbyDetails_GetMemberAttributeCount", &UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberAttributeCount },
		{ "EIK_LobbyDetails_GetMemberByIndex", &UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberByIndex },
		{ "EIK_LobbyDetails_GetMemberCount", &UEIK_LobbySubsystem::execEIK_LobbyDetails_GetMemberCount },
		{ "EIK_LobbyDetails_Info_Release", &UEIK_LobbySubsystem::execEIK_LobbyDetails_Info_Release },
		{ "EIK_LobbyDetails_MemberInfo_Release", &UEIK_LobbySubsystem::execEIK_LobbyDetails_MemberInfo_Release },
		{ "EIK_LobbyDetails_Release", &UEIK_LobbySubsystem::execEIK_LobbyDetails_Release },
		{ "EIK_LobbyModification_AddAttribute", &UEIK_LobbySubsystem::execEIK_LobbyModification_AddAttribute },
		{ "EIK_LobbyModification_AddMemberAttribute", &UEIK_LobbySubsystem::execEIK_LobbyModification_AddMemberAttribute },
		{ "EIK_LobbyModification_Release", &UEIK_LobbySubsystem::execEIK_LobbyModification_Release },
		{ "EIK_LobbyModification_RemoveAttribute", &UEIK_LobbySubsystem::execEIK_LobbyModification_RemoveAttribute },
		{ "EIK_LobbyModification_RemoveMemberAttribute", &UEIK_LobbySubsystem::execEIK_LobbyModification_RemoveMemberAttribute },
		{ "EIK_LobbyModification_SetAllowedPlatformIds", &UEIK_LobbySubsystem::execEIK_LobbyModification_SetAllowedPlatformIds },
		{ "EIK_LobbyModification_SetBucketId", &UEIK_LobbySubsystem::execEIK_LobbyModification_SetBucketId },
		{ "EIK_LobbyModification_SetInvitesAllowed", &UEIK_LobbySubsystem::execEIK_LobbyModification_SetInvitesAllowed },
		{ "EIK_LobbyModification_SetMaxMembers", &UEIK_LobbySubsystem::execEIK_LobbyModification_SetMaxMembers },
		{ "EIK_LobbyModification_SetPermissionLevel", &UEIK_LobbySubsystem::execEIK_LobbyModification_SetPermissionLevel },
		{ "EIK_LobbySearch_CopySearchResultByIndex", &UEIK_LobbySubsystem::execEIK_LobbySearch_CopySearchResultByIndex },
		{ "EIK_LobbySearch_GetSearchResultCount", &UEIK_LobbySubsystem::execEIK_LobbySearch_GetSearchResultCount },
		{ "EIK_LobbySearch_Release", &UEIK_LobbySubsystem::execEIK_LobbySearch_Release },
		{ "EIK_LobbySearch_RemoveParameter", &UEIK_LobbySubsystem::execEIK_LobbySearch_RemoveParameter },
		{ "EIK_LobbySearch_SetLobbyId", &UEIK_LobbySubsystem::execEIK_LobbySearch_SetLobbyId },
		{ "EIK_LobbySearch_SetMaxResults", &UEIK_LobbySubsystem::execEIK_LobbySearch_SetMaxResults },
		{ "EIK_LobbySearch_SetParameter", &UEIK_LobbySubsystem::execEIK_LobbySearch_SetParameter },
		{ "EIK_LobbySearch_SetTargetUserId", &UEIK_LobbySubsystem::execEIK_LobbySearch_SetTargetUserId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_LobbySubsystem);
UClass* Z_Construct_UClass_UEIK_LobbySubsystem_NoRegister()
{
	return UEIK_LobbySubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_LobbySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Lobby Interface" },
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyJoinLobbyAccepted, "EIK_Lobby_AddNotifyJoinLobbyAccepted" }, // 1365928357
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLeaveLobbyRequested, "EIK_Lobby_AddNotifyLeaveLobbyRequested" }, // 4061552226
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteAccepted, "EIK_Lobby_AddNotifyLobbyInviteAccepted" }, // 278829286
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteReceived, "EIK_Lobby_AddNotifyLobbyInviteReceived" }, // 3100474934
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyInviteRejected, "EIK_Lobby_AddNotifyLobbyInviteRejected" }, // 2733329104
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberStatusReceived, "EIK_Lobby_AddNotifyLobbyMemberStatusReceived" }, // 99915326
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyMemberUpdateReceived, "EIK_Lobby_AddNotifyLobbyMemberUpdateReceived" }, // 4183554988
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyLobbyUpdateReceived, "EIK_Lobby_AddNotifyLobbyUpdateReceived" }, // 3008865902
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifyRTCRoomConnectionChanged, "EIK_Lobby_AddNotifyRTCRoomConnectionChanged" }, // 3646933163
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_AddNotifySendLobbyNativeInviteRequested, "EIK_Lobby_AddNotifySendLobbyNativeInviteRequested" }, // 1994327343
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_Attribute_Release, "EIK_Lobby_Attribute_Release" }, // 1992183934
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandle, "EIK_Lobby_CopyLobbyDetailsHandle" }, // 675317599
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByInviteId, "EIK_Lobby_CopyLobbyDetailsHandleByInviteId" }, // 1069721171
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CopyLobbyDetailsHandleByUiEventId, "EIK_Lobby_CopyLobbyDetailsHandleByUiEventId" }, // 2494590351
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_CreateLobbySearch, "EIK_Lobby_CreateLobbySearch" }, // 1658770738
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetConnectString, "EIK_Lobby_GetConnectString" }, // 4219820788
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteCount, "EIK_Lobby_GetInviteCount" }, // 3267866727
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetInviteIdByIndex, "EIK_Lobby_GetInviteIdByIndex" }, // 3158870883
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_GetRTCRoomName, "EIK_Lobby_GetRTCRoomName" }, // 1712215331
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_IsRTCRoomConnected, "EIK_Lobby_IsRTCRoomConnected" }, // 3438731103
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_ParseLobbyIdFromConnectString, "EIK_Lobby_ParseLobbyIdFromConnectString" }, // 4263213731
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyJoinLobbyAccepted, "EIK_Lobby_RemoveNotifyJoinLobbyAccepted" }, // 1944623388
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLeaveLobbyRequested, "EIK_Lobby_RemoveNotifyLeaveLobbyRequested" }, // 2576180574
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteAccepted, "EIK_Lobby_RemoveNotifyLobbyInviteAccepted" }, // 1781075261
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteReceived, "EIK_Lobby_RemoveNotifyLobbyInviteReceived" }, // 115226993
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyInviteRejected, "EIK_Lobby_RemoveNotifyLobbyInviteRejected" }, // 2393772196
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived, "EIK_Lobby_RemoveNotifyLobbyMemberStatusReceived" }, // 366532544
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived, "EIK_Lobby_RemoveNotifyLobbyMemberUpdateReceived" }, // 1700428939
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyLobbyUpdateReceived, "EIK_Lobby_RemoveNotifyLobbyUpdateReceived" }, // 3287359359
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged, "EIK_Lobby_RemoveNotifyRTCRoomConnectionChanged" }, // 2007058629
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested, "EIK_Lobby_RemoveNotifySendLobbyNativeInviteRequested" }, // 2120271053
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_Lobby_UpdateLobbyModification, "EIK_Lobby_UpdateLobbyModification" }, // 4174627427
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByIndex, "EIK_LobbyDetails_CopyAttributeByIndex" }, // 2935266049
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyAttributeByKey, "EIK_LobbyDetails_CopyAttributeByKey" }, // 2550691593
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyInfo, "EIK_LobbyDetails_CopyInfo" }, // 1690168337
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByIndex, "EIK_LobbyDetails_CopyMemberAttributeByIndex" }, // 2977326996
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberAttributeByKey, "EIK_LobbyDetails_CopyMemberAttributeByKey" }, // 1252089691
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_CopyMemberInfo, "EIK_LobbyDetails_CopyMemberInfo" }, // 436632824
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetAttributeCount, "EIK_LobbyDetails_GetAttributeCount" }, // 1260912973
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetLobbyOwner, "EIK_LobbyDetails_GetLobbyOwner" }, // 549694733
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberAttributeCount, "EIK_LobbyDetails_GetMemberAttributeCount" }, // 1517342869
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberByIndex, "EIK_LobbyDetails_GetMemberByIndex" }, // 4106929330
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_GetMemberCount, "EIK_LobbyDetails_GetMemberCount" }, // 2696574970
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Info_Release, "EIK_LobbyDetails_Info_Release" }, // 2624827162
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_MemberInfo_Release, "EIK_LobbyDetails_MemberInfo_Release" }, // 1889693886
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyDetails_Release, "EIK_LobbyDetails_Release" }, // 1241080858
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddAttribute, "EIK_LobbyModification_AddAttribute" }, // 4242129347
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_AddMemberAttribute, "EIK_LobbyModification_AddMemberAttribute" }, // 1972183557
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_Release, "EIK_LobbyModification_Release" }, // 1068070626
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveAttribute, "EIK_LobbyModification_RemoveAttribute" }, // 500111398
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_RemoveMemberAttribute, "EIK_LobbyModification_RemoveMemberAttribute" }, // 1179416512
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetAllowedPlatformIds, "EIK_LobbyModification_SetAllowedPlatformIds" }, // 1388557272
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetBucketId, "EIK_LobbyModification_SetBucketId" }, // 2380464957
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetInvitesAllowed, "EIK_LobbyModification_SetInvitesAllowed" }, // 292832479
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetMaxMembers, "EIK_LobbyModification_SetMaxMembers" }, // 2509025102
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbyModification_SetPermissionLevel, "EIK_LobbyModification_SetPermissionLevel" }, // 590464834
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_CopySearchResultByIndex, "EIK_LobbySearch_CopySearchResultByIndex" }, // 3458146438
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_GetSearchResultCount, "EIK_LobbySearch_GetSearchResultCount" }, // 1263895941
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_Release, "EIK_LobbySearch_Release" }, // 1840971226
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_RemoveParameter, "EIK_LobbySearch_RemoveParameter" }, // 2088278646
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetLobbyId, "EIK_LobbySearch_SetLobbyId" }, // 3582803514
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetMaxResults, "EIK_LobbySearch_SetMaxResults" }, // 495634924
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetParameter, "EIK_LobbySearch_SetParameter" }, // 166528584
		{ &Z_Construct_UFunction_UEIK_LobbySubsystem_EIK_LobbySearch_SetTargetUserId, "EIK_LobbySearch_SetTargetUserId" }, // 1422212804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_LobbySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_LobbySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_LobbySubsystem_Statics::ClassParams = {
	&UEIK_LobbySubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_LobbySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_LobbySubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_LobbySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_LobbySubsystem.OuterSingleton, Z_Construct_UClass_UEIK_LobbySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_LobbySubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_LobbySubsystem>()
{
	return UEIK_LobbySubsystem::StaticClass();
}
UEIK_LobbySubsystem::UEIK_LobbySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_LobbySubsystem);
UEIK_LobbySubsystem::~UEIK_LobbySubsystem() {}
// End Class UEIK_LobbySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_LobbySubsystem, UEIK_LobbySubsystem::StaticClass, TEXT("UEIK_LobbySubsystem"), &Z_Registration_Info_UClass_UEIK_LobbySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_LobbySubsystem), 2670231232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_2043461602(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

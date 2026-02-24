// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Lobby_JoinLobby() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobby();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobby_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HLobbyDetails();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Lobby_JoinLobbyOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions;
class UScriptStruct* FEIK_Lobby_JoinLobbyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Lobby_JoinLobbyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Lobby_JoinLobbyOptions>()
{
	return FEIK_Lobby_JoinLobbyOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyDetailsHandle_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The handle of the lobby to join\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The handle of the lobby to join" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Product User ID of the local user joining the lobby\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Product User ID of the local user joining the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPresenceEnabled_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, this lobby will be associated with the local user's presence information. A user can only associate one lobby at a time with their presence information. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this lobby will be associated with the local user's presence information. A user can only associate one lobby at a time with their presence information. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyRTCOptions_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(Optional) Set this value to override the default local options for the RTC Room, if it is enabled for this lobby. Set this to NULL if your application does not use the Lobby RTC Rooms feature, or if you would like to use the default settings. This option is ignored if the specified lobby does not have an RTC Room enabled and will not cause errors.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) Set this value to override the default local options for the RTC Room, if it is enabled for this lobby. Set this to NULL if your application does not use the Lobby RTC Rooms feature, or if you would like to use the default settings. This option is ignored if the specified lobby does not have an RTC Room enabled and will not cause errors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrossplayOptOut_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This value indicates whether or not the local user allows crossplay interactions. If it is false, the local user will be treated as allowing crossplay.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This value indicates whether or not the local user allows crossplay interactions. If it is false, the local user will be treated as allowing crossplay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyDetailsHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_bPresenceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresenceEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyRTCOptions;
	static void NewProp_bCrossplayOptOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrossplayOptOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Lobby_JoinLobbyOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LobbyDetailsHandle = { "LobbyDetailsHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyOptions, LobbyDetailsHandle), Z_Construct_UScriptStruct_FEIK_HLobbyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyDetailsHandle_MetaData), NewProp_LobbyDetailsHandle_MetaData) }; // 1933862346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
void Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bPresenceEnabled_SetBit(void* Obj)
{
	((FEIK_Lobby_JoinLobbyOptions*)Obj)->bPresenceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bPresenceEnabled = { "bPresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_JoinLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bPresenceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPresenceEnabled_MetaData), NewProp_bPresenceEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LobbyRTCOptions = { "LobbyRTCOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyOptions, LobbyRTCOptions), Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyRTCOptions_MetaData), NewProp_LobbyRTCOptions_MetaData) }; // 1745362976
void Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bCrossplayOptOut_SetBit(void* Obj)
{
	((FEIK_Lobby_JoinLobbyOptions*)Obj)->bCrossplayOptOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bCrossplayOptOut = { "bCrossplayOptOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_JoinLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bCrossplayOptOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrossplayOptOut_MetaData), NewProp_bCrossplayOptOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LobbyDetailsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bPresenceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_LobbyRTCOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewProp_bCrossplayOptOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Lobby_JoinLobbyOptions",
	Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::PropPointers),
	sizeof(FEIK_Lobby_JoinLobbyOptions),
	alignof(FEIK_Lobby_JoinLobbyOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Lobby_JoinLobbyOptions

// Begin Delegate FEIK_Lobby_JoinLobbyDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_JoinLobbyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_JoinLobbyDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Lobby_JoinLobbyDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_JoinLobbyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_JoinLobbyDelegate

// Begin Class UEIK_Lobby_JoinLobby Function EIK_Lobby_JoinLobby
struct Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics
{
	struct EIK_Lobby_JoinLobby_eventEIK_Lobby_JoinLobby_Parms
	{
		FEIK_Lobby_JoinLobbyOptions Options;
		UEIK_Lobby_JoinLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Join a lobby, creating a local instance under a given lobby ID. Backend will validate various conditions to make sure it is possible to join the lobby. If the lobby is successfully join has an RTC Room enabled, the lobby system will automatically join and maintain the connection to the RTC room as long as the local user remains in the lobby. Applications can use the EOS_Lobby_GetRTCRoomName to get the name of the RTC Room associated with a lobby, which may be used with many of the EOS_RTC_* suite of functions. This can be useful to: register for notifications for talking status; to mute or unmute the local user's audio output; to block or unblock room participants; to set local audio device settings; and more.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_JoinLobby" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join a lobby, creating a local instance under a given lobby ID. Backend will validate various conditions to make sure it is possible to join the lobby. If the lobby is successfully join has an RTC Room enabled, the lobby system will automatically join and maintain the connection to the RTC room as long as the local user remains in the lobby. Applications can use the EOS_Lobby_GetRTCRoomName to get the name of the RTC Room associated with a lobby, which may be used with many of the EOS_RTC_* suite of functions. This can be useful to: register for notifications for talking status; to mute or unmute the local user's audio output; to block or unblock room participants; to set local audio device settings; and more." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_JoinLobby_eventEIK_Lobby_JoinLobby_Parms, Options), Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions, METADATA_PARAMS(0, nullptr) }; // 3112607865
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_JoinLobby_eventEIK_Lobby_JoinLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_Lobby_JoinLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Lobby_JoinLobby, nullptr, "EIK_Lobby_JoinLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::EIK_Lobby_JoinLobby_eventEIK_Lobby_JoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::EIK_Lobby_JoinLobby_eventEIK_Lobby_JoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Lobby_JoinLobby::execEIK_Lobby_JoinLobby)
{
	P_GET_STRUCT(FEIK_Lobby_JoinLobbyOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Lobby_JoinLobby**)Z_Param__Result=UEIK_Lobby_JoinLobby::EIK_Lobby_JoinLobby(Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_Lobby_JoinLobby Function EIK_Lobby_JoinLobby

// Begin Class UEIK_Lobby_JoinLobby
void UEIK_Lobby_JoinLobby::StaticRegisterNativesUEIK_Lobby_JoinLobby()
{
	UClass* Class = UEIK_Lobby_JoinLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_JoinLobby", &UEIK_Lobby_JoinLobby::execEIK_Lobby_JoinLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Lobby_JoinLobby);
UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobby_NoRegister()
{
	return UEIK_Lobby_JoinLobby::StaticClass();
}
struct Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Lobby_JoinLobby_EIK_Lobby_JoinLobby, "EIK_Lobby_JoinLobby" }, // 1209588692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Lobby_JoinLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Lobby_JoinLobby, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2711730644
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::ClassParams = {
	&UEIK_Lobby_JoinLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobby()
{
	if (!Z_Registration_Info_UClass_UEIK_Lobby_JoinLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Lobby_JoinLobby.OuterSingleton, Z_Construct_UClass_UEIK_Lobby_JoinLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Lobby_JoinLobby.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Lobby_JoinLobby>()
{
	return UEIK_Lobby_JoinLobby::StaticClass();
}
UEIK_Lobby_JoinLobby::UEIK_Lobby_JoinLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Lobby_JoinLobby);
UEIK_Lobby_JoinLobby::~UEIK_Lobby_JoinLobby() {}
// End Class UEIK_Lobby_JoinLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Lobby_JoinLobbyOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyOptions_Statics::NewStructOps, TEXT("EIK_Lobby_JoinLobbyOptions"), &Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Lobby_JoinLobbyOptions), 3112607865U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Lobby_JoinLobby, UEIK_Lobby_JoinLobby::StaticClass, TEXT("UEIK_Lobby_JoinLobby"), &Z_Registration_Info_UClass_UEIK_Lobby_JoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Lobby_JoinLobby), 1861364046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_3535697658(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobby_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Lobby_JoinLobbyById() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobbyById();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Lobby_JoinLobbyByIdOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions;
class UScriptStruct* FEIK_Lobby_JoinLobbyByIdOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Lobby_JoinLobbyByIdOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Lobby_JoinLobbyByIdOptions>()
{
	return FEIK_Lobby_JoinLobbyByIdOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The ID of the lobby\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Product User ID of the local user joining the lobby\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Product User ID of the local user joining the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPresenceEnabled_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, this lobby will be associated with the user's presence information. A user can only associate one lobby at a time with their presence information. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this lobby will be associated with the user's presence information. A user can only associate one lobby at a time with their presence information. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyRTCOptions_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(Optional) Set this value to override the default local options for the RTC Room, if it is enabled for this lobby. Set this to NULL if your application does not use the Lobby RTC Rooms feature, or if you would like to use the default settings. This option is ignored if the specified lobby does not have an RTC Room enabled and will not cause errors.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) Set this value to override the default local options for the RTC Room, if it is enabled for this lobby. Set this to NULL if your application does not use the Lobby RTC Rooms feature, or if you would like to use the default settings. This option is ignored if the specified lobby does not have an RTC Room enabled and will not cause errors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrossplayOptOut_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This value indicates whether or not the local user allows crossplay interactions. If it is false, the local user will be treated as allowing crossplay.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This value indicates whether or not the local user allows crossplay interactions. If it is false, the local user will be treated as allowing crossplay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_bPresenceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresenceEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyRTCOptions;
	static void NewProp_bCrossplayOptOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrossplayOptOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Lobby_JoinLobbyByIdOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyByIdOptions, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyByIdOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
void Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bPresenceEnabled_SetBit(void* Obj)
{
	((FEIK_Lobby_JoinLobbyByIdOptions*)Obj)->bPresenceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bPresenceEnabled = { "bPresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_JoinLobbyByIdOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bPresenceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPresenceEnabled_MetaData), NewProp_bPresenceEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LobbyRTCOptions = { "LobbyRTCOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_JoinLobbyByIdOptions, LobbyRTCOptions), Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyRTCOptions_MetaData), NewProp_LobbyRTCOptions_MetaData) }; // 1745362976
void Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bCrossplayOptOut_SetBit(void* Obj)
{
	((FEIK_Lobby_JoinLobbyByIdOptions*)Obj)->bCrossplayOptOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bCrossplayOptOut = { "bCrossplayOptOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_JoinLobbyByIdOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bCrossplayOptOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrossplayOptOut_MetaData), NewProp_bCrossplayOptOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bPresenceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_LobbyRTCOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewProp_bCrossplayOptOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Lobby_JoinLobbyByIdOptions",
	Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::PropPointers),
	sizeof(FEIK_Lobby_JoinLobbyByIdOptions),
	alignof(FEIK_Lobby_JoinLobbyByIdOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Lobby_JoinLobbyByIdOptions

// Begin Delegate FEIK_Lobby_JoinLobbyByIdDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_JoinLobbyByIdDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Lobby_JoinLobbyByIdDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_JoinLobbyByIdDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_JoinLobbyByIdDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_JoinLobbyByIdDelegate

// Begin Class UEIK_Lobby_JoinLobbyById Function EIK_Lobby_JoinLobbyById
struct Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics
{
	struct EIK_Lobby_JoinLobbyById_eventEIK_Lobby_JoinLobbyById_Parms
	{
		FEIK_Lobby_JoinLobbyByIdOptions Options;
		UEIK_Lobby_JoinLobbyById* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a special case of EOS_Lobby_JoinLobby. It should only be used if the lobby has had Join-by-ID enabled. Additionally, Join-by-ID should only be enabled to support native invites on an integrated platform.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_JoinLobbyById" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a special case of EOS_Lobby_JoinLobby. It should only be used if the lobby has had Join-by-ID enabled. Additionally, Join-by-ID should only be enabled to support native invites on an integrated platform." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_JoinLobbyById_eventEIK_Lobby_JoinLobbyById_Parms, Options), Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions, METADATA_PARAMS(0, nullptr) }; // 2346659416
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_JoinLobbyById_eventEIK_Lobby_JoinLobbyById_Parms, ReturnValue), Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Lobby_JoinLobbyById, nullptr, "EIK_Lobby_JoinLobbyById", nullptr, nullptr, Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::EIK_Lobby_JoinLobbyById_eventEIK_Lobby_JoinLobbyById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::EIK_Lobby_JoinLobbyById_eventEIK_Lobby_JoinLobbyById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Lobby_JoinLobbyById::execEIK_Lobby_JoinLobbyById)
{
	P_GET_STRUCT(FEIK_Lobby_JoinLobbyByIdOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Lobby_JoinLobbyById**)Z_Param__Result=UEIK_Lobby_JoinLobbyById::EIK_Lobby_JoinLobbyById(Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_Lobby_JoinLobbyById Function EIK_Lobby_JoinLobbyById

// Begin Class UEIK_Lobby_JoinLobbyById
void UEIK_Lobby_JoinLobbyById::StaticRegisterNativesUEIK_Lobby_JoinLobbyById()
{
	UClass* Class = UEIK_Lobby_JoinLobbyById::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_JoinLobbyById", &UEIK_Lobby_JoinLobbyById::execEIK_Lobby_JoinLobbyById },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Lobby_JoinLobbyById);
UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_NoRegister()
{
	return UEIK_Lobby_JoinLobbyById::StaticClass();
}
struct Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_JoinLobbyById.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Lobby_JoinLobbyById_EIK_Lobby_JoinLobbyById, "EIK_Lobby_JoinLobbyById" }, // 2072302820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Lobby_JoinLobbyById>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Lobby_JoinLobbyById, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_JoinLobbyByIdDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3003395147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::ClassParams = {
	&UEIK_Lobby_JoinLobbyById::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Lobby_JoinLobbyById()
{
	if (!Z_Registration_Info_UClass_UEIK_Lobby_JoinLobbyById.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Lobby_JoinLobbyById.OuterSingleton, Z_Construct_UClass_UEIK_Lobby_JoinLobbyById_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Lobby_JoinLobbyById.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Lobby_JoinLobbyById>()
{
	return UEIK_Lobby_JoinLobbyById::StaticClass();
}
UEIK_Lobby_JoinLobbyById::UEIK_Lobby_JoinLobbyById(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Lobby_JoinLobbyById);
UEIK_Lobby_JoinLobbyById::~UEIK_Lobby_JoinLobbyById() {}
// End Class UEIK_Lobby_JoinLobbyById

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Lobby_JoinLobbyByIdOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Lobby_JoinLobbyByIdOptions_Statics::NewStructOps, TEXT("EIK_Lobby_JoinLobbyByIdOptions"), &Z_Registration_Info_UScriptStruct_EIK_Lobby_JoinLobbyByIdOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Lobby_JoinLobbyByIdOptions), 2346659416U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Lobby_JoinLobbyById, UEIK_Lobby_JoinLobbyById::StaticClass, TEXT("UEIK_Lobby_JoinLobbyById"), &Z_Registration_Info_UClass_UEIK_Lobby_JoinLobbyById, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Lobby_JoinLobbyById), 1001158055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_4035443611(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_JoinLobbyById_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

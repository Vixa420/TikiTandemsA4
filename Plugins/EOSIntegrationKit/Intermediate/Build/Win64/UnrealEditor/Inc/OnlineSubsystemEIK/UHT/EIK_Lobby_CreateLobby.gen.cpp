// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Lobby_CreateLobby() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_CreateLobby();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_CreateLobby_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyPermissionLevel();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Lobby_CreateLobbyOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions;
class UScriptStruct* FEIK_Lobby_CreateLobbyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Lobby_CreateLobbyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Lobby_CreateLobbyOptions>()
{
	return FEIK_Lobby_CreateLobbyOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input parameters for the EOS_Lobby_CreateLobby function.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input parameters for the EOS_Lobby_CreateLobby function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Product User ID of the local user creating the lobby; this user will automatically join the lobby as its owner\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Product User ID of the local user creating the lobby; this user will automatically join the lobby as its owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLobbyMembers_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The maximum number of users who can be in the lobby at a time\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of users who can be in the lobby at a time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermissionLevel_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The initial permission level of the lobby\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial permission level of the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPresenceEnabled_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, this lobby will be associated with the local user's presence information. A user's presence can only be associated with one lobby at a time. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this lobby will be associated with the local user's presence information. A user's presence can only be associated with one lobby at a time. This affects the ability of the Social Overlay to show game related actions to take in the user's social graph. * using the bPresenceEnabled flags within the Sessions interface * using the bPresenceEnabled flags within the Lobby interface * using EOS_PresenceModification_SetJoinInfo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Are members of the lobby allowed to invite others\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Are members of the lobby allowed to invite others" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BucketId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bucket ID associated with the lobby\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bucket ID associated with the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableHostMigration_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is host migration allowed (will the lobby stay open if the original host leaves?) NOTE: EOS_Lobby_PromoteMember is still allowed regardless of this setting\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is host migration allowed (will the lobby stay open if the original host leaves?) NOTE: EOS_Lobby_PromoteMember is still allowed regardless of this setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRTCRoom_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a real-time communication (RTC) room for all members of this lobby. All members of the lobby will automatically join the RTC room when they connect to the lobby and they will automatically leave the RTC room when they leave or are removed from the lobby. While the joining and leaving of the RTC room is automatic, applications will still need to use the EOS RTC interfaces to handle all other functionality for the room.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a real-time communication (RTC) room for all members of this lobby. All members of the lobby will automatically join the RTC room when they connect to the lobby and they will automatically leave the RTC room when they leave or are removed from the lobby. While the joining and leaving of the RTC room is automatic, applications will still need to use the EOS RTC interfaces to handle all other functionality for the room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRTCOptions_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(Optional) Allows the local application to set local audio options for the RTC Room if it is enabled. Set this to NULL if the RTC RTC room is disabled or you would like to use the defaults.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) Allows the local application to set local audio options for the RTC Room if it is enabled. Set this to NULL if the RTC RTC room is disabled or you would like to use the defaults." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(Optional) Set to a globally unique value to override the backend assignment If not specified the backend service will assign one to the lobby. Do not mix and match override and non override settings. This value can be of size [EOS_LOBBY_MIN_LOBBYIDOVERRIDE_LENGTH, EOS_LOBBY_MAX_LOBBYIDOVERRIDE_LENGTH]\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) Set to a globally unique value to override the backend assignment If not specified the backend service will assign one to the lobby. Do not mix and match override and non override settings. This value can be of size [EOS_LOBBY_MIN_LOBBYIDOVERRIDE_LENGTH, EOS_LOBBY_MAX_LOBBYIDOVERRIDE_LENGTH]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableJoinById_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is EOS_Lobby_JoinLobbyById allowed. This is provided to support cases where an integrated platform's invite system is used. In these cases the game should provide the lobby ID securely to the invited player. Such as by attaching the lobby ID to the integrated platform's session data or sending the lobby ID within the invite data.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is EOS_Lobby_JoinLobbyById allowed. This is provided to support cases where an integrated platform's invite system is used. In these cases the game should provide the lobby ID securely to the invited player. Such as by attaching the lobby ID to the integrated platform's session data or sending the lobby ID within the invite data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRejoinAfterKickRequiresInvite_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Does rejoining after being kicked require an invite? When this is set, a kicked player cannot return to the session even if the session was set with EOS_LPL_PUBLICADVERTISED. When this is set, a player with invite privileges must use EOS_Lobby_SendInvite to allow the kicked player to return to the session.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does rejoining after being kicked require an invite? When this is set, a kicked player cannot return to the session even if the session was set with EOS_LPL_PUBLICADVERTISED. When this is set, a player with invite privileges must use EOS_Lobby_SendInvite to allow the kicked player to return to the session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedPlatformIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of platform IDs indicating the player platforms allowed to register with the session. Platform IDs are found in the EOS header file, e.g. EOS_OPT_Epic. For some platforms, the value will be in the EOS Platform specific header file. If null, the lobby will be unrestricted.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of platform IDs indicating the player platforms allowed to register with the session. Platform IDs are found in the EOS header file, e.g. EOS_OPT_Epic. For some platforms, the value will be in the EOS Platform specific header file. If null, the lobby will be unrestricted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrossplayOptOut_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This value indicates whether or not the lobby owner allows crossplay interactions. If false, the lobby owner will be treated as allowing crossplay. If it is set to true, AllowedPlatformIds must have a single entry that matches the platform of the lobby owner.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This value indicates whether or not the lobby owner allows crossplay interactions. If false, the lobby owner will be treated as allowing crossplay. If it is set to true, AllowedPlatformIds must have a single entry that matches the platform of the lobby owner." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLobbyMembers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PermissionLevel;
	static void NewProp_bPresenceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresenceEnabled;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BucketId;
	static void NewProp_bDisableHostMigration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableHostMigration;
	static void NewProp_bEnableRTCRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRTCRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRTCOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static void NewProp_bEnableJoinById_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableJoinById;
	static void NewProp_bRejoinAfterKickRequiresInvite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRejoinAfterKickRequiresInvite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllowedPlatformIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedPlatformIds;
	static void NewProp_bCrossplayOptOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrossplayOptOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Lobby_CreateLobbyOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_MaxLobbyMembers = { "MaxLobbyMembers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, MaxLobbyMembers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLobbyMembers_MetaData), NewProp_MaxLobbyMembers_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_PermissionLevel = { "PermissionLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, PermissionLevel), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELobbyPermissionLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermissionLevel_MetaData), NewProp_PermissionLevel_MetaData) }; // 30299788
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bPresenceEnabled_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bPresenceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bPresenceEnabled = { "bPresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bPresenceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPresenceEnabled_MetaData), NewProp_bPresenceEnabled_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvites_MetaData), NewProp_bAllowInvites_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_BucketId = { "BucketId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, BucketId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BucketId_MetaData), NewProp_BucketId_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bDisableHostMigration_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bDisableHostMigration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bDisableHostMigration = { "bDisableHostMigration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bDisableHostMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableHostMigration_MetaData), NewProp_bDisableHostMigration_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableRTCRoom_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bEnableRTCRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableRTCRoom = { "bEnableRTCRoom", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableRTCRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRTCRoom_MetaData), NewProp_bEnableRTCRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LocalRTCOptions = { "LocalRTCOptions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, LocalRTCOptions), Z_Construct_UScriptStruct_FEIK_Lobby_LocalRTCOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRTCOptions_MetaData), NewProp_LocalRTCOptions_MetaData) }; // 1745362976
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableJoinById_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bEnableJoinById = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableJoinById = { "bEnableJoinById", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableJoinById_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableJoinById_MetaData), NewProp_bEnableJoinById_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bRejoinAfterKickRequiresInvite_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bRejoinAfterKickRequiresInvite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bRejoinAfterKickRequiresInvite = { "bRejoinAfterKickRequiresInvite", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bRejoinAfterKickRequiresInvite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRejoinAfterKickRequiresInvite_MetaData), NewProp_bRejoinAfterKickRequiresInvite_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_AllowedPlatformIds_Inner = { "AllowedPlatformIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_AllowedPlatformIds = { "AllowedPlatformIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Lobby_CreateLobbyOptions, AllowedPlatformIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedPlatformIds_MetaData), NewProp_AllowedPlatformIds_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bCrossplayOptOut_SetBit(void* Obj)
{
	((FEIK_Lobby_CreateLobbyOptions*)Obj)->bCrossplayOptOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bCrossplayOptOut = { "bCrossplayOptOut", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Lobby_CreateLobbyOptions), &Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bCrossplayOptOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrossplayOptOut_MetaData), NewProp_bCrossplayOptOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_MaxLobbyMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_PermissionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bPresenceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_BucketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bDisableHostMigration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableRTCRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LocalRTCOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bEnableJoinById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bRejoinAfterKickRequiresInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_AllowedPlatformIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_AllowedPlatformIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewProp_bCrossplayOptOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Lobby_CreateLobbyOptions",
	Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::PropPointers),
	sizeof(FEIK_Lobby_CreateLobbyOptions),
	alignof(FEIK_Lobby_CreateLobbyOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Lobby_CreateLobbyOptions

// Begin Delegate FEIK_Lobby_CreateLobbyComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Lobby_CreateLobbyComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Lobby_CreateLobbyComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Lobby_CreateLobbyComplete, TEnumAsByte<EEIK_Result> const& Result, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Lobby_CreateLobbyComplete_Parms Parms;
	Parms.Result=Result;
	Parms.LobbyId=LobbyId;
	EIK_Lobby_CreateLobbyComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Lobby_CreateLobbyComplete

// Begin Class UEIK_Lobby_CreateLobby Function EIK_Lobby_CreateLobby
struct Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics
{
	struct EIK_Lobby_CreateLobby_eventEIK_Lobby_CreateLobby_Parms
	{
		FEIK_Lobby_CreateLobbyOptions CreateLobbyOptions;
		UEIK_Lobby_CreateLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates a lobby and adds the user to the lobby membership. There is no data associated with the lobby at the start and can be added vis EOS_Lobby_UpdateLobbyModification If the lobby is successfully created with an RTC Room enabled, the lobby system will automatically join and maintain the connection to the RTC room as long as the local user remains in the lobby. Applications can use the EOS_Lobby_GetRTCRoomName to get the name of the RTC Room associated with a lobby, which may be used with many of the EOS_RTC_* suite of functions. This can be useful to: register for notifications for talking status; to mute or unmute the local user's audio output; to block or unblock room participants; to set local audio device settings; and more.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_CreateLobby" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a lobby and adds the user to the lobby membership. There is no data associated with the lobby at the start and can be added vis EOS_Lobby_UpdateLobbyModification If the lobby is successfully created with an RTC Room enabled, the lobby system will automatically join and maintain the connection to the RTC room as long as the local user remains in the lobby. Applications can use the EOS_Lobby_GetRTCRoomName to get the name of the RTC Room associated with a lobby, which may be used with many of the EOS_RTC_* suite of functions. This can be useful to: register for notifications for talking status; to mute or unmute the local user's audio output; to block or unblock room participants; to set local audio device settings; and more." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateLobbyOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::NewProp_CreateLobbyOptions = { "CreateLobbyOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_CreateLobby_eventEIK_Lobby_CreateLobby_Parms, CreateLobbyOptions), Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions, METADATA_PARAMS(0, nullptr) }; // 3616278591
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_CreateLobby_eventEIK_Lobby_CreateLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_Lobby_CreateLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::NewProp_CreateLobbyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Lobby_CreateLobby, nullptr, "EIK_Lobby_CreateLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::EIK_Lobby_CreateLobby_eventEIK_Lobby_CreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::EIK_Lobby_CreateLobby_eventEIK_Lobby_CreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Lobby_CreateLobby::execEIK_Lobby_CreateLobby)
{
	P_GET_STRUCT(FEIK_Lobby_CreateLobbyOptions,Z_Param_CreateLobbyOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Lobby_CreateLobby**)Z_Param__Result=UEIK_Lobby_CreateLobby::EIK_Lobby_CreateLobby(Z_Param_CreateLobbyOptions);
	P_NATIVE_END;
}
// End Class UEIK_Lobby_CreateLobby Function EIK_Lobby_CreateLobby

// Begin Class UEIK_Lobby_CreateLobby
void UEIK_Lobby_CreateLobby::StaticRegisterNativesUEIK_Lobby_CreateLobby()
{
	UClass* Class = UEIK_Lobby_CreateLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_CreateLobby", &UEIK_Lobby_CreateLobby::execEIK_Lobby_CreateLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Lobby_CreateLobby);
UClass* Z_Construct_UClass_UEIK_Lobby_CreateLobby_NoRegister()
{
	return UEIK_Lobby_CreateLobby::StaticClass();
}
struct Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_CreateLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Lobby_CreateLobby_EIK_Lobby_CreateLobby, "EIK_Lobby_CreateLobby" }, // 3561709491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Lobby_CreateLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Lobby_CreateLobby, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Lobby_CreateLobbyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 622528694
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::ClassParams = {
	&UEIK_Lobby_CreateLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Lobby_CreateLobby()
{
	if (!Z_Registration_Info_UClass_UEIK_Lobby_CreateLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Lobby_CreateLobby.OuterSingleton, Z_Construct_UClass_UEIK_Lobby_CreateLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Lobby_CreateLobby.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Lobby_CreateLobby>()
{
	return UEIK_Lobby_CreateLobby::StaticClass();
}
UEIK_Lobby_CreateLobby::UEIK_Lobby_CreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Lobby_CreateLobby);
UEIK_Lobby_CreateLobby::~UEIK_Lobby_CreateLobby() {}
// End Class UEIK_Lobby_CreateLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Lobby_CreateLobbyOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Lobby_CreateLobbyOptions_Statics::NewStructOps, TEXT("EIK_Lobby_CreateLobbyOptions"), &Z_Registration_Info_UScriptStruct_EIK_Lobby_CreateLobbyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Lobby_CreateLobbyOptions), 3616278591U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Lobby_CreateLobby, UEIK_Lobby_CreateLobby::StaticClass, TEXT("UEIK_Lobby_CreateLobby"), &Z_Registration_Info_UClass_UEIK_Lobby_CreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Lobby_CreateLobby), 2108773844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_2219190000(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_CreateLobby_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

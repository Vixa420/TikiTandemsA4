// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_CreateLobby_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbySettings();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FCreateLobbySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLobbySettings;
class UScriptStruct* FCreateLobbySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbySettings, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("CreateLobbySettings"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FCreateLobbySettings>()
{
	return FCreateLobbySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateLobbySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLanMatch_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrivateConnections_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVoiceChat_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePresence_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BucketID_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportHostMigration_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableJoinViaID_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyIDOverride_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLanMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLanMatch;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
	static void NewProp_bUseVoiceChat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceChat;
	static void NewProp_bUsePresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BucketID;
	static void NewProp_bSupportHostMigration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportHostMigration;
	static void NewProp_bEnableJoinViaID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableJoinViaID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyIDOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bIsLanMatch_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bIsLanMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bIsLanMatch = { "bIsLanMatch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bIsLanMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLanMatch_MetaData), NewProp_bIsLanMatch_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvites_MetaData), NewProp_bAllowInvites_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, NumberOfPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrivateConnections_MetaData), NewProp_NumberOfPrivateConnections_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAdvertise_MetaData), NewProp_bShouldAdvertise_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinInProgress_MetaData), NewProp_bAllowJoinInProgress_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) }; // 1209445512
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bUseVoiceChat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat = { "bUseVoiceChat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVoiceChat_MetaData), NewProp_bUseVoiceChat_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bUsePresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePresence_MetaData), NewProp_bUsePresence_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID = { "BucketID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, BucketID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BucketID_MetaData), NewProp_BucketID_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bSupportHostMigration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration = { "bSupportHostMigration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportHostMigration_MetaData), NewProp_bSupportHostMigration_MetaData) };
void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_SetBit(void* Obj)
{
	((FCreateLobbySettings*)Obj)->bEnableJoinViaID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID = { "bEnableJoinViaID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableJoinViaID_MetaData), NewProp_bEnableJoinViaID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride = { "LobbyIDOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, LobbyIDOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyIDOverride_MetaData), NewProp_LobbyIDOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bIsLanMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"CreateLobbySettings",
	Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers),
	sizeof(FCreateLobbySettings),
	alignof(FCreateLobbySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbySettings()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton, Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton;
}
// End ScriptStruct FCreateLobbySettings

// Begin Delegate FCreateLobby_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms
	{
		FString LobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms, LobbyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyID_MetaData), NewProp_LobbyID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "CreateLobby_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateLobby_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobby_Delegate, const FString& LobbyID)
{
	struct _Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms
	{
		FString LobbyID;
	};
	_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms Parms;
	Parms.LobbyID=LobbyID;
	CreateLobby_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCreateLobby_Delegate

// Begin Class UEIK_CreateLobby_AsyncFunction Function CreateEIKLobby
struct Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics
{
	struct EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms
	{
		TMap<FString,FEIKAttribute> SessionSettings;
		FName SessionName;
		int32 NumberOfPublicConnections;
		FCreateLobbySettings ExtraSettings;
		UEIK_CreateLobby_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not.\n\x09@param SessionSettings - A map of session settings to be used when creating the lobby.\n\x09@param NumberOfPublicConnections - The number of public connections to be used when creating the lobby.\n\x09@param ExtraSettings - A struct containing extra settings to be used when creating the lobby which is completely optional.\n\x09""Documentation link: https://eik.betide.studio/multiplayer/sessions/lobbies/\n\x09*/" },
#endif
		{ "CPP_Default_ExtraSettings", "()" },
		{ "CPP_Default_NumberOfPublicConnections", "10" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Create EIK Lobby" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not.\n@param SessionSettings - A map of session settings to be used when creating the lobby.\n@param NumberOfPublicConnections - The number of public connections to be used when creating the lobby.\n@param ExtraSettings - A struct containing extra settings to be used when creating the lobby which is completely optional.\nDocumentation link: https://eik.betide.studio/multiplayer/sessions/lobbies/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, ExtraSettings), Z_Construct_UScriptStruct_FCreateLobbySettings, METADATA_PARAMS(0, nullptr) }; // 1932142923
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ExtraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, nullptr, "CreateEIKLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby)
{
	P_GET_TMAP(FString,FEIKAttribute,Z_Param_SessionSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_STRUCT(FCreateLobbySettings,Z_Param_ExtraSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_CreateLobby_AsyncFunction**)Z_Param__Result=UEIK_CreateLobby_AsyncFunction::CreateEIKLobby(Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_NumberOfPublicConnections,Z_Param_ExtraSettings);
	P_NATIVE_END;
}
// End Class UEIK_CreateLobby_AsyncFunction Function CreateEIKLobby

// Begin Class UEIK_CreateLobby_AsyncFunction
void UEIK_CreateLobby_AsyncFunction::StaticRegisterNativesUEIK_CreateLobby_AsyncFunction()
{
	UClass* Class = UEIK_CreateLobby_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateEIKLobby", &UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_CreateLobby_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister()
{
	return UEIK_CreateLobby_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby, "CreateEIKLobby" }, // 2505226823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_CreateLobby_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4277217448
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 4277217448
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams = {
	&UEIK_CreateLobby_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_CreateLobby_AsyncFunction>()
{
	return UEIK_CreateLobby_AsyncFunction::StaticClass();
}
UEIK_CreateLobby_AsyncFunction::UEIK_CreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_CreateLobby_AsyncFunction);
UEIK_CreateLobby_AsyncFunction::~UEIK_CreateLobby_AsyncFunction() {}
// End Class UEIK_CreateLobby_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCreateLobbySettings::StaticStruct, Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewStructOps, TEXT("CreateLobbySettings"), &Z_Registration_Info_UScriptStruct_CreateLobbySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLobbySettings), 1932142923U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, UEIK_CreateLobby_AsyncFunction::StaticClass, TEXT("UEIK_CreateLobby_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_CreateLobby_AsyncFunction), 4047063755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_1089795132(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

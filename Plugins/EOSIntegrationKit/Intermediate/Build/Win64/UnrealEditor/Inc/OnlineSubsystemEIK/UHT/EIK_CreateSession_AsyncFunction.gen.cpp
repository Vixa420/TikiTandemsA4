// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_CreateSession_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateSession_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FCreateSessionExtraSettings();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerSettings();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FCreateSession_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms
	{
		FString SessionID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "CreateSession_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSession_Delegate, const FString& SessionID)
{
	struct _Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms
	{
		FString SessionID;
	};
	_Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms Parms;
	Parms.SessionID=SessionID;
	CreateSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCreateSession_Delegate

// Begin ScriptStruct FDedicatedServerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DedicatedServerSettings;
class UScriptStruct* FDedicatedServerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DedicatedServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DedicatedServerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDedicatedServerSettings, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("DedicatedServerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DedicatedServerSettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FDedicatedServerSettings>()
{
	return FDedicatedServerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortInfo_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PortInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDedicatedServerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((FDedicatedServerSettings*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDedicatedServerSettings), &Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDedicatedServer_MetaData), NewProp_bIsDedicatedServer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_PortInfo = { "PortInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDedicatedServerSettings, PortInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortInfo_MetaData), NewProp_PortInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewProp_PortInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"DedicatedServerSettings",
	Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::PropPointers),
	sizeof(FDedicatedServerSettings),
	alignof(FDedicatedServerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DedicatedServerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DedicatedServerSettings.InnerSingleton, Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DedicatedServerSettings.InnerSingleton;
}
// End ScriptStruct FDedicatedServerSettings

// Begin ScriptStruct FCreateSessionExtraSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings;
class UScriptStruct* FCreateSessionExtraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateSessionExtraSettings, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("CreateSessionExtraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FCreateSessionExtraSettings>()
{
	return FCreateSessionExtraSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLanMatch_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrivateConnections_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePresence_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresence_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceSanctions_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLanMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLanMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
	static void NewProp_bUsePresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static void NewProp_bEnforceSanctions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceSanctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateSessionExtraSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bIsLanMatch_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bIsLanMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bIsLanMatch = { "bIsLanMatch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bIsLanMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLanMatch_MetaData), NewProp_bIsLanMatch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateSessionExtraSettings, NumberOfPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrivateConnections_MetaData), NewProp_NumberOfPrivateConnections_MetaData) };
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAdvertise_MetaData), NewProp_bShouldAdvertise_MetaData) };
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinInProgress_MetaData), NewProp_bAllowJoinInProgress_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateSessionExtraSettings, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) }; // 1209445512
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bUsePresence_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bUsePresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePresence_MetaData), NewProp_bUsePresence_MetaData) };
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinViaPresence_MetaData), NewProp_bAllowJoinViaPresence_MetaData) };
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData), NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData) };
void Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bEnforceSanctions_SetBit(void* Obj)
{
	((FCreateSessionExtraSettings*)Obj)->bEnforceSanctions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bEnforceSanctions = { "bEnforceSanctions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateSessionExtraSettings), &Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bEnforceSanctions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceSanctions_MetaData), NewProp_bEnforceSanctions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bIsLanMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_NumberOfPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_Region_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bUsePresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewProp_bEnforceSanctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"CreateSessionExtraSettings",
	Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::PropPointers),
	sizeof(FCreateSessionExtraSettings),
	alignof(FCreateSessionExtraSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateSessionExtraSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.InnerSingleton, Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings.InnerSingleton;
}
// End ScriptStruct FCreateSessionExtraSettings

// Begin Class UEIK_CreateSession_AsyncFunction Function CreateEIKSession
struct Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics
{
	struct EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms
	{
		TMap<FString,FEIKAttribute> SessionSettings;
		FName SessionName;
		int32 NumberOfPublicConnections;
		FDedicatedServerSettings DedicatedServerSettings;
		FCreateSessionExtraSettings ExtraSettings;
		UEIK_CreateSession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method creates a session in EOS using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
#endif
		{ "CPP_Default_DedicatedServerSettings", "()" },
		{ "CPP_Default_ExtraSettings", "()" },
		{ "CPP_Default_NumberOfPublicConnections", "15" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Create EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method creates a session in EOS using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DedicatedServerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_DedicatedServerSettings = { "DedicatedServerSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, DedicatedServerSettings), Z_Construct_UScriptStruct_FDedicatedServerSettings, METADATA_PARAMS(0, nullptr) }; // 2573938363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, ExtraSettings), Z_Construct_UScriptStruct_FCreateSessionExtraSettings, METADATA_PARAMS(0, nullptr) }; // 1897744403
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, ReturnValue), Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_DedicatedServerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ExtraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_CreateSession_AsyncFunction, nullptr, "CreateEIKSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::EIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_CreateSession_AsyncFunction::execCreateEIKSession)
{
	P_GET_TMAP(FString,FEIKAttribute,Z_Param_SessionSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_STRUCT(FDedicatedServerSettings,Z_Param_DedicatedServerSettings);
	P_GET_STRUCT(FCreateSessionExtraSettings,Z_Param_ExtraSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_CreateSession_AsyncFunction**)Z_Param__Result=UEIK_CreateSession_AsyncFunction::CreateEIKSession(Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_NumberOfPublicConnections,Z_Param_DedicatedServerSettings,Z_Param_ExtraSettings);
	P_NATIVE_END;
}
// End Class UEIK_CreateSession_AsyncFunction Function CreateEIKSession

// Begin Class UEIK_CreateSession_AsyncFunction
void UEIK_CreateSession_AsyncFunction::StaticRegisterNativesUEIK_CreateSession_AsyncFunction()
{
	UClass* Class = UEIK_CreateSession_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateEIKSession", &UEIK_CreateSession_AsyncFunction::execCreateEIKSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_CreateSession_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_NoRegister()
{
	return UEIK_CreateSession_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_CreateSession_AsyncFunction_CreateEIKSession, "CreateEIKSession" }, // 2196043110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_CreateSession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 602094529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateSession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 602094529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::ClassParams = {
	&UEIK_CreateSession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_CreateSession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_CreateSession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_CreateSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_CreateSession_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_CreateSession_AsyncFunction>()
{
	return UEIK_CreateSession_AsyncFunction::StaticClass();
}
UEIK_CreateSession_AsyncFunction::UEIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_CreateSession_AsyncFunction);
UEIK_CreateSession_AsyncFunction::~UEIK_CreateSession_AsyncFunction() {}
// End Class UEIK_CreateSession_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDedicatedServerSettings::StaticStruct, Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics::NewStructOps, TEXT("DedicatedServerSettings"), &Z_Registration_Info_UScriptStruct_DedicatedServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDedicatedServerSettings), 2573938363U) },
		{ FCreateSessionExtraSettings::StaticStruct, Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics::NewStructOps, TEXT("CreateSessionExtraSettings"), &Z_Registration_Info_UScriptStruct_CreateSessionExtraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateSessionExtraSettings), 1897744403U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_CreateSession_AsyncFunction, UEIK_CreateSession_AsyncFunction::StaticClass, TEXT("UEIK_CreateSession_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_CreateSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_CreateSession_AsyncFunction), 2623516298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_2553602274(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

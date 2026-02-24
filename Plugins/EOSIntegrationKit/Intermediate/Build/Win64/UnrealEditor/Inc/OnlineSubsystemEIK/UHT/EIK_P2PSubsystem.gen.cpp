// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/P2PInterface/EIK_P2PSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_P2PSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_P2PSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_P2PSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EConnectionClosedReason();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EConnectionEstablishedType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENATType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENetworkConnectionType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EPacketReliability();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ERelayControl();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_P2P_PacketQueueInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_P2P_SocketId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_P2P_OnIncomingPacketQueueFullInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo;
class UScriptStruct* FEIK_P2P_OnIncomingPacketQueueFullInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_P2P_OnIncomingPacketQueueFullInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_P2P_OnIncomingPacketQueueFullInfo>()
{
	return FEIK_P2P_OnIncomingPacketQueueFullInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketQueueMaxSizeBytes_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The maximum size in bytes the incoming packet queue is allowed to use\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum size in bytes the incoming packet queue is allowed to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketQueueCurrentSizeBytes_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The current size in bytes the incoming packet queue is currently using\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current size in bytes the incoming packet queue is currently using" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPacketLocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Product User ID of the local user who is receiving the packet that would overflow the queue\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Product User ID of the local user who is receiving the packet that would overflow the queue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPacketChannel_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The channel the incoming packet is for\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The channel the incoming packet is for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPacketSizeBytes_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The size in bytes of the incoming packet (and related metadata) that would overflow the queue\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size in bytes of the incoming packet (and related metadata) that would overflow the queue" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PacketQueueMaxSizeBytes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PacketQueueCurrentSizeBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverflowPacketLocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverflowPacketChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverflowPacketSizeBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_P2P_OnIncomingPacketQueueFullInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_PacketQueueMaxSizeBytes = { "PacketQueueMaxSizeBytes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_P2P_OnIncomingPacketQueueFullInfo, PacketQueueMaxSizeBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketQueueMaxSizeBytes_MetaData), NewProp_PacketQueueMaxSizeBytes_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_PacketQueueCurrentSizeBytes = { "PacketQueueCurrentSizeBytes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_P2P_OnIncomingPacketQueueFullInfo, PacketQueueCurrentSizeBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketQueueCurrentSizeBytes_MetaData), NewProp_PacketQueueCurrentSizeBytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketLocalUserId = { "OverflowPacketLocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_P2P_OnIncomingPacketQueueFullInfo, OverflowPacketLocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPacketLocalUserId_MetaData), NewProp_OverflowPacketLocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketChannel = { "OverflowPacketChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_P2P_OnIncomingPacketQueueFullInfo, OverflowPacketChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPacketChannel_MetaData), NewProp_OverflowPacketChannel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketSizeBytes = { "OverflowPacketSizeBytes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_P2P_OnIncomingPacketQueueFullInfo, OverflowPacketSizeBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPacketSizeBytes_MetaData), NewProp_OverflowPacketSizeBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_PacketQueueMaxSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_PacketQueueCurrentSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketLocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewProp_OverflowPacketSizeBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_P2P_OnIncomingPacketQueueFullInfo",
	Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::PropPointers),
	sizeof(FEIK_P2P_OnIncomingPacketQueueFullInfo),
	alignof(FEIK_P2P_OnIncomingPacketQueueFullInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo.InnerSingleton;
}
// End ScriptStruct FEIK_P2P_OnIncomingPacketQueueFullInfo

// Begin Delegate FEIK_OnIncomingPacketQueueFull
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms
	{
		FEIK_P2P_OnIncomingPacketQueueFullInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms, Data), Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1314142342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnIncomingPacketQueueFull__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnIncomingPacketQueueFull_DelegateWrapper(const FScriptDelegate& EIK_OnIncomingPacketQueueFull, FEIK_P2P_OnIncomingPacketQueueFullInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms
	{
		FEIK_P2P_OnIncomingPacketQueueFullInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnIncomingPacketQueueFull_Parms Parms;
	Parms.Data=Data;
	EIK_OnIncomingPacketQueueFull.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnIncomingPacketQueueFull

// Begin Delegate FEIK_OnPeerConnectionClosed
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_EConnectionClosedReason> Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms, Reason), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EConnectionClosedReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) }; // 1527937001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnPeerConnectionClosed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnPeerConnectionClosed_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionClosed, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId, TEnumAsByte<EEIK_EConnectionClosedReason> const& Reason)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_EConnectionClosedReason> Reason;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionClosed_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.RemoteUserId=RemoteUserId;
	Parms.SocketId=SocketId;
	Parms.Reason=Reason;
	EIK_OnPeerConnectionClosed.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnPeerConnectionClosed

// Begin Delegate FEIK_OnPeerConnectionEstablished
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_EConnectionEstablishedType> ConnectionType;
		TEnumAsByte<EEIK_ENetworkConnectionType> NetworkType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NetworkType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms, ConnectionType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EConnectionEstablishedType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionType_MetaData), NewProp_ConnectionType_MetaData) }; // 4094885698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_NetworkType = { "NetworkType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms, NetworkType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENetworkConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkType_MetaData), NewProp_NetworkType_MetaData) }; // 3148925881
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_ConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::NewProp_NetworkType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnPeerConnectionEstablished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnPeerConnectionEstablished_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionEstablished, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId, TEnumAsByte<EEIK_EConnectionEstablishedType> const& ConnectionType, TEnumAsByte<EEIK_ENetworkConnectionType> const& NetworkType)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_EConnectionEstablishedType> ConnectionType;
		TEnumAsByte<EEIK_ENetworkConnectionType> NetworkType;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionEstablished_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.RemoteUserId=RemoteUserId;
	Parms.SocketId=SocketId;
	Parms.ConnectionType=ConnectionType;
	Parms.NetworkType=NetworkType;
	EIK_OnPeerConnectionEstablished.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnPeerConnectionEstablished

// Begin Delegate FEIK_OnPeerConnectionInterrupted
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::NewProp_SocketId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnPeerConnectionInterrupted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnPeerConnectionInterrupted_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionInterrupted, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnPeerConnectionInterrupted_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.RemoteUserId=RemoteUserId;
	Parms.SocketId=SocketId;
	EIK_OnPeerConnectionInterrupted.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnPeerConnectionInterrupted

// Begin Delegate FEIK_OnIncomingConnectionRequest
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::NewProp_SocketId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnIncomingConnectionRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnIncomingConnectionRequest_DelegateWrapper(const FScriptDelegate& EIK_OnIncomingConnectionRequest, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnIncomingConnectionRequest_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.RemoteUserId=RemoteUserId;
	Parms.SocketId=SocketId;
	EIK_OnIncomingConnectionRequest.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnIncomingConnectionRequest

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AcceptConnection
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Accept or Request a connection with a specific peer on a specific Socket ID. If this connection was not already locally accepted, we will securely message the peer, and trigger a PeerConnectionRequest notification notifying them of the connection request. If the PeerConnectionRequest notification is not bound for all Socket IDs or for the requested Socket ID in particular, the request will be silently ignored. If the remote peer accepts the connection, a notification will be broadcast to the EOS_P2P_AddNotifyPeerConnectionEstablished when the connection is ready to send packets. If multiple Socket IDs are accepted with one peer, they will share one physical socket. Even if a connection is already locally accepted, EOS_EResult::EOS_Success will still be returned if the input was valid.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AcceptConnection" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accept or Request a connection with a specific peer on a specific Socket ID. If this connection was not already locally accepted, we will securely message the peer, and trigger a PeerConnectionRequest notification notifying them of the connection request. If the PeerConnectionRequest notification is not bound for all Socket IDs or for the requested Socket ID in particular, the request will be silently ignored. If the remote peer accepts the connection, a notification will be broadcast to the EOS_P2P_AddNotifyPeerConnectionEstablished when the connection is ready to send packets. If multiple Socket IDs are accepted with one peer, they will share one physical socket. Even if a connection is already locally accepted, EOS_EResult::EOS_Success will still be returned if the input was valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AcceptConnection", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::EIK_P2PSubsystem_eventEIK_P2P_AcceptConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AcceptConnection)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_RemoteUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_AcceptConnection(Z_Param_Out_LocalUserId,Z_Param_Out_RemoteUserId,Z_Param_SocketId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AcceptConnection

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyIncomingPacketQueueFull
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for when our packet queue has become full. This event gives an opportunity to read packets to make room for new incoming packets. If this event fires and no packets are read by calling EOS_P2P_ReceivePacket or the packet queue size is not increased by EOS_P2P_SetPacketQueueSize, any packets that are received after this event are discarded until there is room again in the queue.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AddNotifyIncomingPacketQueueFull" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for when our packet queue has become full. This event gives an opportunity to read packets to make room for new incoming packets. If this event fires and no packets are read by calling EOS_P2P_ReceivePacket or the packet queue size is not increased by EOS_P2P_SetPacketQueueSize, any packets that are received after this event are discarded until there is room again in the queue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingPacketQueueFull__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1036427643
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AddNotifyIncomingPacketQueueFull", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyIncomingPacketQueueFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AddNotifyIncomingPacketQueueFull)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_P2P_AddNotifyIncomingPacketQueueFull(Z_Param_Out_LocalUserId,Z_Param_SocketId,FEIK_OnIncomingPacketQueueFull(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyIncomingPacketQueueFull

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionClosed
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for when a previously accepted connection that was either open or pending is closed.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AddNotifyPeerConnectionClosed" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for when a previously accepted connection that was either open or pending is closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 631263068
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AddNotifyPeerConnectionClosed", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionClosed)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_P2P_AddNotifyPeerConnectionClosed(Z_Param_Out_LocalUserId,Z_Param_SocketId,FEIK_OnPeerConnectionClosed(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionClosed

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionEstablished
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for when a connection is established. This is fired when we first connect to a peer, when we reconnect to a peer after a connection interruption, and when our underlying network connection type changes (for example, from a direct connection to relay, or vice versa). Network Connection Type changes will always be broadcast with a EOS_CET_Reconnection connection type, even if the connection was not interrupted.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AddNotifyPeerConnectionEstablished" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for when a connection is established. This is fired when we first connect to a peer, when we reconnect to a peer after a connection interruption, and when our underlying network connection type changes (for example, from a direct connection to relay, or vice versa). Network Connection Type changes will always be broadcast with a EOS_CET_Reconnection connection type, even if the connection was not interrupted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionEstablished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3590415715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AddNotifyPeerConnectionEstablished", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionEstablished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionEstablished)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_P2P_AddNotifyPeerConnectionEstablished(Z_Param_Out_LocalUserId,Z_Param_SocketId,FEIK_OnPeerConnectionEstablished(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionEstablished

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionInterrupted
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for when a previously opened connection is interrupted. The connection will automatically attempt to reestablish, but it may not be successful. If a connection reconnects, it will trigger the P2P PeerConnectionEstablished notification with the EOS_CET_Reconnection connection type. If a connection fails to reconnect, it will trigger the P2P PeerConnectionClosed notification.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AddNotifyPeerConnectionInterrupted" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for when a previously opened connection is interrupted. The connection will automatically attempt to reestablish, but it may not be successful. If a connection reconnects, it will trigger the P2P PeerConnectionEstablished notification with the EOS_CET_Reconnection connection type. If a connection fails to reconnect, it will trigger the P2P PeerConnectionClosed notification." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnPeerConnectionInterrupted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2053043702
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AddNotifyPeerConnectionInterrupted", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionInterrupted)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_P2P_AddNotifyPeerConnectionInterrupted(Z_Param_Out_LocalUserId,Z_Param_SocketId,FEIK_OnPeerConnectionInterrupted(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionInterrupted

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionRequest
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for incoming connection requests on a particular Socket ID, or optionally all Socket IDs. The bound function will only be called if the connection has not already been accepted.\n" },
#endif
		{ "DisplayName", "EOS_P2P_AddNotifyPeerConnectionRequest" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for incoming connection requests on a particular Socket ID, or optionally all Socket IDs. The bound function will only be called if the connection has not already been accepted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketId_MetaData), NewProp_SocketId_MetaData) }; // 652345109
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnIncomingConnectionRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2311159689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_AddNotifyPeerConnectionRequest", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::EIK_P2PSubsystem_eventEIK_P2P_AddNotifyPeerConnectionRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionRequest)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_P2P_AddNotifyPeerConnectionRequest(Z_Param_Out_LocalUserId,Z_Param_SocketId,FEIK_OnIncomingConnectionRequest(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_AddNotifyPeerConnectionRequest

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_ClearPacketQueue
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Clear queued incoming and outgoing packets.\n" },
#endif
		{ "DisplayName", "EOS_P2P_ClearPacketQueue" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear queued incoming and outgoing packets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_ClearPacketQueue", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::EIK_P2PSubsystem_eventEIK_P2P_ClearPacketQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_ClearPacketQueue)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_RemoteUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_ClearPacketQueue(Z_Param_Out_LocalUserId,Z_Param_Out_RemoteUserId,Z_Param_SocketId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_ClearPacketQueue

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_CloseConnection
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For all (or optionally one specific) Socket ID(s) with a specific peer: stop receiving packets, drop any locally queued packets, and if no other Socket ID is using the connection with the peer, close the underlying connection. If your application wants to migrate an existing connection with a peer it already connected to, it is recommended to call EOS_P2P_AcceptConnection with the new Socket ID first before calling EOS_P2P_CloseConnection, to prevent the shared physical socket from being torn down prematurely.\n" },
#endif
		{ "DisplayName", "EOS_P2P_CloseConnection" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For all (or optionally one specific) Socket ID(s) with a specific peer: stop receiving packets, drop any locally queued packets, and if no other Socket ID is using the connection with the peer, close the underlying connection. If your application wants to migrate an existing connection with a peer it already connected to, it is recommended to call EOS_P2P_AcceptConnection with the new Socket ID first before calling EOS_P2P_CloseConnection, to prevent the shared physical socket from being torn down prematurely." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_CloseConnection", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::EIK_P2PSubsystem_eventEIK_P2P_CloseConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_CloseConnection)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_RemoteUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_CloseConnection(Z_Param_Out_LocalUserId,Z_Param_Out_RemoteUserId,Z_Param_SocketId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_CloseConnection

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_CloseConnections
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_P2P_SocketId SocketId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Close any open Connections for a specific Peer Connection ID.\n" },
#endif
		{ "DisplayName", "EOS_P2P_CloseConnections" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close any open Connections for a specific Peer Connection ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_CloseConnections", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::EIK_P2PSubsystem_eventEIK_P2P_CloseConnections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_CloseConnections)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_CloseConnections(Z_Param_Out_LocalUserId,Z_Param_SocketId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_CloseConnections

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_GetNATType
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_GetNATType_Parms
	{
		TEnumAsByte<EEIK_ENATType> OutNATType;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get our last-queried NAT-type, if it has been successfully queried.\n" },
#endif
		{ "DisplayName", "EOS_P2P_GetNATType" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get our last-queried NAT-type, if it has been successfully queried." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutNATType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::NewProp_OutNATType = { "OutNATType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNATType_Parms, OutNATType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENATType, METADATA_PARAMS(0, nullptr) }; // 2930682262
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNATType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::NewProp_OutNATType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_GetNATType", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetNATType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetNATType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_GetNATType)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutNATType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_GetNATType((TEnumAsByte<EEIK_ENATType>&)(Z_Param_Out_OutNATType));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_GetNATType

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_GetNextReceivedPacketSize
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Channel;
		int32 OutPacketSizeBytes;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the size of the packet that will be returned by ReceivePacket for a particular user, if there is any available packets to be retrieved.\n" },
#endif
		{ "DisplayName", "EOS_P2P_GetNextReceivedPacketSize" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the size of the packet that will be returned by ReceivePacket for a particular user, if there is any available packets to be retrieved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutPacketSizeBytes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_OutPacketSizeBytes = { "OutPacketSizeBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms, OutPacketSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_OutPacketSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_GetNextReceivedPacketSize", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetNextReceivedPacketSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_GetNextReceivedPacketSize)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPacketSizeBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_GetNextReceivedPacketSize(Z_Param_Out_LocalUserId,Z_Param_Channel,Z_Param_Out_OutPacketSizeBytes);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_GetNextReceivedPacketSize

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_GetPacketQueueInfo
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_GetPacketQueueInfo_Parms
	{
		FEIK_P2P_PacketQueueInfo OutPacketQueueInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the current cached information related to the incoming and outgoing packet queues.\n" },
#endif
		{ "DisplayName", "EOS_P2P_GetPacketQueueInfo" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current cached information related to the incoming and outgoing packet queues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPacketQueueInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::NewProp_OutPacketQueueInfo = { "OutPacketQueueInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetPacketQueueInfo_Parms, OutPacketQueueInfo), Z_Construct_UScriptStruct_FEIK_P2P_PacketQueueInfo, METADATA_PARAMS(0, nullptr) }; // 2834394041
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetPacketQueueInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::NewProp_OutPacketQueueInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_GetPacketQueueInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetPacketQueueInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetPacketQueueInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_GetPacketQueueInfo)
{
	P_GET_STRUCT_REF(FEIK_P2P_PacketQueueInfo,Z_Param_Out_OutPacketQueueInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_GetPacketQueueInfo(Z_Param_Out_OutPacketQueueInfo);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_GetPacketQueueInfo

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_GetPortRange
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms
	{
		int32 OutPort;
		int32 OutNumAdditionalPortsToTry;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the current chosen port and the amount of other ports to try above the chosen port if the chosen port is unavailable.\n" },
#endif
		{ "DisplayName", "EOS_P2P_GetPortRange" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current chosen port and the amount of other ports to try above the chosen port if the chosen port is unavailable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumAdditionalPortsToTry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_OutPort = { "OutPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms, OutPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_OutNumAdditionalPortsToTry = { "OutNumAdditionalPortsToTry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms, OutNumAdditionalPortsToTry), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_OutPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_OutNumAdditionalPortsToTry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_GetPortRange", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetPortRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_GetPortRange)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumAdditionalPortsToTry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_GetPortRange(Z_Param_Out_OutPort,Z_Param_Out_OutNumAdditionalPortsToTry);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_GetPortRange

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_GetRelayControl
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_GetRelayControl_Parms
	{
		TEnumAsByte<EEIK_ERelayControl> OutControl;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the current relay control setting.\n" },
#endif
		{ "DisplayName", "EOS_P2P_GetRelayControl" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current relay control setting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutControl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::NewProp_OutControl = { "OutControl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetRelayControl_Parms, OutControl), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ERelayControl, METADATA_PARAMS(0, nullptr) }; // 1597249647
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_GetRelayControl_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::NewProp_OutControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_GetRelayControl", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetRelayControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::EIK_P2PSubsystem_eventEIK_P2P_GetRelayControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_GetRelayControl)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_GetRelayControl((TEnumAsByte<EEIK_ERelayControl>&)(Z_Param_Out_OutControl));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_GetRelayControl

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_ReceivePacket
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 MaxDataSizeBytes;
		int32 RequestedChannel;
		FEIK_P2P_SocketId OutSocketId;
		FEIK_ProductUserId OutPeerId;
		int32 OutChannel;
		TArray<uint8> OutData;
		int32 OutBytesRead;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Receive the next packet for the local user, and information associated with this packet, if it exists.\n" },
#endif
		{ "DisplayName", "EOS_P2P_ReceivePacket" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receive the next packet for the local user, and information associated with this packet, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDataSizeBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSocketId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPeerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutBytesRead;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_MaxDataSizeBytes = { "MaxDataSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, MaxDataSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_RequestedChannel = { "RequestedChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, RequestedChannel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutSocketId = { "OutSocketId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, OutSocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutPeerId = { "OutPeerId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, OutPeerId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, OutChannel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutBytesRead = { "OutBytesRead", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, OutBytesRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_MaxDataSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_RequestedChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutSocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutPeerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_OutBytesRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_ReceivePacket", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::EIK_P2PSubsystem_eventEIK_P2P_ReceivePacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_ReceivePacket)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxDataSizeBytes);
	P_GET_PROPERTY(FIntProperty,Z_Param_RequestedChannel);
	P_GET_STRUCT_REF(FEIK_P2P_SocketId,Z_Param_Out_OutSocketId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_OutPeerId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutChannel);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBytesRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_ReceivePacket(Z_Param_Out_LocalUserId,Z_Param_MaxDataSizeBytes,Z_Param_RequestedChannel,Z_Param_Out_OutSocketId,Z_Param_Out_OutPeerId,Z_Param_Out_OutChannel,Z_Param_Out_OutData,Z_Param_Out_OutBytesRead);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_ReceivePacket

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyIncomingPacketQueueFull
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyIncomingPacketQueueFull_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop listening for full incoming packet queue events on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_P2P_RemoveNotifyIncomingPacketQueueFull" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop listening for full incoming packet queue events on a previously bound handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyIncomingPacketQueueFull_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationId_MetaData), NewProp_NotificationId_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_RemoveNotifyIncomingPacketQueueFull", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyIncomingPacketQueueFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyIncomingPacketQueueFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyIncomingPacketQueueFull)
{
	P_GET_STRUCT_REF(FEIK_NotificationId,Z_Param_Out_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_P2PSubsystem::EIK_P2P_RemoveNotifyIncomingPacketQueueFull(Z_Param_Out_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyIncomingPacketQueueFull

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionClosed
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionClosed_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop notifications for connections being closed on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_P2P_RemoveNotifyPeerConnectionClosed" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop notifications for connections being closed on a previously bound handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionClosed_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationId_MetaData), NewProp_NotificationId_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_RemoveNotifyPeerConnectionClosed", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionClosed)
{
	P_GET_STRUCT_REF(FEIK_NotificationId,Z_Param_Out_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_P2PSubsystem::EIK_P2P_RemoveNotifyPeerConnectionClosed(Z_Param_Out_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionClosed

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionEstablished
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionEstablished_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop notifications for connections being established on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_P2P_RemoveNotifyPeerConnectionEstablished" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop notifications for connections being established on a previously bound handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionEstablished_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationId_MetaData), NewProp_NotificationId_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_RemoveNotifyPeerConnectionEstablished", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionEstablished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionEstablished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionEstablished)
{
	P_GET_STRUCT_REF(FEIK_NotificationId,Z_Param_Out_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_P2PSubsystem::EIK_P2P_RemoveNotifyPeerConnectionEstablished(Z_Param_Out_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionEstablished

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionInterrupted
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionInterrupted_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop notifications for connections being interrupted on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_P2P_RemoveNotifyPeerConnectionInterrupted" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop notifications for connections being interrupted on a previously bound handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionInterrupted_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationId_MetaData), NewProp_NotificationId_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_RemoveNotifyPeerConnectionInterrupted", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionInterrupted)
{
	P_GET_STRUCT_REF(FEIK_NotificationId,Z_Param_Out_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_P2PSubsystem::EIK_P2P_RemoveNotifyPeerConnectionInterrupted(Z_Param_Out_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionInterrupted

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionRequest
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionRequest_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop listening for connection requests on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_P2P_RemoveNotifyPeerConnectionRequest" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop listening for connection requests on a previously bound handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionRequest_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationId_MetaData), NewProp_NotificationId_MetaData) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_RemoveNotifyPeerConnectionRequest", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::EIK_P2PSubsystem_eventEIK_P2P_RemoveNotifyPeerConnectionRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionRequest)
{
	P_GET_STRUCT_REF(FEIK_NotificationId,Z_Param_Out_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_P2PSubsystem::EIK_P2P_RemoveNotifyPeerConnectionRequest(Z_Param_Out_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_RemoveNotifyPeerConnectionRequest

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_SendPacket
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId RemoteUserId;
		FEIK_P2P_SocketId SocketId;
		int32 Channel;
		TArray<uint8> Data;
		bool bAllowDelayedDelivery;
		bool bDisableAutoAcceptConnection;
		TEnumAsByte<EEIK_EPacketReliability> Reliability;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Send a packet to a peer at the specified address. If there is already an open connection to this peer, it will be sent immediately. If there is no open connection, an attempt to connect to the peer will be made. An EOS_Success result only means the data was accepted to be sent, not that it has been successfully delivered to the peer.\n" },
#endif
		{ "DisplayName", "EOS_P2P_SendPacket" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a packet to a peer at the specified address. If there is already an open connection to this peer, it will be sent immediately. If there is no open connection, an attempt to connect to the peer will be made. An EOS_Success result only means the data was accepted to be sent, not that it has been successfully delivered to the peer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reliability_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bAllowDelayedDelivery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDelayedDelivery;
	static void NewProp_bDisableAutoAcceptConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoAcceptConnection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reliability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_RemoteUserId = { "RemoteUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, RemoteUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteUserId_MetaData), NewProp_RemoteUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, SocketId), Z_Construct_UScriptStruct_FEIK_P2P_SocketId, METADATA_PARAMS(0, nullptr) }; // 652345109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bAllowDelayedDelivery_SetBit(void* Obj)
{
	((EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms*)Obj)->bAllowDelayedDelivery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bAllowDelayedDelivery = { "bAllowDelayedDelivery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms), &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bAllowDelayedDelivery_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bDisableAutoAcceptConnection_SetBit(void* Obj)
{
	((EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms*)Obj)->bDisableAutoAcceptConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bDisableAutoAcceptConnection = { "bDisableAutoAcceptConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms), &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bDisableAutoAcceptConnection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Reliability = { "Reliability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, Reliability), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EPacketReliability, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reliability_MetaData), NewProp_Reliability_MetaData) }; // 3841019482
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_RemoteUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bAllowDelayedDelivery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_bDisableAutoAcceptConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_Reliability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_SendPacket", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::EIK_P2PSubsystem_eventEIK_P2P_SendPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_SendPacket)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_RemoteUserId);
	P_GET_STRUCT(FEIK_P2P_SocketId,Z_Param_SocketId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bAllowDelayedDelivery);
	P_GET_UBOOL(Z_Param_bDisableAutoAcceptConnection);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Reliability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_SendPacket(Z_Param_Out_LocalUserId,Z_Param_Out_RemoteUserId,Z_Param_SocketId,Z_Param_Channel,Z_Param_Out_Data,Z_Param_bAllowDelayedDelivery,Z_Param_bDisableAutoAcceptConnection,(TEnumAsByte<EEIK_EPacketReliability>&)(Z_Param_Out_Reliability));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_SendPacket

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_SetPacketQueueSize
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms
	{
		int64 IncomingPacketQueueMaxSizeBytes;
		int64 OutgoingPacketQueueMaxSizeBytes;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the maximum packet queue sizes that packets waiting to be sent or received can use. If the packet queue size is made smaller than the current queue size while there are packets in the queue that would push this packet size over, existing packets are kept but new packets may not be added to the full queue until enough packets are sent or received.\n" },
#endif
		{ "DisplayName", "EOS_P2P_SetPacketQueueSize" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum packet queue sizes that packets waiting to be sent or received can use. If the packet queue size is made smaller than the current queue size while there are packets in the queue that would push this packet size over, existing packets are kept but new packets may not be added to the full queue until enough packets are sent or received." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IncomingPacketQueueMaxSizeBytes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutgoingPacketQueueMaxSizeBytes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_IncomingPacketQueueMaxSizeBytes = { "IncomingPacketQueueMaxSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms, IncomingPacketQueueMaxSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_OutgoingPacketQueueMaxSizeBytes = { "OutgoingPacketQueueMaxSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms, OutgoingPacketQueueMaxSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_IncomingPacketQueueMaxSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_OutgoingPacketQueueMaxSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_SetPacketQueueSize", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetPacketQueueSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_SetPacketQueueSize)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_IncomingPacketQueueMaxSizeBytes);
	P_GET_PROPERTY(FInt64Property,Z_Param_OutgoingPacketQueueMaxSizeBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_SetPacketQueueSize(Z_Param_IncomingPacketQueueMaxSizeBytes,Z_Param_OutgoingPacketQueueMaxSizeBytes);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_SetPacketQueueSize

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_SetPortRange
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms
	{
		int32 Port;
		int32 MaxAdditionalPortsToTry;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set configuration options related to network ports.\n" },
#endif
		{ "DisplayName", "EOS_P2P_SetPortRange" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set configuration options related to network ports." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAdditionalPortsToTry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_MaxAdditionalPortsToTry = { "MaxAdditionalPortsToTry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms, MaxAdditionalPortsToTry), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_MaxAdditionalPortsToTry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_SetPortRange", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetPortRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_SetPortRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAdditionalPortsToTry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_SetPortRange(Z_Param_Port,Z_Param_MaxAdditionalPortsToTry);
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_SetPortRange

// Begin Class UEIK_P2PSubsystem Function EIK_P2P_SetRelayControl
struct Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics
{
	struct EIK_P2PSubsystem_eventEIK_P2P_SetRelayControl_Parms
	{
		TEnumAsByte<EEIK_ERelayControl> Control;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set how relay servers are to be used. This setting does not immediately apply to existing connections, but may apply to existing connections if the connection requires renegotiation.\n" },
#endif
		{ "DisplayName", "EOS_P2P_SetRelayControl" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set how relay servers are to be used. This setting does not immediately apply to existing connections, but may apply to existing connections if the connection requires renegotiation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Control;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetRelayControl_Parms, Control), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ERelayControl, METADATA_PARAMS(0, nullptr) }; // 1597249647
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2PSubsystem_eventEIK_P2P_SetRelayControl_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2PSubsystem, nullptr, "EIK_P2P_SetRelayControl", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetRelayControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::EIK_P2PSubsystem_eventEIK_P2P_SetRelayControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2PSubsystem::execEIK_P2P_SetRelayControl)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Control);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_P2PSubsystem::EIK_P2P_SetRelayControl(EEIK_ERelayControl(Z_Param_Control));
	P_NATIVE_END;
}
// End Class UEIK_P2PSubsystem Function EIK_P2P_SetRelayControl

// Begin Class UEIK_P2PSubsystem
void UEIK_P2PSubsystem::StaticRegisterNativesUEIK_P2PSubsystem()
{
	UClass* Class = UEIK_P2PSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_P2P_AcceptConnection", &UEIK_P2PSubsystem::execEIK_P2P_AcceptConnection },
		{ "EIK_P2P_AddNotifyIncomingPacketQueueFull", &UEIK_P2PSubsystem::execEIK_P2P_AddNotifyIncomingPacketQueueFull },
		{ "EIK_P2P_AddNotifyPeerConnectionClosed", &UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionClosed },
		{ "EIK_P2P_AddNotifyPeerConnectionEstablished", &UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionEstablished },
		{ "EIK_P2P_AddNotifyPeerConnectionInterrupted", &UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionInterrupted },
		{ "EIK_P2P_AddNotifyPeerConnectionRequest", &UEIK_P2PSubsystem::execEIK_P2P_AddNotifyPeerConnectionRequest },
		{ "EIK_P2P_ClearPacketQueue", &UEIK_P2PSubsystem::execEIK_P2P_ClearPacketQueue },
		{ "EIK_P2P_CloseConnection", &UEIK_P2PSubsystem::execEIK_P2P_CloseConnection },
		{ "EIK_P2P_CloseConnections", &UEIK_P2PSubsystem::execEIK_P2P_CloseConnections },
		{ "EIK_P2P_GetNATType", &UEIK_P2PSubsystem::execEIK_P2P_GetNATType },
		{ "EIK_P2P_GetNextReceivedPacketSize", &UEIK_P2PSubsystem::execEIK_P2P_GetNextReceivedPacketSize },
		{ "EIK_P2P_GetPacketQueueInfo", &UEIK_P2PSubsystem::execEIK_P2P_GetPacketQueueInfo },
		{ "EIK_P2P_GetPortRange", &UEIK_P2PSubsystem::execEIK_P2P_GetPortRange },
		{ "EIK_P2P_GetRelayControl", &UEIK_P2PSubsystem::execEIK_P2P_GetRelayControl },
		{ "EIK_P2P_ReceivePacket", &UEIK_P2PSubsystem::execEIK_P2P_ReceivePacket },
		{ "EIK_P2P_RemoveNotifyIncomingPacketQueueFull", &UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyIncomingPacketQueueFull },
		{ "EIK_P2P_RemoveNotifyPeerConnectionClosed", &UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionClosed },
		{ "EIK_P2P_RemoveNotifyPeerConnectionEstablished", &UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionEstablished },
		{ "EIK_P2P_RemoveNotifyPeerConnectionInterrupted", &UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionInterrupted },
		{ "EIK_P2P_RemoveNotifyPeerConnectionRequest", &UEIK_P2PSubsystem::execEIK_P2P_RemoveNotifyPeerConnectionRequest },
		{ "EIK_P2P_SendPacket", &UEIK_P2PSubsystem::execEIK_P2P_SendPacket },
		{ "EIK_P2P_SetPacketQueueSize", &UEIK_P2PSubsystem::execEIK_P2P_SetPacketQueueSize },
		{ "EIK_P2P_SetPortRange", &UEIK_P2PSubsystem::execEIK_P2P_SetPortRange },
		{ "EIK_P2P_SetRelayControl", &UEIK_P2PSubsystem::execEIK_P2P_SetRelayControl },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_P2PSubsystem);
UClass* Z_Construct_UClass_UEIK_P2PSubsystem_NoRegister()
{
	return UEIK_P2PSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_P2PSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AcceptConnection, "EIK_P2P_AcceptConnection" }, // 2020650659
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyIncomingPacketQueueFull, "EIK_P2P_AddNotifyIncomingPacketQueueFull" }, // 2245870631
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionClosed, "EIK_P2P_AddNotifyPeerConnectionClosed" }, // 2484543228
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionEstablished, "EIK_P2P_AddNotifyPeerConnectionEstablished" }, // 528818721
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionInterrupted, "EIK_P2P_AddNotifyPeerConnectionInterrupted" }, // 3859797368
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_AddNotifyPeerConnectionRequest, "EIK_P2P_AddNotifyPeerConnectionRequest" }, // 2382370877
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ClearPacketQueue, "EIK_P2P_ClearPacketQueue" }, // 1839803449
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnection, "EIK_P2P_CloseConnection" }, // 3304288466
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_CloseConnections, "EIK_P2P_CloseConnections" }, // 597516857
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNATType, "EIK_P2P_GetNATType" }, // 3378916130
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetNextReceivedPacketSize, "EIK_P2P_GetNextReceivedPacketSize" }, // 1656845578
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPacketQueueInfo, "EIK_P2P_GetPacketQueueInfo" }, // 1518380741
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetPortRange, "EIK_P2P_GetPortRange" }, // 178261245
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_GetRelayControl, "EIK_P2P_GetRelayControl" }, // 2451912096
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_ReceivePacket, "EIK_P2P_ReceivePacket" }, // 3965840256
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyIncomingPacketQueueFull, "EIK_P2P_RemoveNotifyIncomingPacketQueueFull" }, // 2316864746
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionClosed, "EIK_P2P_RemoveNotifyPeerConnectionClosed" }, // 3897927071
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionEstablished, "EIK_P2P_RemoveNotifyPeerConnectionEstablished" }, // 2394404618
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionInterrupted, "EIK_P2P_RemoveNotifyPeerConnectionInterrupted" }, // 4041640465
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_RemoveNotifyPeerConnectionRequest, "EIK_P2P_RemoveNotifyPeerConnectionRequest" }, // 1595709262
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SendPacket, "EIK_P2P_SendPacket" }, // 47597155
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPacketQueueSize, "EIK_P2P_SetPacketQueueSize" }, // 3159204162
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetPortRange, "EIK_P2P_SetPortRange" }, // 676005566
		{ &Z_Construct_UFunction_UEIK_P2PSubsystem_EIK_P2P_SetRelayControl, "EIK_P2P_SetRelayControl" }, // 176216372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_P2PSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_P2PSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2PSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_P2PSubsystem_Statics::ClassParams = {
	&UEIK_P2PSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2PSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_P2PSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_P2PSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_P2PSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_P2PSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_P2PSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_P2PSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_P2PSubsystem>()
{
	return UEIK_P2PSubsystem::StaticClass();
}
UEIK_P2PSubsystem::UEIK_P2PSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_P2PSubsystem);
UEIK_P2PSubsystem::~UEIK_P2PSubsystem() {}
// End Class UEIK_P2PSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_P2P_OnIncomingPacketQueueFullInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics::NewStructOps, TEXT("EIK_P2P_OnIncomingPacketQueueFullInfo"), &Z_Registration_Info_UScriptStruct_EIK_P2P_OnIncomingPacketQueueFullInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_P2P_OnIncomingPacketQueueFullInfo), 1314142342U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_P2PSubsystem, UEIK_P2PSubsystem::StaticClass, TEXT("UEIK_P2PSubsystem"), &Z_Registration_Info_UClass_UEIK_P2PSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_P2PSubsystem), 3350017854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_485577941(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

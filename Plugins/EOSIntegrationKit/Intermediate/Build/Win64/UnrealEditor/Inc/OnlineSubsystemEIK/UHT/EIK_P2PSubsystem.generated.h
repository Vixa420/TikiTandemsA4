// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/P2PInterface/EIK_P2PSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_NotificationId;
struct FEIK_P2P_OnIncomingPacketQueueFullInfo;
struct FEIK_P2P_PacketQueueInfo;
struct FEIK_P2P_SocketId;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_P2PSubsystem_generated_h
#error "EIK_P2PSubsystem.generated.h already included, missing '#pragma once' in EIK_P2PSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_P2PSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_P2P_OnIncomingPacketQueueFullInfo_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_P2P_OnIncomingPacketQueueFullInfo>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_53_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnIncomingPacketQueueFull_DelegateWrapper(const FScriptDelegate& EIK_OnIncomingPacketQueueFull, FEIK_P2P_OnIncomingPacketQueueFullInfo const& Data);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_54_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnPeerConnectionClosed_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionClosed, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId, TEnumAsByte<EEIK_EConnectionClosedReason> const& Reason);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_55_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnPeerConnectionEstablished_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionEstablished, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId, TEnumAsByte<EEIK_EConnectionEstablishedType> const& ConnectionType, TEnumAsByte<EEIK_ENetworkConnectionType> const& NetworkType);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_56_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnPeerConnectionInterrupted_DelegateWrapper(const FScriptDelegate& EIK_OnPeerConnectionInterrupted, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_57_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_OnIncomingConnectionRequest_DelegateWrapper(const FScriptDelegate& EIK_OnIncomingConnectionRequest, FEIK_ProductUserId const& LocalUserId, FEIK_ProductUserId const& RemoteUserId, FEIK_P2P_SocketId const& SocketId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_P2P_SetRelayControl); \
	DECLARE_FUNCTION(execEIK_P2P_SetPortRange); \
	DECLARE_FUNCTION(execEIK_P2P_SetPacketQueueSize); \
	DECLARE_FUNCTION(execEIK_P2P_SendPacket); \
	DECLARE_FUNCTION(execEIK_P2P_RemoveNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEIK_P2P_RemoveNotifyPeerConnectionInterrupted); \
	DECLARE_FUNCTION(execEIK_P2P_RemoveNotifyPeerConnectionEstablished); \
	DECLARE_FUNCTION(execEIK_P2P_RemoveNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEIK_P2P_RemoveNotifyIncomingPacketQueueFull); \
	DECLARE_FUNCTION(execEIK_P2P_ReceivePacket); \
	DECLARE_FUNCTION(execEIK_P2P_GetRelayControl); \
	DECLARE_FUNCTION(execEIK_P2P_GetPortRange); \
	DECLARE_FUNCTION(execEIK_P2P_GetPacketQueueInfo); \
	DECLARE_FUNCTION(execEIK_P2P_GetNextReceivedPacketSize); \
	DECLARE_FUNCTION(execEIK_P2P_GetNATType); \
	DECLARE_FUNCTION(execEIK_P2P_CloseConnections); \
	DECLARE_FUNCTION(execEIK_P2P_CloseConnection); \
	DECLARE_FUNCTION(execEIK_P2P_ClearPacketQueue); \
	DECLARE_FUNCTION(execEIK_P2P_AddNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEIK_P2P_AddNotifyPeerConnectionInterrupted); \
	DECLARE_FUNCTION(execEIK_P2P_AddNotifyPeerConnectionEstablished); \
	DECLARE_FUNCTION(execEIK_P2P_AddNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEIK_P2P_AddNotifyIncomingPacketQueueFull); \
	DECLARE_FUNCTION(execEIK_P2P_AcceptConnection);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_P2PSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_P2PSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_P2PSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_P2PSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_P2PSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_P2PSubsystem(UEIK_P2PSubsystem&&); \
	UEIK_P2PSubsystem(const UEIK_P2PSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_P2PSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_P2PSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_P2PSubsystem) \
	NO_API virtual ~UEIK_P2PSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_59_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_P2PSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2PSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

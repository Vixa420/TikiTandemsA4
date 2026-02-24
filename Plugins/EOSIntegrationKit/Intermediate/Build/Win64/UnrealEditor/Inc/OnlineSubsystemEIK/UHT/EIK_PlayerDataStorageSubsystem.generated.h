// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEIK_HPlayerDataStorageFileTransferRequest;
struct FEIK_PlayerDataStorage_FileMetadata;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_PlayerDataStorageSubsystem_generated_h
#error "EIK_PlayerDataStorageSubsystem.generated.h already included, missing '#pragma once' in EIK_PlayerDataStorageSubsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_PlayerDataStorageSubsystem_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_PlayerDataStorageFileTransferRequest_Release); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorageFileTransferRequest_GetFilename); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_GetFileMetadataCount); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_FileMetadata_Release); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_CopyFileMetadataByFilename); \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_CopyFileMetadataAtIndex);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_PlayerDataStorageSubsystem(); \
	friend struct Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_PlayerDataStorageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_PlayerDataStorageSubsystem)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_PlayerDataStorageSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_PlayerDataStorageSubsystem(UEIK_PlayerDataStorageSubsystem&&); \
	UEIK_PlayerDataStorageSubsystem(const UEIK_PlayerDataStorageSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_PlayerDataStorageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_PlayerDataStorageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_PlayerDataStorageSubsystem) \
	NO_API virtual ~UEIK_PlayerDataStorageSubsystem();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_13_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_PlayerDataStorageSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

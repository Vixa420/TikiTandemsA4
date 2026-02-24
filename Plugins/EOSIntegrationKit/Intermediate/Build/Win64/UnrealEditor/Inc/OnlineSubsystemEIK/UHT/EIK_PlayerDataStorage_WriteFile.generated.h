// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_PlayerDataStorage_WriteFile;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_WriteFile_generated_h
#error "EIK_PlayerDataStorage_WriteFile.generated.h already included, missing '#pragma once' in EIK_PlayerDataStorage_WriteFile.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_WriteFile_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_PlayerDataStorage_WriteFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_WriteFileDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_14_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback, FEIK_ProductUserId const& LocalUserId, const FString& Filename, int32 BytesTransferred, int32 TotalFileSizeBytes);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_15_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_PlayerDataStorage_OnWriteFileDataCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnWriteFileDataCallback);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_WriteFile);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_PlayerDataStorage_WriteFile(); \
	friend struct Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics; \
public: \
	DECLARE_CLASS(UEIK_PlayerDataStorage_WriteFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_PlayerDataStorage_WriteFile)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_PlayerDataStorage_WriteFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_PlayerDataStorage_WriteFile(UEIK_PlayerDataStorage_WriteFile&&); \
	UEIK_PlayerDataStorage_WriteFile(const UEIK_PlayerDataStorage_WriteFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_PlayerDataStorage_WriteFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_PlayerDataStorage_WriteFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_PlayerDataStorage_WriteFile) \
	NO_API virtual ~UEIK_PlayerDataStorage_WriteFile();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_16_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_PlayerDataStorage_WriteFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

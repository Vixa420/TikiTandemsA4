// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_PlayerDataStorage_QueryFile;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_QueryFile_generated_h
#error "EIK_PlayerDataStorage_QueryFile.generated.h already included, missing '#pragma once' in EIK_PlayerDataStorage_QueryFile.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_QueryFile_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnQueryFileComplete_DelegateWrapper(const FMulticastScriptDelegate& OnQueryFileComplete, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_QueryFile);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_PlayerDataStorage_QueryFile(); \
	friend struct Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFile_Statics; \
public: \
	DECLARE_CLASS(UEIK_PlayerDataStorage_QueryFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_PlayerDataStorage_QueryFile)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_PlayerDataStorage_QueryFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_PlayerDataStorage_QueryFile(UEIK_PlayerDataStorage_QueryFile&&); \
	UEIK_PlayerDataStorage_QueryFile(const UEIK_PlayerDataStorage_QueryFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_PlayerDataStorage_QueryFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_PlayerDataStorage_QueryFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_PlayerDataStorage_QueryFile) \
	NO_API virtual ~UEIK_PlayerDataStorage_QueryFile();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_15_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_PlayerDataStorage_QueryFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

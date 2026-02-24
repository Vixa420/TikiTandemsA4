// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_PlayerDataStorage_DuplicateFile;
struct FEIK_ProductUserId;
#ifdef ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_DuplicateFile_generated_h
#error "EIK_PlayerDataStorage_DuplicateFile.generated.h already included, missing '#pragma once' in EIK_PlayerDataStorage_DuplicateFile.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_PlayerDataStorage_DuplicateFile_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_13_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_PlayerDataStorage_DuplicateFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_DuplicateFileDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_PlayerDataStorage_DuplicateFile);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_PlayerDataStorage_DuplicateFile(); \
	friend struct Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics; \
public: \
	DECLARE_CLASS(UEIK_PlayerDataStorage_DuplicateFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_PlayerDataStorage_DuplicateFile)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_PlayerDataStorage_DuplicateFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_PlayerDataStorage_DuplicateFile(UEIK_PlayerDataStorage_DuplicateFile&&); \
	UEIK_PlayerDataStorage_DuplicateFile(const UEIK_PlayerDataStorage_DuplicateFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_PlayerDataStorage_DuplicateFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_PlayerDataStorage_DuplicateFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_PlayerDataStorage_DuplicateFile) \
	NO_API virtual ~UEIK_PlayerDataStorage_DuplicateFile();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_15_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_PlayerDataStorage_DuplicateFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

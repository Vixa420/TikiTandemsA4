// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AntiCheat/AntiCheatClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ONLINESUBSYSTEMEIK_AntiCheatClient_generated_h
#error "AntiCheatClient.generated.h already included, missing '#pragma once' in AntiCheatClient.h"
#endif
#define ONLINESUBSYSTEMEIK_AntiCheatClient_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_19_DELEGATE \
ONLINESUBSYSTEMEIK_API void FSendMessageToServer_DelegateWrapper(const FMulticastScriptDelegate& SendMessageToServer, TArray<uint8> const& Message);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecievedMessageFromServer); \
	DECLARE_FUNCTION(execRegisterAntiCheatClient); \
	DECLARE_FUNCTION(execIsAntiCheatClientAvailable);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAntiCheatClient(); \
	friend struct Z_Construct_UClass_UAntiCheatClient_Statics; \
public: \
	DECLARE_CLASS(UAntiCheatClient, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UAntiCheatClient)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAntiCheatClient(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAntiCheatClient(UAntiCheatClient&&); \
	UAntiCheatClient(const UAntiCheatClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAntiCheatClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAntiCheatClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAntiCheatClient) \
	NO_API virtual ~UAntiCheatClient();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_20_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UAntiCheatClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

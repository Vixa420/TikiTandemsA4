// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_P2P_QueryNATType;
#ifdef ONLINESUBSYSTEMEIK_EIK_P2P_QueryNATType_generated_h
#error "EIK_P2P_QueryNATType.generated.h already included, missing '#pragma once' in EIK_P2P_QueryNATType.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_P2P_QueryNATType_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_10_DELEGATE \
ONLINESUBSYSTEMEIK_API void FEIK_P2P_QueryNATTypeDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_P2P_QueryNATTypeDelegate, TEnumAsByte<EEIK_Result> const& Result, TEnumAsByte<EEIK_ENATType> const& NATType);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIK_P2P_QueryNATType);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_P2P_QueryNATType(); \
	friend struct Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics; \
public: \
	DECLARE_CLASS(UEIK_P2P_QueryNATType, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_P2P_QueryNATType)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_P2P_QueryNATType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_P2P_QueryNATType(UEIK_P2P_QueryNATType&&); \
	UEIK_P2P_QueryNATType(const UEIK_P2P_QueryNATType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_P2P_QueryNATType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_P2P_QueryNATType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_P2P_QueryNATType) \
	NO_API virtual ~UEIK_P2P_QueryNATType();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_12_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_P2P_QueryNATType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

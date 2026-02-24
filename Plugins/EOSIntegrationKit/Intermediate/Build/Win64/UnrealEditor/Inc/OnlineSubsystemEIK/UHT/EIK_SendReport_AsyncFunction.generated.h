// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_SendReport_AsyncFunction;
enum class E_PlayerReportCategory : uint8;
#ifdef ONLINESUBSYSTEMEIK_EIK_SendReport_AsyncFunction_generated_h
#error "EIK_SendReport_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_SendReport_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_SendReport_AsyncFunction_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_38_DELEGATE \
ONLINESUBSYSTEMEIK_API void FReportsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReportsDelegate);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendEIKPlayerReportAsyncFunction);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_SendReport_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_SendReport_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_SendReport_AsyncFunction)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_SendReport_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_SendReport_AsyncFunction(UEIK_SendReport_AsyncFunction&&); \
	UEIK_SendReport_AsyncFunction(const UEIK_SendReport_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_SendReport_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_SendReport_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_SendReport_AsyncFunction) \
	NO_API virtual ~UEIK_SendReport_AsyncFunction();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_40_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_SendReport_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h


#define FOREACH_ENUM_E_PLAYERREPORTCATEGORY(op) \
	op(E_PlayerReportCategory::EOS_PRC_Cheating) \
	op(E_PlayerReportCategory::EOS_PRC_Exploiting) \
	op(E_PlayerReportCategory::EOS_PRC_OffensiveProfile) \
	op(E_PlayerReportCategory::EOS_PRC_VerbalAbuse) \
	op(E_PlayerReportCategory::EOS_PRC_Scamming) \
	op(E_PlayerReportCategory::EOS_PRC_Spamming) \
	op(E_PlayerReportCategory::EOS_PRC_Other) 

enum class E_PlayerReportCategory : uint8;
template<> struct TIsUEnumClass<E_PlayerReportCategory> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<E_PlayerReportCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

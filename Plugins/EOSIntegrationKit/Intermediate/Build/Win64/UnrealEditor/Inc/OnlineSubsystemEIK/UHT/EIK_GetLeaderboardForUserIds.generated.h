// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetLeaderboardForUserIds;
enum class ELeaderboardAggregation : uint8;
struct FDateTime;
struct FEIKExtendedLeaderboardValue;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetLeaderboardForUserIds_generated_h
#error "EIK_GetLeaderboardForUserIds.generated.h already included, missing '#pragma once' in EIK_GetLeaderboardForUserIds.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetLeaderboardForUserIds_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKExtendedLeaderboardValue>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_40_DELEGATE \
ONLINESUBSYSTEMEIK_API void FGetUserIdLeaderboardResult_DelegateWrapper(const FMulticastScriptDelegate& GetUserIdLeaderboardResult, TArray<FEIKExtendedLeaderboardValue> const& LeaderboardValues);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEIKLeaderboardForUserIds);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetLeaderboardForUserIds(); \
	friend struct Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetLeaderboardForUserIds, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetLeaderboardForUserIds)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetLeaderboardForUserIds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_GetLeaderboardForUserIds(UEIK_GetLeaderboardForUserIds&&); \
	UEIK_GetLeaderboardForUserIds(const UEIK_GetLeaderboardForUserIds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetLeaderboardForUserIds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetLeaderboardForUserIds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetLeaderboardForUserIds) \
	NO_API virtual ~UEIK_GetLeaderboardForUserIds();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_43_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetLeaderboardForUserIds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h


#define FOREACH_ENUM_ELEADERBOARDAGGREGATION(op) \
	op(ELeaderboardAggregation::EOS_LA_Min) \
	op(ELeaderboardAggregation::EOS_LA_Max) \
	op(ELeaderboardAggregation::EOS_LA_Sum) \
	op(ELeaderboardAggregation::EOS_LA_Latest) 

enum class ELeaderboardAggregation : uint8;
template<> struct TIsUEnumClass<ELeaderboardAggregation> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ELeaderboardAggregation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

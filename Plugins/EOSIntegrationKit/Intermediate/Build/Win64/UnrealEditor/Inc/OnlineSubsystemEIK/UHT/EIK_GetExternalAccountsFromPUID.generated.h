// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetExternalAccountsFromPUID;
struct FProductUserIdAndExternalAccountIds;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetExternalAccountsFromPUID_generated_h
#error "EIK_GetExternalAccountsFromPUID.generated.h already included, missing '#pragma once' in EIK_GetExternalAccountsFromPUID.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetExternalAccountsFromPUID_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FExternalAccountIdAndType>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FProductUserIdAndExternalAccountIds>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_63_DELEGATE \
ONLINESUBSYSTEMEIK_API void FGetExternalAccountsFromPUIDDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetExternalAccountsFromPUIDDelegate, TArray<FProductUserIdAndExternalAccountIds> const& UserInfo);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEIKGetExternalAccountsFromPuid);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetExternalAccountsFromPUID(); \
	friend struct Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetExternalAccountsFromPUID, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetExternalAccountsFromPUID)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetExternalAccountsFromPUID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIK_GetExternalAccountsFromPUID(UEIK_GetExternalAccountsFromPUID&&); \
	UEIK_GetExternalAccountsFromPUID(const UEIK_GetExternalAccountsFromPUID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetExternalAccountsFromPUID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetExternalAccountsFromPUID); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetExternalAccountsFromPUID) \
	NO_API virtual ~UEIK_GetExternalAccountsFromPUID();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_65_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetExternalAccountsFromPUID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h


#define FOREACH_ENUM_EXTERNALACCOUNTTYPES(op) \
	op(ExternalAccountTypes::EOS_EAT_EPIC) \
	op(ExternalAccountTypes::EOS_EAT_STEAM) \
	op(ExternalAccountTypes::EOS_EAT_PSN) \
	op(ExternalAccountTypes::EOS_EAT_XBL) \
	op(ExternalAccountTypes::EOS_EAT_DISCORD) \
	op(ExternalAccountTypes::EOS_EAT_GOG) \
	op(ExternalAccountTypes::EOS_EAT_NINTENDO) \
	op(ExternalAccountTypes::EOS_EAT_UPLAY) \
	op(ExternalAccountTypes::EOS_EAT_OPENID) \
	op(ExternalAccountTypes::EOS_EAT_APPLE) \
	op(ExternalAccountTypes::EOS_EAT_GOOGLE) \
	op(ExternalAccountTypes::EOS_EAT_OCULUS) \
	op(ExternalAccountTypes::EOS_EAT_ITCHIO) \
	op(ExternalAccountTypes::EOS_EAT_AMAZON) 

enum class ExternalAccountTypes : uint8;
template<> struct TIsUEnumClass<ExternalAccountTypes> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ExternalAccountTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

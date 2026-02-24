// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_QueryIdToken() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_QueryIdToken();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_QueryIdToken_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Auth_OnQueryIdTokenCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetAccountId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAccountId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_TargetAccountId = { "TargetAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms, TargetAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::NewProp_TargetAccountId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_OnQueryIdTokenCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_OnQueryIdTokenCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_OnQueryIdTokenCallback, EEIK_Result ResultCode, FEIK_EpicAccountId LocalUserId, FEIK_EpicAccountId TargetAccountId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetAccountId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_OnQueryIdTokenCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetAccountId=TargetAccountId;
	EIK_Auth_OnQueryIdTokenCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_OnQueryIdTokenCallback

// Begin Class UEIK_Auth_QueryIdToken Function QueryIdToken
struct Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics
{
	struct EIK_Auth_QueryIdToken_eventQueryIdToken_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetAccountId;
		UEIK_Auth_QueryIdToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the backend for an ID token that describes one of the merged account IDs of a local authenticated user. The ID token can be used to impersonate a merged account ID when communicating with online services. An ID token for the selected account ID of a locally authenticated user will always be readily available and does not need to be queried explicitly.\n" },
#endif
		{ "DisplayName", "EOS_Auth_QueryIdToken" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the backend for an ID token that describes one of the merged account IDs of a local authenticated user. The ID token can be used to impersonate a merged account ID when communicating with online services. An ID token for the selected account ID of a locally authenticated user will always be readily available and does not need to be queried explicitly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAccountId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_QueryIdToken_eventQueryIdToken_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_TargetAccountId = { "TargetAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_QueryIdToken_eventQueryIdToken_Parms, TargetAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_QueryIdToken_eventQueryIdToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_QueryIdToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_TargetAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_QueryIdToken, nullptr, "QueryIdToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::EIK_Auth_QueryIdToken_eventQueryIdToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::EIK_Auth_QueryIdToken_eventQueryIdToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_QueryIdToken::execQueryIdToken)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetAccountId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_QueryIdToken**)Z_Param__Result=UEIK_Auth_QueryIdToken::QueryIdToken(Z_Param_LocalUserId,Z_Param_TargetAccountId);
	P_NATIVE_END;
}
// End Class UEIK_Auth_QueryIdToken Function QueryIdToken

// Begin Class UEIK_Auth_QueryIdToken
void UEIK_Auth_QueryIdToken::StaticRegisterNativesUEIK_Auth_QueryIdToken()
{
	UClass* Class = UEIK_Auth_QueryIdToken::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "QueryIdToken", &UEIK_Auth_QueryIdToken::execQueryIdToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_QueryIdToken);
UClass* Z_Construct_UClass_UEIK_Auth_QueryIdToken_NoRegister()
{
	return UEIK_Auth_QueryIdToken::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_QueryIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_QueryIdToken_QueryIdToken, "QueryIdToken" }, // 1465897848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_QueryIdToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_QueryIdToken, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnQueryIdTokenCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1176837482
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::ClassParams = {
	&UEIK_Auth_QueryIdToken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_QueryIdToken()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_QueryIdToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_QueryIdToken.OuterSingleton, Z_Construct_UClass_UEIK_Auth_QueryIdToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_QueryIdToken.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_QueryIdToken>()
{
	return UEIK_Auth_QueryIdToken::StaticClass();
}
UEIK_Auth_QueryIdToken::UEIK_Auth_QueryIdToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_QueryIdToken);
UEIK_Auth_QueryIdToken::~UEIK_Auth_QueryIdToken() {}
// End Class UEIK_Auth_QueryIdToken

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_QueryIdToken_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_QueryIdToken, UEIK_Auth_QueryIdToken::StaticClass, TEXT("UEIK_Auth_QueryIdToken"), &Z_Registration_Info_UClass_UEIK_Auth_QueryIdToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_QueryIdToken), 1843825728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_QueryIdToken_h_3337726729(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_QueryIdToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_QueryIdToken_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

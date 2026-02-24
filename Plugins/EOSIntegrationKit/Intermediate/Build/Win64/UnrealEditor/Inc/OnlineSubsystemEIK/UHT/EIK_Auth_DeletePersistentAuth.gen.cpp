// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_DeletePersistentAuth() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnDeletePersistentAuthCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnDeletePersistentAuthCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeletePersistentAuthCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDeletePersistentAuthCallback, EEIK_Result ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventOnDeletePersistentAuthCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	OnDeletePersistentAuthCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeletePersistentAuthCallback

// Begin Class UEIK_Auth_DeletePersistentAuth Function DeletePersistentAuth
struct Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics
{
	struct EIK_Auth_DeletePersistentAuth_eventDeletePersistentAuth_Parms
	{
		FString RefreshToken;
		UEIK_Auth_DeletePersistentAuth* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device. On Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server. On Console platforms, even though the caller is responsible for storing and deleting the access token on the local device, this function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server. If the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.\n" },
#endif
		{ "DisplayName", "EOS_Auth_DeletePersistentAuth" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device. On Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server. On Console platforms, even though the caller is responsible for storing and deleting the access token on the local device, this function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server. If the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_DeletePersistentAuth_eventDeletePersistentAuth_Parms, RefreshToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_DeletePersistentAuth_eventDeletePersistentAuth_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::NewProp_RefreshToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth, nullptr, "DeletePersistentAuth", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::EIK_Auth_DeletePersistentAuth_eventDeletePersistentAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::EIK_Auth_DeletePersistentAuth_eventDeletePersistentAuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_DeletePersistentAuth::execDeletePersistentAuth)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RefreshToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_DeletePersistentAuth**)Z_Param__Result=UEIK_Auth_DeletePersistentAuth::DeletePersistentAuth(Z_Param_RefreshToken);
	P_NATIVE_END;
}
// End Class UEIK_Auth_DeletePersistentAuth Function DeletePersistentAuth

// Begin Class UEIK_Auth_DeletePersistentAuth
void UEIK_Auth_DeletePersistentAuth::StaticRegisterNativesUEIK_Auth_DeletePersistentAuth()
{
	UClass* Class = UEIK_Auth_DeletePersistentAuth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeletePersistentAuth", &UEIK_Auth_DeletePersistentAuth::execDeletePersistentAuth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_DeletePersistentAuth);
UClass* Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_NoRegister()
{
	return UEIK_Auth_DeletePersistentAuth::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_DeletePersistentAuth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_DeletePersistentAuth_DeletePersistentAuth, "DeletePersistentAuth" }, // 1644266056
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_DeletePersistentAuth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_DeletePersistentAuth, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnDeletePersistentAuthCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1230608447
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::ClassParams = {
	&UEIK_Auth_DeletePersistentAuth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_DeletePersistentAuth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_DeletePersistentAuth.OuterSingleton, Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_DeletePersistentAuth.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_DeletePersistentAuth>()
{
	return UEIK_Auth_DeletePersistentAuth::StaticClass();
}
UEIK_Auth_DeletePersistentAuth::UEIK_Auth_DeletePersistentAuth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_DeletePersistentAuth);
UEIK_Auth_DeletePersistentAuth::~UEIK_Auth_DeletePersistentAuth() {}
// End Class UEIK_Auth_DeletePersistentAuth

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_DeletePersistentAuth, UEIK_Auth_DeletePersistentAuth::StaticClass, TEXT("UEIK_Auth_DeletePersistentAuth"), &Z_Registration_Info_UClass_UEIK_Auth_DeletePersistentAuth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_DeletePersistentAuth), 3206700108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_290760548(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_DeletePersistentAuth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_VerifyUserAuth() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_VerifyUserAuth();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_Token();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Auth_OnVerifyUserAuthCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_OnVerifyUserAuthCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_OnVerifyUserAuthCallback, EEIK_Result ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyUserAuthCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIK_Auth_OnVerifyUserAuthCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_OnVerifyUserAuthCallback

// Begin Class UEIK_Auth_VerifyUserAuth Function VerifyUserAuth
struct Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics
{
	struct EIK_Auth_VerifyUserAuth_eventVerifyUserAuth_Parms
	{
		FEIK_Auth_Token AuthToken;
		UEIK_Auth_VerifyUserAuth* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Contact the backend service to verify validity of an existing user auth token. This function is intended for server-side use only.\n" },
#endif
		{ "DisplayName", "EOS_Auth_VerifyUserAuth" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contact the backend service to verify validity of an existing user auth token. This function is intended for server-side use only." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthToken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_VerifyUserAuth_eventVerifyUserAuth_Parms, AuthToken), Z_Construct_UScriptStruct_FEIK_Auth_Token, METADATA_PARAMS(0, nullptr) }; // 1765220816
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_VerifyUserAuth_eventVerifyUserAuth_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::NewProp_AuthToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_VerifyUserAuth, nullptr, "VerifyUserAuth", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::EIK_Auth_VerifyUserAuth_eventVerifyUserAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::EIK_Auth_VerifyUserAuth_eventVerifyUserAuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_VerifyUserAuth::execVerifyUserAuth)
{
	P_GET_STRUCT(FEIK_Auth_Token,Z_Param_AuthToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_VerifyUserAuth**)Z_Param__Result=UEIK_Auth_VerifyUserAuth::VerifyUserAuth(Z_Param_AuthToken);
	P_NATIVE_END;
}
// End Class UEIK_Auth_VerifyUserAuth Function VerifyUserAuth

// Begin Class UEIK_Auth_VerifyUserAuth
void UEIK_Auth_VerifyUserAuth::StaticRegisterNativesUEIK_Auth_VerifyUserAuth()
{
	UClass* Class = UEIK_Auth_VerifyUserAuth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "VerifyUserAuth", &UEIK_Auth_VerifyUserAuth::execVerifyUserAuth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_VerifyUserAuth);
UClass* Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_NoRegister()
{
	return UEIK_Auth_VerifyUserAuth::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyUserAuth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_VerifyUserAuth_VerifyUserAuth, "VerifyUserAuth" }, // 26933797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_VerifyUserAuth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_VerifyUserAuth, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyUserAuthCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 77208677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::ClassParams = {
	&UEIK_Auth_VerifyUserAuth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_VerifyUserAuth()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_VerifyUserAuth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_VerifyUserAuth.OuterSingleton, Z_Construct_UClass_UEIK_Auth_VerifyUserAuth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_VerifyUserAuth.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_VerifyUserAuth>()
{
	return UEIK_Auth_VerifyUserAuth::StaticClass();
}
UEIK_Auth_VerifyUserAuth::UEIK_Auth_VerifyUserAuth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_VerifyUserAuth);
UEIK_Auth_VerifyUserAuth::~UEIK_Auth_VerifyUserAuth() {}
// End Class UEIK_Auth_VerifyUserAuth

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyUserAuth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_VerifyUserAuth, UEIK_Auth_VerifyUserAuth::StaticClass, TEXT("UEIK_Auth_VerifyUserAuth"), &Z_Registration_Info_UClass_UEIK_Auth_VerifyUserAuth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_VerifyUserAuth), 3674639302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyUserAuth_h_2976157253(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyUserAuth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyUserAuth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

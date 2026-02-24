// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_LoginwithAuth_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELoginCredentialType();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_LoginwithAuthDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms
	{
		FEIK_EpicAccountId EpicUserID;
		FEIK_ProductUserId ProductUserID;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EpicUserID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_EpicUserID = { "EpicUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms, EpicUserID), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms, ProductUserID), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_EpicUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_ProductUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_LoginwithAuthDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_LoginwithAuthDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_LoginwithAuthDelegate, FEIK_EpicAccountId EpicUserID, FEIK_ProductUserId ProductUserID, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms
	{
		FEIK_EpicAccountId EpicUserID;
		FEIK_ProductUserId ProductUserID;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventEIK_LoginwithAuthDelegate_Parms Parms;
	Parms.EpicUserID=EpicUserID;
	Parms.ProductUserID=ProductUserID;
	Parms.Error=Error;
	EIK_LoginwithAuthDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_LoginwithAuthDelegate

// Begin Class UEIK_LoginwithAuth_AsyncFunction Function LoginWithAuth
struct Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics
{
	struct EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms
	{
		TEnumAsByte<EEIK_ELoginCredentialType> CredentialType;
		TEnumAsByte<EEIK_EExternalCredentialType> ExternalCredentialType;
		FString Id;
		FString Token;
		UEIK_LoginwithAuth_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit | Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09This function is used to login using EIK using the Auth Interface easily without having to worry about the underlying implementation.\n\x09\x09@param CredentialType: The login method to use.\n\x09\x09@param DisplayName: The display name of the user.\n\x09\x09@param Token: The token to use for login.\n\n\x09\x09Please note that the Auth Interface means that an EPIC ACCOUNT is required to login. This means you can use features that require an Epic Account like Friends, Overlay, etc.\n\x09*/" },
#endif
		{ "CPP_Default_CredentialType", "EIK_LCT_AccountPortal" },
		{ "CPP_Default_ExternalCredentialType", "EIK_ECT_EPIC" },
		{ "CPP_Default_Id", "" },
		{ "CPP_Default_Token", "" },
		{ "DisplayName", "Login using Auth Interface" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to login using EIK using the Auth Interface easily without having to worry about the underlying implementation.\n@param CredentialType: The login method to use.\n@param DisplayName: The display name of the user.\n@param Token: The token to use for login.\n\nPlease note that the Auth Interface means that an EPIC ACCOUNT is required to login. This means you can use features that require an Epic Account like Friends, Overlay, etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CredentialType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalCredentialType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_CredentialType = { "CredentialType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms, CredentialType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELoginCredentialType, METADATA_PARAMS(0, nullptr) }; // 1897641975
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_ExternalCredentialType = { "ExternalCredentialType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms, ExternalCredentialType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType, METADATA_PARAMS(0, nullptr) }; // 453703638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms, Token), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms, ReturnValue), Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_CredentialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_ExternalCredentialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction, nullptr, "LoginWithAuth", nullptr, nullptr, Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::EIK_LoginwithAuth_AsyncFunction_eventLoginWithAuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LoginwithAuth_AsyncFunction::execLoginWithAuth)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CredentialType);
	P_GET_PROPERTY(FByteProperty,Z_Param_ExternalCredentialType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Id);
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_LoginwithAuth_AsyncFunction**)Z_Param__Result=UEIK_LoginwithAuth_AsyncFunction::LoginWithAuth(EEIK_ELoginCredentialType(Z_Param_CredentialType),EEIK_EExternalCredentialType(Z_Param_ExternalCredentialType),Z_Param_Id,Z_Param_Token);
	P_NATIVE_END;
}
// End Class UEIK_LoginwithAuth_AsyncFunction Function LoginWithAuth

// Begin Class UEIK_LoginwithAuth_AsyncFunction
void UEIK_LoginwithAuth_AsyncFunction::StaticRegisterNativesUEIK_LoginwithAuth_AsyncFunction()
{
	UClass* Class = UEIK_LoginwithAuth_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoginWithAuth", &UEIK_LoginwithAuth_AsyncFunction::execLoginWithAuth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_LoginwithAuth_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_NoRegister()
{
	return UEIK_LoginwithAuth_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Category", "EOS Integration Kit | Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Category", "EOS Integration Kit | Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_LoginwithAuth_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_LoginwithAuth_AsyncFunction_LoginWithAuth, "LoginWithAuth" }, // 1996443449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_LoginwithAuth_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_LoginwithAuth_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 787495285
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_LoginwithAuth_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_LoginwithAuthDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 787495285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::ClassParams = {
	&UEIK_LoginwithAuth_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_LoginwithAuth_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_LoginwithAuth_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_LoginwithAuth_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_LoginwithAuth_AsyncFunction>()
{
	return UEIK_LoginwithAuth_AsyncFunction::StaticClass();
}
UEIK_LoginwithAuth_AsyncFunction::UEIK_LoginwithAuth_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_LoginwithAuth_AsyncFunction);
UEIK_LoginwithAuth_AsyncFunction::~UEIK_LoginwithAuth_AsyncFunction() {}
// End Class UEIK_LoginwithAuth_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_LoginwithAuth_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_LoginwithAuth_AsyncFunction, UEIK_LoginwithAuth_AsyncFunction::StaticClass, TEXT("UEIK_LoginwithAuth_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_LoginwithAuth_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_LoginwithAuth_AsyncFunction), 3746144572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_LoginwithAuth_AsyncFunction_h_3828309253(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_LoginwithAuth_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_LoginwithAuth_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

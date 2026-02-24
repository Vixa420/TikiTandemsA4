// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_Login_AsyncFunction.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Login_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FResponsDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventResponsDelegate_Parms
	{
		FEIK_ProductUserId ProductUserID;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms, ProductUserID), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_ProductUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "ResponsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponsDelegate, FEIK_ProductUserId ProductUserID, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventResponsDelegate_Parms
	{
		FEIK_ProductUserId ProductUserID;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms Parms;
	Parms.ProductUserID=ProductUserID;
	Parms.Error=Error;
	ResponsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FResponsDelegate

// Begin Class UEIK_Login_AsyncFunction Function LoginUsingConnectInterface
struct Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics
{
	struct EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms
	{
		TEnumAsByte<EEIK_EExternalCredentialType> LoginMethod;
		FString DisplayName;
		FString Token;
		UEIK_Login_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method logs in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09\n\x09""Following Methods are coming with upcoming build - Apple, Discord, Oculus, OpenID\n\x09*/" },
#endif
		{ "CPP_Default_DisplayName", "" },
		{ "CPP_Default_LoginMethod", "EIK_ECT_DEVICEID_ACCESS_TOKEN" },
		{ "CPP_Default_Token", "" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\nFor Input Parameters, please refer to the documentation link above.\n\nFollowing Methods are coming with upcoming build - Apple, Discord, Oculus, OpenID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoginMethod;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_LoginMethod = { "LoginMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms, LoginMethod), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType, METADATA_PARAMS(0, nullptr) }; // 453703638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms, DisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms, Token), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms, ReturnValue), Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_LoginMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Login_AsyncFunction, nullptr, "LoginUsingConnectInterface", nullptr, nullptr, Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::EIK_Login_AsyncFunction_eventLoginUsingConnectInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Login_AsyncFunction::execLoginUsingConnectInterface)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_LoginMethod);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Login_AsyncFunction**)Z_Param__Result=UEIK_Login_AsyncFunction::LoginUsingConnectInterface(EEIK_EExternalCredentialType(Z_Param_LoginMethod),Z_Param_DisplayName,Z_Param_Token);
	P_NATIVE_END;
}
// End Class UEIK_Login_AsyncFunction Function LoginUsingConnectInterface

// Begin Class UEIK_Login_AsyncFunction
void UEIK_Login_AsyncFunction::StaticRegisterNativesUEIK_Login_AsyncFunction()
{
	UClass* Class = UEIK_Login_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoginUsingConnectInterface", &UEIK_Login_AsyncFunction::execLoginUsingConnectInterface },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Login_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister()
{
	return UEIK_Login_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingConnectInterface, "LoginUsingConnectInterface" }, // 189904068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Login_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Login_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 847870765
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Login_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 847870765
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::ClassParams = {
	&UEIK_Login_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Login_AsyncFunction>()
{
	return UEIK_Login_AsyncFunction::StaticClass();
}
UEIK_Login_AsyncFunction::UEIK_Login_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Login_AsyncFunction);
UEIK_Login_AsyncFunction::~UEIK_Login_AsyncFunction() {}
// End Class UEIK_Login_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Login_AsyncFunction, UEIK_Login_AsyncFunction::StaticClass, TEXT("UEIK_Login_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_Login_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Login_AsyncFunction), 3272663314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_76292896(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

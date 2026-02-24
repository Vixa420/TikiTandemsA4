// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_Login.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_Login() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_Login();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_Login_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_Credentials();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_PinGrantInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ContinuanceToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Auth_LoginCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo;
class UScriptStruct* FEIK_Auth_LoginCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Auth_LoginCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Auth_LoginCallbackInfo>()
{
	return FEIK_Auth_LoginCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinGrantInfo_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuanceToken_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinGrantInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuanceToken;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAccountId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Auth_LoginCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginCallbackInfo, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_PinGrantInfo = { "PinGrantInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginCallbackInfo, PinGrantInfo), Z_Construct_UScriptStruct_FEIK_Auth_PinGrantInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinGrantInfo_MetaData), NewProp_PinGrantInfo_MetaData) }; // 3207408521
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_ContinuanceToken = { "ContinuanceToken", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginCallbackInfo, ContinuanceToken), Z_Construct_UScriptStruct_FEIK_ContinuanceToken, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuanceToken_MetaData), NewProp_ContinuanceToken_MetaData) }; // 3322250395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_SelectedAccountId = { "SelectedAccountId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginCallbackInfo, SelectedAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedAccountId_MetaData), NewProp_SelectedAccountId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_PinGrantInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_ContinuanceToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewProp_SelectedAccountId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Auth_LoginCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Auth_LoginCallbackInfo),
	alignof(FEIK_Auth_LoginCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Auth_LoginCallbackInfo

// Begin ScriptStruct FEIK_Auth_LoginOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions;
class UScriptStruct* FEIK_Auth_LoginOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Auth_LoginOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Auth_LoginOptions>()
{
	return FEIK_Auth_LoginOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Credentials_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopeFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/OnlineSubsystemEIK.EEIK_EAuthScopeFlags" },
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginFlags_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Credentials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScopeFlags;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LoginFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Auth_LoginOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_Credentials = { "Credentials", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginOptions, Credentials), Z_Construct_UScriptStruct_FEIK_Auth_Credentials, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Credentials_MetaData), NewProp_Credentials_MetaData) }; // 1600634968
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_ScopeFlags = { "ScopeFlags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginOptions, ScopeFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopeFlags_MetaData), NewProp_ScopeFlags_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_LoginFlags = { "LoginFlags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LoginOptions, LoginFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginFlags_MetaData), NewProp_LoginFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_Credentials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_ScopeFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewProp_LoginFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Auth_LoginOptions",
	Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::PropPointers),
	sizeof(FEIK_Auth_LoginOptions),
	alignof(FEIK_Auth_LoginOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Auth_LoginOptions

// Begin Delegate FEIK_Auth_LoginCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms
	{
		FEIK_Auth_LoginCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1415401113
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_LoginCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_LoginCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_LoginCallback, FEIK_Auth_LoginCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms
	{
		FEIK_Auth_LoginCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_LoginCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Auth_LoginCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_LoginCallback

// Begin Class UEIK_Auth_Login Function Login
struct Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics
{
	struct EIK_Auth_Login_eventLogin_Parms
	{
		FEIK_Auth_LoginOptions Options;
		UEIK_Auth_Login* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Login/Authenticate with user credentials.\n" },
#endif
		{ "DisplayName", "EOS_Auth_Login" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Login/Authenticate with user credentials." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_Login_eventLogin_Parms, Options), Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions, METADATA_PARAMS(0, nullptr) }; // 2949327012
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_Login_eventLogin_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_Login_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_Login, nullptr, "Login", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::EIK_Auth_Login_eventLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::EIK_Auth_Login_eventLogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_Login_Login()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_Login_Login_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_Login::execLogin)
{
	P_GET_STRUCT(FEIK_Auth_LoginOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_Login**)Z_Param__Result=UEIK_Auth_Login::Login(Z_Param_Options);
	P_NATIVE_END;
}
// End Class UEIK_Auth_Login Function Login

// Begin Class UEIK_Auth_Login
void UEIK_Auth_Login::StaticRegisterNativesUEIK_Auth_Login()
{
	UClass* Class = UEIK_Auth_Login::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Login", &UEIK_Auth_Login::execLogin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_Login);
UClass* Z_Construct_UClass_UEIK_Auth_Login_NoRegister()
{
	return UEIK_Auth_Login::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_Login_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_Login_Login, "Login" }, // 1975831983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_Login>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_Login_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_Login, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_LoginCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4041584220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_Login_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_Login_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Login_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_Login_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Login_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_Login_Statics::ClassParams = {
	&UEIK_Auth_Login::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_Login_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Login_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Login_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_Login_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_Login()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_Login.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_Login.OuterSingleton, Z_Construct_UClass_UEIK_Auth_Login_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_Login.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_Login>()
{
	return UEIK_Auth_Login::StaticClass();
}
UEIK_Auth_Login::UEIK_Auth_Login(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_Login);
UEIK_Auth_Login::~UEIK_Auth_Login() {}
// End Class UEIK_Auth_Login

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Auth_LoginCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Auth_LoginCallbackInfo_Statics::NewStructOps, TEXT("EIK_Auth_LoginCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Auth_LoginCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Auth_LoginCallbackInfo), 1415401113U) },
		{ FEIK_Auth_LoginOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Auth_LoginOptions_Statics::NewStructOps, TEXT("EIK_Auth_LoginOptions"), &Z_Registration_Info_UScriptStruct_EIK_Auth_LoginOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Auth_LoginOptions), 2949327012U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_Login, UEIK_Auth_Login::StaticClass, TEXT("UEIK_Auth_Login"), &Z_Registration_Info_UClass_UEIK_Auth_Login, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_Login), 4178781647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_1022367677(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Login_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

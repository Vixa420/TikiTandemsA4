// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_Login.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_Login() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_Login();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_Login_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_Credentials();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ContinuanceToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Connect_UserLoginInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo;
class UScriptStruct* FEIK_Connect_UserLoginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Connect_UserLoginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Connect_UserLoginInfo>()
{
	return FEIK_Connect_UserLoginInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NsaTokenId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NsaTokenId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Connect_UserLoginInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_UserLoginInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::NewProp_NsaTokenId = { "NsaTokenId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_UserLoginInfo, NsaTokenId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NsaTokenId_MetaData), NewProp_NsaTokenId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::NewProp_NsaTokenId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Connect_UserLoginInfo",
	Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::PropPointers),
	sizeof(FEIK_Connect_UserLoginInfo),
	alignof(FEIK_Connect_UserLoginInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Connect_UserLoginInfo

// Begin ScriptStruct FEIK_Connect_Credentials
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials;
class UScriptStruct* FEIK_Connect_Credentials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Connect_Credentials, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Connect_Credentials"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Connect_Credentials>()
{
	return FEIK_Connect_Credentials::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Connect_Credentials>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_Credentials, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_Credentials, Type), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalCredentialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 453703638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Connect_Credentials",
	Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::PropPointers),
	sizeof(FEIK_Connect_Credentials),
	alignof(FEIK_Connect_Credentials),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_Credentials()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials.InnerSingleton;
}
// End ScriptStruct FEIK_Connect_Credentials

// Begin Delegate FOnLoginCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
		FEIK_ContinuanceToken ContinuanceToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuanceToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_ContinuanceToken = { "ContinuanceToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms, ContinuanceToken), Z_Construct_UScriptStruct_FEIK_ContinuanceToken, METADATA_PARAMS(0, nullptr) }; // 3322250395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::NewProp_ContinuanceToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnLoginCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoginCallback_DelegateWrapper(const FMulticastScriptDelegate& OnLoginCallback, EEIK_Result ResultCode, FEIK_ProductUserId LocalUserId, FEIK_ContinuanceToken ContinuanceToken)
{
	struct _Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
		FEIK_ContinuanceToken ContinuanceToken;
	};
	_Script_OnlineSubsystemEIK_eventOnLoginCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LocalUserId=LocalUserId;
	Parms.ContinuanceToken=ContinuanceToken;
	OnLoginCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLoginCallback

// Begin Class UEIK_Connect_Login Function EIK_Connect_Login
struct Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics
{
	struct EIK_Connect_Login_eventEIK_Connect_Login_Parms
	{
		FEIK_Connect_Credentials Credentials;
		FEIK_Connect_UserLoginInfo UserLoginInfo;
		UEIK_Connect_Login* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09  Login/Authenticate given a valid set of external auth credentials.\n\x09  @param Credentials - Credentials specified for a given login method\n\x09  @param UserLoginInfo - Additional information about the local user. This field is required to be set and used when authenticating the user using Amazon, Apple, Google, Nintendo Account, Nintendo Service Account, Oculus or the Device ID feature login. It is also required for using the Lobbies and Sessions interfaces when running on the Nintendo Switch device, and using any other credential type than EOS_ECT_NINTENDO_NSA_ID_TOKEN. In all other cases, set this field to NULL.\n\x09 */" },
#endif
		{ "DisplayName", "EOS_Connect_Login" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Login/Authenticate given a valid set of external auth credentials.\n@param Credentials - Credentials specified for a given login method\n@param UserLoginInfo - Additional information about the local user. This field is required to be set and used when authenticating the user using Amazon, Apple, Google, Nintendo Account, Nintendo Service Account, Oculus or the Device ID feature login. It is also required for using the Lobbies and Sessions interfaces when running on the Nintendo Switch device, and using any other credential type than EOS_ECT_NINTENDO_NSA_ID_TOKEN. In all other cases, set this field to NULL." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Credentials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserLoginInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_Credentials = { "Credentials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_Login_eventEIK_Connect_Login_Parms, Credentials), Z_Construct_UScriptStruct_FEIK_Connect_Credentials, METADATA_PARAMS(0, nullptr) }; // 2941082092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_UserLoginInfo = { "UserLoginInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_Login_eventEIK_Connect_Login_Parms, UserLoginInfo), Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo, METADATA_PARAMS(0, nullptr) }; // 2969840331
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_Login_eventEIK_Connect_Login_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_Login_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_Credentials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_UserLoginInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_Login, nullptr, "EIK_Connect_Login", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::EIK_Connect_Login_eventEIK_Connect_Login_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::EIK_Connect_Login_eventEIK_Connect_Login_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_Login::execEIK_Connect_Login)
{
	P_GET_STRUCT(FEIK_Connect_Credentials,Z_Param_Credentials);
	P_GET_STRUCT(FEIK_Connect_UserLoginInfo,Z_Param_UserLoginInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_Login**)Z_Param__Result=UEIK_Connect_Login::EIK_Connect_Login(Z_Param_Credentials,Z_Param_UserLoginInfo);
	P_NATIVE_END;
}
// End Class UEIK_Connect_Login Function EIK_Connect_Login

// Begin Class UEIK_Connect_Login
void UEIK_Connect_Login::StaticRegisterNativesUEIK_Connect_Login()
{
	UClass* Class = UEIK_Connect_Login::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_Login", &UEIK_Connect_Login::execEIK_Connect_Login },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_Login);
UClass* Z_Construct_UClass_UEIK_Connect_Login_NoRegister()
{
	return UEIK_Connect_Login::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_Login_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Login.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_Login_EIK_Connect_Login, "EIK_Connect_Login" }, // 540893304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_Login>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_Login_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_Login, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3229365019
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_Login_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_Login_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Login_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_Login_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Login_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_Login_Statics::ClassParams = {
	&UEIK_Connect_Login::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_Login_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Login_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Login_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_Login_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_Login()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_Login.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_Login.OuterSingleton, Z_Construct_UClass_UEIK_Connect_Login_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_Login.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_Login>()
{
	return UEIK_Connect_Login::StaticClass();
}
UEIK_Connect_Login::UEIK_Connect_Login(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_Login);
UEIK_Connect_Login::~UEIK_Connect_Login() {}
// End Class UEIK_Connect_Login

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Connect_UserLoginInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Connect_UserLoginInfo_Statics::NewStructOps, TEXT("EIK_Connect_UserLoginInfo"), &Z_Registration_Info_UScriptStruct_EIK_Connect_UserLoginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Connect_UserLoginInfo), 2969840331U) },
		{ FEIK_Connect_Credentials::StaticStruct, Z_Construct_UScriptStruct_FEIK_Connect_Credentials_Statics::NewStructOps, TEXT("EIK_Connect_Credentials"), &Z_Registration_Info_UScriptStruct_EIK_Connect_Credentials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Connect_Credentials), 2941082092U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_Login, UEIK_Connect_Login::StaticClass, TEXT("UEIK_Connect_Login"), &Z_Registration_Info_UClass_UEIK_Connect_Login, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_Login), 743210009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_1053177285(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Login_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

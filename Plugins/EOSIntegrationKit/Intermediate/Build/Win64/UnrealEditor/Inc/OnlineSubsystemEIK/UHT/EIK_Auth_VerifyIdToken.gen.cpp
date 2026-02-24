// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_VerifyIdToken() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_VerifyIdToken();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_VerifyIdToken_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_IdToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Auth_VerifyIdTokenCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo;
class UScriptStruct* FEIK_Auth_VerifyIdTokenCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Auth_VerifyIdTokenCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Auth_VerifyIdTokenCallbackInfo>()
{
	return FEIK_Auth_VerifyIdTokenCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExternalAccountInfoPresent_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIdType_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountDisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_bIsExternalAccountInfoPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExternalAccountInfoPresent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalAccountIdType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalAccountDisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Auth_VerifyIdTokenCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ApplicationId = { "ApplicationId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ApplicationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationId_MetaData), NewProp_ApplicationId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsExternalAccountInfoPresent_SetBit(void* Obj)
{
	((FEIK_Auth_VerifyIdTokenCallbackInfo*)Obj)->bIsExternalAccountInfoPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsExternalAccountInfoPresent = { "bIsExternalAccountInfoPresent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Auth_VerifyIdTokenCallbackInfo), &Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsExternalAccountInfoPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExternalAccountInfoPresent_MetaData), NewProp_bIsExternalAccountInfoPresent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountIdType = { "ExternalAccountIdType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ExternalAccountIdType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountIdType_MetaData), NewProp_ExternalAccountIdType_MetaData) }; // 2565716192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ExternalAccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountId_MetaData), NewProp_ExternalAccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountDisplayName = { "ExternalAccountDisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, ExternalAccountDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountDisplayName_MetaData), NewProp_ExternalAccountDisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_VerifyIdTokenCallbackInfo, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ApplicationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsExternalAccountInfoPresent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountIdType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_ExternalAccountDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewProp_Platform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Auth_VerifyIdTokenCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Auth_VerifyIdTokenCallbackInfo),
	alignof(FEIK_Auth_VerifyIdTokenCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Auth_VerifyIdTokenCallbackInfo

// Begin Delegate FEIK_Auth_OnVerifyIdTokenCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms
	{
		FEIK_Auth_VerifyIdTokenCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2485238593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_OnVerifyIdTokenCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_OnVerifyIdTokenCallback, FEIK_Auth_VerifyIdTokenCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms
	{
		FEIK_Auth_VerifyIdTokenCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_OnVerifyIdTokenCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Auth_OnVerifyIdTokenCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_OnVerifyIdTokenCallback

// Begin Class UEIK_Auth_VerifyIdToken Function VerifyIdToken
struct Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics
{
	struct EIK_Auth_VerifyIdToken_eventVerifyIdToken_Parms
	{
		FEIK_Auth_IdToken IdToken;
		UEIK_Auth_VerifyIdToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Verify a given ID token for authenticity and validity.\n" },
#endif
		{ "DisplayName", "EOS_Auth_VerifyIdToken" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Verify a given ID token for authenticity and validity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdToken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_VerifyIdToken_eventVerifyIdToken_Parms, IdToken), Z_Construct_UScriptStruct_FEIK_Auth_IdToken, METADATA_PARAMS(0, nullptr) }; // 2238837245
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_VerifyIdToken_eventVerifyIdToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_VerifyIdToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::NewProp_IdToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_VerifyIdToken, nullptr, "VerifyIdToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::EIK_Auth_VerifyIdToken_eventVerifyIdToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::EIK_Auth_VerifyIdToken_eventVerifyIdToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_VerifyIdToken::execVerifyIdToken)
{
	P_GET_STRUCT(FEIK_Auth_IdToken,Z_Param_IdToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_VerifyIdToken**)Z_Param__Result=UEIK_Auth_VerifyIdToken::VerifyIdToken(Z_Param_IdToken);
	P_NATIVE_END;
}
// End Class UEIK_Auth_VerifyIdToken Function VerifyIdToken

// Begin Class UEIK_Auth_VerifyIdToken
void UEIK_Auth_VerifyIdToken::StaticRegisterNativesUEIK_Auth_VerifyIdToken()
{
	UClass* Class = UEIK_Auth_VerifyIdToken::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "VerifyIdToken", &UEIK_Auth_VerifyIdToken::execVerifyIdToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_VerifyIdToken);
UClass* Z_Construct_UClass_UEIK_Auth_VerifyIdToken_NoRegister()
{
	return UEIK_Auth_VerifyIdToken::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_VerifyIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_VerifyIdToken_VerifyIdToken, "VerifyIdToken" }, // 39361546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_VerifyIdToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_VerifyIdToken, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnVerifyIdTokenCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2230383779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::ClassParams = {
	&UEIK_Auth_VerifyIdToken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_VerifyIdToken()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_VerifyIdToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_VerifyIdToken.OuterSingleton, Z_Construct_UClass_UEIK_Auth_VerifyIdToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_VerifyIdToken.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_VerifyIdToken>()
{
	return UEIK_Auth_VerifyIdToken::StaticClass();
}
UEIK_Auth_VerifyIdToken::UEIK_Auth_VerifyIdToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_VerifyIdToken);
UEIK_Auth_VerifyIdToken::~UEIK_Auth_VerifyIdToken() {}
// End Class UEIK_Auth_VerifyIdToken

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Auth_VerifyIdTokenCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Auth_VerifyIdTokenCallbackInfo_Statics::NewStructOps, TEXT("EIK_Auth_VerifyIdTokenCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Auth_VerifyIdTokenCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Auth_VerifyIdTokenCallbackInfo), 2485238593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_VerifyIdToken, UEIK_Auth_VerifyIdToken::StaticClass, TEXT("UEIK_Auth_VerifyIdToken"), &Z_Registration_Info_UClass_UEIK_Auth_VerifyIdToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_VerifyIdToken), 2428886400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_1502418081(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_VerifyIdToken_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

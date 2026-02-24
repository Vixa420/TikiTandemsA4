// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_VerifyIdToken() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_VerifyIdToken();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_VerifyIdToken_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_IdToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Connect_VerifyIdTokenCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo;
class UScriptStruct* FEIK_Connect_VerifyIdTokenCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Connect_VerifyIdTokenCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Connect_VerifyIdTokenCallbackInfo>()
{
	return FEIK_Connect_VerifyIdTokenCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccountInfoPresent_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountType_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_bIsAccountInfoPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccountInfoPresent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Connect_VerifyIdTokenCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
void Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsAccountInfoPresent_SetBit(void* Obj)
{
	((FEIK_Connect_VerifyIdTokenCallbackInfo*)Obj)->bIsAccountInfoPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsAccountInfoPresent = { "bIsAccountInfoPresent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_Connect_VerifyIdTokenCallbackInfo), &Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsAccountInfoPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccountInfoPresent_MetaData), NewProp_bIsAccountInfoPresent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, AccountType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountType_MetaData), NewProp_AccountType_MetaData) }; // 2565716192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, AccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountId_MetaData), NewProp_AccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, DeviceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceType_MetaData), NewProp_DeviceType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Connect_VerifyIdTokenCallbackInfo, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_bIsAccountInfoPresent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_AccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_AccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewProp_DeploymentId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Connect_VerifyIdTokenCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Connect_VerifyIdTokenCallbackInfo),
	alignof(FEIK_Connect_VerifyIdTokenCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Connect_VerifyIdTokenCallbackInfo

// Begin Delegate FEIK_Connect_VerifyIdToken_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms
	{
		FEIK_Connect_VerifyIdTokenCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms, Data), Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2808673940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_VerifyIdToken_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_VerifyIdToken_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_VerifyIdToken_Delegate, FEIK_Connect_VerifyIdTokenCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms
	{
		FEIK_Connect_VerifyIdTokenCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_VerifyIdToken_Delegate_Parms Parms;
	Parms.Data=Data;
	EIK_Connect_VerifyIdToken_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_VerifyIdToken_Delegate

// Begin Class UEIK_Connect_VerifyIdToken Function EIK_Connect_VerifyIdToken
struct Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics
{
	struct EIK_Connect_VerifyIdToken_eventEIK_Connect_VerifyIdToken_Parms
	{
		FEIK_Connect_IdToken IdToken;
		UEIK_Connect_VerifyIdToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Verify a given ID token for authenticity and validity.\n" },
#endif
		{ "DisplayName", "EOS_Connect_VerifyIdToken" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_VerifyIdToken_eventEIK_Connect_VerifyIdToken_Parms, IdToken), Z_Construct_UScriptStruct_FEIK_Connect_IdToken, METADATA_PARAMS(0, nullptr) }; // 3141527184
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_VerifyIdToken_eventEIK_Connect_VerifyIdToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_VerifyIdToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::NewProp_IdToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_VerifyIdToken, nullptr, "EIK_Connect_VerifyIdToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::EIK_Connect_VerifyIdToken_eventEIK_Connect_VerifyIdToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::EIK_Connect_VerifyIdToken_eventEIK_Connect_VerifyIdToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_VerifyIdToken::execEIK_Connect_VerifyIdToken)
{
	P_GET_STRUCT(FEIK_Connect_IdToken,Z_Param_IdToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_VerifyIdToken**)Z_Param__Result=UEIK_Connect_VerifyIdToken::EIK_Connect_VerifyIdToken(Z_Param_IdToken);
	P_NATIVE_END;
}
// End Class UEIK_Connect_VerifyIdToken Function EIK_Connect_VerifyIdToken

// Begin Class UEIK_Connect_VerifyIdToken
void UEIK_Connect_VerifyIdToken::StaticRegisterNativesUEIK_Connect_VerifyIdToken()
{
	UClass* Class = UEIK_Connect_VerifyIdToken::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_VerifyIdToken", &UEIK_Connect_VerifyIdToken::execEIK_Connect_VerifyIdToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_VerifyIdToken);
UClass* Z_Construct_UClass_UEIK_Connect_VerifyIdToken_NoRegister()
{
	return UEIK_Connect_VerifyIdToken::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_VerifyIdToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_VerifyIdToken_EIK_Connect_VerifyIdToken, "EIK_Connect_VerifyIdToken" }, // 484567228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_VerifyIdToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_VerifyIdToken, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_VerifyIdToken_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2226027810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::ClassParams = {
	&UEIK_Connect_VerifyIdToken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_VerifyIdToken()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_VerifyIdToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_VerifyIdToken.OuterSingleton, Z_Construct_UClass_UEIK_Connect_VerifyIdToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_VerifyIdToken.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_VerifyIdToken>()
{
	return UEIK_Connect_VerifyIdToken::StaticClass();
}
UEIK_Connect_VerifyIdToken::UEIK_Connect_VerifyIdToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_VerifyIdToken);
UEIK_Connect_VerifyIdToken::~UEIK_Connect_VerifyIdToken() {}
// End Class UEIK_Connect_VerifyIdToken

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Connect_VerifyIdTokenCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Connect_VerifyIdTokenCallbackInfo_Statics::NewStructOps, TEXT("EIK_Connect_VerifyIdTokenCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Connect_VerifyIdTokenCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Connect_VerifyIdTokenCallbackInfo), 2808673940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_VerifyIdToken, UEIK_Connect_VerifyIdToken::StaticClass, TEXT("UEIK_Connect_VerifyIdToken"), &Z_Registration_Info_UClass_UEIK_Connect_VerifyIdToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_VerifyIdToken), 670667189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_1064926259(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_VerifyIdToken_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

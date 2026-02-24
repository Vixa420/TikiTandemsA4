// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Ecom_QueryOwnershipToken() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipTokenOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions;
class UScriptStruct* FEIK_Ecom_QueryOwnershipTokenOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipTokenOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipTokenOptions>()
{
	return FEIK_Ecom_QueryOwnershipTokenOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user whose ownership token you want to query\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user whose ownership token you want to query" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatalogItemIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The array of Catalog Item IDs to check for ownership, matching in number to the CatalogItemIdCount\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of Catalog Item IDs to check for ownership, matching in number to the CatalogItemIdCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatalogNamespace_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Optional product namespace, if not the one specified during initialization\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional product namespace, if not the one specified during initialization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CatalogItemIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CatalogItemIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CatalogNamespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipTokenOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogItemIds_Inner = { "CatalogItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogItemIds = { "CatalogItemIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenOptions, CatalogItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatalogItemIds_MetaData), NewProp_CatalogItemIds_MetaData) }; // 1272042362
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogNamespace = { "CatalogNamespace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenOptions, CatalogNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatalogNamespace_MetaData), NewProp_CatalogNamespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogItemIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogItemIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewProp_CatalogNamespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipTokenOptions",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipTokenOptions),
	alignof(FEIK_Ecom_QueryOwnershipTokenOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipTokenOptions

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipTokenCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo;
class UScriptStruct* FEIK_Ecom_QueryOwnershipTokenCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipTokenCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipTokenCallbackInfo>()
{
	return FEIK_Ecom_QueryOwnershipTokenCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The EOS_EResult code for the operation. EOS_Success indicates that the operation succeeded; other codes indicate errors.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EOS_EResult code for the operation. EOS_Success indicates that the operation succeeded; other codes indicate errors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user whose ownership token was queried\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user whose ownership token was queried" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnershipToken_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ownership token containing details about the catalog items queried\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ownership token containing details about the catalog items queried" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnershipToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipTokenCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_OwnershipToken = { "OwnershipToken", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipTokenCallbackInfo, OwnershipToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnershipToken_MetaData), NewProp_OwnershipToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewProp_OwnershipToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipTokenCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipTokenCallbackInfo),
	alignof(FEIK_Ecom_QueryOwnershipTokenCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipTokenCallbackInfo

// Begin Delegate FEIK_Ecom_QueryOwnershipTokenCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipTokenCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1387126470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Ecom_QueryOwnershipTokenCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryOwnershipTokenCallback, FEIK_Ecom_QueryOwnershipTokenCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipTokenCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipTokenCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Ecom_QueryOwnershipTokenCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Ecom_QueryOwnershipTokenCallback

// Begin Class UEIK_Ecom_QueryOwnershipToken Function EIK_Ecom_QueryOwnershipToken
struct Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics
{
	struct EIK_Ecom_QueryOwnershipToken_eventEIK_Ecom_QueryOwnershipToken_Parms
	{
		FEIK_Ecom_QueryOwnershipTokenOptions QueryOwnershipTokenOptions;
		UEIK_Ecom_QueryOwnershipToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the ownership status for a given list of catalog item IDs defined with Epic Online Services. The data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_QueryOwnershipToken" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the ownership status for a given list of catalog item IDs defined with Epic Online Services. The data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOwnershipTokenOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::NewProp_QueryOwnershipTokenOptions = { "QueryOwnershipTokenOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnershipToken_eventEIK_Ecom_QueryOwnershipToken_Parms, QueryOwnershipTokenOptions), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions, METADATA_PARAMS(0, nullptr) }; // 1376808594
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnershipToken_eventEIK_Ecom_QueryOwnershipToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::NewProp_QueryOwnershipTokenOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken, nullptr, "EIK_Ecom_QueryOwnershipToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::EIK_Ecom_QueryOwnershipToken_eventEIK_Ecom_QueryOwnershipToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::EIK_Ecom_QueryOwnershipToken_eventEIK_Ecom_QueryOwnershipToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Ecom_QueryOwnershipToken::execEIK_Ecom_QueryOwnershipToken)
{
	P_GET_STRUCT(FEIK_Ecom_QueryOwnershipTokenOptions,Z_Param_QueryOwnershipTokenOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Ecom_QueryOwnershipToken**)Z_Param__Result=UEIK_Ecom_QueryOwnershipToken::EIK_Ecom_QueryOwnershipToken(Z_Param_QueryOwnershipTokenOptions);
	P_NATIVE_END;
}
// End Class UEIK_Ecom_QueryOwnershipToken Function EIK_Ecom_QueryOwnershipToken

// Begin Class UEIK_Ecom_QueryOwnershipToken
void UEIK_Ecom_QueryOwnershipToken::StaticRegisterNativesUEIK_Ecom_QueryOwnershipToken()
{
	UClass* Class = UEIK_Ecom_QueryOwnershipToken::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_QueryOwnershipToken", &UEIK_Ecom_QueryOwnershipToken::execEIK_Ecom_QueryOwnershipToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Ecom_QueryOwnershipToken);
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_NoRegister()
{
	return UEIK_Ecom_QueryOwnershipToken::StaticClass();
}
struct Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipToken_EIK_Ecom_QueryOwnershipToken, "EIK_Ecom_QueryOwnershipToken" }, // 460063712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Ecom_QueryOwnershipToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Ecom_QueryOwnershipToken, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipTokenCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 15741563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::ClassParams = {
	&UEIK_Ecom_QueryOwnershipToken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken()
{
	if (!Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipToken.OuterSingleton, Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipToken.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Ecom_QueryOwnershipToken>()
{
	return UEIK_Ecom_QueryOwnershipToken::StaticClass();
}
UEIK_Ecom_QueryOwnershipToken::UEIK_Ecom_QueryOwnershipToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Ecom_QueryOwnershipToken);
UEIK_Ecom_QueryOwnershipToken::~UEIK_Ecom_QueryOwnershipToken() {}
// End Class UEIK_Ecom_QueryOwnershipToken

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Ecom_QueryOwnershipTokenOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenOptions_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipTokenOptions"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipTokenOptions), 1376808594U) },
		{ FEIK_Ecom_QueryOwnershipTokenCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipTokenCallbackInfo_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipTokenCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipTokenCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipTokenCallbackInfo), 1387126470U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Ecom_QueryOwnershipToken, UEIK_Ecom_QueryOwnershipToken::StaticClass, TEXT("UEIK_Ecom_QueryOwnershipToken"), &Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Ecom_QueryOwnershipToken), 4140155928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_1035035847(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipToken_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

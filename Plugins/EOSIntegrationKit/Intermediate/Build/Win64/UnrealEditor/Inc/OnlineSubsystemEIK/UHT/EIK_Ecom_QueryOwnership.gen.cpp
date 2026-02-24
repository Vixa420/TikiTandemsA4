// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Ecom_QueryOwnership() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnership();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnership_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_ItemOwnership();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions;
class UScriptStruct* FEIK_Ecom_QueryOwnershipOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipOptions>()
{
	return FEIK_Ecom_QueryOwnershipOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user whose ownership to query\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user whose ownership to query" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatalogItemIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The array of Catalog Item IDs to check for ownership\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of Catalog Item IDs to check for ownership" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatalogNamespace_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Optional product namespace, if not the one specified during initialization\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogItemIds_Inner = { "CatalogItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogItemIds = { "CatalogItemIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipOptions, CatalogItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatalogItemIds_MetaData), NewProp_CatalogItemIds_MetaData) }; // 1272042362
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogNamespace = { "CatalogNamespace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipOptions, CatalogNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatalogNamespace_MetaData), NewProp_CatalogNamespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogItemIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogItemIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewProp_CatalogNamespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipOptions",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipOptions),
	alignof(FEIK_Ecom_QueryOwnershipOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipOptions

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo;
class UScriptStruct* FEIK_Ecom_QueryOwnershipCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipCallbackInfo>()
{
	return FEIK_Ecom_QueryOwnershipCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemOwnership_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemOwnership_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemOwnership;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ItemOwnership_Inner = { "ItemOwnership", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_ItemOwnership, METADATA_PARAMS(0, nullptr) }; // 2425235209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ItemOwnership = { "ItemOwnership", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipCallbackInfo, ItemOwnership), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemOwnership_MetaData), NewProp_ItemOwnership_MetaData) }; // 2425235209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ItemOwnership_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewProp_ItemOwnership,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipCallbackInfo),
	alignof(FEIK_Ecom_QueryOwnershipCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipCallbackInfo

// Begin Delegate FEIK_Ecom_QueryOwnershipCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1271512246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Ecom_QueryOwnershipCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Ecom_QueryOwnershipCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryOwnershipCallback, FEIK_Ecom_QueryOwnershipCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Ecom_QueryOwnershipCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Ecom_QueryOwnershipCallback

// Begin Class UEIK_Ecom_QueryOwnership Function EIK_Ecom_QueryOwnership
struct Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics
{
	struct EIK_Ecom_QueryOwnership_eventEIK_Ecom_QueryOwnership_Parms
	{
		FEIK_Ecom_QueryOwnershipOptions QueryOwnershipOptions;
		UEIK_Ecom_QueryOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the ownership status for a given list of catalog item IDs defined with Epic Online Services. This data will be cached for a limited time and retrieved again from the backend when necessary Depending on the number of catalog item ids passed, the SDK splits the query into smaller batch requests to the backend and aggregates the result. Note: If one of the request batches fails, no data is cached and the entire query is marked as failed.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_QueryOwnership" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the ownership status for a given list of catalog item IDs defined with Epic Online Services. This data will be cached for a limited time and retrieved again from the backend when necessary Depending on the number of catalog item ids passed, the SDK splits the query into smaller batch requests to the backend and aggregates the result. Note: If one of the request batches fails, no data is cached and the entire query is marked as failed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOwnershipOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::NewProp_QueryOwnershipOptions = { "QueryOwnershipOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnership_eventEIK_Ecom_QueryOwnership_Parms, QueryOwnershipOptions), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions, METADATA_PARAMS(0, nullptr) }; // 3662224311
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnership_eventEIK_Ecom_QueryOwnership_Parms, ReturnValue), Z_Construct_UClass_UEIK_Ecom_QueryOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::NewProp_QueryOwnershipOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Ecom_QueryOwnership, nullptr, "EIK_Ecom_QueryOwnership", nullptr, nullptr, Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::EIK_Ecom_QueryOwnership_eventEIK_Ecom_QueryOwnership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::EIK_Ecom_QueryOwnership_eventEIK_Ecom_QueryOwnership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Ecom_QueryOwnership::execEIK_Ecom_QueryOwnership)
{
	P_GET_STRUCT(FEIK_Ecom_QueryOwnershipOptions,Z_Param_QueryOwnershipOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Ecom_QueryOwnership**)Z_Param__Result=UEIK_Ecom_QueryOwnership::EIK_Ecom_QueryOwnership(Z_Param_QueryOwnershipOptions);
	P_NATIVE_END;
}
// End Class UEIK_Ecom_QueryOwnership Function EIK_Ecom_QueryOwnership

// Begin Class UEIK_Ecom_QueryOwnership
void UEIK_Ecom_QueryOwnership::StaticRegisterNativesUEIK_Ecom_QueryOwnership()
{
	UClass* Class = UEIK_Ecom_QueryOwnership::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_QueryOwnership", &UEIK_Ecom_QueryOwnership::execEIK_Ecom_QueryOwnership },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Ecom_QueryOwnership);
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnership_NoRegister()
{
	return UEIK_Ecom_QueryOwnership::StaticClass();
}
struct Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnership.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Ecom_QueryOwnership_EIK_Ecom_QueryOwnership, "EIK_Ecom_QueryOwnership" }, // 2198673864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Ecom_QueryOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Ecom_QueryOwnership, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3098195477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::ClassParams = {
	&UEIK_Ecom_QueryOwnership::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnership()
{
	if (!Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnership.OuterSingleton, Z_Construct_UClass_UEIK_Ecom_QueryOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnership.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Ecom_QueryOwnership>()
{
	return UEIK_Ecom_QueryOwnership::StaticClass();
}
UEIK_Ecom_QueryOwnership::UEIK_Ecom_QueryOwnership(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Ecom_QueryOwnership);
UEIK_Ecom_QueryOwnership::~UEIK_Ecom_QueryOwnership() {}
// End Class UEIK_Ecom_QueryOwnership

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Ecom_QueryOwnershipOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipOptions_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipOptions"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipOptions), 3662224311U) },
		{ FEIK_Ecom_QueryOwnershipCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipCallbackInfo_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipCallbackInfo), 1271512246U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Ecom_QueryOwnership, UEIK_Ecom_QueryOwnership::StaticClass, TEXT("UEIK_Ecom_QueryOwnership"), &Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Ecom_QueryOwnership), 3845997182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_1135916738(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnership_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

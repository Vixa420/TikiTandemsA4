// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Ecom_Checkout() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_Checkout();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_Checkout_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutEntry();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Ecom_CheckoutOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions;
class UScriptStruct* FEIK_Ecom_CheckoutOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_CheckoutOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_CheckoutOptions>()
{
	return FEIK_Ecom_CheckoutOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user who is making the purchase\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user who is making the purchase" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideCatalogNamespace_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The catalog namespace will be the current Sandbox ID (in EOS_Platform_Options) unless overridden by this field\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The catalog namespace will be the current Sandbox ID (in EOS_Platform_Options) unless overridden by this field" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The number of EOS_Ecom_CheckoutEntry elements contained in Entries\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of EOS_Ecom_CheckoutEntry elements contained in Entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An array of EOS_Ecom_CheckoutEntry elements, each containing the details of a single offer\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of EOS_Ecom_CheckoutEntry elements, each containing the details of a single offer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideCatalogNamespace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_CheckoutOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_OverrideCatalogNamespace = { "OverrideCatalogNamespace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutOptions, OverrideCatalogNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideCatalogNamespace_MetaData), NewProp_OverrideCatalogNamespace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutOptions, EntryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutEntry, METADATA_PARAMS(0, nullptr) }; // 1621874635
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutOptions, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1621874635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_OverrideCatalogNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_EntryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_CheckoutOptions",
	Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::PropPointers),
	sizeof(FEIK_Ecom_CheckoutOptions),
	alignof(FEIK_Ecom_CheckoutOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_CheckoutOptions

// Begin ScriptStruct FEIK_Ecom_CheckoutCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo;
class UScriptStruct* FEIK_Ecom_CheckoutCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_CheckoutCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_CheckoutCallbackInfo>()
{
	return FEIK_Ecom_CheckoutCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Result code for the operation. EOS_Success is returned for a successful request, otherwise one of the error codes is returned. See eos_common.h\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result code for the operation. EOS_Success is returned for a successful request, otherwise one of the error codes is returned. See eos_common.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The transaction ID which can be used to obtain an EOS_Ecom_HTransaction using EOS_Ecom_CopyTransactionById.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transaction ID which can be used to obtain an EOS_Ecom_HTransaction using EOS_Ecom_CopyTransactionById." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the user who initiated the purchase\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the user who initiated the purchase" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_CheckoutCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutCallbackInfo, TransactionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionId_MetaData), NewProp_TransactionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_CheckoutCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_TransactionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_CheckoutCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Ecom_CheckoutCallbackInfo),
	alignof(FEIK_Ecom_CheckoutCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_CheckoutCallbackInfo

// Begin Delegate FEIK_Ecom_CheckoutCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms
	{
		FEIK_Ecom_CheckoutCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2465928071
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Ecom_CheckoutCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Ecom_CheckoutCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_CheckoutCallback, FEIK_Ecom_CheckoutCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms
	{
		FEIK_Ecom_CheckoutCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Ecom_CheckoutCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Ecom_CheckoutCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Ecom_CheckoutCallback

// Begin Class UEIK_Ecom_Checkout Function EIK_Ecom_Checkout
struct Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics
{
	struct EIK_Ecom_Checkout_eventEIK_Ecom_Checkout_Parms
	{
		FEIK_Ecom_CheckoutOptions CheckoutOptions;
		UEIK_Ecom_Checkout* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initiates the purchase flow for a set of offers. The callback is triggered after the purchase flow. On success, the set of entitlements that were unlocked will be cached. On success, a Transaction ID will be returned. The Transaction ID can be used to obtain an EOS_Ecom_HTransaction handle. The handle can then be used to retrieve the entitlements rewarded by the purchase.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_Checkout" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates the purchase flow for a set of offers. The callback is triggered after the purchase flow. On success, the set of entitlements that were unlocked will be cached. On success, a Transaction ID will be returned. The Transaction ID can be used to obtain an EOS_Ecom_HTransaction handle. The handle can then be used to retrieve the entitlements rewarded by the purchase." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckoutOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::NewProp_CheckoutOptions = { "CheckoutOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_Checkout_eventEIK_Ecom_Checkout_Parms, CheckoutOptions), Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions, METADATA_PARAMS(0, nullptr) }; // 2640016223
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_Checkout_eventEIK_Ecom_Checkout_Parms, ReturnValue), Z_Construct_UClass_UEIK_Ecom_Checkout_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::NewProp_CheckoutOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Ecom_Checkout, nullptr, "EIK_Ecom_Checkout", nullptr, nullptr, Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::EIK_Ecom_Checkout_eventEIK_Ecom_Checkout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::EIK_Ecom_Checkout_eventEIK_Ecom_Checkout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Ecom_Checkout::execEIK_Ecom_Checkout)
{
	P_GET_STRUCT(FEIK_Ecom_CheckoutOptions,Z_Param_CheckoutOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Ecom_Checkout**)Z_Param__Result=UEIK_Ecom_Checkout::EIK_Ecom_Checkout(Z_Param_CheckoutOptions);
	P_NATIVE_END;
}
// End Class UEIK_Ecom_Checkout Function EIK_Ecom_Checkout

// Begin Class UEIK_Ecom_Checkout
void UEIK_Ecom_Checkout::StaticRegisterNativesUEIK_Ecom_Checkout()
{
	UClass* Class = UEIK_Ecom_Checkout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_Checkout", &UEIK_Ecom_Checkout::execEIK_Ecom_Checkout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Ecom_Checkout);
UClass* Z_Construct_UClass_UEIK_Ecom_Checkout_NoRegister()
{
	return UEIK_Ecom_Checkout::StaticClass();
}
struct Z_Construct_UClass_UEIK_Ecom_Checkout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_Checkout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Ecom_Checkout_EIK_Ecom_Checkout, "EIK_Ecom_Checkout" }, // 3995016520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Ecom_Checkout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Ecom_Checkout, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_CheckoutCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 146481417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::ClassParams = {
	&UEIK_Ecom_Checkout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Ecom_Checkout()
{
	if (!Z_Registration_Info_UClass_UEIK_Ecom_Checkout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Ecom_Checkout.OuterSingleton, Z_Construct_UClass_UEIK_Ecom_Checkout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Ecom_Checkout.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Ecom_Checkout>()
{
	return UEIK_Ecom_Checkout::StaticClass();
}
UEIK_Ecom_Checkout::UEIK_Ecom_Checkout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Ecom_Checkout);
UEIK_Ecom_Checkout::~UEIK_Ecom_Checkout() {}
// End Class UEIK_Ecom_Checkout

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Ecom_CheckoutOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutOptions_Statics::NewStructOps, TEXT("EIK_Ecom_CheckoutOptions"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_CheckoutOptions), 2640016223U) },
		{ FEIK_Ecom_CheckoutCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_CheckoutCallbackInfo_Statics::NewStructOps, TEXT("EIK_Ecom_CheckoutCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_CheckoutCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_CheckoutCallbackInfo), 2465928071U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Ecom_Checkout, UEIK_Ecom_Checkout::StaticClass, TEXT("UEIK_Ecom_Checkout"), &Z_Registration_Info_UClass_UEIK_Ecom_Checkout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Ecom_Checkout), 3526227018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_1942810921(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_Checkout_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

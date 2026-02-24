// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Ecom_QueryOwnershipBySandboxIds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_SandboxId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_SandboxIdItemOwnership();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipBySandboxIdsOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions;
class UScriptStruct* FEIK_Ecom_QueryOwnershipBySandboxIdsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipBySandboxIdsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipBySandboxIdsOptions>()
{
	return FEIK_Ecom_QueryOwnershipBySandboxIdsOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user whose ownership to query.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user whose ownership to query." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The array of Sandbox IDs to check for ownership.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of Sandbox IDs to check for ownership." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SandboxIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SandboxIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipBySandboxIdsOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_SandboxIds_Inner = { "SandboxIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_SandboxId, METADATA_PARAMS(0, nullptr) }; // 138141188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_SandboxIds = { "SandboxIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions, SandboxIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxIds_MetaData), NewProp_SandboxIds_MetaData) }; // 138141188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_SandboxIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewProp_SandboxIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipBySandboxIdsOptions",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions),
	alignof(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipBySandboxIdsOptions

// Begin ScriptStruct FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo;
class UScriptStruct* FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo>()
{
	return FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The EOS_EResult code for the operation. EOS_Success indicates that the operation succeeded; other codes indicate errors.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EOS_EResult code for the operation. EOS_Success indicates that the operation succeeded; other codes indicate errors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Epic Account ID of the local user whose ownership was queried\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID of the local user whose ownership was queried" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxIdItemOwnerships_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of SandboxIds and their corresponding owned catalog item Ids. If there are no ownership items, the OwnedCatalogItemIdsCount is 0 and OwnedCatalogItemIds is null.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of SandboxIds and their corresponding owned catalog item Ids. If there are no ownership items, the OwnedCatalogItemIdsCount is 0 and OwnedCatalogItemIds is null." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SandboxIdItemOwnerships_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SandboxIdItemOwnerships;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_SandboxIdItemOwnerships_Inner = { "SandboxIdItemOwnerships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_SandboxIdItemOwnership, METADATA_PARAMS(0, nullptr) }; // 1071817539
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_SandboxIdItemOwnerships = { "SandboxIdItemOwnerships", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, SandboxIdItemOwnerships), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxIdItemOwnerships_MetaData), NewProp_SandboxIdItemOwnerships_MetaData) }; // 1071817539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_SandboxIdItemOwnerships_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewProp_SandboxIdItemOwnerships,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo),
	alignof(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo

// Begin Delegate FEIK_Ecom_QueryOwnershipBySandboxIdsCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4225260756
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Ecom_QueryOwnershipBySandboxIdsCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_QueryOwnershipBySandboxIdsCallback, FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms
	{
		FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Ecom_QueryOwnershipBySandboxIdsCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Ecom_QueryOwnershipBySandboxIdsCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Ecom_QueryOwnershipBySandboxIdsCallback

// Begin Class UEIK_Ecom_QueryOwnershipBySandboxIds Function EIK_Ecom_QueryOwnershipBySandboxIds
struct Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics
{
	struct EIK_Ecom_QueryOwnershipBySandboxIds_eventEIK_Ecom_QueryOwnershipBySandboxIds_Parms
	{
		FEIK_Ecom_QueryOwnershipBySandboxIdsOptions QueryOwnershipBySandboxIdsOptions;
		UEIK_Ecom_QueryOwnershipBySandboxIds* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the ownership status of all catalog item IDs under the given list of Sandbox IDs defined with Epic Online Services. This data will be cached for a limited time and retrieved again from the backend when necessary.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_QueryOwnershipBySandboxIds" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the ownership status of all catalog item IDs under the given list of Sandbox IDs defined with Epic Online Services. This data will be cached for a limited time and retrieved again from the backend when necessary." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOwnershipBySandboxIdsOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_QueryOwnershipBySandboxIdsOptions = { "QueryOwnershipBySandboxIdsOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnershipBySandboxIds_eventEIK_Ecom_QueryOwnershipBySandboxIds_Parms, QueryOwnershipBySandboxIdsOptions), Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions, METADATA_PARAMS(0, nullptr) }; // 2959764425
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_QueryOwnershipBySandboxIds_eventEIK_Ecom_QueryOwnershipBySandboxIds_Parms, ReturnValue), Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_QueryOwnershipBySandboxIdsOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds, nullptr, "EIK_Ecom_QueryOwnershipBySandboxIds", nullptr, nullptr, Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::EIK_Ecom_QueryOwnershipBySandboxIds_eventEIK_Ecom_QueryOwnershipBySandboxIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::EIK_Ecom_QueryOwnershipBySandboxIds_eventEIK_Ecom_QueryOwnershipBySandboxIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Ecom_QueryOwnershipBySandboxIds::execEIK_Ecom_QueryOwnershipBySandboxIds)
{
	P_GET_STRUCT(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions,Z_Param_QueryOwnershipBySandboxIdsOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Ecom_QueryOwnershipBySandboxIds**)Z_Param__Result=UEIK_Ecom_QueryOwnershipBySandboxIds::EIK_Ecom_QueryOwnershipBySandboxIds(Z_Param_QueryOwnershipBySandboxIdsOptions);
	P_NATIVE_END;
}
// End Class UEIK_Ecom_QueryOwnershipBySandboxIds Function EIK_Ecom_QueryOwnershipBySandboxIds

// Begin Class UEIK_Ecom_QueryOwnershipBySandboxIds
void UEIK_Ecom_QueryOwnershipBySandboxIds::StaticRegisterNativesUEIK_Ecom_QueryOwnershipBySandboxIds()
{
	UClass* Class = UEIK_Ecom_QueryOwnershipBySandboxIds::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_QueryOwnershipBySandboxIds", &UEIK_Ecom_QueryOwnershipBySandboxIds::execEIK_Ecom_QueryOwnershipBySandboxIds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Ecom_QueryOwnershipBySandboxIds);
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_NoRegister()
{
	return UEIK_Ecom_QueryOwnershipBySandboxIds::StaticClass();
}
struct Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_QueryOwnershipBySandboxIds.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Ecom_QueryOwnershipBySandboxIds_EIK_Ecom_QueryOwnershipBySandboxIds, "EIK_Ecom_QueryOwnershipBySandboxIds" }, // 4085495123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Ecom_QueryOwnershipBySandboxIds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Ecom_QueryOwnershipBySandboxIds, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_QueryOwnershipBySandboxIdsCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2413627989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::ClassParams = {
	&UEIK_Ecom_QueryOwnershipBySandboxIds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds()
{
	if (!Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds.OuterSingleton, Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Ecom_QueryOwnershipBySandboxIds>()
{
	return UEIK_Ecom_QueryOwnershipBySandboxIds::StaticClass();
}
UEIK_Ecom_QueryOwnershipBySandboxIds::UEIK_Ecom_QueryOwnershipBySandboxIds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Ecom_QueryOwnershipBySandboxIds);
UEIK_Ecom_QueryOwnershipBySandboxIds::~UEIK_Ecom_QueryOwnershipBySandboxIds() {}
// End Class UEIK_Ecom_QueryOwnershipBySandboxIds

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Ecom_QueryOwnershipBySandboxIdsOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsOptions_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipBySandboxIdsOptions"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipBySandboxIdsOptions), 2959764425U) },
		{ FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo_Statics::NewStructOps, TEXT("EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Ecom_QueryOwnershipBySandboxIdsCallbackInfo), 4225260756U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds, UEIK_Ecom_QueryOwnershipBySandboxIds::StaticClass, TEXT("UEIK_Ecom_QueryOwnershipBySandboxIds"), &Z_Registration_Info_UClass_UEIK_Ecom_QueryOwnershipBySandboxIds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Ecom_QueryOwnershipBySandboxIds), 1352373189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_3414677255(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_QueryOwnershipBySandboxIds_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

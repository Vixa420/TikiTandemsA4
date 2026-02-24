// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_EcomSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_EcomSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_EcomSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_EcomSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItem();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOffer();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_CatalogRelease();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_EntitlementName();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_KeyImageInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogItem_Release
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CatalogItem_Release_Parms
	{
		FEIK_Ecom_CatalogItem CatalogItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Ecom_CatalogItem structure. This must be called on data retrieved from EOS_Ecom_CopyOfferItemByIndex.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CatalogItem_Release" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Ecom_CatalogItem structure. This must be called on data retrieved from EOS_Ecom_CopyOfferItemByIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CatalogItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::NewProp_CatalogItem = { "CatalogItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CatalogItem_Release_Parms, CatalogItem), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItem, METADATA_PARAMS(0, nullptr) }; // 1884800724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::NewProp_CatalogItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CatalogItem_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogItem_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogItem_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CatalogItem_Release)
{
	P_GET_STRUCT(FEIK_Ecom_CatalogItem,Z_Param_CatalogItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Ecom_CatalogItem_Release(Z_Param_CatalogItem);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogItem_Release

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogOffer_Release
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CatalogOffer_Release_Parms
	{
		FEIK_Ecom_CatalogOffer CatalogOffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Ecom_CatalogOffer structure. This must be called on data retrieved from EOS_Ecom_CopyOfferByIndex.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CatalogOffer_Release" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Ecom_CatalogOffer structure. This must be called on data retrieved from EOS_Ecom_CopyOfferByIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CatalogOffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::NewProp_CatalogOffer = { "CatalogOffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CatalogOffer_Release_Parms, CatalogOffer), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOffer, METADATA_PARAMS(0, nullptr) }; // 1308398000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::NewProp_CatalogOffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CatalogOffer_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogOffer_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogOffer_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CatalogOffer_Release)
{
	P_GET_STRUCT(FEIK_Ecom_CatalogOffer,Z_Param_CatalogOffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Ecom_CatalogOffer_Release(Z_Param_CatalogOffer);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogOffer_Release

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogRelease_Release
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CatalogRelease_Release_Parms
	{
		FEIK_Ecom_CatalogRelease CatalogRelease;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Ecom_CatalogRelease structure. This must be called on data retrieved from EOS_Ecom_CopyItemReleaseByIndex.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CatalogRelease_Release" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Ecom_CatalogRelease structure. This must be called on data retrieved from EOS_Ecom_CopyItemReleaseByIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CatalogRelease;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::NewProp_CatalogRelease = { "CatalogRelease", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CatalogRelease_Release_Parms, CatalogRelease), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogRelease, METADATA_PARAMS(0, nullptr) }; // 3542324682
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::NewProp_CatalogRelease,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CatalogRelease_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogRelease_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CatalogRelease_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CatalogRelease_Release)
{
	P_GET_STRUCT(FEIK_Ecom_CatalogRelease,Z_Param_CatalogRelease);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Ecom_CatalogRelease_Release(Z_Param_CatalogRelease);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CatalogRelease_Release

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementById
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FString EntitlementId;
		FEIK_Ecom_Entitlement OutEntitlement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches the entitlement with the given ID.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyEntitlementById" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the entitlement with the given ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntitlement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms, EntitlementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementId_MetaData), NewProp_EntitlementId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_OutEntitlement = { "OutEntitlement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms, OutEntitlement), Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement, METADATA_PARAMS(0, nullptr) }; // 2740020681
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_EntitlementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_OutEntitlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyEntitlementById", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementById)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
	P_GET_STRUCT_REF(FEIK_Ecom_Entitlement,Z_Param_Out_OutEntitlement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyEntitlementById(Z_Param_LocalUserId,Z_Param_EntitlementId,Z_Param_Out_OutEntitlement);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementById

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 EntitlementIndex;
		FEIK_Ecom_Entitlement OutEntitlement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an entitlement from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyEntitlementByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an entitlement from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntitlementIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntitlement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_EntitlementIndex = { "EntitlementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms, EntitlementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_OutEntitlement = { "OutEntitlement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms, OutEntitlement), Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement, METADATA_PARAMS(0, nullptr) }; // 2740020681
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_EntitlementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_OutEntitlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyEntitlementByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_EntitlementIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_Entitlement,Z_Param_Out_OutEntitlement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyEntitlementByIndex(Z_Param_LocalUserId,Z_Param_EntitlementIndex,Z_Param_Out_OutEntitlement);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementByNameAndIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FString EntitlementName;
		int32 Index;
		FEIK_Ecom_Entitlement OutEntitlement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a single entitlement with a given Entitlement Name. The Index is used to access individual entitlements among those with the same Entitlement Name. The Index can be a value from 0 to one less than the result from EOS_Ecom_GetEntitlementsByNameCount.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyEntitlementByNameAndIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a single entitlement with a given Entitlement Name. The Index is used to access individual entitlements among those with the same Entitlement Name. The Index can be a value from 0 to one less than the result from EOS_Ecom_GetEntitlementsByNameCount." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntitlement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_EntitlementName = { "EntitlementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms, EntitlementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementName_MetaData), NewProp_EntitlementName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_OutEntitlement = { "OutEntitlement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms, OutEntitlement), Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement, METADATA_PARAMS(0, nullptr) }; // 2740020681
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_EntitlementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_OutEntitlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyEntitlementByNameAndIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyEntitlementByNameAndIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementByNameAndIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FEIK_Ecom_Entitlement,Z_Param_Out_OutEntitlement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyEntitlementByNameAndIndex(Z_Param_LocalUserId,Z_Param_EntitlementName,Z_Param_Index,Z_Param_Out_OutEntitlement);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyEntitlementByNameAndIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemById
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FString ItemId;
		FEIK_Ecom_CatalogItem OutCatalogItem;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an item with a given ID.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyItemById" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an item with a given ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCatalogItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_OutCatalogItem = { "OutCatalogItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms, OutCatalogItem), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItem, METADATA_PARAMS(0, nullptr) }; // 1884800724
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_OutCatalogItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyItemById", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyItemById)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogItem,Z_Param_Out_OutCatalogItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyItemById(Z_Param_LocalUserId,Z_Param_ItemId,Z_Param_Out_OutCatalogItem);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemById

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemImageInfoByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogItemId ItemId;
		int32 ImageInfoIndex;
		FEIK_Ecom_KeyImageInfo OutKeyImageInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an image from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyItemImageInfoByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an image from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImageInfoIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeyImageInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms, ItemId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ImageInfoIndex = { "ImageInfoIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms, ImageInfoIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_OutKeyImageInfo = { "OutKeyImageInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms, OutKeyImageInfo), Z_Construct_UScriptStruct_FEIK_Ecom_KeyImageInfo, METADATA_PARAMS(0, nullptr) }; // 1556550762
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ImageInfoIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_OutKeyImageInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyItemImageInfoByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemImageInfoByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyItemImageInfoByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_Ecom_CatalogItemId,Z_Param_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ImageInfoIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_KeyImageInfo,Z_Param_Out_OutKeyImageInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyItemImageInfoByIndex(Z_Param_LocalUserId,Z_Param_ItemId,Z_Param_ImageInfoIndex,Z_Param_Out_OutKeyImageInfo);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemImageInfoByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemReleaseByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogItemId ItemId;
		int32 ReleaseIndex;
		FEIK_Ecom_CatalogRelease OutRelease;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a release from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyItemReleaseByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a release from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReleaseIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRelease;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms, ItemId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ReleaseIndex = { "ReleaseIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms, ReleaseIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_OutRelease = { "OutRelease", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms, OutRelease), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogRelease, METADATA_PARAMS(0, nullptr) }; // 3542324682
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ReleaseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_OutRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyItemReleaseByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyItemReleaseByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyItemReleaseByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_Ecom_CatalogItemId,Z_Param_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReleaseIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogRelease,Z_Param_Out_OutRelease);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyItemReleaseByIndex(Z_Param_LocalUserId,Z_Param_ItemId,Z_Param_ReleaseIndex,Z_Param_Out_OutRelease);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyItemReleaseByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyLastRedeemedEntitlementByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 RedeemedEntitlementIndex;
		FString OutRedeemedEntitlementId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a redeemed entitlement id from a given index. Only entitlements that were redeemed during the last EOS_Ecom_RedeemEntitlements call can be copied.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyLastRedeemedEntitlementByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a redeemed entitlement id from a given index. Only entitlements that were redeemed during the last EOS_Ecom_RedeemEntitlements call can be copied." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RedeemedEntitlementIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutRedeemedEntitlementId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_RedeemedEntitlementIndex = { "RedeemedEntitlementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms, RedeemedEntitlementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_OutRedeemedEntitlementId = { "OutRedeemedEntitlementId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms, OutRedeemedEntitlementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_RedeemedEntitlementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_OutRedeemedEntitlementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyLastRedeemedEntitlementByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyLastRedeemedEntitlementByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyLastRedeemedEntitlementByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RedeemedEntitlementIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutRedeemedEntitlementId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyLastRedeemedEntitlementByIndex(Z_Param_LocalUserId,Z_Param_RedeemedEntitlementIndex,Z_Param_Out_OutRedeemedEntitlementId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyLastRedeemedEntitlementByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferById
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogOfferId OfferId;
		FEIK_Ecom_CatalogOffer OutCatalogOffer;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an offer with a given ID. The pricing and text are localized to the provided account.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyOfferById" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an offer with a given ID. The pricing and text are localized to the provided account." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCatalogOffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms, OfferId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) }; // 1083215050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_OutCatalogOffer = { "OutCatalogOffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms, OutCatalogOffer), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOffer, METADATA_PARAMS(0, nullptr) }; // 1308398000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_OutCatalogOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyOfferById", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferById)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOfferId,Z_Param_Out_OfferId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOffer,Z_Param_Out_OutCatalogOffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyOfferById(Z_Param_LocalUserId,Z_Param_Out_OfferId,Z_Param_Out_OutCatalogOffer);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferById

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 OfferIndex;
		FEIK_Ecom_CatalogOffer OutCatalogOffer;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an offer from a given index. The pricing and text are localized to the provided account.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyOfferByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an offer from a given index. The pricing and text are localized to the provided account." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OfferIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCatalogOffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_OfferIndex = { "OfferIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms, OfferIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_OutCatalogOffer = { "OutCatalogOffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms, OutCatalogOffer), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOffer, METADATA_PARAMS(0, nullptr) }; // 1308398000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_OfferIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_OutCatalogOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyOfferByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OfferIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOffer,Z_Param_Out_OutCatalogOffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyOfferByIndex(Z_Param_LocalUserId,Z_Param_OfferIndex,Z_Param_Out_OutCatalogOffer);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferImageInfoByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogOfferId OfferId;
		int32 ImageInfoIndex;
		FEIK_Ecom_KeyImageInfo OutKeyImageInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an image from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyOfferImageInfoByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an image from a given index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImageInfoIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeyImageInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms, OfferId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) }; // 1083215050
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_ImageInfoIndex = { "ImageInfoIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms, ImageInfoIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_OutKeyImageInfo = { "OutKeyImageInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms, OutKeyImageInfo), Z_Construct_UScriptStruct_FEIK_Ecom_KeyImageInfo, METADATA_PARAMS(0, nullptr) }; // 1556550762
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_ImageInfoIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_OutKeyImageInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyOfferImageInfoByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferImageInfoByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferImageInfoByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOfferId,Z_Param_Out_OfferId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ImageInfoIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_KeyImageInfo,Z_Param_Out_OutKeyImageInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyOfferImageInfoByIndex(Z_Param_LocalUserId,Z_Param_Out_OfferId,Z_Param_ImageInfoIndex,Z_Param_Out_OutKeyImageInfo);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferImageInfoByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferItemByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogOfferId OfferId;
		int32 ItemIndex;
		FEIK_Ecom_CatalogItem OutCatalogItem;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an item from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyOfferItemByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an item from a given index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCatalogItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms, OfferId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) }; // 1083215050
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_OutCatalogItem = { "OutCatalogItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms, OutCatalogItem), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItem, METADATA_PARAMS(0, nullptr) }; // 1884800724
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_OutCatalogItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyOfferItemByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyOfferItemByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferItemByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOfferId,Z_Param_Out_OfferId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogItem,Z_Param_Out_OutCatalogItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyOfferItemByIndex(Z_Param_LocalUserId,Z_Param_Out_OfferId,Z_Param_ItemIndex,Z_Param_Out_OutCatalogItem);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyOfferItemByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyTransactionById
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FString TransactionId;
		FEIK_Ecom_HTransaction OutTransaction;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches the transaction handle at the given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyTransactionById" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the transaction handle at the given index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms, TransactionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionId_MetaData), NewProp_TransactionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_OutTransaction = { "OutTransaction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms, OutTransaction), Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction, METADATA_PARAMS(0, nullptr) }; // 1029805666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_TransactionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_OutTransaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyTransactionById", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyTransactionById)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TransactionId);
	P_GET_STRUCT_REF(FEIK_Ecom_HTransaction,Z_Param_Out_OutTransaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyTransactionById(Z_Param_LocalUserId,Z_Param_TransactionId,Z_Param_Out_OutTransaction);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyTransactionById

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_CopyTransactionByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 TransactionIndex;
		FEIK_Ecom_HTransaction OutTransaction;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches the transaction handle at the given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_CopyTransactionByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the transaction handle at the given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_TransactionIndex = { "TransactionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms, TransactionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_OutTransaction = { "OutTransaction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms, OutTransaction), Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction, METADATA_PARAMS(0, nullptr) }; // 1029805666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_TransactionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_OutTransaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_CopyTransactionByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_CopyTransactionByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_CopyTransactionByIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_TransactionIndex);
	P_GET_STRUCT_REF(FEIK_Ecom_HTransaction,Z_Param_Out_OutTransaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_CopyTransactionByIndex(Z_Param_LocalUserId,Z_Param_TransactionIndex,Z_Param_Out_OutTransaction);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_CopyTransactionByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_Entitlement_Release
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_Entitlement_Release_Parms
	{
		FEIK_Ecom_Entitlement Entitlement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Ecom_Entitlement structure. This must be called on data retrieved from EOS_Ecom_CopyEntitlementByIndex and EOS_Ecom_CopyEntitlementById.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_Entitlement_Release" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Ecom_Entitlement structure. This must be called on data retrieved from EOS_Ecom_CopyEntitlementByIndex and EOS_Ecom_CopyEntitlementById." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entitlement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::NewProp_Entitlement = { "Entitlement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Entitlement_Release_Parms, Entitlement), Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement, METADATA_PARAMS(0, nullptr) }; // 2740020681
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::NewProp_Entitlement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_Entitlement_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Entitlement_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Entitlement_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_Entitlement_Release)
{
	P_GET_STRUCT(FEIK_Ecom_Entitlement,Z_Param_Entitlement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Ecom_Entitlement_Release(Z_Param_Entitlement);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_Entitlement_Release

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetEntitlementsByNameCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_EntitlementName EntitlementName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of entitlements with the given Entitlement Name that are cached for a given local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetEntitlementsByNameCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of entitlements with the given Entitlement Name that are cached for a given local user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntitlementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_EntitlementName = { "EntitlementName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms, EntitlementName), Z_Construct_UScriptStruct_FEIK_Ecom_EntitlementName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementName_MetaData), NewProp_EntitlementName_MetaData) }; // 2246996823
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_EntitlementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetEntitlementsByNameCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsByNameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetEntitlementsByNameCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_EntitlementName,Z_Param_Out_EntitlementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetEntitlementsByNameCount(Z_Param_LocalUserId,Z_Param_Out_EntitlementName);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetEntitlementsByNameCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetEntitlementsCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of entitlements that are cached for a given local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetEntitlementsCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of entitlements that are cached for a given local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetEntitlementsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetEntitlementsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetEntitlementsCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetEntitlementsCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetEntitlementsCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetItemImageInfoCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogItemId ItemId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of images that are associated with a given cached item for a local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetItemImageInfoCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of images that are associated with a given cached item for a local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms, ItemId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetItemImageInfoCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetItemImageInfoCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetItemImageInfoCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_Ecom_CatalogItemId,Z_Param_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetItemImageInfoCount(Z_Param_LocalUserId,Z_Param_ItemId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetItemImageInfoCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetItemReleaseCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogItemId ItemId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of releases that are associated with a given cached item for a local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetItemReleaseCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of releases that are associated with a given cached item for a local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms, ItemId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogItemId, METADATA_PARAMS(0, nullptr) }; // 1272042362
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetItemReleaseCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetItemReleaseCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetItemReleaseCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_Ecom_CatalogItemId,Z_Param_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetItemReleaseCount(Z_Param_LocalUserId,Z_Param_ItemId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetItemReleaseCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetLastRedeemedEntitlementsCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetLastRedeemedEntitlementsCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of entitlements that were redeemed during the last EOS_Ecom_RedeemEntitlements call.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetLastRedeemedEntitlementsCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of entitlements that were redeemed during the last EOS_Ecom_RedeemEntitlements call." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetLastRedeemedEntitlementsCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetLastRedeemedEntitlementsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetLastRedeemedEntitlementsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetLastRedeemedEntitlementsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetLastRedeemedEntitlementsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetLastRedeemedEntitlementsCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetLastRedeemedEntitlementsCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetLastRedeemedEntitlementsCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetOfferCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of offers that are cached for a given local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetOfferCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of offers that are cached for a given local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetOfferCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetOfferCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetOfferCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferImageInfoCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogOfferId OfferId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of images that are associated with a given cached offer for a local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetOfferImageInfoCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of images that are associated with a given cached offer for a local user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms, OfferId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) }; // 1083215050
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetOfferImageInfoCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferImageInfoCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetOfferImageInfoCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOfferId,Z_Param_Out_OfferId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetOfferImageInfoCount(Z_Param_LocalUserId,Z_Param_Out_OfferId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferImageInfoCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferItemCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Ecom_CatalogOfferId OfferId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of items that are associated with a given cached offer for a local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetOfferItemCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of items that are associated with a given cached offer for a local user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms, OfferId), Z_Construct_UScriptStruct_FEIK_Ecom_CatalogOfferId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) }; // 1083215050
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetOfferItemCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetOfferItemCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetOfferItemCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Ecom_CatalogOfferId,Z_Param_Out_OfferId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetOfferItemCount(Z_Param_LocalUserId,Z_Param_Out_OfferId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetOfferItemCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_GetTransactionCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_GetTransactionCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of transactions that are cached for a given local user.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_GetTransactionCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of transactions that are cached for a given local user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetTransactionCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_GetTransactionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_GetTransactionCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetTransactionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_GetTransactionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_GetTransactionCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_GetTransactionCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_GetTransactionCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_KeyImageInfo_Release
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_KeyImageInfo_Release_Parms
	{
		FEIK_Ecom_KeyImageInfo KeyImageInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Ecom_KeyImageInfo structure. This must be called on data retrieved from EOS_Ecom_CopyItemImageInfoByIndex.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_KeyImageInfo_Release" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Ecom_KeyImageInfo structure. This must be called on data retrieved from EOS_Ecom_CopyItemImageInfoByIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyImageInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::NewProp_KeyImageInfo = { "KeyImageInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_KeyImageInfo_Release_Parms, KeyImageInfo), Z_Construct_UScriptStruct_FEIK_Ecom_KeyImageInfo, METADATA_PARAMS(0, nullptr) }; // 1556550762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::NewProp_KeyImageInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_KeyImageInfo_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_KeyImageInfo_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::EIK_EcomSubsystem_eventEIK_Ecom_KeyImageInfo_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_KeyImageInfo_Release)
{
	P_GET_STRUCT(FEIK_Ecom_KeyImageInfo,Z_Param_KeyImageInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Ecom_KeyImageInfo_Release(Z_Param_KeyImageInfo);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_KeyImageInfo_Release

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_CopyEntitlementByIndex
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms
	{
		int32 EntitlementIndex;
		FEIK_Ecom_HTransaction Transaction;
		FEIK_Ecom_Entitlement OutEntitlement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an entitlement from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_Transaction_CopyEntitlementByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an entitlement from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntitlementIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transaction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntitlement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_EntitlementIndex = { "EntitlementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms, EntitlementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms, Transaction), Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction, METADATA_PARAMS(0, nullptr) }; // 1029805666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_OutEntitlement = { "OutEntitlement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms, OutEntitlement), Z_Construct_UScriptStruct_FEIK_Ecom_Entitlement, METADATA_PARAMS(0, nullptr) }; // 2740020681
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_EntitlementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_Transaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_OutEntitlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_Transaction_CopyEntitlementByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_CopyEntitlementByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_Transaction_CopyEntitlementByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EntitlementIndex);
	P_GET_STRUCT(FEIK_Ecom_HTransaction,Z_Param_Transaction);
	P_GET_STRUCT_REF(FEIK_Ecom_Entitlement,Z_Param_Out_OutEntitlement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Ecom_Transaction_CopyEntitlementByIndex(Z_Param_EntitlementIndex,Z_Param_Transaction,Z_Param_Out_OutEntitlement);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_CopyEntitlementByIndex

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_GetEntitlementsCount
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetEntitlementsCount_Parms
	{
		FEIK_Ecom_HTransaction Transaction;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of entitlements that are part of this transaction.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_Transaction_GetEntitlementsCount" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of entitlements that are part of this transaction." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transaction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetEntitlementsCount_Parms, Transaction), Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction, METADATA_PARAMS(0, nullptr) }; // 1029805666
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetEntitlementsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::NewProp_Transaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_Transaction_GetEntitlementsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetEntitlementsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetEntitlementsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_Transaction_GetEntitlementsCount)
{
	P_GET_STRUCT(FEIK_Ecom_HTransaction,Z_Param_Transaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Ecom_Transaction_GetEntitlementsCount(Z_Param_Transaction);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_GetEntitlementsCount

// Begin Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_GetTransactionId
struct Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics
{
	struct EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetTransactionId_Parms
	{
		FEIK_Ecom_HTransaction Transaction;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Ecom Transaction Interface exposes getters for accessing information about a completed transaction. All Ecom Transaction Interface calls take a handle of type EOS_Ecom_HTransaction as the first parameter. An EOS_Ecom_HTransaction handle is originally returned as part of the EOS_Ecom_CheckoutCallbackInfo struct. An EOS_Ecom_HTransaction handle can also be retrieved from an EOS_HEcom handle using EOS_Ecom_CopyTransactionByIndex. It is expected that after a transaction that EOS_Ecom_Transaction_Release is called. When EOS_Platform_Release is called any remaining transactions will also be released.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_Transaction_GetTransactionId" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Ecom Transaction Interface exposes getters for accessing information about a completed transaction. All Ecom Transaction Interface calls take a handle of type EOS_Ecom_HTransaction as the first parameter. An EOS_Ecom_HTransaction handle is originally returned as part of the EOS_Ecom_CheckoutCallbackInfo struct. An EOS_Ecom_HTransaction handle can also be retrieved from an EOS_HEcom handle using EOS_Ecom_CopyTransactionByIndex. It is expected that after a transaction that EOS_Ecom_Transaction_Release is called. When EOS_Platform_Release is called any remaining transactions will also be released." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transaction;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetTransactionId_Parms, Transaction), Z_Construct_UScriptStruct_FEIK_Ecom_HTransaction, METADATA_PARAMS(0, nullptr) }; // 1029805666
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetTransactionId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::NewProp_Transaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_EcomSubsystem, nullptr, "EIK_Ecom_Transaction_GetTransactionId", nullptr, nullptr, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetTransactionId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::EIK_EcomSubsystem_eventEIK_Ecom_Transaction_GetTransactionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_EcomSubsystem::execEIK_Ecom_Transaction_GetTransactionId)
{
	P_GET_STRUCT(FEIK_Ecom_HTransaction,Z_Param_Transaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EIK_Ecom_Transaction_GetTransactionId(Z_Param_Transaction);
	P_NATIVE_END;
}
// End Class UEIK_EcomSubsystem Function EIK_Ecom_Transaction_GetTransactionId

// Begin Class UEIK_EcomSubsystem
void UEIK_EcomSubsystem::StaticRegisterNativesUEIK_EcomSubsystem()
{
	UClass* Class = UEIK_EcomSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_CatalogItem_Release", &UEIK_EcomSubsystem::execEIK_Ecom_CatalogItem_Release },
		{ "EIK_Ecom_CatalogOffer_Release", &UEIK_EcomSubsystem::execEIK_Ecom_CatalogOffer_Release },
		{ "EIK_Ecom_CatalogRelease_Release", &UEIK_EcomSubsystem::execEIK_Ecom_CatalogRelease_Release },
		{ "EIK_Ecom_CopyEntitlementById", &UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementById },
		{ "EIK_Ecom_CopyEntitlementByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementByIndex },
		{ "EIK_Ecom_CopyEntitlementByNameAndIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyEntitlementByNameAndIndex },
		{ "EIK_Ecom_CopyItemById", &UEIK_EcomSubsystem::execEIK_Ecom_CopyItemById },
		{ "EIK_Ecom_CopyItemImageInfoByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyItemImageInfoByIndex },
		{ "EIK_Ecom_CopyItemReleaseByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyItemReleaseByIndex },
		{ "EIK_Ecom_CopyLastRedeemedEntitlementByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyLastRedeemedEntitlementByIndex },
		{ "EIK_Ecom_CopyOfferById", &UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferById },
		{ "EIK_Ecom_CopyOfferByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferByIndex },
		{ "EIK_Ecom_CopyOfferImageInfoByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferImageInfoByIndex },
		{ "EIK_Ecom_CopyOfferItemByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyOfferItemByIndex },
		{ "EIK_Ecom_CopyTransactionById", &UEIK_EcomSubsystem::execEIK_Ecom_CopyTransactionById },
		{ "EIK_Ecom_CopyTransactionByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_CopyTransactionByIndex },
		{ "EIK_Ecom_Entitlement_Release", &UEIK_EcomSubsystem::execEIK_Ecom_Entitlement_Release },
		{ "EIK_Ecom_GetEntitlementsByNameCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetEntitlementsByNameCount },
		{ "EIK_Ecom_GetEntitlementsCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetEntitlementsCount },
		{ "EIK_Ecom_GetItemImageInfoCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetItemImageInfoCount },
		{ "EIK_Ecom_GetItemReleaseCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetItemReleaseCount },
		{ "EIK_Ecom_GetLastRedeemedEntitlementsCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetLastRedeemedEntitlementsCount },
		{ "EIK_Ecom_GetOfferCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetOfferCount },
		{ "EIK_Ecom_GetOfferImageInfoCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetOfferImageInfoCount },
		{ "EIK_Ecom_GetOfferItemCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetOfferItemCount },
		{ "EIK_Ecom_GetTransactionCount", &UEIK_EcomSubsystem::execEIK_Ecom_GetTransactionCount },
		{ "EIK_Ecom_KeyImageInfo_Release", &UEIK_EcomSubsystem::execEIK_Ecom_KeyImageInfo_Release },
		{ "EIK_Ecom_Transaction_CopyEntitlementByIndex", &UEIK_EcomSubsystem::execEIK_Ecom_Transaction_CopyEntitlementByIndex },
		{ "EIK_Ecom_Transaction_GetEntitlementsCount", &UEIK_EcomSubsystem::execEIK_Ecom_Transaction_GetEntitlementsCount },
		{ "EIK_Ecom_Transaction_GetTransactionId", &UEIK_EcomSubsystem::execEIK_Ecom_Transaction_GetTransactionId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_EcomSubsystem);
UClass* Z_Construct_UClass_UEIK_EcomSubsystem_NoRegister()
{
	return UEIK_EcomSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_EcomSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Ecom Interface" },
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_EcomSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogItem_Release, "EIK_Ecom_CatalogItem_Release" }, // 3842692508
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogOffer_Release, "EIK_Ecom_CatalogOffer_Release" }, // 4072215693
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CatalogRelease_Release, "EIK_Ecom_CatalogRelease_Release" }, // 3470424938
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementById, "EIK_Ecom_CopyEntitlementById" }, // 516401293
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByIndex, "EIK_Ecom_CopyEntitlementByIndex" }, // 2681434732
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyEntitlementByNameAndIndex, "EIK_Ecom_CopyEntitlementByNameAndIndex" }, // 3481393373
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemById, "EIK_Ecom_CopyItemById" }, // 562890362
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemImageInfoByIndex, "EIK_Ecom_CopyItemImageInfoByIndex" }, // 1978982878
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyItemReleaseByIndex, "EIK_Ecom_CopyItemReleaseByIndex" }, // 3601049966
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyLastRedeemedEntitlementByIndex, "EIK_Ecom_CopyLastRedeemedEntitlementByIndex" }, // 2967745349
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferById, "EIK_Ecom_CopyOfferById" }, // 170764815
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferByIndex, "EIK_Ecom_CopyOfferByIndex" }, // 3287286949
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferImageInfoByIndex, "EIK_Ecom_CopyOfferImageInfoByIndex" }, // 3962218306
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyOfferItemByIndex, "EIK_Ecom_CopyOfferItemByIndex" }, // 4145142200
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionById, "EIK_Ecom_CopyTransactionById" }, // 2924345903
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_CopyTransactionByIndex, "EIK_Ecom_CopyTransactionByIndex" }, // 3885864775
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Entitlement_Release, "EIK_Ecom_Entitlement_Release" }, // 735394874
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsByNameCount, "EIK_Ecom_GetEntitlementsByNameCount" }, // 1551112491
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetEntitlementsCount, "EIK_Ecom_GetEntitlementsCount" }, // 2226619365
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemImageInfoCount, "EIK_Ecom_GetItemImageInfoCount" }, // 482247132
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetItemReleaseCount, "EIK_Ecom_GetItemReleaseCount" }, // 2090434518
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetLastRedeemedEntitlementsCount, "EIK_Ecom_GetLastRedeemedEntitlementsCount" }, // 730028594
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferCount, "EIK_Ecom_GetOfferCount" }, // 1961509997
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferImageInfoCount, "EIK_Ecom_GetOfferImageInfoCount" }, // 510836469
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetOfferItemCount, "EIK_Ecom_GetOfferItemCount" }, // 4176023464
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_GetTransactionCount, "EIK_Ecom_GetTransactionCount" }, // 271151275
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_KeyImageInfo_Release, "EIK_Ecom_KeyImageInfo_Release" }, // 2864813342
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_CopyEntitlementByIndex, "EIK_Ecom_Transaction_CopyEntitlementByIndex" }, // 1374795223
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetEntitlementsCount, "EIK_Ecom_Transaction_GetEntitlementsCount" }, // 2450581496
		{ &Z_Construct_UFunction_UEIK_EcomSubsystem_EIK_Ecom_Transaction_GetTransactionId, "EIK_Ecom_Transaction_GetTransactionId" }, // 1025309856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_EcomSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_EcomSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_EcomSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_EcomSubsystem_Statics::ClassParams = {
	&UEIK_EcomSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_EcomSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_EcomSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_EcomSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_EcomSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_EcomSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_EcomSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_EcomSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_EcomSubsystem>()
{
	return UEIK_EcomSubsystem::StaticClass();
}
UEIK_EcomSubsystem::UEIK_EcomSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_EcomSubsystem);
UEIK_EcomSubsystem::~UEIK_EcomSubsystem() {}
// End Class UEIK_EcomSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_EcomSubsystem, UEIK_EcomSubsystem::StaticClass, TEXT("UEIK_EcomSubsystem"), &Z_Registration_Info_UClass_UEIK_EcomSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_EcomSubsystem), 602929966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_1049685550(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_EcomSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorageSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HPlayerDataStorageFileTransferRequest();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_PlayerDataStorage_FileMetadata();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_CopyFileMetadataAtIndex
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Index;
		FEIK_PlayerDataStorage_FileMetadata OutMetadata;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved or successfully saved version, and will not include any local changes that have not been committed by calling SaveFile. The returned pointer must be released by the user when no longer needed.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_CopyFileMetadataAtIndex" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved or successfully saved version, and will not include any local changes that have not been committed by calling SaveFile. The returned pointer must be released by the user when no longer needed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMetadata;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms, OutMetadata), Z_Construct_UScriptStruct_FEIK_PlayerDataStorage_FileMetadata, METADATA_PARAMS(0, nullptr) }; // 3070957674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_OutMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorage_CopyFileMetadataAtIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_CopyFileMetadataAtIndex)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FEIK_PlayerDataStorage_FileMetadata,Z_Param_Out_OutMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PlayerDataStorage_CopyFileMetadataAtIndex(Z_Param_LocalUserId,Z_Param_Index,Z_Param_Out_OutMetadata);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_CopyFileMetadataAtIndex

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_CopyFileMetadataByFilename
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		FEIK_PlayerDataStorage_FileMetadata OutMetadata;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create the cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not completed writing. The returned pointer must be released by the user when no longer needed.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_CopyFileMetadataByFilename" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create the cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not completed writing. The returned pointer must be released by the user when no longer needed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMetadata;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms, Filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms, OutMetadata), Z_Construct_UScriptStruct_FEIK_PlayerDataStorage_FileMetadata, METADATA_PARAMS(0, nullptr) }; // 3070957674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_OutMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorage_CopyFileMetadataByFilename", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_CopyFileMetadataByFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_CopyFileMetadataByFilename)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_STRUCT_REF(FEIK_PlayerDataStorage_FileMetadata,Z_Param_Out_OutMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PlayerDataStorage_CopyFileMetadataByFilename(Z_Param_LocalUserId,Z_Param_Filename,Z_Param_Out_OutMetadata);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_CopyFileMetadataByFilename

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_FileMetadata_Release
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_FileMetadata_Release_Parms
	{
		FEIK_PlayerDataStorage_FileMetadata Metadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Free the memory used by the file metadata\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_FileMetadata_Release" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Free the memory used by the file metadata" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_FileMetadata_Release_Parms, Metadata), Z_Construct_UScriptStruct_FEIK_PlayerDataStorage_FileMetadata, METADATA_PARAMS(0, nullptr) }; // 3070957674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorage_FileMetadata_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_FileMetadata_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_FileMetadata_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_FileMetadata_Release)
{
	P_GET_STRUCT_REF(FEIK_PlayerDataStorage_FileMetadata,Z_Param_Out_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_PlayerDataStorage_FileMetadata_Release(Z_Param_Out_Metadata);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_FileMetadata_Release

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_GetFileMetadataCount
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 OutFileMetadataCount;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the count of files we have previously queried information for and files we have previously read from / written to.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_GetFileMetadataCount" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the count of files we have previously queried information for and files we have previously read from / written to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutFileMetadataCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_OutFileMetadataCount = { "OutFileMetadataCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms, OutFileMetadataCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_OutFileMetadataCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorage_GetFileMetadataCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorage_GetFileMetadataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_GetFileMetadataCount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutFileMetadataCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PlayerDataStorage_GetFileMetadataCount(Z_Param_LocalUserId,Z_Param_Out_OutFileMetadataCount);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorage_GetFileMetadataCount

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_GetFilename
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms
	{
		FEIK_HPlayerDataStorageFileTransferRequest TransferRequestHandle;
		FString OutFilename;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorageFileTransferRequest_GetFilename" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransferRequestHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_TransferRequestHandle = { "TransferRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms, TransferRequestHandle), Z_Construct_UScriptStruct_FEIK_HPlayerDataStorageFileTransferRequest, METADATA_PARAMS(0, nullptr) }; // 2674092969
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_OutFilename = { "OutFilename", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms, OutFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_TransferRequestHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_OutFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorageFileTransferRequest_GetFilename", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_GetFilename)
{
	P_GET_STRUCT(FEIK_HPlayerDataStorageFileTransferRequest,Z_Param_TransferRequestHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PlayerDataStorageFileTransferRequest_GetFilename(Z_Param_TransferRequestHandle,Z_Param_Out_OutFilename);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_GetFilename

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Parms
	{
		FEIK_HPlayerDataStorageFileTransferRequest TransferRequestHandle;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the current state of a file request.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current state of a file request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransferRequestHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::NewProp_TransferRequestHandle = { "TransferRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Parms, TransferRequestHandle), Z_Construct_UScriptStruct_FEIK_HPlayerDataStorageFileTransferRequest, METADATA_PARAMS(0, nullptr) }; // 2674092969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::NewProp_TransferRequestHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState)
{
	P_GET_STRUCT(FEIK_HPlayerDataStorageFileTransferRequest,Z_Param_TransferRequestHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState(Z_Param_TransferRequestHandle);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState

// Begin Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_Release
struct Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics
{
	struct EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_Release_Parms
	{
		FEIK_HPlayerDataStorageFileTransferRequest TransferRequestHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Free the memory used by a cloud-storage file request handle. This will not cancel a request in progress.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorageFileTransferRequest_Release" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Free the memory used by a cloud-storage file request handle. This will not cancel a request in progress." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransferRequestHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::NewProp_TransferRequestHandle = { "TransferRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_Release_Parms, TransferRequestHandle), Z_Construct_UScriptStruct_FEIK_HPlayerDataStorageFileTransferRequest, METADATA_PARAMS(0, nullptr) }; // 2674092969
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::NewProp_TransferRequestHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, nullptr, "EIK_PlayerDataStorageFileTransferRequest_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::EIK_PlayerDataStorageSubsystem_eventEIK_PlayerDataStorageFileTransferRequest_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_Release)
{
	P_GET_STRUCT(FEIK_HPlayerDataStorageFileTransferRequest,Z_Param_TransferRequestHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_PlayerDataStorageFileTransferRequest_Release(Z_Param_TransferRequestHandle);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorageSubsystem Function EIK_PlayerDataStorageFileTransferRequest_Release

// Begin Class UEIK_PlayerDataStorageSubsystem
void UEIK_PlayerDataStorageSubsystem::StaticRegisterNativesUEIK_PlayerDataStorageSubsystem()
{
	UClass* Class = UEIK_PlayerDataStorageSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_CopyFileMetadataAtIndex", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_CopyFileMetadataAtIndex },
		{ "EIK_PlayerDataStorage_CopyFileMetadataByFilename", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_CopyFileMetadataByFilename },
		{ "EIK_PlayerDataStorage_FileMetadata_Release", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_FileMetadata_Release },
		{ "EIK_PlayerDataStorage_GetFileMetadataCount", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorage_GetFileMetadataCount },
		{ "EIK_PlayerDataStorageFileTransferRequest_GetFilename", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_GetFilename },
		{ "EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_GetFileRequestState },
		{ "EIK_PlayerDataStorageFileTransferRequest_Release", &UEIK_PlayerDataStorageSubsystem::execEIK_PlayerDataStorageFileTransferRequest_Release },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorageSubsystem);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_NoRegister()
{
	return UEIK_PlayerDataStorageSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Player Data Storage Interface" },
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorageSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataAtIndex, "EIK_PlayerDataStorage_CopyFileMetadataAtIndex" }, // 3742521420
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_CopyFileMetadataByFilename, "EIK_PlayerDataStorage_CopyFileMetadataByFilename" }, // 689478199
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_FileMetadata_Release, "EIK_PlayerDataStorage_FileMetadata_Release" }, // 880733632
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorage_GetFileMetadataCount, "EIK_PlayerDataStorage_GetFileMetadataCount" }, // 2368029378
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFilename, "EIK_PlayerDataStorageFileTransferRequest_GetFilename" }, // 2958269694
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState, "EIK_PlayerDataStorageFileTransferRequest_GetFileRequestState" }, // 1688424627
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorageSubsystem_EIK_PlayerDataStorageFileTransferRequest_Release, "EIK_PlayerDataStorageFileTransferRequest_Release" }, // 1320951555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorageSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::ClassParams = {
	&UEIK_PlayerDataStorageSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorageSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorageSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorageSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorageSubsystem>()
{
	return UEIK_PlayerDataStorageSubsystem::StaticClass();
}
UEIK_PlayerDataStorageSubsystem::UEIK_PlayerDataStorageSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorageSubsystem);
UEIK_PlayerDataStorageSubsystem::~UEIK_PlayerDataStorageSubsystem() {}
// End Class UEIK_PlayerDataStorageSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorageSubsystem, UEIK_PlayerDataStorageSubsystem::StaticClass, TEXT("UEIK_PlayerDataStorageSubsystem"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorageSubsystem), 634325585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_1651900408(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorageSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

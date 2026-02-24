// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorage_WriteFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_PlayerDataStorage_WriteFileDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_WriteFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_WriteFileDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_WriteFileDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	EIK_PlayerDataStorage_WriteFileDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_WriteFileDelegate

// Begin Delegate FEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		int32 BytesTransferred;
		int32 TotalFileSizeBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTransferred;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFileSizeBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_BytesTransferred = { "BytesTransferred", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms, BytesTransferred), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_TotalFileSizeBytes = { "TotalFileSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms, TotalFileSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_BytesTransferred,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::NewProp_TotalFileSizeBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback, FEIK_ProductUserId const& LocalUserId, const FString& Filename, int32 BytesTransferred, int32 TotalFileSizeBytes)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		int32 BytesTransferred;
		int32 TotalFileSizeBytes;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Filename=Filename;
	Parms.BytesTransferred=BytesTransferred;
	Parms.TotalFileSizeBytes=TotalFileSizeBytes;
	EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_OnFileWriteTransferProgressCallback

// Begin Delegate FEIK_PlayerDataStorage_OnWriteFileDataCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_OnWriteFileDataCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnWriteFileDataCallback)
{
	EIK_PlayerDataStorage_OnWriteFileDataCallback.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEIK_PlayerDataStorage_OnWriteFileDataCallback

// Begin Class UEIK_PlayerDataStorage_WriteFile Function EIK_PlayerDataStorage_WriteFile
struct Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics
{
	struct EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		TArray<uint8> Data;
		int32 DataLengthBytes;
		int32 ChunkLengthBytes;
		UEIK_PlayerDataStorage_WriteFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the request is started successfully.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_WriteFile" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the request is started successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataLengthBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkLengthBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, Filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_DataLengthBytes = { "DataLengthBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, DataLengthBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_ChunkLengthBytes = { "ChunkLengthBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, ChunkLengthBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms, ReturnValue), Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_DataLengthBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_ChunkLengthBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile, nullptr, "EIK_PlayerDataStorage_WriteFile", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::EIK_PlayerDataStorage_WriteFile_eventEIK_PlayerDataStorage_WriteFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorage_WriteFile::execEIK_PlayerDataStorage_WriteFile)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataLengthBytes);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkLengthBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PlayerDataStorage_WriteFile**)Z_Param__Result=UEIK_PlayerDataStorage_WriteFile::EIK_PlayerDataStorage_WriteFile(Z_Param_LocalUserId,Z_Param_Filename,Z_Param_Out_Data,Z_Param_DataLengthBytes,Z_Param_ChunkLengthBytes);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorage_WriteFile Function EIK_PlayerDataStorage_WriteFile

// Begin Class UEIK_PlayerDataStorage_WriteFile
void UEIK_PlayerDataStorage_WriteFile::StaticRegisterNativesUEIK_PlayerDataStorage_WriteFile()
{
	UClass* Class = UEIK_PlayerDataStorage_WriteFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_WriteFile", &UEIK_PlayerDataStorage_WriteFile::execEIK_PlayerDataStorage_WriteFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorage_WriteFile);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_NoRegister()
{
	return UEIK_PlayerDataStorage_WriteFile::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFileTransferProgressCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteFileDataCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_WriteFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileTransferProgressCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteFileDataCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorage_WriteFile_EIK_PlayerDataStorage_WriteFile, "EIK_PlayerDataStorage_WriteFile" }, // 279025660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorage_WriteFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_WriteFile, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_WriteFileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3638965333
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnFileTransferProgressCallback = { "OnFileTransferProgressCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_WriteFile, OnFileTransferProgressCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileWriteTransferProgressCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFileTransferProgressCallback_MetaData), NewProp_OnFileTransferProgressCallback_MetaData) }; // 2055010427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnWriteFileDataCallback = { "OnWriteFileDataCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_WriteFile, OnWriteFileDataCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnWriteFileDataCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWriteFileDataCallback_MetaData), NewProp_OnWriteFileDataCallback_MetaData) }; // 2003263964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnFileTransferProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::NewProp_OnWriteFileDataCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::ClassParams = {
	&UEIK_PlayerDataStorage_WriteFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorage_WriteFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorage_WriteFile.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorage_WriteFile.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorage_WriteFile>()
{
	return UEIK_PlayerDataStorage_WriteFile::StaticClass();
}
UEIK_PlayerDataStorage_WriteFile::UEIK_PlayerDataStorage_WriteFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorage_WriteFile);
UEIK_PlayerDataStorage_WriteFile::~UEIK_PlayerDataStorage_WriteFile() {}
// End Class UEIK_PlayerDataStorage_WriteFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorage_WriteFile, UEIK_PlayerDataStorage_WriteFile::StaticClass, TEXT("UEIK_PlayerDataStorage_WriteFile"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorage_WriteFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorage_WriteFile), 1432891567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_2746109981(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_WriteFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorage_ReadFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_PlayerDataStorage_ReadFileDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_ReadFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_ReadFileDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_ReadFileDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	EIK_PlayerDataStorage_ReadFileDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_ReadFileDelegate

// Begin Delegate FEIK_PlayerDataStorage_OnReadFileDataCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_OnReadFileDataCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnReadFileDataCallback)
{
	EIK_PlayerDataStorage_OnReadFileDataCallback.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEIK_PlayerDataStorage_OnReadFileDataCallback

// Begin Delegate FEIK_PlayerDataStorage_OnFileTransferProgressCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		int32 BytesTransferred;
		int32 TotalFileSizeBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_BytesTransferred = { "BytesTransferred", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms, BytesTransferred), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_TotalFileSizeBytes = { "TotalFileSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms, TotalFileSizeBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_BytesTransferred,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::NewProp_TotalFileSizeBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_OnFileTransferProgressCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_OnFileTransferProgressCallback, FEIK_ProductUserId const& LocalUserId, const FString& Filename, int32 BytesTransferred, int32 TotalFileSizeBytes)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		int32 BytesTransferred;
		int32 TotalFileSizeBytes;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_OnFileTransferProgressCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Filename=Filename;
	Parms.BytesTransferred=BytesTransferred;
	Parms.TotalFileSizeBytes=TotalFileSizeBytes;
	EIK_PlayerDataStorage_OnFileTransferProgressCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_OnFileTransferProgressCallback

// Begin Class UEIK_PlayerDataStorage_ReadFile Function EIK_PlayerDataStorage_ReadFile
struct Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics
{
	struct EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString Filename;
		int32 ReadChunkLengthBytes;
		UEIK_PlayerDataStorage_ReadFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the request is started successfully.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_ReadFile" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the request is started successfully." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadChunkLengthBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms, Filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_ReadChunkLengthBytes = { "ReadChunkLengthBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms, ReadChunkLengthBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms, ReturnValue), Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_ReadChunkLengthBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile, nullptr, "EIK_PlayerDataStorage_ReadFile", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::EIK_PlayerDataStorage_ReadFile_eventEIK_PlayerDataStorage_ReadFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorage_ReadFile::execEIK_PlayerDataStorage_ReadFile)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReadChunkLengthBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PlayerDataStorage_ReadFile**)Z_Param__Result=UEIK_PlayerDataStorage_ReadFile::EIK_PlayerDataStorage_ReadFile(Z_Param_LocalUserId,Z_Param_Filename,Z_Param_ReadChunkLengthBytes);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorage_ReadFile Function EIK_PlayerDataStorage_ReadFile

// Begin Class UEIK_PlayerDataStorage_ReadFile
void UEIK_PlayerDataStorage_ReadFile::StaticRegisterNativesUEIK_PlayerDataStorage_ReadFile()
{
	UClass* Class = UEIK_PlayerDataStorage_ReadFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_ReadFile", &UEIK_PlayerDataStorage_ReadFile::execEIK_PlayerDataStorage_ReadFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorage_ReadFile);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_NoRegister()
{
	return UEIK_PlayerDataStorage_ReadFile::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReadFileDataCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFileTransferProgressCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_ReadFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileDataCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileTransferProgressCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorage_ReadFile_EIK_PlayerDataStorage_ReadFile, "EIK_PlayerDataStorage_ReadFile" }, // 518502089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorage_ReadFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_ReadFile, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_ReadFileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2623628910
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnReadFileDataCallback = { "OnReadFileDataCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_ReadFile, OnReadFileDataCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnReadFileDataCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReadFileDataCallback_MetaData), NewProp_OnReadFileDataCallback_MetaData) }; // 2424622859
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnFileTransferProgressCallback = { "OnFileTransferProgressCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_ReadFile, OnFileTransferProgressCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_OnFileTransferProgressCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFileTransferProgressCallback_MetaData), NewProp_OnFileTransferProgressCallback_MetaData) }; // 2083506333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnReadFileDataCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::NewProp_OnFileTransferProgressCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::ClassParams = {
	&UEIK_PlayerDataStorage_ReadFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorage_ReadFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorage_ReadFile.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorage_ReadFile.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorage_ReadFile>()
{
	return UEIK_PlayerDataStorage_ReadFile::StaticClass();
}
UEIK_PlayerDataStorage_ReadFile::UEIK_PlayerDataStorage_ReadFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorage_ReadFile);
UEIK_PlayerDataStorage_ReadFile::~UEIK_PlayerDataStorage_ReadFile() {}
// End Class UEIK_PlayerDataStorage_ReadFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_ReadFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorage_ReadFile, UEIK_PlayerDataStorage_ReadFile::StaticClass, TEXT("UEIK_PlayerDataStorage_ReadFile"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorage_ReadFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorage_ReadFile), 1927419519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_ReadFile_h_3906516182(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_ReadFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_ReadFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

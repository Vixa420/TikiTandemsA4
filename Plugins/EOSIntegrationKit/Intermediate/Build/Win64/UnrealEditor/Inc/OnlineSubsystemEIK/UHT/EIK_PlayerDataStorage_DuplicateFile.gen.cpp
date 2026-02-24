// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorage_DuplicateFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_PlayerDataStorage_DuplicateFileDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_DuplicateFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_DuplicateFileDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DuplicateFileDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	EIK_PlayerDataStorage_DuplicateFileDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_DuplicateFileDelegate

// Begin Class UEIK_PlayerDataStorage_DuplicateFile Function EIK_PlayerDataStorage_DuplicateFile
struct Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics
{
	struct EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString SourceFilename;
		FString DestinationFilename;
		UEIK_PlayerDataStorage_DuplicateFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_DuplicateFile" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms, SourceFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_DestinationFilename = { "DestinationFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms, DestinationFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms, ReturnValue), Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_SourceFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_DestinationFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile, nullptr, "EIK_PlayerDataStorage_DuplicateFile", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::EIK_PlayerDataStorage_DuplicateFile_eventEIK_PlayerDataStorage_DuplicateFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorage_DuplicateFile::execEIK_PlayerDataStorage_DuplicateFile)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PlayerDataStorage_DuplicateFile**)Z_Param__Result=UEIK_PlayerDataStorage_DuplicateFile::EIK_PlayerDataStorage_DuplicateFile(Z_Param_LocalUserId,Z_Param_SourceFilename,Z_Param_DestinationFilename);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorage_DuplicateFile Function EIK_PlayerDataStorage_DuplicateFile

// Begin Class UEIK_PlayerDataStorage_DuplicateFile
void UEIK_PlayerDataStorage_DuplicateFile::StaticRegisterNativesUEIK_PlayerDataStorage_DuplicateFile()
{
	UClass* Class = UEIK_PlayerDataStorage_DuplicateFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_DuplicateFile", &UEIK_PlayerDataStorage_DuplicateFile::execEIK_PlayerDataStorage_DuplicateFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorage_DuplicateFile);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_NoRegister()
{
	return UEIK_PlayerDataStorage_DuplicateFile::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DuplicateFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorage_DuplicateFile_EIK_PlayerDataStorage_DuplicateFile, "EIK_PlayerDataStorage_DuplicateFile" }, // 3945096198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorage_DuplicateFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_DuplicateFile, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DuplicateFileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3176534488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::ClassParams = {
	&UEIK_PlayerDataStorage_DuplicateFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DuplicateFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DuplicateFile.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DuplicateFile.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorage_DuplicateFile>()
{
	return UEIK_PlayerDataStorage_DuplicateFile::StaticClass();
}
UEIK_PlayerDataStorage_DuplicateFile::UEIK_PlayerDataStorage_DuplicateFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorage_DuplicateFile);
UEIK_PlayerDataStorage_DuplicateFile::~UEIK_PlayerDataStorage_DuplicateFile() {}
// End Class UEIK_PlayerDataStorage_DuplicateFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorage_DuplicateFile, UEIK_PlayerDataStorage_DuplicateFile::StaticClass, TEXT("UEIK_PlayerDataStorage_DuplicateFile"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DuplicateFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorage_DuplicateFile), 3648230850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_3945171916(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DuplicateFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

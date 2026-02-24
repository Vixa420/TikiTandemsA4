// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorage_QueryFileList() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_PlayerDataStorage_QueryFileListDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
		int32 FileCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_FileCount = { "FileCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms, FileCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::NewProp_FileCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_QueryFileListDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_QueryFileListDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId, int32 FileCount)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
		int32 FileCount;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_QueryFileListDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	Parms.FileCount=FileCount;
	EIK_PlayerDataStorage_QueryFileListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_QueryFileListDelegate

// Begin Class UEIK_PlayerDataStorage_QueryFileList Function EIK_PlayerDataStorage_QueryFileList
struct Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics
{
	struct EIK_PlayerDataStorage_QueryFileList_eventEIK_PlayerDataStorage_QueryFileList_Parms
	{
		FEIK_ProductUserId LocalUserId;
		UEIK_PlayerDataStorage_QueryFileList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened, saved, copied, or deleted.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_QueryFileList" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened, saved, copied, or deleted." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_QueryFileList_eventEIK_PlayerDataStorage_QueryFileList_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_QueryFileList_eventEIK_PlayerDataStorage_QueryFileList_Parms, ReturnValue), Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList, nullptr, "EIK_PlayerDataStorage_QueryFileList", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::EIK_PlayerDataStorage_QueryFileList_eventEIK_PlayerDataStorage_QueryFileList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::EIK_PlayerDataStorage_QueryFileList_eventEIK_PlayerDataStorage_QueryFileList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorage_QueryFileList::execEIK_PlayerDataStorage_QueryFileList)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PlayerDataStorage_QueryFileList**)Z_Param__Result=UEIK_PlayerDataStorage_QueryFileList::EIK_PlayerDataStorage_QueryFileList(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorage_QueryFileList Function EIK_PlayerDataStorage_QueryFileList

// Begin Class UEIK_PlayerDataStorage_QueryFileList
void UEIK_PlayerDataStorage_QueryFileList::StaticRegisterNativesUEIK_PlayerDataStorage_QueryFileList()
{
	UClass* Class = UEIK_PlayerDataStorage_QueryFileList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_QueryFileList", &UEIK_PlayerDataStorage_QueryFileList::execEIK_PlayerDataStorage_QueryFileList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorage_QueryFileList);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_NoRegister()
{
	return UEIK_PlayerDataStorage_QueryFileList::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_QueryFileList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorage_QueryFileList_EIK_PlayerDataStorage_QueryFileList, "EIK_PlayerDataStorage_QueryFileList" }, // 2542973250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorage_QueryFileList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_QueryFileList, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_QueryFileListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4097952804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::ClassParams = {
	&UEIK_PlayerDataStorage_QueryFileList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorage_QueryFileList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorage_QueryFileList.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorage_QueryFileList.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorage_QueryFileList>()
{
	return UEIK_PlayerDataStorage_QueryFileList::StaticClass();
}
UEIK_PlayerDataStorage_QueryFileList::UEIK_PlayerDataStorage_QueryFileList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorage_QueryFileList);
UEIK_PlayerDataStorage_QueryFileList::~UEIK_PlayerDataStorage_QueryFileList() {}
// End Class UEIK_PlayerDataStorage_QueryFileList

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFileList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorage_QueryFileList, UEIK_PlayerDataStorage_QueryFileList::StaticClass, TEXT("UEIK_PlayerDataStorage_QueryFileList"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorage_QueryFileList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorage_QueryFileList), 2433727716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFileList_h_653786723(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFileList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_QueryFileList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

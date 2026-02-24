// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PlayerDataStorage_DeleteCache() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_PlayerDataStorage_DeleteCacheDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_PlayerDataStorage_DeleteCacheDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_PlayerDataStorage_DeleteCacheDelegate, TEnumAsByte<EEIK_Result> const& Result, FEIK_ProductUserId const& LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_PlayerDataStorage_DeleteCacheDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	EIK_PlayerDataStorage_DeleteCacheDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_PlayerDataStorage_DeleteCacheDelegate

// Begin Class UEIK_PlayerDataStorage_DeleteCache Function EIK_PlayerDataStorage_DeleteCache
struct Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics
{
	struct EIK_PlayerDataStorage_DeleteCache_eventEIK_PlayerDataStorage_DeleteCache_Parms
	{
		FEIK_ProductUserId LocalUserId;
		UEIK_PlayerDataStorage_DeleteCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Player Data Storage Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed. Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.\n" },
#endif
		{ "DisplayName", "EOS_PlayerDataStorage_DeleteCache" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed. Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DeleteCache_eventEIK_PlayerDataStorage_DeleteCache_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PlayerDataStorage_DeleteCache_eventEIK_PlayerDataStorage_DeleteCache_Parms, ReturnValue), Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache, nullptr, "EIK_PlayerDataStorage_DeleteCache", nullptr, nullptr, Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::EIK_PlayerDataStorage_DeleteCache_eventEIK_PlayerDataStorage_DeleteCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::EIK_PlayerDataStorage_DeleteCache_eventEIK_PlayerDataStorage_DeleteCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PlayerDataStorage_DeleteCache::execEIK_PlayerDataStorage_DeleteCache)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PlayerDataStorage_DeleteCache**)Z_Param__Result=UEIK_PlayerDataStorage_DeleteCache::EIK_PlayerDataStorage_DeleteCache(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_PlayerDataStorage_DeleteCache Function EIK_PlayerDataStorage_DeleteCache

// Begin Class UEIK_PlayerDataStorage_DeleteCache
void UEIK_PlayerDataStorage_DeleteCache::StaticRegisterNativesUEIK_PlayerDataStorage_DeleteCache()
{
	UClass* Class = UEIK_PlayerDataStorage_DeleteCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_PlayerDataStorage_DeleteCache", &UEIK_PlayerDataStorage_DeleteCache::execEIK_PlayerDataStorage_DeleteCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PlayerDataStorage_DeleteCache);
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_NoRegister()
{
	return UEIK_PlayerDataStorage_DeleteCache::StaticClass();
}
struct Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h" },
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PlayerDataStorageInterface/EIK_PlayerDataStorage_DeleteCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PlayerDataStorage_DeleteCache_EIK_PlayerDataStorage_DeleteCache, "EIK_PlayerDataStorage_DeleteCache" }, // 1104042347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PlayerDataStorage_DeleteCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PlayerDataStorage_DeleteCache, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_PlayerDataStorage_DeleteCacheDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2294927775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::ClassParams = {
	&UEIK_PlayerDataStorage_DeleteCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache()
{
	if (!Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DeleteCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DeleteCache.OuterSingleton, Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DeleteCache.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PlayerDataStorage_DeleteCache>()
{
	return UEIK_PlayerDataStorage_DeleteCache::StaticClass();
}
UEIK_PlayerDataStorage_DeleteCache::UEIK_PlayerDataStorage_DeleteCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PlayerDataStorage_DeleteCache);
UEIK_PlayerDataStorage_DeleteCache::~UEIK_PlayerDataStorage_DeleteCache() {}
// End Class UEIK_PlayerDataStorage_DeleteCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DeleteCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PlayerDataStorage_DeleteCache, UEIK_PlayerDataStorage_DeleteCache::StaticClass, TEXT("UEIK_PlayerDataStorage_DeleteCache"), &Z_Registration_Info_UClass_UEIK_PlayerDataStorage_DeleteCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PlayerDataStorage_DeleteCache), 3621650849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DeleteCache_h_2129374360(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DeleteCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PlayerDataStorageInterface_EIK_PlayerDataStorage_DeleteCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

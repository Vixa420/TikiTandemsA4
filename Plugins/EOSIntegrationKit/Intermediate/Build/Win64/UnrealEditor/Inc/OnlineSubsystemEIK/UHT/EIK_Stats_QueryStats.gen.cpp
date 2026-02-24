// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Stats_QueryStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Stats_QueryStats();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Stats_QueryStats_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnStatsQueryStatsComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnStatsQueryStatsComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnStatsQueryStatsComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnStatsQueryStatsComplete, FEIK_ProductUserId const& LocalUserId, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_ProductUserId const& TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnStatsQueryStatsComplete_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.ResultCode=ResultCode;
	Parms.TargetUserId=TargetUserId;
	EIK_OnStatsQueryStatsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnStatsQueryStatsComplete

// Begin Class UEIK_Stats_QueryStats Function EIK_Stats_QueryStats
struct Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics
{
	struct EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		int64 StartTime;
		int64 EndTime;
		TArray<FString> StatNames;
		UEIK_Stats_QueryStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query for a list of stats for a specific player.\n" },
#endif
		{ "DisplayName", "EOS_Stats_QueryStats" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for a list of stats for a specific player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatNames_MetaData), NewProp_StatNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms, ReturnValue), Z_Construct_UClass_UEIK_Stats_QueryStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StatNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_StatNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Stats_QueryStats, nullptr, "EIK_Stats_QueryStats", nullptr, nullptr, Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::EIK_Stats_QueryStats_eventEIK_Stats_QueryStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Stats_QueryStats::execEIK_Stats_QueryStats)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY(FInt64Property,Z_Param_StartTime);
	P_GET_PROPERTY(FInt64Property,Z_Param_EndTime);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Stats_QueryStats**)Z_Param__Result=UEIK_Stats_QueryStats::EIK_Stats_QueryStats(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_StartTime,Z_Param_EndTime,Z_Param_Out_StatNames);
	P_NATIVE_END;
}
// End Class UEIK_Stats_QueryStats Function EIK_Stats_QueryStats

// Begin Class UEIK_Stats_QueryStats
void UEIK_Stats_QueryStats::StaticRegisterNativesUEIK_Stats_QueryStats()
{
	UClass* Class = UEIK_Stats_QueryStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Stats_QueryStats", &UEIK_Stats_QueryStats::execEIK_Stats_QueryStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Stats_QueryStats);
UClass* Z_Construct_UClass_UEIK_Stats_QueryStats_NoRegister()
{
	return UEIK_Stats_QueryStats::StaticClass();
}
struct Z_Construct_UClass_UEIK_Stats_QueryStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_QueryStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Stats_QueryStats_EIK_Stats_QueryStats, "EIK_Stats_QueryStats" }, // 2916438889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Stats_QueryStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Stats_QueryStats, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsQueryStatsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2942109603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::ClassParams = {
	&UEIK_Stats_QueryStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Stats_QueryStats()
{
	if (!Z_Registration_Info_UClass_UEIK_Stats_QueryStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Stats_QueryStats.OuterSingleton, Z_Construct_UClass_UEIK_Stats_QueryStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Stats_QueryStats.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Stats_QueryStats>()
{
	return UEIK_Stats_QueryStats::StaticClass();
}
UEIK_Stats_QueryStats::UEIK_Stats_QueryStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Stats_QueryStats);
UEIK_Stats_QueryStats::~UEIK_Stats_QueryStats() {}
// End Class UEIK_Stats_QueryStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Stats_QueryStats, UEIK_Stats_QueryStats::StaticClass, TEXT("UEIK_Stats_QueryStats"), &Z_Registration_Info_UClass_UEIK_Stats_QueryStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Stats_QueryStats), 2528719301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_1255642324(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_QueryStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

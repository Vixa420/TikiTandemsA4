// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Stats_IngestStat() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Stats_IngestStat();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Stats_IngestStat_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats_IngestData();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Stats_IngestData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData;
class UScriptStruct* FEIK_Stats_IngestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Stats_IngestData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Stats_IngestData"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Stats_IngestData>()
{
	return FEIK_Stats_IngestData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the stat to ingest. */" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the stat to ingest." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IngestAmount_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount to ingest the stat. */" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount to ingest the stat." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IngestAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Stats_IngestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats_IngestData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::NewProp_IngestAmount = { "IngestAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats_IngestData, IngestAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IngestAmount_MetaData), NewProp_IngestAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::NewProp_IngestAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Stats_IngestData",
	Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::PropPointers),
	sizeof(FEIK_Stats_IngestData),
	alignof(FEIK_Stats_IngestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats_IngestData()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData.InnerSingleton;
}
// End ScriptStruct FEIK_Stats_IngestData

// Begin Delegate FEIK_OnStatsIngestStatComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnStatsIngestStatComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnStatsIngestStatComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnStatsIngestStatComplete, FEIK_ProductUserId const& LocalUserId, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_ProductUserId const& TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnStatsIngestStatComplete_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.ResultCode=ResultCode;
	Parms.TargetUserId=TargetUserId;
	EIK_OnStatsIngestStatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnStatsIngestStatComplete

// Begin Class UEIK_Stats_IngestStat Function EIK_Stats_IngestStat
struct Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics
{
	struct EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TArray<FEIK_Stats_IngestData> Stats;
		FEIK_ProductUserId TargetUserId;
		UEIK_Stats_IngestStat* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ingest a stat by the amount specified in Options. When the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed. The stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.\n" },
#endif
		{ "DisplayName", "EOS_Stats_IngestStat" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingest a stat by the amount specified in Options. When the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed. The stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Stats_IngestData, METADATA_PARAMS(0, nullptr) }; // 981247520
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 981247520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms, ReturnValue), Z_Construct_UClass_UEIK_Stats_IngestStat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Stats_IngestStat, nullptr, "EIK_Stats_IngestStat", nullptr, nullptr, Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::EIK_Stats_IngestStat_eventEIK_Stats_IngestStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Stats_IngestStat::execEIK_Stats_IngestStat)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_TARRAY_REF(FEIK_Stats_IngestData,Z_Param_Out_Stats);
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Stats_IngestStat**)Z_Param__Result=UEIK_Stats_IngestStat::EIK_Stats_IngestStat(Z_Param_Out_LocalUserId,Z_Param_Out_Stats,Z_Param_Out_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_Stats_IngestStat Function EIK_Stats_IngestStat

// Begin Class UEIK_Stats_IngestStat
void UEIK_Stats_IngestStat::StaticRegisterNativesUEIK_Stats_IngestStat()
{
	UClass* Class = UEIK_Stats_IngestStat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Stats_IngestStat", &UEIK_Stats_IngestStat::execEIK_Stats_IngestStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Stats_IngestStat);
UClass* Z_Construct_UClass_UEIK_Stats_IngestStat_NoRegister()
{
	return UEIK_Stats_IngestStat::StaticClass();
}
struct Z_Construct_UClass_UEIK_Stats_IngestStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_Stats_IngestStat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Stats_IngestStat_EIK_Stats_IngestStat, "EIK_Stats_IngestStat" }, // 1140054195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Stats_IngestStat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Stats_IngestStat, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnStatsIngestStatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3976768431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::ClassParams = {
	&UEIK_Stats_IngestStat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Stats_IngestStat()
{
	if (!Z_Registration_Info_UClass_UEIK_Stats_IngestStat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Stats_IngestStat.OuterSingleton, Z_Construct_UClass_UEIK_Stats_IngestStat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Stats_IngestStat.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Stats_IngestStat>()
{
	return UEIK_Stats_IngestStat::StaticClass();
}
UEIK_Stats_IngestStat::UEIK_Stats_IngestStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Stats_IngestStat);
UEIK_Stats_IngestStat::~UEIK_Stats_IngestStat() {}
// End Class UEIK_Stats_IngestStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Stats_IngestData::StaticStruct, Z_Construct_UScriptStruct_FEIK_Stats_IngestData_Statics::NewStructOps, TEXT("EIK_Stats_IngestData"), &Z_Registration_Info_UScriptStruct_EIK_Stats_IngestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Stats_IngestData), 981247520U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Stats_IngestStat, UEIK_Stats_IngestStat::StaticClass, TEXT("UEIK_Stats_IngestStat"), &Z_Registration_Info_UClass_UEIK_Stats_IngestStat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Stats_IngestStat), 1044738394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_87028438(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_Stats_IngestStat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

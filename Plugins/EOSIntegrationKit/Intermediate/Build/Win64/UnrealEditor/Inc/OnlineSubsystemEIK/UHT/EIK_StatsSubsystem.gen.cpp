// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/StatsInterface/EIK_StatsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_StatsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_StatsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_StatsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats_Stat();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_StatsSubsystem Function EIK_Stats_CopyStatByIndex
struct Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics
{
	struct EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms
	{
		FEIK_ProductUserId TargetUserId;
		int32 StatIndex;
		FEIK_Stats_Stat OutStat;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a stat from a given index. Use EOS_Stats_Stat_Release when finished with the data.\n" },
#endif
		{ "DisplayName", "EOS_Stats_CopyStatByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a stat from a given index. Use EOS_Stats_Stat_Release when finished with the data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_StatIndex = { "StatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms, StatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_OutStat = { "OutStat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms, OutStat), Z_Construct_UScriptStruct_FEIK_Stats_Stat, METADATA_PARAMS(0, nullptr) }; // 22819562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_StatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_OutStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_StatsSubsystem, nullptr, "EIK_Stats_CopyStatByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::EIK_StatsSubsystem_eventEIK_Stats_CopyStatByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_StatsSubsystem::execEIK_Stats_CopyStatByIndex)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StatIndex);
	P_GET_STRUCT_REF(FEIK_Stats_Stat,Z_Param_Out_OutStat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_StatsSubsystem::EIK_Stats_CopyStatByIndex(Z_Param_Out_TargetUserId,Z_Param_StatIndex,Z_Param_Out_OutStat);
	P_NATIVE_END;
}
// End Class UEIK_StatsSubsystem Function EIK_Stats_CopyStatByIndex

// Begin Class UEIK_StatsSubsystem Function EIK_Stats_CopyStatByName
struct Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics
{
	struct EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FString Name;
		FEIK_Stats_Stat OutStat;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a stat from cached stats by name. Use EOS_Stats_Stat_Release when finished with the data.\n" },
#endif
		{ "DisplayName", "EOS_Stats_CopyStatByName" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a stat from cached stats by name. Use EOS_Stats_Stat_Release when finished with the data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_OutStat = { "OutStat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms, OutStat), Z_Construct_UScriptStruct_FEIK_Stats_Stat, METADATA_PARAMS(0, nullptr) }; // 22819562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_OutStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_StatsSubsystem, nullptr, "EIK_Stats_CopyStatByName", nullptr, nullptr, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::EIK_StatsSubsystem_eventEIK_Stats_CopyStatByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_StatsSubsystem::execEIK_Stats_CopyStatByName)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_STRUCT_REF(FEIK_Stats_Stat,Z_Param_Out_OutStat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_StatsSubsystem::EIK_Stats_CopyStatByName(Z_Param_Out_TargetUserId,Z_Param_Name,Z_Param_Out_OutStat);
	P_NATIVE_END;
}
// End Class UEIK_StatsSubsystem Function EIK_Stats_CopyStatByName

// Begin Class UEIK_StatsSubsystem Function EIK_Stats_GetStatsCount
struct Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics
{
	struct EIK_StatsSubsystem_eventEIK_Stats_GetStatsCount_Parms
	{
		FEIK_ProductUserId TargetUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Stats Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of stats that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Stats_GetStatsCount" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of stats that are cached locally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_GetStatsCount_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_StatsSubsystem_eventEIK_Stats_GetStatsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_StatsSubsystem, nullptr, "EIK_Stats_GetStatsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::EIK_StatsSubsystem_eventEIK_Stats_GetStatsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::EIK_StatsSubsystem_eventEIK_Stats_GetStatsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_StatsSubsystem::execEIK_Stats_GetStatsCount)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_StatsSubsystem::EIK_Stats_GetStatsCount(Z_Param_Out_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_StatsSubsystem Function EIK_Stats_GetStatsCount

// Begin Class UEIK_StatsSubsystem
void UEIK_StatsSubsystem::StaticRegisterNativesUEIK_StatsSubsystem()
{
	UClass* Class = UEIK_StatsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Stats_CopyStatByIndex", &UEIK_StatsSubsystem::execEIK_Stats_CopyStatByIndex },
		{ "EIK_Stats_CopyStatByName", &UEIK_StatsSubsystem::execEIK_Stats_CopyStatByName },
		{ "EIK_Stats_GetStatsCount", &UEIK_StatsSubsystem::execEIK_Stats_GetStatsCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_StatsSubsystem);
UClass* Z_Construct_UClass_UEIK_StatsSubsystem_NoRegister()
{
	return UEIK_StatsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_StatsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/StatsInterface/EIK_StatsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByIndex, "EIK_Stats_CopyStatByIndex" }, // 675016087
		{ &Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_CopyStatByName, "EIK_Stats_CopyStatByName" }, // 3221667851
		{ &Z_Construct_UFunction_UEIK_StatsSubsystem_EIK_Stats_GetStatsCount, "EIK_Stats_GetStatsCount" }, // 2895456373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_StatsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_StatsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_StatsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_StatsSubsystem_Statics::ClassParams = {
	&UEIK_StatsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_StatsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_StatsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_StatsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_StatsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_StatsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_StatsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_StatsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_StatsSubsystem>()
{
	return UEIK_StatsSubsystem::StaticClass();
}
UEIK_StatsSubsystem::UEIK_StatsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_StatsSubsystem);
UEIK_StatsSubsystem::~UEIK_StatsSubsystem() {}
// End Class UEIK_StatsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_StatsSubsystem, UEIK_StatsSubsystem::StaticClass, TEXT("UEIK_StatsSubsystem"), &Z_Registration_Info_UClass_UEIK_StatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_StatsSubsystem), 3660172645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_282498224(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_StatsInterface_EIK_StatsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

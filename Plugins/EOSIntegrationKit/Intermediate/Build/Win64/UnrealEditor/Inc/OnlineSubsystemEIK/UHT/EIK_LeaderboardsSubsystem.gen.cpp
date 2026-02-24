// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_LeaderboardsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LeaderboardsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LeaderboardsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_Definition();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardRecord();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardUserScore();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardDefinitionByIndex
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms
	{
		int32 LeaderboardIndex;
		FEIK_Leaderboards_Definition OutLeaderboardDefinition;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a leaderboard definition from the cache using an index.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardDefinitionByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a leaderboard definition from the cache using an index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardDefinition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_LeaderboardIndex = { "LeaderboardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms, LeaderboardIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_OutLeaderboardDefinition = { "OutLeaderboardDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms, OutLeaderboardDefinition), Z_Construct_UScriptStruct_FEIK_Leaderboards_Definition, METADATA_PARAMS(0, nullptr) }; // 2230624433
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_LeaderboardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_OutLeaderboardDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardDefinitionByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardDefinitionByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardIndex);
	P_GET_STRUCT_REF(FEIK_Leaderboards_Definition,Z_Param_Out_OutLeaderboardDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardDefinitionByIndex(Z_Param_LeaderboardIndex,Z_Param_Out_OutLeaderboardDefinition);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardDefinitionByIndex

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms
	{
		FString LeaderboardId;
		FEIK_Leaderboards_Definition OutLeaderboardDefinition;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a leaderboard definition from the cache using a leaderboard ID.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a leaderboard definition from the cache using a leaderboard ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardDefinition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_OutLeaderboardDefinition = { "OutLeaderboardDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms, OutLeaderboardDefinition), Z_Construct_UScriptStruct_FEIK_Leaderboards_Definition, METADATA_PARAMS(0, nullptr) }; // 2230624433
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_OutLeaderboardDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardId);
	P_GET_STRUCT_REF(FEIK_Leaderboards_Definition,Z_Param_Out_OutLeaderboardDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(Z_Param_LeaderboardId,Z_Param_Out_OutLeaderboardDefinition);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardRecordByIndex
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms
	{
		int32 LeaderboardRecordIndex;
		FEIK_Leaderboards_LeaderboardRecord OutLeaderboardRecord;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a leaderboard record from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardRecordByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a leaderboard record from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardRecordIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardRecord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_LeaderboardRecordIndex = { "LeaderboardRecordIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms, LeaderboardRecordIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_OutLeaderboardRecord = { "OutLeaderboardRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms, OutLeaderboardRecord), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardRecord, METADATA_PARAMS(0, nullptr) }; // 1654579847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_LeaderboardRecordIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_OutLeaderboardRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardRecordByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardRecordByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRecordIndex);
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardRecord,Z_Param_Out_OutLeaderboardRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardRecordByIndex(Z_Param_LeaderboardRecordIndex,Z_Param_Out_OutLeaderboardRecord);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardRecordByIndex

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardRecordByUserId
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms
	{
		FEIK_ProductUserId UserId;
		FEIK_Leaderboards_LeaderboardRecord OutLeaderboardRecord;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a leaderboard record from a given user ID.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardRecordByUserId" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a leaderboard record from a given user ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardRecord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_OutLeaderboardRecord = { "OutLeaderboardRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms, OutLeaderboardRecord), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardRecord, METADATA_PARAMS(0, nullptr) }; // 1654579847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_OutLeaderboardRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardRecordByUserId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardRecordByUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardRecordByUserId)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_UserId);
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardRecord,Z_Param_Out_OutLeaderboardRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardRecordByUserId(Z_Param_UserId,Z_Param_Out_OutLeaderboardRecord);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardRecordByUserId

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardUserScoreByIndex
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms
	{
		int32 LeaderboardUserScoreIndex;
		FString StatName;
		FEIK_Leaderboards_LeaderboardUserScore OutLeaderboardUserScore;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches leaderboard user score from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardUserScoreByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches leaderboard user score from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardUserScoreIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardUserScore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_LeaderboardUserScoreIndex = { "LeaderboardUserScoreIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms, LeaderboardUserScoreIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_OutLeaderboardUserScore = { "OutLeaderboardUserScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms, OutLeaderboardUserScore), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardUserScore, METADATA_PARAMS(0, nullptr) }; // 4120145060
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_LeaderboardUserScoreIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_OutLeaderboardUserScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardUserScoreByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardUserScoreByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardUserScoreIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardUserScore,Z_Param_Out_OutLeaderboardUserScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardUserScoreByIndex(Z_Param_LeaderboardUserScoreIndex,Z_Param_StatName,Z_Param_Out_OutLeaderboardUserScore);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardUserScoreByIndex

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardUserScoreByUserId
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms
	{
		FEIK_ProductUserId UserId;
		FString StatName;
		FEIK_Leaderboards_LeaderboardUserScore OutLeaderboardUserScore;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches leaderboard user score from a given user ID.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_CopyLeaderboardUserScoreByUserId" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches leaderboard user score from a given user ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLeaderboardUserScore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_OutLeaderboardUserScore = { "OutLeaderboardUserScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms, OutLeaderboardUserScore), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardUserScore, METADATA_PARAMS(0, nullptr) }; // 4120145060
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_OutLeaderboardUserScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_CopyLeaderboardUserScoreByUserId", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardUserScoreByUserId)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardUserScore,Z_Param_Out_OutLeaderboardUserScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Leaderboards_CopyLeaderboardUserScoreByUserId(Z_Param_UserId,Z_Param_StatName,Z_Param_Out_OutLeaderboardUserScore);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_CopyLeaderboardUserScoreByUserId

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardDefinitionCount
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardDefinitionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of leaderboards definitions that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_GetLeaderboardDefinitionCount" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of leaderboards definitions that are cached locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardDefinitionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_GetLeaderboardDefinitionCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardDefinitionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardDefinitionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardDefinitionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Leaderboards_GetLeaderboardDefinitionCount();
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardDefinitionCount

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardRecordCount
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardRecordCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of leaderboard records that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_GetLeaderboardRecordCount" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of leaderboard records that are cached locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardRecordCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_GetLeaderboardRecordCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardRecordCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardRecordCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardRecordCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Leaderboards_GetLeaderboardRecordCount();
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardRecordCount

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardUserScoreCount
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardUserScoreCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of leaderboard user scores that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_GetLeaderboardUserScoreCount" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of leaderboard user scores that are cached locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardUserScoreCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_GetLeaderboardUserScoreCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardUserScoreCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_GetLeaderboardUserScoreCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardUserScoreCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Leaderboards_GetLeaderboardUserScoreCount();
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_GetLeaderboardUserScoreCount

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardDefinition_Release
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardDefinition_Release_Parms
	{
		FEIK_Leaderboards_Definition LeaderboardDefinition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with a leaderboard definition. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardDefinitionByIndex or EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_Definition_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with a leaderboard definition. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardDefinitionByIndex or EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::NewProp_LeaderboardDefinition = { "LeaderboardDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardDefinition_Release_Parms, LeaderboardDefinition), Z_Construct_UScriptStruct_FEIK_Leaderboards_Definition, METADATA_PARAMS(0, nullptr) }; // 2230624433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::NewProp_LeaderboardDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_LeaderboardDefinition_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardDefinition_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardDefinition_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardDefinition_Release)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_Definition,Z_Param_Out_LeaderboardDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Leaderboards_LeaderboardDefinition_Release(Z_Param_Out_LeaderboardDefinition);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardDefinition_Release

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardRecord_Release
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardRecord_Release_Parms
	{
		FEIK_Leaderboards_LeaderboardRecord LeaderboardRecord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with leaderboard record. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardRecordByIndex or EOS_Leaderboards_CopyLeaderboardRecordByUserId.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_LeaderboardRecord_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with leaderboard record. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardRecordByIndex or EOS_Leaderboards_CopyLeaderboardRecordByUserId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::NewProp_LeaderboardRecord = { "LeaderboardRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardRecord_Release_Parms, LeaderboardRecord), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardRecord, METADATA_PARAMS(0, nullptr) }; // 1654579847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::NewProp_LeaderboardRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_LeaderboardRecord_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardRecord_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardRecord_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardRecord_Release)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardRecord,Z_Param_Out_LeaderboardRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Leaderboards_LeaderboardRecord_Release(Z_Param_Out_LeaderboardRecord);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardRecord_Release

// Begin Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardUserScore_Release
struct Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics
{
	struct EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardUserScore_Release_Parms
	{
		FEIK_Leaderboards_LeaderboardUserScore LeaderboardUserScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with leaderboard user score. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardUserScoreByIndex or EOS_Leaderboards_CopyLeaderboardUserScoreByUserId.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_LeaderboardUserScore_Release" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with leaderboard user score. This must be called on data retrieved from EOS_Leaderboards_CopyLeaderboardUserScoreByIndex or EOS_Leaderboards_CopyLeaderboardUserScoreByUserId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardUserScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::NewProp_LeaderboardUserScore = { "LeaderboardUserScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardUserScore_Release_Parms, LeaderboardUserScore), Z_Construct_UScriptStruct_FEIK_Leaderboards_LeaderboardUserScore, METADATA_PARAMS(0, nullptr) }; // 4120145060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::NewProp_LeaderboardUserScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LeaderboardsSubsystem, nullptr, "EIK_Leaderboards_LeaderboardUserScore_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardUserScore_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::EIK_LeaderboardsSubsystem_eventEIK_Leaderboards_LeaderboardUserScore_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardUserScore_Release)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_LeaderboardUserScore,Z_Param_Out_LeaderboardUserScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Leaderboards_LeaderboardUserScore_Release(Z_Param_Out_LeaderboardUserScore);
	P_NATIVE_END;
}
// End Class UEIK_LeaderboardsSubsystem Function EIK_Leaderboards_LeaderboardUserScore_Release

// Begin Class UEIK_LeaderboardsSubsystem
void UEIK_LeaderboardsSubsystem::StaticRegisterNativesUEIK_LeaderboardsSubsystem()
{
	UClass* Class = UEIK_LeaderboardsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Leaderboards_CopyLeaderboardDefinitionByIndex", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardDefinitionByIndex },
		{ "EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId },
		{ "EIK_Leaderboards_CopyLeaderboardRecordByIndex", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardRecordByIndex },
		{ "EIK_Leaderboards_CopyLeaderboardRecordByUserId", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardRecordByUserId },
		{ "EIK_Leaderboards_CopyLeaderboardUserScoreByIndex", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardUserScoreByIndex },
		{ "EIK_Leaderboards_CopyLeaderboardUserScoreByUserId", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_CopyLeaderboardUserScoreByUserId },
		{ "EIK_Leaderboards_GetLeaderboardDefinitionCount", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardDefinitionCount },
		{ "EIK_Leaderboards_GetLeaderboardRecordCount", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardRecordCount },
		{ "EIK_Leaderboards_GetLeaderboardUserScoreCount", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_GetLeaderboardUserScoreCount },
		{ "EIK_Leaderboards_LeaderboardDefinition_Release", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardDefinition_Release },
		{ "EIK_Leaderboards_LeaderboardRecord_Release", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardRecord_Release },
		{ "EIK_Leaderboards_LeaderboardUserScore_Release", &UEIK_LeaderboardsSubsystem::execEIK_Leaderboards_LeaderboardUserScore_Release },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_LeaderboardsSubsystem);
UClass* Z_Construct_UClass_UEIK_LeaderboardsSubsystem_NoRegister()
{
	return UEIK_LeaderboardsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Leaderboards Interface" },
		{ "IncludePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_LeaderboardsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByIndex, "EIK_Leaderboards_CopyLeaderboardDefinitionByIndex" }, // 3028131603
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId, "EIK_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId" }, // 4030896656
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByIndex, "EIK_Leaderboards_CopyLeaderboardRecordByIndex" }, // 3284321092
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardRecordByUserId, "EIK_Leaderboards_CopyLeaderboardRecordByUserId" }, // 298414143
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByIndex, "EIK_Leaderboards_CopyLeaderboardUserScoreByIndex" }, // 169658559
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_CopyLeaderboardUserScoreByUserId, "EIK_Leaderboards_CopyLeaderboardUserScoreByUserId" }, // 3130738310
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardDefinitionCount, "EIK_Leaderboards_GetLeaderboardDefinitionCount" }, // 204536329
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardRecordCount, "EIK_Leaderboards_GetLeaderboardRecordCount" }, // 3271904119
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_GetLeaderboardUserScoreCount, "EIK_Leaderboards_GetLeaderboardUserScoreCount" }, // 968791883
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardDefinition_Release, "EIK_Leaderboards_LeaderboardDefinition_Release" }, // 960529425
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardRecord_Release, "EIK_Leaderboards_LeaderboardRecord_Release" }, // 2895789889
		{ &Z_Construct_UFunction_UEIK_LeaderboardsSubsystem_EIK_Leaderboards_LeaderboardUserScore_Release, "EIK_Leaderboards_LeaderboardUserScore_Release" }, // 780522159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_LeaderboardsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::ClassParams = {
	&UEIK_LeaderboardsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_LeaderboardsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_LeaderboardsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_LeaderboardsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_LeaderboardsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_LeaderboardsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_LeaderboardsSubsystem>()
{
	return UEIK_LeaderboardsSubsystem::StaticClass();
}
UEIK_LeaderboardsSubsystem::UEIK_LeaderboardsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_LeaderboardsSubsystem);
UEIK_LeaderboardsSubsystem::~UEIK_LeaderboardsSubsystem() {}
// End Class UEIK_LeaderboardsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_LeaderboardsSubsystem, UEIK_LeaderboardsSubsystem::StaticClass, TEXT("UEIK_LeaderboardsSubsystem"), &Z_Registration_Info_UClass_UEIK_LeaderboardsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_LeaderboardsSubsystem), 1207315868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_517717019(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_LeaderboardsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

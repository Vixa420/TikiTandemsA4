// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Leaderboards_QueryLeaderboardUserScores() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_UserScoresQueryStatInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Leaderboards_QueryLeaderboardUserScoresOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions;
class UScriptStruct* FEIK_Leaderboards_QueryLeaderboardUserScoresOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Leaderboards_QueryLeaderboardUserScoresOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Leaderboards_QueryLeaderboardUserScoresOptions>()
{
	return FEIK_Leaderboards_QueryLeaderboardUserScoresOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An array of Product User IDs indicating the users whose scores you want to retrieve\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of Product User IDs indicating the users whose scores you want to retrieve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatInfo_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The stats to be collected, along with the sorting method to use when determining rank order for each stat\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stats to be collected, along with the sorting method to use when determining rank order for each stat" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An optional POSIX timestamp, or EOS_LEADERBOARDS_TIME_UNDEFINED; results will only include scores made after this time\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional POSIX timestamp, or EOS_LEADERBOARDS_TIME_UNDEFINED; results will only include scores made after this time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An optional POSIX timestamp, or EOS_LEADERBOARDS_TIME_UNDEFINED; results will only include scores made before this time\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional POSIX timestamp, or EOS_LEADERBOARDS_TIME_UNDEFINED; results will only include scores made before this time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Product User ID for user who is querying user scores. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Product User ID for user who is querying user scores. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatInfo;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Leaderboards_QueryLeaderboardUserScoresOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StatInfo_Inner = { "StatInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Leaderboards_UserScoresQueryStatInfo, METADATA_PARAMS(0, nullptr) }; // 2678101998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StatInfo = { "StatInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, StatInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatInfo_MetaData), NewProp_StatInfo_MetaData) }; // 2678101998
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StatInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StatInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Leaderboards_QueryLeaderboardUserScoresOptions",
	Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::PropPointers),
	sizeof(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions),
	alignof(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Leaderboards_QueryLeaderboardUserScoresOptions

// Begin Delegate FEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback, TEnumAsByte<EEIK_Result> const& Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback_Parms Parms;
	Parms.Result=Result;
	EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback

// Begin Class UEIK_Leaderboards_QueryLeaderboardUserScores Function EIK_Leaderboards_QueryLeaderboardUserScores
struct Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics
{
	struct EIK_Leaderboards_QueryLeaderboardUserScores_eventEIK_Leaderboards_QueryLeaderboardUserScores_Parms
	{
		FEIK_Leaderboards_QueryLeaderboardUserScoresOptions Options;
		UEIK_Leaderboards_QueryLeaderboardUserScores* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query for a list of scores for a given list of users.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_QueryLeaderboardUserScores" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for a list of scores for a given list of users." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardUserScores_eventEIK_Leaderboards_QueryLeaderboardUserScores_Parms, Options), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3858144450
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardUserScores_eventEIK_Leaderboards_QueryLeaderboardUserScores_Parms, ReturnValue), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores, nullptr, "EIK_Leaderboards_QueryLeaderboardUserScores", nullptr, nullptr, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::EIK_Leaderboards_QueryLeaderboardUserScores_eventEIK_Leaderboards_QueryLeaderboardUserScores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::EIK_Leaderboards_QueryLeaderboardUserScores_eventEIK_Leaderboards_QueryLeaderboardUserScores_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Leaderboards_QueryLeaderboardUserScores::execEIK_Leaderboards_QueryLeaderboardUserScores)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Leaderboards_QueryLeaderboardUserScores**)Z_Param__Result=UEIK_Leaderboards_QueryLeaderboardUserScores::EIK_Leaderboards_QueryLeaderboardUserScores(Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_Leaderboards_QueryLeaderboardUserScores Function EIK_Leaderboards_QueryLeaderboardUserScores

// Begin Class UEIK_Leaderboards_QueryLeaderboardUserScores
void UEIK_Leaderboards_QueryLeaderboardUserScores::StaticRegisterNativesUEIK_Leaderboards_QueryLeaderboardUserScores()
{
	UClass* Class = UEIK_Leaderboards_QueryLeaderboardUserScores::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Leaderboards_QueryLeaderboardUserScores", &UEIK_Leaderboards_QueryLeaderboardUserScores::execEIK_Leaderboards_QueryLeaderboardUserScores },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Leaderboards_QueryLeaderboardUserScores);
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_NoRegister()
{
	return UEIK_Leaderboards_QueryLeaderboardUserScores::StaticClass();
}
struct Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardUserScores.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardUserScores_EIK_Leaderboards_QueryLeaderboardUserScores, "EIK_Leaderboards_QueryLeaderboardUserScores" }, // 1524454934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Leaderboards_QueryLeaderboardUserScores>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Leaderboards_QueryLeaderboardUserScores, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 329787597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::ClassParams = {
	&UEIK_Leaderboards_QueryLeaderboardUserScores::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores()
{
	if (!Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores.OuterSingleton, Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Leaderboards_QueryLeaderboardUserScores>()
{
	return UEIK_Leaderboards_QueryLeaderboardUserScores::StaticClass();
}
UEIK_Leaderboards_QueryLeaderboardUserScores::UEIK_Leaderboards_QueryLeaderboardUserScores(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Leaderboards_QueryLeaderboardUserScores);
UEIK_Leaderboards_QueryLeaderboardUserScores::~UEIK_Leaderboards_QueryLeaderboardUserScores() {}
// End Class UEIK_Leaderboards_QueryLeaderboardUserScores

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Leaderboards_QueryLeaderboardUserScoresOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardUserScoresOptions_Statics::NewStructOps, TEXT("EIK_Leaderboards_QueryLeaderboardUserScoresOptions"), &Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardUserScoresOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Leaderboards_QueryLeaderboardUserScoresOptions), 3858144450U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores, UEIK_Leaderboards_QueryLeaderboardUserScores::StaticClass, TEXT("UEIK_Leaderboards_QueryLeaderboardUserScores"), &Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardUserScores, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Leaderboards_QueryLeaderboardUserScores), 3660049829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_123290156(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardUserScores_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetLeaderboardForUserIds() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetLeaderboardForUserIds();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum ELeaderboardAggregation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeaderboardAggregation;
static UEnum* ELeaderboardAggregation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeaderboardAggregation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeaderboardAggregation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ELeaderboardAggregation"));
	}
	return Z_Registration_Info_UEnum_ELeaderboardAggregation.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ELeaderboardAggregation>()
{
	return ELeaderboardAggregation_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "EOS_LA_Latest.Comment", "/**\n * \n */" },
		{ "EOS_LA_Latest.DisplayName", "Latest" },
		{ "EOS_LA_Latest.Name", "ELeaderboardAggregation::EOS_LA_Latest" },
		{ "EOS_LA_Max.Comment", "/**\n * \n */" },
		{ "EOS_LA_Max.DisplayName", "Maximum" },
		{ "EOS_LA_Max.Name", "ELeaderboardAggregation::EOS_LA_Max" },
		{ "EOS_LA_Min.Comment", "/**\n * \n */" },
		{ "EOS_LA_Min.DisplayName", "Minimum" },
		{ "EOS_LA_Min.Name", "ELeaderboardAggregation::EOS_LA_Min" },
		{ "EOS_LA_Sum.Comment", "/**\n * \n */" },
		{ "EOS_LA_Sum.DisplayName", "Sum" },
		{ "EOS_LA_Sum.Name", "ELeaderboardAggregation::EOS_LA_Sum" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELeaderboardAggregation::EOS_LA_Min", (int64)ELeaderboardAggregation::EOS_LA_Min },
		{ "ELeaderboardAggregation::EOS_LA_Max", (int64)ELeaderboardAggregation::EOS_LA_Max },
		{ "ELeaderboardAggregation::EOS_LA_Sum", (int64)ELeaderboardAggregation::EOS_LA_Sum },
		{ "ELeaderboardAggregation::EOS_LA_Latest", (int64)ELeaderboardAggregation::EOS_LA_Latest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"ELeaderboardAggregation",
	"ELeaderboardAggregation",
	Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation()
{
	if (!Z_Registration_Info_UEnum_ELeaderboardAggregation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeaderboardAggregation.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeaderboardAggregation.InnerSingleton;
}
// End Enum ELeaderboardAggregation

// Begin ScriptStruct FEIKExtendedLeaderboardValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue;
class UScriptStruct* FEIKExtendedLeaderboardValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKExtendedLeaderboardValue"));
	}
	return Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKExtendedLeaderboardValue>()
{
	return FEIKExtendedLeaderboardValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "EIKLeaderboardValue" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "Category", "EIKLeaderboardValue" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKExtendedLeaderboardValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKExtendedLeaderboardValue, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKExtendedLeaderboardValue, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIKExtendedLeaderboardValue",
	Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::PropPointers),
	sizeof(FEIKExtendedLeaderboardValue),
	alignof(FEIKExtendedLeaderboardValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue()
{
	if (!Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.InnerSingleton, Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue.InnerSingleton;
}
// End ScriptStruct FEIKExtendedLeaderboardValue

// Begin Delegate FGetUserIdLeaderboardResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms
	{
		TArray<FEIKExtendedLeaderboardValue> LeaderboardValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_Inner = { "LeaderboardValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue, METADATA_PARAMS(0, nullptr) }; // 3222181940
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues = { "LeaderboardValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms, LeaderboardValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardValues_MetaData), NewProp_LeaderboardValues_MetaData) }; // 3222181940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetUserIdLeaderboardResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGetUserIdLeaderboardResult_DelegateWrapper(const FMulticastScriptDelegate& GetUserIdLeaderboardResult, TArray<FEIKExtendedLeaderboardValue> const& LeaderboardValues)
{
	struct _Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms
	{
		TArray<FEIKExtendedLeaderboardValue> LeaderboardValues;
	};
	_Script_OnlineSubsystemEIK_eventGetUserIdLeaderboardResult_Parms Parms;
	Parms.LeaderboardValues=LeaderboardValues;
	GetUserIdLeaderboardResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGetUserIdLeaderboardResult

// Begin Class UEIK_GetLeaderboardForUserIds Function GetEIKLeaderboardForUserIds
struct Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics
{
	struct EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms
	{
		TArray<FString> TargetProductUserIds;
		FString LocalProductUserId;
		bool UseTime;
		FDateTime StartTime;
		FDateTime EndTime;
		ELeaderboardAggregation AggregationType;
		FString StatName;
		UEIK_GetLeaderboardForUserIds* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Statistics" },
		{ "DisplayName", "Get EIK Leaderboard For User Ids" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProductUserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetProductUserIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductUserId;
	static void NewProp_UseTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AggregationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AggregationType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_TargetProductUserIds_Inner = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_TargetProductUserIds = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, TargetProductUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_LocalProductUserId = { "LocalProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, LocalProductUserId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_UseTime_SetBit(void* Obj)
{
	((EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms*)Obj)->UseTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_UseTime = { "UseTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms), &Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_UseTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_AggregationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_AggregationType = { "AggregationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, AggregationType), Z_Construct_UEnum_OnlineSubsystemEIK_ELeaderboardAggregation, METADATA_PARAMS(0, nullptr) }; // 1910760761
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_TargetProductUserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_TargetProductUserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_LocalProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_UseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_AggregationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_AggregationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetLeaderboardForUserIds, nullptr, "GetEIKLeaderboardForUserIds", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::EIK_GetLeaderboardForUserIds_eventGetEIKLeaderboardForUserIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetLeaderboardForUserIds::execGetEIKLeaderboardForUserIds)
{
	P_GET_TARRAY(FString,Z_Param_TargetProductUserIds);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalProductUserId);
	P_GET_UBOOL(Z_Param_UseTime);
	P_GET_STRUCT(FDateTime,Z_Param_StartTime);
	P_GET_STRUCT(FDateTime,Z_Param_EndTime);
	P_GET_ENUM(ELeaderboardAggregation,Z_Param_AggregationType);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetLeaderboardForUserIds**)Z_Param__Result=UEIK_GetLeaderboardForUserIds::GetEIKLeaderboardForUserIds(Z_Param_TargetProductUserIds,Z_Param_LocalProductUserId,Z_Param_UseTime,Z_Param_StartTime,Z_Param_EndTime,ELeaderboardAggregation(Z_Param_AggregationType),Z_Param_StatName);
	P_NATIVE_END;
}
// End Class UEIK_GetLeaderboardForUserIds Function GetEIKLeaderboardForUserIds

// Begin Class UEIK_GetLeaderboardForUserIds
void UEIK_GetLeaderboardForUserIds::StaticRegisterNativesUEIK_GetLeaderboardForUserIds()
{
	UClass* Class = UEIK_GetLeaderboardForUserIds::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEIKLeaderboardForUserIds", &UEIK_GetLeaderboardForUserIds::execGetEIKLeaderboardForUserIds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetLeaderboardForUserIds);
UClass* Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_NoRegister()
{
	return UEIK_GetLeaderboardForUserIds::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faliure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboardForUserIds.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Faliure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetLeaderboardForUserIds_GetEIKLeaderboardForUserIds, "GetEIKLeaderboardForUserIds" }, // 924042597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetLeaderboardForUserIds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetLeaderboardForUserIds, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 3407975282
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::NewProp_Faliure = { "Faliure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetLeaderboardForUserIds, Faliure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetUserIdLeaderboardResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faliure_MetaData), NewProp_Faliure_MetaData) }; // 3407975282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::NewProp_Faliure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::ClassParams = {
	&UEIK_GetLeaderboardForUserIds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetLeaderboardForUserIds()
{
	if (!Z_Registration_Info_UClass_UEIK_GetLeaderboardForUserIds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetLeaderboardForUserIds.OuterSingleton, Z_Construct_UClass_UEIK_GetLeaderboardForUserIds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetLeaderboardForUserIds.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetLeaderboardForUserIds>()
{
	return UEIK_GetLeaderboardForUserIds::StaticClass();
}
UEIK_GetLeaderboardForUserIds::UEIK_GetLeaderboardForUserIds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetLeaderboardForUserIds);
UEIK_GetLeaderboardForUserIds::~UEIK_GetLeaderboardForUserIds() {}
// End Class UEIK_GetLeaderboardForUserIds

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELeaderboardAggregation_StaticEnum, TEXT("ELeaderboardAggregation"), &Z_Registration_Info_UEnum_ELeaderboardAggregation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1910760761U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIKExtendedLeaderboardValue::StaticStruct, Z_Construct_UScriptStruct_FEIKExtendedLeaderboardValue_Statics::NewStructOps, TEXT("EIKExtendedLeaderboardValue"), &Z_Registration_Info_UScriptStruct_EIKExtendedLeaderboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKExtendedLeaderboardValue), 3222181940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetLeaderboardForUserIds, UEIK_GetLeaderboardForUserIds::StaticClass, TEXT("UEIK_GetLeaderboardForUserIds"), &Z_Registration_Info_UClass_UEIK_GetLeaderboardForUserIds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetLeaderboardForUserIds), 1379014775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_4055681027(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboardForUserIds_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

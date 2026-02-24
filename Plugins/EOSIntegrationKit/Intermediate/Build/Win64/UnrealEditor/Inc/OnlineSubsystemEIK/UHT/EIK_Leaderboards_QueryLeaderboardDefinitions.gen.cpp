// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Leaderboards_QueryLeaderboardDefinitions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions;
class UScriptStruct* FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Leaderboards_QueryLeaderboardDefinitionsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions>()
{
	return FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input parameters for the EOS_Leaderboards_QueryLeaderboardDefinitions function. StartTime and EndTime are optional parameters, they can be used to limit the list of definitions to overlap the time window specified.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input parameters for the EOS_Leaderboards_QueryLeaderboardDefinitions function. StartTime and EndTime are optional parameters, they can be used to limit the list of definitions to overlap the time window specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An optional POSIX timestamp for the leaderboard's start time, or EOS_LEADERBOARDS_TIME_UNDEFINED\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional POSIX timestamp for the leaderboard's start time, or EOS_LEADERBOARDS_TIME_UNDEFINED" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//An optional POSIX timestamp for the leaderboard's end time, or EOS_LEADERBOARDS_TIME_UNDEFINED\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional POSIX timestamp for the leaderboard's end time, or EOS_LEADERBOARDS_TIME_UNDEFINED" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Product User ID for user who is querying definitions. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Product User ID for user who is querying definitions. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Leaderboards_QueryLeaderboardDefinitionsOptions",
	Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::PropPointers),
	sizeof(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions),
	alignof(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions

// Begin Delegate FEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback, TEnumAsByte<EEIK_Result> const& Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback_Parms Parms;
	Parms.Result=Result;
	EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback

// Begin Class UEIK_Leaderboards_QueryLeaderboardDefinitions Function EIK_Leaderboards_QueryLeaderboardDefinitions
struct Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics
{
	struct EIK_Leaderboards_QueryLeaderboardDefinitions_eventEIK_Leaderboards_QueryLeaderboardDefinitions_Parms
	{
		FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions Options;
		UEIK_Leaderboards_QueryLeaderboardDefinitions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
		{ "DisplayName", "EOS_Leaderboards_QueryLeaderboardDefinitions" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardDefinitions_eventEIK_Leaderboards_QueryLeaderboardDefinitions_Parms, Options), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3782770120
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardDefinitions_eventEIK_Leaderboards_QueryLeaderboardDefinitions_Parms, ReturnValue), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions, nullptr, "EIK_Leaderboards_QueryLeaderboardDefinitions", nullptr, nullptr, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::EIK_Leaderboards_QueryLeaderboardDefinitions_eventEIK_Leaderboards_QueryLeaderboardDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::EIK_Leaderboards_QueryLeaderboardDefinitions_eventEIK_Leaderboards_QueryLeaderboardDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Leaderboards_QueryLeaderboardDefinitions::execEIK_Leaderboards_QueryLeaderboardDefinitions)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Leaderboards_QueryLeaderboardDefinitions**)Z_Param__Result=UEIK_Leaderboards_QueryLeaderboardDefinitions::EIK_Leaderboards_QueryLeaderboardDefinitions(Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_Leaderboards_QueryLeaderboardDefinitions Function EIK_Leaderboards_QueryLeaderboardDefinitions

// Begin Class UEIK_Leaderboards_QueryLeaderboardDefinitions
void UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticRegisterNativesUEIK_Leaderboards_QueryLeaderboardDefinitions()
{
	UClass* Class = UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Leaderboards_QueryLeaderboardDefinitions", &UEIK_Leaderboards_QueryLeaderboardDefinitions::execEIK_Leaderboards_QueryLeaderboardDefinitions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Leaderboards_QueryLeaderboardDefinitions);
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_NoRegister()
{
	return UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticClass();
}
struct Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardDefinitions_EIK_Leaderboards_QueryLeaderboardDefinitions, "EIK_Leaderboards_QueryLeaderboardDefinitions" }, // 3516617254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Leaderboards_QueryLeaderboardDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Leaderboards_QueryLeaderboardDefinitions, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3476485184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::ClassParams = {
	&UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions()
{
	if (!Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions.OuterSingleton, Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Leaderboards_QueryLeaderboardDefinitions>()
{
	return UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticClass();
}
UEIK_Leaderboards_QueryLeaderboardDefinitions::UEIK_Leaderboards_QueryLeaderboardDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Leaderboards_QueryLeaderboardDefinitions);
UEIK_Leaderboards_QueryLeaderboardDefinitions::~UEIK_Leaderboards_QueryLeaderboardDefinitions() {}
// End Class UEIK_Leaderboards_QueryLeaderboardDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions_Statics::NewStructOps, TEXT("EIK_Leaderboards_QueryLeaderboardDefinitionsOptions"), &Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardDefinitionsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Leaderboards_QueryLeaderboardDefinitionsOptions), 3782770120U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions, UEIK_Leaderboards_QueryLeaderboardDefinitions::StaticClass, TEXT("UEIK_Leaderboards_QueryLeaderboardDefinitions"), &Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Leaderboards_QueryLeaderboardDefinitions), 2347629348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_416778850(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardDefinitions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

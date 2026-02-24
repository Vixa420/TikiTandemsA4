// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Leaderboards_QueryLeaderboardRanks() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Leaderboards_QueryLeaderboardRanksOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions;
class UScriptStruct* FEIK_Leaderboards_QueryLeaderboardRanksOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Leaderboards_QueryLeaderboardRanksOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Leaderboards_QueryLeaderboardRanksOptions>()
{
	return FEIK_Leaderboards_QueryLeaderboardRanksOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The ID of the leaderboard whose information you want to retrieve.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the leaderboard whose information you want to retrieve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Product User ID for user who is querying ranks. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available.\n" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Product User ID for user who is querying ranks. Must be set when using a client policy that requires a valid logged in user. Not used for Dedicated Server where no user is available." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Leaderboards_QueryLeaderboardRanksOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardRanksOptions, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Leaderboards_QueryLeaderboardRanksOptions, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Leaderboards_QueryLeaderboardRanksOptions",
	Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::PropPointers),
	sizeof(FEIK_Leaderboards_QueryLeaderboardRanksOptions),
	alignof(FEIK_Leaderboards_QueryLeaderboardRanksOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions.InnerSingleton;
}
// End ScriptStruct FEIK_Leaderboards_QueryLeaderboardRanksOptions

// Begin Delegate FEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FString LeaderboardId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::NewProp_LeaderboardId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback, TEnumAsByte<EEIK_Result> const& Result, const FString& LeaderboardId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FString LeaderboardId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback_Parms Parms;
	Parms.Result=Result;
	Parms.LeaderboardId=LeaderboardId;
	EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback

// Begin Class UEIK_Leaderboards_QueryLeaderboardRanks Function EIK_Leaderboards_QueryLeaderboardRanks
struct Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics
{
	struct EIK_Leaderboards_QueryLeaderboardRanks_eventEIK_Leaderboards_QueryLeaderboardRanks_Parms
	{
		FEIK_Leaderboards_QueryLeaderboardRanksOptions Options;
		UEIK_Leaderboards_QueryLeaderboardRanks* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.\n" },
#endif
		{ "DisplayName", "EOS_Leaderboards_QueryLeaderboardRanks" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardRanks_eventEIK_Leaderboards_QueryLeaderboardRanks_Parms, Options), Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 2212648840
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Leaderboards_QueryLeaderboardRanks_eventEIK_Leaderboards_QueryLeaderboardRanks_Parms, ReturnValue), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks, nullptr, "EIK_Leaderboards_QueryLeaderboardRanks", nullptr, nullptr, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::EIK_Leaderboards_QueryLeaderboardRanks_eventEIK_Leaderboards_QueryLeaderboardRanks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::EIK_Leaderboards_QueryLeaderboardRanks_eventEIK_Leaderboards_QueryLeaderboardRanks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Leaderboards_QueryLeaderboardRanks::execEIK_Leaderboards_QueryLeaderboardRanks)
{
	P_GET_STRUCT_REF(FEIK_Leaderboards_QueryLeaderboardRanksOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Leaderboards_QueryLeaderboardRanks**)Z_Param__Result=UEIK_Leaderboards_QueryLeaderboardRanks::EIK_Leaderboards_QueryLeaderboardRanks(Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEIK_Leaderboards_QueryLeaderboardRanks Function EIK_Leaderboards_QueryLeaderboardRanks

// Begin Class UEIK_Leaderboards_QueryLeaderboardRanks
void UEIK_Leaderboards_QueryLeaderboardRanks::StaticRegisterNativesUEIK_Leaderboards_QueryLeaderboardRanks()
{
	UClass* Class = UEIK_Leaderboards_QueryLeaderboardRanks::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Leaderboards_QueryLeaderboardRanks", &UEIK_Leaderboards_QueryLeaderboardRanks::execEIK_Leaderboards_QueryLeaderboardRanks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Leaderboards_QueryLeaderboardRanks);
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_NoRegister()
{
	return UEIK_Leaderboards_QueryLeaderboardRanks::StaticClass();
}
struct Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Leaderboards Interface" },
		{ "ModuleRelativePath", "SdkFunctions/LeaderboardsInterface/EIK_Leaderboards_QueryLeaderboardRanks.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Leaderboards_QueryLeaderboardRanks_EIK_Leaderboards_QueryLeaderboardRanks, "EIK_Leaderboards_QueryLeaderboardRanks" }, // 2857690957
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Leaderboards_QueryLeaderboardRanks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Leaderboards_QueryLeaderboardRanks, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Leaderboards_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2756410792
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::ClassParams = {
	&UEIK_Leaderboards_QueryLeaderboardRanks::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks()
{
	if (!Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardRanks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardRanks.OuterSingleton, Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardRanks.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Leaderboards_QueryLeaderboardRanks>()
{
	return UEIK_Leaderboards_QueryLeaderboardRanks::StaticClass();
}
UEIK_Leaderboards_QueryLeaderboardRanks::UEIK_Leaderboards_QueryLeaderboardRanks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Leaderboards_QueryLeaderboardRanks);
UEIK_Leaderboards_QueryLeaderboardRanks::~UEIK_Leaderboards_QueryLeaderboardRanks() {}
// End Class UEIK_Leaderboards_QueryLeaderboardRanks

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Leaderboards_QueryLeaderboardRanksOptions::StaticStruct, Z_Construct_UScriptStruct_FEIK_Leaderboards_QueryLeaderboardRanksOptions_Statics::NewStructOps, TEXT("EIK_Leaderboards_QueryLeaderboardRanksOptions"), &Z_Registration_Info_UScriptStruct_EIK_Leaderboards_QueryLeaderboardRanksOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Leaderboards_QueryLeaderboardRanksOptions), 2212648840U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Leaderboards_QueryLeaderboardRanks, UEIK_Leaderboards_QueryLeaderboardRanks::StaticClass, TEXT("UEIK_Leaderboards_QueryLeaderboardRanks"), &Z_Registration_Info_UClass_UEIK_Leaderboards_QueryLeaderboardRanks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Leaderboards_QueryLeaderboardRanks), 3001849651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_3075648451(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LeaderboardsInterface_EIK_Leaderboards_QueryLeaderboardRanks_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

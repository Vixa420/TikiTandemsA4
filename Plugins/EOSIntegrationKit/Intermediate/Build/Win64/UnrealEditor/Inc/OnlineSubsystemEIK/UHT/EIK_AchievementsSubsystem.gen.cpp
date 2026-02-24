// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_AchievementsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AchievementsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AchievementsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Achievements_DefinitionV2();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Achievements_PlayerAchievement();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnAchievementsUnlockedV2Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms
	{
		FEIK_ProductUserId UserId;
		FString AchievementId;
		int64 UnlockTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UnlockTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms, AchievementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms, UnlockTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_AchievementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::NewProp_UnlockTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnAchievementsUnlockedV2Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAchievementsUnlockedV2Callback_DelegateWrapper(const FScriptDelegate& OnAchievementsUnlockedV2Callback, FEIK_ProductUserId UserId, const FString& AchievementId, int64 UnlockTime)
{
	struct _Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms
	{
		FEIK_ProductUserId UserId;
		FString AchievementId;
		int64 UnlockTime;
	};
	_Script_OnlineSubsystemEIK_eventOnAchievementsUnlockedV2Callback_Parms Parms;
	Parms.UserId=UserId;
	Parms.AchievementId=AchievementId;
	Parms.UnlockTime=UnlockTime;
	OnAchievementsUnlockedV2Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAchievementsUnlockedV2Callback

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_AddNotifyAchievementsUnlockedV2
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_AddNotifyAchievementsUnlockedV2_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
		{ "DisplayName", "EOS_Achievements_AddNotifyAchievementsUnlockedV2" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_AddNotifyAchievementsUnlockedV2_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAchievementsUnlockedV2Callback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 432728521
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_AddNotifyAchievementsUnlockedV2_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_AddNotifyAchievementsUnlockedV2", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_AddNotifyAchievementsUnlockedV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_AddNotifyAchievementsUnlockedV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_AddNotifyAchievementsUnlockedV2)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Achievements_AddNotifyAchievementsUnlockedV2(FOnAchievementsUnlockedV2Callback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_AddNotifyAchievementsUnlockedV2

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms
	{
		FString AchievementId;
		FEIK_Achievements_DefinitionV2 OutAchievementDefinition;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
		{ "DisplayName", "EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAchievementDefinition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms, AchievementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_OutAchievementDefinition = { "OutAchievementDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms, OutAchievementDefinition), Z_Construct_UScriptStruct_FEIK_Achievements_DefinitionV2, METADATA_PARAMS(0, nullptr) }; // 638618165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_AchievementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_OutAchievementDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementId);
	P_GET_STRUCT_REF(FEIK_Achievements_DefinitionV2,Z_Param_Out_OutAchievementDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId(Z_Param_AchievementId,Z_Param_Out_OutAchievementDefinition);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyAchievementDefinitionV2ByIndex
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms
	{
		int32 Index;
		FEIK_Achievements_DefinitionV2 OutAchievementDefinition;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an achievement definition from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_CopyAchievementDefinitionV2ByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an achievement definition from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAchievementDefinition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_OutAchievementDefinition = { "OutAchievementDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms, OutAchievementDefinition), Z_Construct_UScriptStruct_FEIK_Achievements_DefinitionV2, METADATA_PARAMS(0, nullptr) }; // 638618165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_OutAchievementDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_CopyAchievementDefinitionV2ByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyAchievementDefinitionV2ByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_CopyAchievementDefinitionV2ByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FEIK_Achievements_DefinitionV2,Z_Param_Out_OutAchievementDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Achievements_CopyAchievementDefinitionV2ByIndex(Z_Param_Index,Z_Param_Out_OutAchievementDefinition);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyAchievementDefinitionV2ByIndex

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyPlayerAchievementByAchievementId
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms
	{
		FEIK_ProductUserId TargetUserId;
		FString AchievementId;
		FEIK_ProductUserId LocalUserId;
		FEIK_Achievements_PlayerAchievement OutPlayerAchievement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a player achievement from a given achievement ID.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_CopyPlayerAchievementByAchievementId" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a player achievement from a given achievement ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerAchievement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms, AchievementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_OutPlayerAchievement = { "OutPlayerAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms, OutPlayerAchievement), Z_Construct_UScriptStruct_FEIK_Achievements_PlayerAchievement, METADATA_PARAMS(0, nullptr) }; // 4117280890
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_AchievementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_OutPlayerAchievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_CopyPlayerAchievementByAchievementId", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByAchievementId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_CopyPlayerAchievementByAchievementId)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementId);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Achievements_PlayerAchievement,Z_Param_Out_OutPlayerAchievement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Achievements_CopyPlayerAchievementByAchievementId(Z_Param_TargetUserId,Z_Param_AchievementId,Z_Param_LocalUserId,Z_Param_Out_OutPlayerAchievement);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyPlayerAchievementByAchievementId

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyPlayerAchievementByIndex
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms
	{
		FEIK_ProductUserId TargetUserId;
		int32 Index;
		FEIK_ProductUserId LocalUserId;
		FEIK_Achievements_PlayerAchievement OutPlayerAchievement;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches a player achievement from a given index.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_CopyPlayerAchievementByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a player achievement from a given index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerAchievement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_OutPlayerAchievement = { "OutPlayerAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms, OutPlayerAchievement), Z_Construct_UScriptStruct_FEIK_Achievements_PlayerAchievement, METADATA_PARAMS(0, nullptr) }; // 4117280890
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_OutPlayerAchievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_CopyPlayerAchievementByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_CopyPlayerAchievementByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_CopyPlayerAchievementByIndex)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Achievements_PlayerAchievement,Z_Param_Out_OutPlayerAchievement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Achievements_CopyPlayerAchievementByIndex(Z_Param_TargetUserId,Z_Param_Index,Z_Param_LocalUserId,Z_Param_Out_OutPlayerAchievement);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_CopyPlayerAchievementByIndex

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_DefinitionV2_Release
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_DefinitionV2_Release_Parms
	{
		FEIK_Achievements_DefinitionV2 AchievementDefinition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with EOS_Achievements_DefinitionV2. This must be called on data retrieved from EOS_Achievements_CopyAchievementDefinitionV2ByIndex or EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_DefinitionV2_Release" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with EOS_Achievements_DefinitionV2. This must be called on data retrieved from EOS_Achievements_CopyAchievementDefinitionV2ByIndex or EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::NewProp_AchievementDefinition = { "AchievementDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_DefinitionV2_Release_Parms, AchievementDefinition), Z_Construct_UScriptStruct_FEIK_Achievements_DefinitionV2, METADATA_PARAMS(0, nullptr) }; // 638618165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::NewProp_AchievementDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_DefinitionV2_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_DefinitionV2_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_DefinitionV2_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_DefinitionV2_Release)
{
	P_GET_STRUCT_REF(FEIK_Achievements_DefinitionV2,Z_Param_Out_AchievementDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Achievements_DefinitionV2_Release(Z_Param_Out_AchievementDefinition);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_DefinitionV2_Release

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_GetAchievementDefinitionCount
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_GetAchievementDefinitionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of achievement definitions that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_GetAchievementDefinitionCount" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of achievement definitions that are cached locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_GetAchievementDefinitionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_GetAchievementDefinitionCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_GetAchievementDefinitionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_GetAchievementDefinitionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_GetAchievementDefinitionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Achievements_GetAchievementDefinitionCount();
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_GetAchievementDefinitionCount

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_GetPlayerAchievementCount
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_GetPlayerAchievementCount_Parms
	{
		FEIK_ProductUserId UserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of player achievements that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_GetPlayerAchievementCount" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of player achievements that are cached locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_GetPlayerAchievementCount_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_GetPlayerAchievementCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_GetPlayerAchievementCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_GetPlayerAchievementCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_GetPlayerAchievementCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_GetPlayerAchievementCount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Achievements_GetPlayerAchievementCount(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_GetPlayerAchievementCount

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_PlayerAchievement_Release
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_PlayerAchievement_Release_Parms
	{
		FEIK_Achievements_PlayerAchievement PlayerAchievement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with a player achievement. This must be called on data retrieved from EOS_Achievements_CopyPlayerAchievementByIndex or EOS_Achievements_CopyPlayerAchievementByAchievementId.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_PlayerAchievement_Release" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with a player achievement. This must be called on data retrieved from EOS_Achievements_CopyPlayerAchievementByIndex or EOS_Achievements_CopyPlayerAchievementByAchievementId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerAchievement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::NewProp_PlayerAchievement = { "PlayerAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_PlayerAchievement_Release_Parms, PlayerAchievement), Z_Construct_UScriptStruct_FEIK_Achievements_PlayerAchievement, METADATA_PARAMS(0, nullptr) }; // 4117280890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::NewProp_PlayerAchievement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_PlayerAchievement_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_PlayerAchievement_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_PlayerAchievement_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_PlayerAchievement_Release)
{
	P_GET_STRUCT_REF(FEIK_Achievements_PlayerAchievement,Z_Param_Out_PlayerAchievement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Achievements_PlayerAchievement_Release(Z_Param_Out_PlayerAchievement);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_PlayerAchievement_Release

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_QueryDefinitions
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_QueryDefinitions_Parms
	{
		FEIK_ProductUserId UserId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_QueryDefinitions" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_QueryDefinitions_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_QueryDefinitions_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_QueryDefinitions", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_QueryDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_QueryDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_QueryDefinitions)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Achievements_QueryDefinitions(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_QueryDefinitions

// Begin Class UEIK_AchievementsSubsystem Function EIK_Achievements_RemoveNotifyAchievementsUnlocked
struct Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics
{
	struct EIK_AchievementsSubsystem_eventEIK_Achievements_RemoveNotifyAchievementsUnlocked_Parms
	{
		FEIK_NotificationId Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving achievement unlocked notifications.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_RemoveNotifyAchievementsUnlocked" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving achievement unlocked notifications." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AchievementsSubsystem_eventEIK_Achievements_RemoveNotifyAchievementsUnlocked_Parms, Id), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AchievementsSubsystem, nullptr, "EIK_Achievements_RemoveNotifyAchievementsUnlocked", nullptr, nullptr, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_RemoveNotifyAchievementsUnlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::EIK_AchievementsSubsystem_eventEIK_Achievements_RemoveNotifyAchievementsUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AchievementsSubsystem::execEIK_Achievements_RemoveNotifyAchievementsUnlocked)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Achievements_RemoveNotifyAchievementsUnlocked(Z_Param_Id);
	P_NATIVE_END;
}
// End Class UEIK_AchievementsSubsystem Function EIK_Achievements_RemoveNotifyAchievementsUnlocked

// Begin Class UEIK_AchievementsSubsystem
void UEIK_AchievementsSubsystem::StaticRegisterNativesUEIK_AchievementsSubsystem()
{
	UClass* Class = UEIK_AchievementsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Achievements_AddNotifyAchievementsUnlockedV2", &UEIK_AchievementsSubsystem::execEIK_Achievements_AddNotifyAchievementsUnlockedV2 },
		{ "EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId", &UEIK_AchievementsSubsystem::execEIK_Achievements_CopyAchievementDefinitionV2ByAchievementId },
		{ "EIK_Achievements_CopyAchievementDefinitionV2ByIndex", &UEIK_AchievementsSubsystem::execEIK_Achievements_CopyAchievementDefinitionV2ByIndex },
		{ "EIK_Achievements_CopyPlayerAchievementByAchievementId", &UEIK_AchievementsSubsystem::execEIK_Achievements_CopyPlayerAchievementByAchievementId },
		{ "EIK_Achievements_CopyPlayerAchievementByIndex", &UEIK_AchievementsSubsystem::execEIK_Achievements_CopyPlayerAchievementByIndex },
		{ "EIK_Achievements_DefinitionV2_Release", &UEIK_AchievementsSubsystem::execEIK_Achievements_DefinitionV2_Release },
		{ "EIK_Achievements_GetAchievementDefinitionCount", &UEIK_AchievementsSubsystem::execEIK_Achievements_GetAchievementDefinitionCount },
		{ "EIK_Achievements_GetPlayerAchievementCount", &UEIK_AchievementsSubsystem::execEIK_Achievements_GetPlayerAchievementCount },
		{ "EIK_Achievements_PlayerAchievement_Release", &UEIK_AchievementsSubsystem::execEIK_Achievements_PlayerAchievement_Release },
		{ "EIK_Achievements_QueryDefinitions", &UEIK_AchievementsSubsystem::execEIK_Achievements_QueryDefinitions },
		{ "EIK_Achievements_RemoveNotifyAchievementsUnlocked", &UEIK_AchievementsSubsystem::execEIK_Achievements_RemoveNotifyAchievementsUnlocked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_AchievementsSubsystem);
UClass* Z_Construct_UClass_UEIK_AchievementsSubsystem_NoRegister()
{
	return UEIK_AchievementsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_AchievementsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_AddNotifyAchievementsUnlockedV2, "EIK_Achievements_AddNotifyAchievementsUnlockedV2" }, // 874608688
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId, "EIK_Achievements_CopyAchievementDefinitionV2ByAchievementId" }, // 1518098776
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyAchievementDefinitionV2ByIndex, "EIK_Achievements_CopyAchievementDefinitionV2ByIndex" }, // 2813521770
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByAchievementId, "EIK_Achievements_CopyPlayerAchievementByAchievementId" }, // 911248867
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_CopyPlayerAchievementByIndex, "EIK_Achievements_CopyPlayerAchievementByIndex" }, // 1462193887
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_DefinitionV2_Release, "EIK_Achievements_DefinitionV2_Release" }, // 1536781380
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetAchievementDefinitionCount, "EIK_Achievements_GetAchievementDefinitionCount" }, // 1497666722
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_GetPlayerAchievementCount, "EIK_Achievements_GetPlayerAchievementCount" }, // 2661884762
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_PlayerAchievement_Release, "EIK_Achievements_PlayerAchievement_Release" }, // 1996793085
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_QueryDefinitions, "EIK_Achievements_QueryDefinitions" }, // 1179902711
		{ &Z_Construct_UFunction_UEIK_AchievementsSubsystem_EIK_Achievements_RemoveNotifyAchievementsUnlocked, "EIK_Achievements_RemoveNotifyAchievementsUnlocked" }, // 142823480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_AchievementsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::ClassParams = {
	&UEIK_AchievementsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_AchievementsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_AchievementsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_AchievementsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_AchievementsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_AchievementsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_AchievementsSubsystem>()
{
	return UEIK_AchievementsSubsystem::StaticClass();
}
UEIK_AchievementsSubsystem::UEIK_AchievementsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_AchievementsSubsystem);
UEIK_AchievementsSubsystem::~UEIK_AchievementsSubsystem() {}
// End Class UEIK_AchievementsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_AchievementsSubsystem, UEIK_AchievementsSubsystem::StaticClass, TEXT("UEIK_AchievementsSubsystem"), &Z_Registration_Info_UClass_UEIK_AchievementsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_AchievementsSubsystem), 3389421242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_1015251270(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_AchievementsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

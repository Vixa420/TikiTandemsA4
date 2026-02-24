// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_UserInfoSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UserInfoSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UserInfoSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UserInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UserInfo_BestDisplayName();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UserInfo_ExternalUserInfo();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyBestDisplayName
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FEIK_UserInfo_BestDisplayName OutBestDisplayName;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*EOS_UserInfo_CopyBestDisplayName is used to immediately retrieve a copy of user's best display name based on an Epic Account ID. This uses data cached by a previous call to EOS_UserInfo_QueryUserInfo, EOS_UserInfo_QueryUserInfoByDisplayName or EOS_UserInfo_QueryUserInfoByExternalAccount as well as EOS_Connect_QueryExternalAccountMappings. If the call returns an EOS_Success result, the out parameter, OutBestDisplayName, must be passed to EOS_UserInfo_BestDisplayName_Release to release the memory associated with it.\n\x09The current priority for picking display name is as follows:\n\x09-\x09Target is online and friends with user, then use presence platform to determine display name\n\x09-\x09Target is in same lobby or is the owner of a lobby search result, then use lobby platform to determine display name (this requires the target's product user id to be cached)\n\x09-\x09Target is in same rtc room, then use rtc room platform to determine display name (this requires the target's product user id to be cached)\n\x09 */" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyBestDisplayName" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*EOS_UserInfo_CopyBestDisplayName is used to immediately retrieve a copy of user's best display name based on an Epic Account ID. This uses data cached by a previous call to EOS_UserInfo_QueryUserInfo, EOS_UserInfo_QueryUserInfoByDisplayName or EOS_UserInfo_QueryUserInfoByExternalAccount as well as EOS_Connect_QueryExternalAccountMappings. If the call returns an EOS_Success result, the out parameter, OutBestDisplayName, must be passed to EOS_UserInfo_BestDisplayName_Release to release the memory associated with it.\nThe current priority for picking display name is as follows:\n-       Target is online and friends with user, then use presence platform to determine display name\n-       Target is in same lobby or is the owner of a lobby search result, then use lobby platform to determine display name (this requires the target's product user id to be cached)\n-       Target is in same rtc room, then use rtc room platform to determine display name (this requires the target's product user id to be cached)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBestDisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_OutBestDisplayName = { "OutBestDisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms, OutBestDisplayName), Z_Construct_UScriptStruct_FEIK_UserInfo_BestDisplayName, METADATA_PARAMS(0, nullptr) }; // 705010437
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_OutBestDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyBestDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyBestDisplayName)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_STRUCT_REF(FEIK_UserInfo_BestDisplayName,Z_Param_Out_OutBestDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyBestDisplayName(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_Out_OutBestDisplayName);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyBestDisplayName

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyBestDisplayNameWithPlatform
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		int32 Platform;
		FEIK_UserInfo_BestDisplayName OutBestDisplayName;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*EOS_UserInfo_CopyBestDisplayNameWithPlatform is used to immediately retrieve a copy of user's best display name based on an Epic Account ID. This uses data cached by a previous call to EOS_UserInfo_QueryUserInfo, EOS_UserInfo_QueryUserInfoByDisplayName or EOS_UserInfo_QueryUserInfoByExternalAccount. If the call returns an EOS_Success result, the out parameter, OutBestDisplayName, must be passed to EOS_UserInfo_BestDisplayName_Release to release the memory associated with it.\n\x09The current priority for picking display name is as follows:\n\x09\x09If platform is non-epic, then use platform display name (if the platform is linked to the account)\n\x09\x09If platform is epic and user has epic display name, then use epic display name\n\x09\x09If platform is epic and user has no epic display name, then use linked external account display name\n\x09 */" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyBestDisplayNameWithPlatform" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*EOS_UserInfo_CopyBestDisplayNameWithPlatform is used to immediately retrieve a copy of user's best display name based on an Epic Account ID. This uses data cached by a previous call to EOS_UserInfo_QueryUserInfo, EOS_UserInfo_QueryUserInfoByDisplayName or EOS_UserInfo_QueryUserInfoByExternalAccount. If the call returns an EOS_Success result, the out parameter, OutBestDisplayName, must be passed to EOS_UserInfo_BestDisplayName_Release to release the memory associated with it.\nThe current priority for picking display name is as follows:\n        If platform is non-epic, then use platform display name (if the platform is linked to the account)\n        If platform is epic and user has epic display name, then use epic display name\n        If platform is epic and user has no epic display name, then use linked external account display name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBestDisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_OutBestDisplayName = { "OutBestDisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms, OutBestDisplayName), Z_Construct_UScriptStruct_FEIK_UserInfo_BestDisplayName, METADATA_PARAMS(0, nullptr) }; // 705010437
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_OutBestDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyBestDisplayNameWithPlatform", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyBestDisplayNameWithPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyBestDisplayNameWithPlatform)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Platform);
	P_GET_STRUCT_REF(FEIK_UserInfo_BestDisplayName,Z_Param_Out_OutBestDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyBestDisplayNameWithPlatform(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_Out_Platform,Z_Param_Out_OutBestDisplayName);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyBestDisplayNameWithPlatform

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByAccountId
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FString AccountId;
		FEIK_UserInfo_ExternalUserInfo OutExternalUserInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an external user info for a given external account ID.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyExternalUserInfoByAccountId" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an external user info for a given external account ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalUserInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms, AccountId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_OutExternalUserInfo = { "OutExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms, OutExternalUserInfo), Z_Construct_UScriptStruct_FEIK_UserInfo_ExternalUserInfo, METADATA_PARAMS(0, nullptr) }; // 295295882
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_AccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_OutExternalUserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyExternalUserInfoByAccountId", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByAccountId)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AccountId);
	P_GET_STRUCT_REF(FEIK_UserInfo_ExternalUserInfo,Z_Param_Out_OutExternalUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyExternalUserInfoByAccountId(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_AccountId,Z_Param_Out_OutExternalUserInfo);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByAccountId

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByAccountType
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		TEnumAsByte<EEIK_EExternalAccountType> AccountType;
		FEIK_UserInfo_ExternalUserInfo OutExternalUserInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an external user info for a given external account type.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyExternalUserInfoByAccountType" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an external user info for a given external account type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalUserInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms, AccountType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountType_MetaData), NewProp_AccountType_MetaData) }; // 2565716192
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_OutExternalUserInfo = { "OutExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms, OutExternalUserInfo), Z_Construct_UScriptStruct_FEIK_UserInfo_ExternalUserInfo, METADATA_PARAMS(0, nullptr) }; // 295295882
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_AccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_OutExternalUserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyExternalUserInfoByAccountType", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByAccountType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByAccountType)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AccountType);
	P_GET_STRUCT_REF(FEIK_UserInfo_ExternalUserInfo,Z_Param_Out_OutExternalUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyExternalUserInfoByAccountType(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,(TEnumAsByte<EEIK_EExternalAccountType>&)(Z_Param_Out_AccountType),Z_Param_Out_OutExternalUserInfo);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByAccountType

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByIndex
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		int32 Index;
		FEIK_UserInfo_ExternalUserInfo OutExternalUserInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an external user info from a given index.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyExternalUserInfoByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an external user info from a given index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalUserInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_OutExternalUserInfo = { "OutExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms, OutExternalUserInfo), Z_Construct_UScriptStruct_FEIK_UserInfo_ExternalUserInfo, METADATA_PARAMS(0, nullptr) }; // 295295882
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_OutExternalUserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyExternalUserInfoByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyExternalUserInfoByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByIndex)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_GET_STRUCT_REF(FEIK_UserInfo_ExternalUserInfo,Z_Param_Out_OutExternalUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyExternalUserInfoByIndex(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_Out_Index,Z_Param_Out_OutExternalUserInfo);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyExternalUserInfoByIndex

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyUserInfo
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		FEIK_UserInfo OutUserInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_UserInfo_CopyUserInfo is used to immediately retrieve a copy of user information based on an Epic Account ID, cached by a previous call to EOS_UserInfo_QueryUserInfo. If the call returns an EOS_Success result, the out parameter, OutUserInfo, must be passed to EOS_UserInfo_Release to release the memory associated with it.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_CopyUserInfo" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_UserInfo_CopyUserInfo is used to immediately retrieve a copy of user information based on an Epic Account ID, cached by a previous call to EOS_UserInfo_QueryUserInfo. If the call returns an EOS_Success result, the out parameter, OutUserInfo, must be passed to EOS_UserInfo_Release to release the memory associated with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutUserInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_OutUserInfo = { "OutUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms, OutUserInfo), Z_Construct_UScriptStruct_FEIK_UserInfo, METADATA_PARAMS(0, nullptr) }; // 3948316387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_OutUserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_CopyUserInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_CopyUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyUserInfo)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_GET_STRUCT_REF(FEIK_UserInfo,Z_Param_Out_OutUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_CopyUserInfo(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId,Z_Param_Out_OutUserInfo);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_CopyUserInfo

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_GetExternalUserInfoCount
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of external user infos that are cached locally.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_GetExternalUserInfoCount" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of external user infos that are cached locally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_GetExternalUserInfoCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_GetExternalUserInfoCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_GetExternalUserInfoCount)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_GetExternalUserInfoCount(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_GetExternalUserInfoCount

// Begin Class UEIK_UserInfoSubsystem Function EIK_UserInfo_GetLocalPlatformType
struct Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics
{
	struct EIK_UserInfoSubsystem_eventEIK_UserInfo_GetLocalPlatformType_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_UserInfo_GetLocalPlatformType is used to retrieve the online platform type of the current running instance of the game.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_GetLocalPlatformType" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_UserInfo_GetLocalPlatformType is used to retrieve the online platform type of the current running instance of the game." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfoSubsystem_eventEIK_UserInfo_GetLocalPlatformType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfoSubsystem, nullptr, "EIK_UserInfo_GetLocalPlatformType", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_GetLocalPlatformType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::EIK_UserInfoSubsystem_eventEIK_UserInfo_GetLocalPlatformType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfoSubsystem::execEIK_UserInfo_GetLocalPlatformType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_UserInfoSubsystem::EIK_UserInfo_GetLocalPlatformType();
	P_NATIVE_END;
}
// End Class UEIK_UserInfoSubsystem Function EIK_UserInfo_GetLocalPlatformType

// Begin Class UEIK_UserInfoSubsystem
void UEIK_UserInfoSubsystem::StaticRegisterNativesUEIK_UserInfoSubsystem()
{
	UClass* Class = UEIK_UserInfoSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_UserInfo_CopyBestDisplayName", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyBestDisplayName },
		{ "EIK_UserInfo_CopyBestDisplayNameWithPlatform", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyBestDisplayNameWithPlatform },
		{ "EIK_UserInfo_CopyExternalUserInfoByAccountId", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByAccountId },
		{ "EIK_UserInfo_CopyExternalUserInfoByAccountType", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByAccountType },
		{ "EIK_UserInfo_CopyExternalUserInfoByIndex", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyExternalUserInfoByIndex },
		{ "EIK_UserInfo_CopyUserInfo", &UEIK_UserInfoSubsystem::execEIK_UserInfo_CopyUserInfo },
		{ "EIK_UserInfo_GetExternalUserInfoCount", &UEIK_UserInfoSubsystem::execEIK_UserInfo_GetExternalUserInfoCount },
		{ "EIK_UserInfo_GetLocalPlatformType", &UEIK_UserInfoSubsystem::execEIK_UserInfo_GetLocalPlatformType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_UserInfoSubsystem);
UClass* Z_Construct_UClass_UEIK_UserInfoSubsystem_NoRegister()
{
	return UEIK_UserInfoSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfoSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayName, "EIK_UserInfo_CopyBestDisplayName" }, // 832653878
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyBestDisplayNameWithPlatform, "EIK_UserInfo_CopyBestDisplayNameWithPlatform" }, // 389508177
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountId, "EIK_UserInfo_CopyExternalUserInfoByAccountId" }, // 2669136408
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByAccountType, "EIK_UserInfo_CopyExternalUserInfoByAccountType" }, // 1341567762
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyExternalUserInfoByIndex, "EIK_UserInfo_CopyExternalUserInfoByIndex" }, // 1312277495
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_CopyUserInfo, "EIK_UserInfo_CopyUserInfo" }, // 1500177046
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetExternalUserInfoCount, "EIK_UserInfo_GetExternalUserInfoCount" }, // 4199444830
		{ &Z_Construct_UFunction_UEIK_UserInfoSubsystem_EIK_UserInfo_GetLocalPlatformType, "EIK_UserInfo_GetLocalPlatformType" }, // 1339289295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_UserInfoSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::ClassParams = {
	&UEIK_UserInfoSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_UserInfoSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_UserInfoSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_UserInfoSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_UserInfoSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_UserInfoSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_UserInfoSubsystem>()
{
	return UEIK_UserInfoSubsystem::StaticClass();
}
UEIK_UserInfoSubsystem::UEIK_UserInfoSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_UserInfoSubsystem);
UEIK_UserInfoSubsystem::~UEIK_UserInfoSubsystem() {}
// End Class UEIK_UserInfoSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_UserInfoSubsystem, UEIK_UserInfoSubsystem::StaticClass, TEXT("UEIK_UserInfoSubsystem"), &Z_Registration_Info_UClass_UEIK_UserInfoSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_UserInfoSubsystem), 475746181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_3928899596(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfoSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

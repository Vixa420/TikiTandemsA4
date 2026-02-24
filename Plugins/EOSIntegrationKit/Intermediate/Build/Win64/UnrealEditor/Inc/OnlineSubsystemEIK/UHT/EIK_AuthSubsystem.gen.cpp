// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_AuthSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_AuthSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AuthSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AuthSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_IdToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_Token();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Auth_OnLoginStatusChangedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EIK_ELoginStatus> PrevStatus;
		TEnumAsByte<EIK_ELoginStatus> CurrentStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_PrevStatus = { "PrevStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms, PrevStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevStatus_MetaData), NewProp_PrevStatus_MetaData) }; // 258189866
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_CurrentStatus = { "CurrentStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms, CurrentStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStatus_MetaData), NewProp_CurrentStatus_MetaData) }; // 258189866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_PrevStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_CurrentStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_OnLoginStatusChangedCallback_DelegateWrapper(const FScriptDelegate& EIK_Auth_OnLoginStatusChangedCallback, FEIK_EpicAccountId LocalUserId, TEnumAsByte<EIK_ELoginStatus> const& PrevStatus, TEnumAsByte<EIK_ELoginStatus> const& CurrentStatus)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EIK_ELoginStatus> PrevStatus;
		TEnumAsByte<EIK_ELoginStatus> CurrentStatus;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLoginStatusChangedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.PrevStatus=PrevStatus;
	Parms.CurrentStatus=CurrentStatus;
	EIK_Auth_OnLoginStatusChangedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_OnLoginStatusChangedCallback

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_AddNotifyLoginStatusChanged
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_AddNotifyLoginStatusChanged_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 Register to receive login status updates.\n\x09 *\n\x09 If the returned NotificationId is valid, you must call EOS_Auth_RemoveNotifyLoginStatusChanged when you no longer wish to have your NotificationHandler called.\n\x09 */" },
#endif
		{ "DisplayName", "EOS_Auth_AddNotifyLoginStatusChanged" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive login status updates.\n*\nIf the returned NotificationId is valid, you must call EOS_Auth_RemoveNotifyLoginStatusChanged when you no longer wish to have your NotificationHandler called." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_AddNotifyLoginStatusChanged_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLoginStatusChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 962692310
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_AddNotifyLoginStatusChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_AddNotifyLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::EIK_AuthSubsystem_eventEIK_Auth_AddNotifyLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::EIK_AuthSubsystem_eventEIK_Auth_AddNotifyLoginStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_AddNotifyLoginStatusChanged)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Auth_AddNotifyLoginStatusChanged(FEIK_Auth_OnLoginStatusChangedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_AddNotifyLoginStatusChanged

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_CopyIdToken
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms
	{
		FEIK_EpicAccountId AccountId;
		FEIK_Auth_IdToken OutToken;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch an ID token for an Epic Account ID. ID tokens are used to securely verify user identities with online services. The most common use case is using an ID token to authenticate the local user by their selected account ID, which is the account ID that should be used to access any game-scoped data for the current application. An ID token for the selected account ID of a locally authenticated user will always be readily available. To retrieve it for the selected account ID, you can use EOS_Auth_CopyIdToken directly after a successful user login.\n" },
#endif
		{ "DisplayName", "EOS_Auth_CopyIdToken" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch an ID token for an Epic Account ID. ID tokens are used to securely verify user identities with online services. The most common use case is using an ID token to authenticate the local user by their selected account ID, which is the account ID that should be used to access any game-scoped data for the current application. An ID token for the selected account ID of a locally authenticated user will always be readily available. To retrieve it for the selected account ID, you can use EOS_Auth_CopyIdToken directly after a successful user login." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutToken;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms, AccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountId_MetaData), NewProp_AccountId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_OutToken = { "OutToken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms, OutToken), Z_Construct_UScriptStruct_FEIK_Auth_IdToken, METADATA_PARAMS(0, nullptr) }; // 2238837245
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_AccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_OutToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_CopyIdToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::EIK_AuthSubsystem_eventEIK_Auth_CopyIdToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_CopyIdToken)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_AccountId);
	P_GET_STRUCT_REF(FEIK_Auth_IdToken,Z_Param_Out_OutToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Auth_CopyIdToken(Z_Param_Out_AccountId,Z_Param_Out_OutToken);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_CopyIdToken

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_CopyUserAuthToken
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_Auth_Token OutToken;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch a user auth token for an Epic Account ID. A user authentication token allows any code with possession (backend/client) to perform certain actions on behalf of the user. Because of this, for the purposes of user identity verification, the EOS_Auth_CopyIdToken API should be used instead.\n" },
#endif
		{ "DisplayName", "EOS_Auth_CopyUserAuthToken" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch a user auth token for an Epic Account ID. A user authentication token allows any code with possession (backend/client) to perform certain actions on behalf of the user. Because of this, for the purposes of user identity verification, the EOS_Auth_CopyIdToken API should be used instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutToken;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_OutToken = { "OutToken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms, OutToken), Z_Construct_UScriptStruct_FEIK_Auth_Token, METADATA_PARAMS(0, nullptr) }; // 1765220816
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_OutToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_CopyUserAuthToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::EIK_AuthSubsystem_eventEIK_Auth_CopyUserAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_CopyUserAuthToken)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Auth_Token,Z_Param_Out_OutToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Auth_CopyUserAuthToken(Z_Param_Out_LocalUserId,Z_Param_Out_OutToken);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_CopyUserAuthToken

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetLoggedInAccountByIndex
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountByIndex_Parms
	{
		int32 Index;
		FEIK_EpicAccountId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch an Epic Account ID that is logged in.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetLoggedInAccountByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch an Epic Account ID that is logged in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetLoggedInAccountByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetLoggedInAccountByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_EpicAccountId*)Z_Param__Result=P_THIS->EIK_Auth_GetLoggedInAccountByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetLoggedInAccountByIndex

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetLoggedInAccountsCount
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of accounts that are logged in.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetLoggedInAccountsCount" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of accounts that are logged in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetLoggedInAccountsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoggedInAccountsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetLoggedInAccountsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Auth_GetLoggedInAccountsCount();
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetLoggedInAccountsCount

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetLoginStatus
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetLoginStatus_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EIK_ELoginStatus> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches the login status for an Epic Account ID.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetLoginStatus" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the login status for an Epic Account ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetLoginStatus_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus, METADATA_PARAMS(0, nullptr) }; // 258189866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetLoginStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetLoginStatus)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EIK_ELoginStatus>*)Z_Param__Result=P_THIS->EIK_Auth_GetLoginStatus(Z_Param_Out_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetLoginStatus

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetMergedAccountByIndex
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 Index;
		FEIK_EpicAccountId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch one of the merged account IDs for a given logged in account.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetMergedAccountByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch one of the merged account IDs for a given logged in account." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetMergedAccountByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetMergedAccountByIndex)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_EpicAccountId*)Z_Param__Result=P_THIS->EIK_Auth_GetMergedAccountByIndex(Z_Param_Out_LocalUserId,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetMergedAccountByIndex

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetMergedAccountsCount
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountsCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of merged accounts for a given logged in account.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetMergedAccountsCount" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of merged accounts for a given logged in account." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountsCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetMergedAccountsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetMergedAccountsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetMergedAccountsCount)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Auth_GetMergedAccountsCount(Z_Param_Out_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetMergedAccountsCount

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_GetSelectedAccountId
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId OutSelectedAccountId;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the selected account ID to the current application for a local authenticated user.\n" },
#endif
		{ "DisplayName", "EOS_Auth_GetSelectedAccountId" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the selected account ID to the current application for a local authenticated user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSelectedAccountId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_OutSelectedAccountId = { "OutSelectedAccountId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms, OutSelectedAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_OutSelectedAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_GetSelectedAccountId", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::EIK_AuthSubsystem_eventEIK_Auth_GetSelectedAccountId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_GetSelectedAccountId)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_OutSelectedAccountId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Auth_GetSelectedAccountId(Z_Param_Out_LocalUserId,Z_Param_Out_OutSelectedAccountId);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_GetSelectedAccountId

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_IdToken_Release
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_IdToken_Release_Parms
	{
		FEIK_Auth_IdToken Token;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Auth_IdToken structure. This must be called on data retrieved from EOS_Auth_CopyIdToken.\n" },
#endif
		{ "DisplayName", "EOS_Auth_IdToken_Release" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Auth_IdToken structure. This must be called on data retrieved from EOS_Auth_CopyIdToken." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_IdToken_Release_Parms, Token), Z_Construct_UScriptStruct_FEIK_Auth_IdToken, METADATA_PARAMS(0, nullptr) }; // 2238837245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_IdToken_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::EIK_AuthSubsystem_eventEIK_Auth_IdToken_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::EIK_AuthSubsystem_eventEIK_Auth_IdToken_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_IdToken_Release)
{
	P_GET_STRUCT_REF(FEIK_Auth_IdToken,Z_Param_Out_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Auth_IdToken_Release(Z_Param_Out_Token);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_IdToken_Release

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_RemoveNotifyLoginStatusChanged
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_RemoveNotifyLoginStatusChanged_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving login status updates.\n" },
#endif
		{ "DisplayName", "EOS_Auth_RemoveNotifyLoginStatusChanged" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving login status updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_RemoveNotifyLoginStatusChanged_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_RemoveNotifyLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::EIK_AuthSubsystem_eventEIK_Auth_RemoveNotifyLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::EIK_AuthSubsystem_eventEIK_Auth_RemoveNotifyLoginStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_RemoveNotifyLoginStatusChanged)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Auth_RemoveNotifyLoginStatusChanged(Z_Param_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_RemoveNotifyLoginStatusChanged

// Begin Class UEIK_AuthSubsystem Function EIK_Auth_Token_Release
struct Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics
{
	struct EIK_AuthSubsystem_eventEIK_Auth_Token_Release_Parms
	{
		FEIK_Auth_Token Token;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Auth_Token structure. This must be called on data retrieved from EOS_Auth_CopyUserAuthToken.\n" },
#endif
		{ "DisplayName", "EOS_Auth_Token_Release" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Auth_Token structure. This must be called on data retrieved from EOS_Auth_CopyUserAuthToken." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AuthSubsystem_eventEIK_Auth_Token_Release_Parms, Token), Z_Construct_UScriptStruct_FEIK_Auth_Token, METADATA_PARAMS(0, nullptr) }; // 1765220816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AuthSubsystem, nullptr, "EIK_Auth_Token_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::EIK_AuthSubsystem_eventEIK_Auth_Token_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::EIK_AuthSubsystem_eventEIK_Auth_Token_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AuthSubsystem::execEIK_Auth_Token_Release)
{
	P_GET_STRUCT_REF(FEIK_Auth_Token,Z_Param_Out_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Auth_Token_Release(Z_Param_Out_Token);
	P_NATIVE_END;
}
// End Class UEIK_AuthSubsystem Function EIK_Auth_Token_Release

// Begin Class UEIK_AuthSubsystem
void UEIK_AuthSubsystem::StaticRegisterNativesUEIK_AuthSubsystem()
{
	UClass* Class = UEIK_AuthSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Auth_AddNotifyLoginStatusChanged", &UEIK_AuthSubsystem::execEIK_Auth_AddNotifyLoginStatusChanged },
		{ "EIK_Auth_CopyIdToken", &UEIK_AuthSubsystem::execEIK_Auth_CopyIdToken },
		{ "EIK_Auth_CopyUserAuthToken", &UEIK_AuthSubsystem::execEIK_Auth_CopyUserAuthToken },
		{ "EIK_Auth_GetLoggedInAccountByIndex", &UEIK_AuthSubsystem::execEIK_Auth_GetLoggedInAccountByIndex },
		{ "EIK_Auth_GetLoggedInAccountsCount", &UEIK_AuthSubsystem::execEIK_Auth_GetLoggedInAccountsCount },
		{ "EIK_Auth_GetLoginStatus", &UEIK_AuthSubsystem::execEIK_Auth_GetLoginStatus },
		{ "EIK_Auth_GetMergedAccountByIndex", &UEIK_AuthSubsystem::execEIK_Auth_GetMergedAccountByIndex },
		{ "EIK_Auth_GetMergedAccountsCount", &UEIK_AuthSubsystem::execEIK_Auth_GetMergedAccountsCount },
		{ "EIK_Auth_GetSelectedAccountId", &UEIK_AuthSubsystem::execEIK_Auth_GetSelectedAccountId },
		{ "EIK_Auth_IdToken_Release", &UEIK_AuthSubsystem::execEIK_Auth_IdToken_Release },
		{ "EIK_Auth_RemoveNotifyLoginStatusChanged", &UEIK_AuthSubsystem::execEIK_Auth_RemoveNotifyLoginStatusChanged },
		{ "EIK_Auth_Token_Release", &UEIK_AuthSubsystem::execEIK_Auth_Token_Release },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_AuthSubsystem);
UClass* Z_Construct_UClass_UEIK_AuthSubsystem_NoRegister()
{
	return UEIK_AuthSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_AuthSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit" },
		{ "DisplayName", "Auth Interface" },
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_AuthSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_AddNotifyLoginStatusChanged, "EIK_Auth_AddNotifyLoginStatusChanged" }, // 1476209892
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyIdToken, "EIK_Auth_CopyIdToken" }, // 4261626536
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_CopyUserAuthToken, "EIK_Auth_CopyUserAuthToken" }, // 2197380041
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountByIndex, "EIK_Auth_GetLoggedInAccountByIndex" }, // 311736275
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoggedInAccountsCount, "EIK_Auth_GetLoggedInAccountsCount" }, // 550913505
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetLoginStatus, "EIK_Auth_GetLoginStatus" }, // 2412999991
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountByIndex, "EIK_Auth_GetMergedAccountByIndex" }, // 2960108750
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetMergedAccountsCount, "EIK_Auth_GetMergedAccountsCount" }, // 2332918322
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_GetSelectedAccountId, "EIK_Auth_GetSelectedAccountId" }, // 811373163
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_IdToken_Release, "EIK_Auth_IdToken_Release" }, // 2280076323
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_RemoveNotifyLoginStatusChanged, "EIK_Auth_RemoveNotifyLoginStatusChanged" }, // 512843578
		{ &Z_Construct_UFunction_UEIK_AuthSubsystem_EIK_Auth_Token_Release, "EIK_Auth_Token_Release" }, // 779906563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_AuthSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_AuthSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AuthSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_AuthSubsystem_Statics::ClassParams = {
	&UEIK_AuthSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AuthSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_AuthSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_AuthSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_AuthSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_AuthSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_AuthSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_AuthSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_AuthSubsystem>()
{
	return UEIK_AuthSubsystem::StaticClass();
}
UEIK_AuthSubsystem::UEIK_AuthSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_AuthSubsystem);
UEIK_AuthSubsystem::~UEIK_AuthSubsystem() {}
// End Class UEIK_AuthSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_AuthSubsystem, UEIK_AuthSubsystem::StaticClass, TEXT("UEIK_AuthSubsystem"), &Z_Registration_Info_UClass_UEIK_AuthSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_AuthSubsystem), 1170543483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_1659315(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_AuthSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_ConnectSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ConnectSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ConnectSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Connect_IdToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnAuthExpirationCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnAuthExpirationCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAuthExpirationCallback_DelegateWrapper(const FScriptDelegate& OnAuthExpirationCallback, FEIK_ProductUserId LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventOnAuthExpirationCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	OnAuthExpirationCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAuthExpirationCallback

// Begin Delegate FOnLoginStatusChangedCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EIK_ELoginStatus> LoginStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoginStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LoginStatus = { "LoginStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms, LoginStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EIK_ELoginStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginStatus_MetaData), NewProp_LoginStatus_MetaData) }; // 258189866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::NewProp_LoginStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnLoginStatusChangedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoginStatusChangedCallback_DelegateWrapper(const FScriptDelegate& OnLoginStatusChangedCallback, FEIK_ProductUserId LocalUserId, TEnumAsByte<EIK_ELoginStatus> const& LoginStatus)
{
	struct _Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EIK_ELoginStatus> LoginStatus;
	};
	_Script_OnlineSubsystemEIK_eventOnLoginStatusChangedCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.LoginStatus=LoginStatus;
	OnLoginStatusChangedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnLoginStatusChangedCallback

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_AddNotifyAuthExpiration
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyAuthExpiration_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive upcoming authentication expiration notifications. Notification is approximately 10 minutes prior to expiration. Call EOS_Connect_Login again with valid third party credentials to refresh access.\n" },
#endif
		{ "DisplayName", "EOS_Connect_AddNotifyAuthExpiration" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive upcoming authentication expiration notifications. Notification is approximately 10 minutes prior to expiration. Call EOS_Connect_Login again with valid third party credentials to refresh access." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyAuthExpiration_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAuthExpirationCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 688977274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyAuthExpiration_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_AddNotifyAuthExpiration", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyAuthExpiration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyAuthExpiration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_AddNotifyAuthExpiration)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Connect_AddNotifyAuthExpiration(FOnAuthExpirationCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_AddNotifyAuthExpiration

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_AddNotifyLoginStatusChanged
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyLoginStatusChanged_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive user login status updates.\n" },
#endif
		{ "DisplayName", "EOS_Connect_AddNotifyLoginStatusChanged" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive user login status updates." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyLoginStatusChanged_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLoginStatusChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1665152077
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyLoginStatusChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_AddNotifyLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::EIK_ConnectSubsystem_eventEIK_Connect_AddNotifyLoginStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_AddNotifyLoginStatusChanged)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Connect_AddNotifyLoginStatusChanged(FOnLoginStatusChangedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_AddNotifyLoginStatusChanged

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_CopyIdToken
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_Connect_IdToken OutIdToken;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches an ID token for a Product User ID.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CopyIdToken" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches an ID token for a Product User ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutIdToken;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_OutIdToken = { "OutIdToken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms, OutIdToken), Z_Construct_UScriptStruct_FEIK_Connect_IdToken, METADATA_PARAMS(0, nullptr) }; // 3141527184
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_OutIdToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_CopyIdToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyIdToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_CopyIdToken)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Connect_IdToken,Z_Param_Out_OutIdToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_CopyIdToken(Z_Param_LocalUserId,Z_Param_Out_OutIdToken);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_CopyIdToken

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByAccountId
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString AccountId;
		FEIK_Connect_ExternalAccountInfo OutExternalAccountInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch information about an external account linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CopyProductUserExternalAccountByAccountId" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch information about an external account linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalAccountInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms, AccountId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_OutExternalAccountInfo = { "OutExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms, OutExternalAccountInfo), Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo, METADATA_PARAMS(0, nullptr) }; // 3676091941
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_AccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_OutExternalAccountInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_CopyProductUserExternalAccountByAccountId", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByAccountId)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AccountId);
	P_GET_STRUCT_REF(FEIK_Connect_ExternalAccountInfo,Z_Param_Out_OutExternalAccountInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_CopyProductUserExternalAccountByAccountId(Z_Param_LocalUserId,Z_Param_AccountId,Z_Param_Out_OutExternalAccountInfo);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByAccountId

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByAccountType
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_EExternalAccountType> AccountType;
		FEIK_Connect_ExternalAccountInfo OutExternalAccountInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch information about an external account of a specific type linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CopyProductUserExternalAccountByAccountType" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch information about an external account of a specific type linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalAccountInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms, AccountType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(0, nullptr) }; // 2565716192
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_OutExternalAccountInfo = { "OutExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms, OutExternalAccountInfo), Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo, METADATA_PARAMS(0, nullptr) }; // 3676091941
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_AccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_OutExternalAccountInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_CopyProductUserExternalAccountByAccountType", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByAccountType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByAccountType)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FByteProperty,Z_Param_AccountType);
	P_GET_STRUCT_REF(FEIK_Connect_ExternalAccountInfo,Z_Param_Out_OutExternalAccountInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_CopyProductUserExternalAccountByAccountType(Z_Param_LocalUserId,EEIK_EExternalAccountType(Z_Param_AccountType),Z_Param_Out_OutExternalAccountInfo);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByAccountType

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByIndex
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Index;
		FEIK_Connect_ExternalAccountInfo OutExternalAccountInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch information about an external account linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CopyProductUserExternalAccountByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch information about an external account linked to a Product User ID. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExternalAccountInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_OutExternalAccountInfo = { "OutExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms, OutExternalAccountInfo), Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo, METADATA_PARAMS(0, nullptr) }; // 3676091941
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_OutExternalAccountInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_CopyProductUserExternalAccountByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserExternalAccountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByIndex)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FEIK_Connect_ExternalAccountInfo,Z_Param_Out_OutExternalAccountInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_CopyProductUserExternalAccountByIndex(Z_Param_LocalUserId,Z_Param_Index,Z_Param_Out_OutExternalAccountInfo);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserExternalAccountByIndex

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserInfo
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_Connect_ExternalAccountInfo OutProductUserInfo;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch information about a Product User, using the external account that they most recently logged in with as the reference. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CopyProductUserInfo" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch information about a Product User, using the external account that they most recently logged in with as the reference. On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProductUserInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_OutProductUserInfo = { "OutProductUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms, OutProductUserInfo), Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo, METADATA_PARAMS(0, nullptr) }; // 3676091941
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_OutProductUserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_CopyProductUserInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::EIK_ConnectSubsystem_eventEIK_Connect_CopyProductUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserInfo)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT_REF(FEIK_Connect_ExternalAccountInfo,Z_Param_Out_OutProductUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_CopyProductUserInfo(Z_Param_LocalUserId,Z_Param_Out_OutProductUserInfo);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_CopyProductUserInfo

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_ExternalAccountInfo_Release
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_ExternalAccountInfo_Release_Parms
	{
		FEIK_Connect_ExternalAccountInfo ExternalAccountInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an external account info. This must be called on data retrieved from EOS_Connect_CopyProductUserExternalAccountByIndex, EOS_Connect_CopyProductUserExternalAccountByAccountType, EOS_Connect_CopyProductUserExternalAccountByAccountId or EOS_Connect_CopyProductUserInfo.\n" },
#endif
		{ "DisplayName", "EOS_Connect_ExternalAccountInfo_Release" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an external account info. This must be called on data retrieved from EOS_Connect_CopyProductUserExternalAccountByIndex, EOS_Connect_CopyProductUserExternalAccountByAccountType, EOS_Connect_CopyProductUserExternalAccountByAccountId or EOS_Connect_CopyProductUserInfo." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalAccountInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::NewProp_ExternalAccountInfo = { "ExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_ExternalAccountInfo_Release_Parms, ExternalAccountInfo), Z_Construct_UScriptStruct_FEIK_Connect_ExternalAccountInfo, METADATA_PARAMS(0, nullptr) }; // 3676091941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::NewProp_ExternalAccountInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_ExternalAccountInfo_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::EIK_ConnectSubsystem_eventEIK_Connect_ExternalAccountInfo_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::EIK_ConnectSubsystem_eventEIK_Connect_ExternalAccountInfo_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_ExternalAccountInfo_Release)
{
	P_GET_STRUCT(FEIK_Connect_ExternalAccountInfo,Z_Param_ExternalAccountInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Connect_ExternalAccountInfo_Release(Z_Param_ExternalAccountInfo);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_ExternalAccountInfo_Release

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetExternalAccountMapping
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_EExternalAccountType> AccountIdType;
		FString TargetExternalUserId;
		FEIK_ProductUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch a Product User ID that maps to an external account ID cached from a previous query.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetExternalAccountMapping" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch a Product User ID that maps to an external account ID cached from a previous query." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountIdType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetExternalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms, AccountIdType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(0, nullptr) }; // 2565716192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_TargetExternalUserId = { "TargetExternalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms, TargetExternalUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_AccountIdType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_TargetExternalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetExternalAccountMapping", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetExternalAccountMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetExternalAccountMapping)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FByteProperty,Z_Param_AccountIdType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetExternalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_ProductUserId*)Z_Param__Result=P_THIS->EIK_Connect_GetExternalAccountMapping(Z_Param_LocalUserId,EEIK_EExternalAccountType(Z_Param_AccountIdType),Z_Param_TargetExternalUserId);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetExternalAccountMapping

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoggedInUserByIndex
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUserByIndex_Parms
	{
		int32 Index;
		FEIK_ProductUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch a Product User ID that is logged in. This Product User ID is in the Epic Online Services namespace.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetLoggedInUserByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch a Product User ID that is logged in. This Product User ID is in the Epic Online Services namespace." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUserByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUserByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetLoggedInUserByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUserByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUserByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetLoggedInUserByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_ProductUserId*)Z_Param__Result=P_THIS->EIK_Connect_GetLoggedInUserByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoggedInUserByIndex

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoggedInUsersCount
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUsersCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of product users that are logged in.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetLoggedInUsersCount" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of product users that are logged in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUsersCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetLoggedInUsersCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUsersCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoggedInUsersCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetLoggedInUsersCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Connect_GetLoggedInUsersCount();
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoggedInUsersCount

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoginStatus
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetLoginStatus_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_LoginStatus> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetches the login status for an Product User ID. This Product User ID is considered logged in as long as the underlying access token has not expired.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetLoginStatus" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the login status for an Product User ID. This Product User ID is considered logged in as long as the underlying access token has not expired." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetLoginStatus_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, METADATA_PARAMS(0, nullptr) }; // 884584950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetLoginStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetLoginStatus)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_LoginStatus>*)Z_Param__Result=P_THIS->EIK_Connect_GetLoginStatus(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetLoginStatus

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetProductUserExternalAccountCount
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserExternalAccountCount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of linked external accounts for a Product User ID.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetProductUserExternalAccountCount" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of linked external accounts for a Product User ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserExternalAccountCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserExternalAccountCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetProductUserExternalAccountCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserExternalAccountCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserExternalAccountCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetProductUserExternalAccountCount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Connect_GetProductUserExternalAccountCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetProductUserExternalAccountCount

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_GetProductUserIdMapping
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_EExternalAccountType> AccountIdType;
		FEIK_ProductUserId TargetUserId;
		FString OutBuffer;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch an external account ID, in string form, that maps to a given Product User ID.\n" },
#endif
		{ "DisplayName", "EOS_Connect_GetProductUserIdMapping" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch an external account ID, in string form, that maps to a given Product User ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountIdType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms, AccountIdType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(0, nullptr) }; // 2565716192
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms, OutBuffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_AccountIdType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_GetProductUserIdMapping", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::EIK_ConnectSubsystem_eventEIK_Connect_GetProductUserIdMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_GetProductUserIdMapping)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FByteProperty,Z_Param_AccountIdType);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_Connect_GetProductUserIdMapping(Z_Param_LocalUserId,EEIK_EExternalAccountType(Z_Param_AccountIdType),Z_Param_TargetUserId,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_GetProductUserIdMapping

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_IdToken_Release
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_IdToken_Release_Parms
	{
		FEIK_Connect_IdToken IdToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Release the memory associated with an EOS_Connect_IdToken structure. This must be called on data retrieved from EOS_Connect_CopyIdToken.\n" },
#endif
		{ "DisplayName", "EOS_Connect_IdToken_Release" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release the memory associated with an EOS_Connect_IdToken structure. This must be called on data retrieved from EOS_Connect_CopyIdToken." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_IdToken_Release_Parms, IdToken), Z_Construct_UScriptStruct_FEIK_Connect_IdToken, METADATA_PARAMS(0, nullptr) }; // 3141527184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::NewProp_IdToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_IdToken_Release", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::EIK_ConnectSubsystem_eventEIK_Connect_IdToken_Release_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::EIK_ConnectSubsystem_eventEIK_Connect_IdToken_Release_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_IdToken_Release)
{
	P_GET_STRUCT(FEIK_Connect_IdToken,Z_Param_IdToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Connect_IdToken_Release(Z_Param_IdToken);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_IdToken_Release

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_RemoveNotifyAuthExpiration
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyAuthExpiration_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving expiration notifications.\n" },
#endif
		{ "DisplayName", "EOS_Connect_RemoveNotifyAuthExpiration" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving expiration notifications." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyAuthExpiration_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_RemoveNotifyAuthExpiration", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyAuthExpiration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyAuthExpiration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_RemoveNotifyAuthExpiration)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Connect_RemoveNotifyAuthExpiration(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_RemoveNotifyAuthExpiration

// Begin Class UEIK_ConnectSubsystem Function EIK_Connect_RemoveNotifyLoginStatusChanged
struct Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics
{
	struct EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyLoginStatusChanged_Parms
	{
		FEIK_NotificationId InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
		{ "DisplayName", "EOS_Connect_RemoveNotifyLoginStatusChanged" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyLoginStatusChanged_Parms, InId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_ConnectSubsystem, nullptr, "EIK_Connect_RemoveNotifyLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::EIK_ConnectSubsystem_eventEIK_Connect_RemoveNotifyLoginStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_ConnectSubsystem::execEIK_Connect_RemoveNotifyLoginStatusChanged)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Connect_RemoveNotifyLoginStatusChanged(Z_Param_InId);
	P_NATIVE_END;
}
// End Class UEIK_ConnectSubsystem Function EIK_Connect_RemoveNotifyLoginStatusChanged

// Begin Class UEIK_ConnectSubsystem
void UEIK_ConnectSubsystem::StaticRegisterNativesUEIK_ConnectSubsystem()
{
	UClass* Class = UEIK_ConnectSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_AddNotifyAuthExpiration", &UEIK_ConnectSubsystem::execEIK_Connect_AddNotifyAuthExpiration },
		{ "EIK_Connect_AddNotifyLoginStatusChanged", &UEIK_ConnectSubsystem::execEIK_Connect_AddNotifyLoginStatusChanged },
		{ "EIK_Connect_CopyIdToken", &UEIK_ConnectSubsystem::execEIK_Connect_CopyIdToken },
		{ "EIK_Connect_CopyProductUserExternalAccountByAccountId", &UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByAccountId },
		{ "EIK_Connect_CopyProductUserExternalAccountByAccountType", &UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByAccountType },
		{ "EIK_Connect_CopyProductUserExternalAccountByIndex", &UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserExternalAccountByIndex },
		{ "EIK_Connect_CopyProductUserInfo", &UEIK_ConnectSubsystem::execEIK_Connect_CopyProductUserInfo },
		{ "EIK_Connect_ExternalAccountInfo_Release", &UEIK_ConnectSubsystem::execEIK_Connect_ExternalAccountInfo_Release },
		{ "EIK_Connect_GetExternalAccountMapping", &UEIK_ConnectSubsystem::execEIK_Connect_GetExternalAccountMapping },
		{ "EIK_Connect_GetLoggedInUserByIndex", &UEIK_ConnectSubsystem::execEIK_Connect_GetLoggedInUserByIndex },
		{ "EIK_Connect_GetLoggedInUsersCount", &UEIK_ConnectSubsystem::execEIK_Connect_GetLoggedInUsersCount },
		{ "EIK_Connect_GetLoginStatus", &UEIK_ConnectSubsystem::execEIK_Connect_GetLoginStatus },
		{ "EIK_Connect_GetProductUserExternalAccountCount", &UEIK_ConnectSubsystem::execEIK_Connect_GetProductUserExternalAccountCount },
		{ "EIK_Connect_GetProductUserIdMapping", &UEIK_ConnectSubsystem::execEIK_Connect_GetProductUserIdMapping },
		{ "EIK_Connect_IdToken_Release", &UEIK_ConnectSubsystem::execEIK_Connect_IdToken_Release },
		{ "EIK_Connect_RemoveNotifyAuthExpiration", &UEIK_ConnectSubsystem::execEIK_Connect_RemoveNotifyAuthExpiration },
		{ "EIK_Connect_RemoveNotifyLoginStatusChanged", &UEIK_ConnectSubsystem::execEIK_Connect_RemoveNotifyLoginStatusChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_ConnectSubsystem);
UClass* Z_Construct_UClass_UEIK_ConnectSubsystem_NoRegister()
{
	return UEIK_ConnectSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_ConnectSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_ConnectSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyAuthExpiration, "EIK_Connect_AddNotifyAuthExpiration" }, // 1186796181
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_AddNotifyLoginStatusChanged, "EIK_Connect_AddNotifyLoginStatusChanged" }, // 2250156666
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyIdToken, "EIK_Connect_CopyIdToken" }, // 3386018749
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountId, "EIK_Connect_CopyProductUserExternalAccountByAccountId" }, // 3919301780
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByAccountType, "EIK_Connect_CopyProductUserExternalAccountByAccountType" }, // 2970020871
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserExternalAccountByIndex, "EIK_Connect_CopyProductUserExternalAccountByIndex" }, // 4101260402
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_CopyProductUserInfo, "EIK_Connect_CopyProductUserInfo" }, // 2622257447
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_ExternalAccountInfo_Release, "EIK_Connect_ExternalAccountInfo_Release" }, // 2798495159
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetExternalAccountMapping, "EIK_Connect_GetExternalAccountMapping" }, // 2176406319
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUserByIndex, "EIK_Connect_GetLoggedInUserByIndex" }, // 2531747093
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoggedInUsersCount, "EIK_Connect_GetLoggedInUsersCount" }, // 3634784528
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetLoginStatus, "EIK_Connect_GetLoginStatus" }, // 2911107431
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserExternalAccountCount, "EIK_Connect_GetProductUserExternalAccountCount" }, // 3451927062
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_GetProductUserIdMapping, "EIK_Connect_GetProductUserIdMapping" }, // 471274203
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_IdToken_Release, "EIK_Connect_IdToken_Release" }, // 3610370335
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyAuthExpiration, "EIK_Connect_RemoveNotifyAuthExpiration" }, // 2742879867
		{ &Z_Construct_UFunction_UEIK_ConnectSubsystem_EIK_Connect_RemoveNotifyLoginStatusChanged, "EIK_Connect_RemoveNotifyLoginStatusChanged" }, // 1020964980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_ConnectSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::ClassParams = {
	&UEIK_ConnectSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_ConnectSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_ConnectSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_ConnectSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_ConnectSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_ConnectSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_ConnectSubsystem>()
{
	return UEIK_ConnectSubsystem::StaticClass();
}
UEIK_ConnectSubsystem::UEIK_ConnectSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_ConnectSubsystem);
UEIK_ConnectSubsystem::~UEIK_ConnectSubsystem() {}
// End Class UEIK_ConnectSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_ConnectSubsystem, UEIK_ConnectSubsystem::StaticClass, TEXT("UEIK_ConnectSubsystem"), &Z_Registration_Info_UClass_UEIK_ConnectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_ConnectSubsystem), 402090145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_1548171798(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_ConnectSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

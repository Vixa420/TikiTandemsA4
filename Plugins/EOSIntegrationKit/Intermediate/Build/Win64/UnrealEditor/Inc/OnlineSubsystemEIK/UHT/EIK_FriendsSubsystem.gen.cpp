// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_FriendsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FriendsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FriendsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EFriendsStatus();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Friends_OnBlockedUsersUpdateCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		bool bBlocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
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
	static void NewProp_bBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_bBlocked_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms*)Obj)->bBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_bBlocked = { "bBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_bBlocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::NewProp_bBlocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Friends_OnBlockedUsersUpdateCallback_DelegateWrapper(const FScriptDelegate& EIK_Friends_OnBlockedUsersUpdateCallback, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, bool bBlocked)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		bool bBlocked;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Friends_OnBlockedUsersUpdateCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.bBlocked=bBlocked ? true : false;
	EIK_Friends_OnBlockedUsersUpdateCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Friends_OnBlockedUsersUpdateCallback

// Begin Delegate FEIK_Friends_OnFriendsUpdateCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		TEnumAsByte<EEIK_EFriendsStatus> PreviousStatus;
		TEnumAsByte<EEIK_EFriendsStatus> CurrentStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms, PreviousStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EFriendsStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousStatus_MetaData), NewProp_PreviousStatus_MetaData) }; // 192557485
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_CurrentStatus = { "CurrentStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms, CurrentStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EFriendsStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStatus_MetaData), NewProp_CurrentStatus_MetaData) }; // 192557485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_PreviousStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::NewProp_CurrentStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Friends_OnFriendsUpdateCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Friends_OnFriendsUpdateCallback_DelegateWrapper(const FScriptDelegate& EIK_Friends_OnFriendsUpdateCallback, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId, TEnumAsByte<EEIK_EFriendsStatus> const& PreviousStatus, TEnumAsByte<EEIK_EFriendsStatus> const& CurrentStatus)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		TEnumAsByte<EEIK_EFriendsStatus> PreviousStatus;
		TEnumAsByte<EEIK_EFriendsStatus> CurrentStatus;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Friends_OnFriendsUpdateCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	Parms.PreviousStatus=PreviousStatus;
	Parms.CurrentStatus=CurrentStatus;
	EIK_Friends_OnFriendsUpdateCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Friends_OnFriendsUpdateCallback

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_AddNotifyBlockedUsersUpdate
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyBlockedUsersUpdate_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *Listen for changes to blocklist for a particular account.\n\x09 @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise\n\x09 */" },
#endif
		{ "DisplayName", "EOS_Friends_AddNotifyBlockedUsersUpdate" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Listen for changes to blocklist for a particular account.\n@return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyBlockedUsersUpdate_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnBlockedUsersUpdateCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2875477470
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyBlockedUsersUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_AddNotifyBlockedUsersUpdate", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyBlockedUsersUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyBlockedUsersUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_AddNotifyBlockedUsersUpdate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Friends_AddNotifyBlockedUsersUpdate(FEIK_Friends_OnBlockedUsersUpdateCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_AddNotifyBlockedUsersUpdate

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_AddNotifyFriendsUpdate
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyFriendsUpdate_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Listen for changes to friends for a particular account.\n" },
#endif
		{ "DisplayName", "EOS_Friends_AddNotifyFriendsUpdate" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listen for changes to friends for a particular account." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyFriendsUpdate_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_OnFriendsUpdateCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3728600362
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyFriendsUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_AddNotifyFriendsUpdate", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyFriendsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_AddNotifyFriendsUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_AddNotifyFriendsUpdate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_Friends_AddNotifyFriendsUpdate(FEIK_Friends_OnFriendsUpdateCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_AddNotifyFriendsUpdate

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_GetBlockedUserAtIndex
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 Index;
		FEIK_EpicAccountId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieves the Epic Account ID of an entry from the blocklist that has already been retrieved by the EOS_Friends_QueryFriends API.\n" },
#endif
		{ "DisplayName", "EOS_Friends_GetBlockedUserAtIndex" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the Epic Account ID of an entry from the blocklist that has already been retrieved by the EOS_Friends_QueryFriends API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_GetBlockedUserAtIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUserAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_GetBlockedUserAtIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_EpicAccountId*)Z_Param__Result=P_THIS->EIK_Friends_GetBlockedUserAtIndex(Z_Param_LocalUserId,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_GetBlockedUserAtIndex

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_GetBlockedUsersCount
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUsersCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieves the number of blocked users on the blocklist that has already been retrieved by the EOS_Friends_QueryFriends API.\n" },
#endif
		{ "DisplayName", "EOS_Friends_GetBlockedUsersCount" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the number of blocked users on the blocklist that has already been retrieved by the EOS_Friends_QueryFriends API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUsersCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUsersCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_GetBlockedUsersCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUsersCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetBlockedUsersCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_GetBlockedUsersCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Friends_GetBlockedUsersCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_GetBlockedUsersCount

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_GetFriendAtIndex
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 Index;
		FEIK_EpicAccountId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieves the Epic Account ID of an entry from the friends list that has already been retrieved by the EOS_Friends_QueryFriends API. The Epic Account ID returned by this function may belong to an account that has been invited to be a friend or that has invited the local user to be a friend. To determine if the Epic Account ID returned by this function is a friend or a pending friend invitation, use the EOS_Friends_GetStatus function.\n" },
#endif
		{ "DisplayName", "EOS_Friends_GetFriendAtIndex" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the Epic Account ID of an entry from the friends list that has already been retrieved by the EOS_Friends_QueryFriends API. The Epic Account ID returned by this function may belong to an account that has been invited to be a friend or that has invited the local user to be a friend. To determine if the Epic Account ID returned by this function is a friend or a pending friend invitation, use the EOS_Friends_GetStatus function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_GetFriendAtIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetFriendAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_GetFriendAtIndex)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_EpicAccountId*)Z_Param__Result=P_THIS->EIK_Friends_GetFriendAtIndex(Z_Param_LocalUserId,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_GetFriendAtIndex

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_GetFriendsCount
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_GetFriendsCount_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieves the number of friends on the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.\n" },
#endif
		{ "DisplayName", "EOS_Friends_GetFriendsCount" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the number of friends on the friends list that has already been retrieved by the EOS_Friends_QueryFriends API." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetFriendsCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetFriendsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_GetFriendsCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetFriendsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetFriendsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_GetFriendsCount)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EIK_Friends_GetFriendsCount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_GetFriendsCount

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_GetStatus
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		TEnumAsByte<EEIK_EFriendsStatus> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve the friendship status between the local user and another user.\n" },
#endif
		{ "DisplayName", "EOS_Friends_GetStatus" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the friendship status between the local user and another user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EFriendsStatus, METADATA_PARAMS(0, nullptr) }; // 192557485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_GetStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::EIK_FriendsSubsystem_eventEIK_Friends_GetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_GetStatus)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_EFriendsStatus>*)Z_Param__Result=P_THIS->EIK_Friends_GetStatus(Z_Param_LocalUserId,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_GetStatus

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_RemoveNotifyBlockedUsersUpdate
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyBlockedUsersUpdate_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop listening for blocklist changes on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_Friends_RemoveNotifyBlockedUsersUpdate" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop listening for blocklist changes on a previously bound handler." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyBlockedUsersUpdate_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_RemoveNotifyBlockedUsersUpdate", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyBlockedUsersUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyBlockedUsersUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_RemoveNotifyBlockedUsersUpdate)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Friends_RemoveNotifyBlockedUsersUpdate(Z_Param_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_RemoveNotifyBlockedUsersUpdate

// Begin Class UEIK_FriendsSubsystem Function EIK_Friends_RemoveNotifyFriendsUpdate
struct Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics
{
	struct EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyFriendsUpdate_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stop listening for friends changes on a previously bound handler.\n" },
#endif
		{ "DisplayName", "EOS_Friends_RemoveNotifyFriendsUpdate" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop listening for friends changes on a previously bound handler." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyFriendsUpdate_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FriendsSubsystem, nullptr, "EIK_Friends_RemoveNotifyFriendsUpdate", nullptr, nullptr, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyFriendsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::EIK_FriendsSubsystem_eventEIK_Friends_RemoveNotifyFriendsUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FriendsSubsystem::execEIK_Friends_RemoveNotifyFriendsUpdate)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_Friends_RemoveNotifyFriendsUpdate(Z_Param_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_FriendsSubsystem Function EIK_Friends_RemoveNotifyFriendsUpdate

// Begin Class UEIK_FriendsSubsystem
void UEIK_FriendsSubsystem::StaticRegisterNativesUEIK_FriendsSubsystem()
{
	UClass* Class = UEIK_FriendsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Friends_AddNotifyBlockedUsersUpdate", &UEIK_FriendsSubsystem::execEIK_Friends_AddNotifyBlockedUsersUpdate },
		{ "EIK_Friends_AddNotifyFriendsUpdate", &UEIK_FriendsSubsystem::execEIK_Friends_AddNotifyFriendsUpdate },
		{ "EIK_Friends_GetBlockedUserAtIndex", &UEIK_FriendsSubsystem::execEIK_Friends_GetBlockedUserAtIndex },
		{ "EIK_Friends_GetBlockedUsersCount", &UEIK_FriendsSubsystem::execEIK_Friends_GetBlockedUsersCount },
		{ "EIK_Friends_GetFriendAtIndex", &UEIK_FriendsSubsystem::execEIK_Friends_GetFriendAtIndex },
		{ "EIK_Friends_GetFriendsCount", &UEIK_FriendsSubsystem::execEIK_Friends_GetFriendsCount },
		{ "EIK_Friends_GetStatus", &UEIK_FriendsSubsystem::execEIK_Friends_GetStatus },
		{ "EIK_Friends_RemoveNotifyBlockedUsersUpdate", &UEIK_FriendsSubsystem::execEIK_Friends_RemoveNotifyBlockedUsersUpdate },
		{ "EIK_Friends_RemoveNotifyFriendsUpdate", &UEIK_FriendsSubsystem::execEIK_Friends_RemoveNotifyFriendsUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_FriendsSubsystem);
UClass* Z_Construct_UClass_UEIK_FriendsSubsystem_NoRegister()
{
	return UEIK_FriendsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_FriendsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Friends Interface" },
		{ "IncludePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyBlockedUsersUpdate, "EIK_Friends_AddNotifyBlockedUsersUpdate" }, // 2121503001
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_AddNotifyFriendsUpdate, "EIK_Friends_AddNotifyFriendsUpdate" }, // 744995012
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUserAtIndex, "EIK_Friends_GetBlockedUserAtIndex" }, // 2782280787
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetBlockedUsersCount, "EIK_Friends_GetBlockedUsersCount" }, // 2888042873
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendAtIndex, "EIK_Friends_GetFriendAtIndex" }, // 2271731624
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetFriendsCount, "EIK_Friends_GetFriendsCount" }, // 1841435816
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_GetStatus, "EIK_Friends_GetStatus" }, // 2145985324
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyBlockedUsersUpdate, "EIK_Friends_RemoveNotifyBlockedUsersUpdate" }, // 1482482673
		{ &Z_Construct_UFunction_UEIK_FriendsSubsystem_EIK_Friends_RemoveNotifyFriendsUpdate, "EIK_Friends_RemoveNotifyFriendsUpdate" }, // 706009903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_FriendsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::ClassParams = {
	&UEIK_FriendsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_FriendsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_FriendsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_FriendsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_FriendsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_FriendsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_FriendsSubsystem>()
{
	return UEIK_FriendsSubsystem::StaticClass();
}
UEIK_FriendsSubsystem::UEIK_FriendsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_FriendsSubsystem);
UEIK_FriendsSubsystem::~UEIK_FriendsSubsystem() {}
// End Class UEIK_FriendsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_FriendsSubsystem, UEIK_FriendsSubsystem::StaticClass, TEXT("UEIK_FriendsSubsystem"), &Z_Registration_Info_UClass_UEIK_FriendsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_FriendsSubsystem), 143938401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_1462327200(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_FriendsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

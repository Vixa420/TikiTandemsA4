// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_LinkAccount() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_LinkAccount();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_LinkAccount_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELinkAccountFlags();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_PinGrantInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ContinuanceToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Auth_LinkAccountCallbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo;
class UScriptStruct* FEIK_Auth_LinkAccountCallbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Auth_LinkAccountCallbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Auth_LinkAccountCallbackInfo>()
{
	return FEIK_Auth_LinkAccountCallbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinGrantInfo_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinGrantInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAccountId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Auth_LinkAccountCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LinkAccountCallbackInfo, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LinkAccountCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_PinGrantInfo = { "PinGrantInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LinkAccountCallbackInfo, PinGrantInfo), Z_Construct_UScriptStruct_FEIK_Auth_PinGrantInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinGrantInfo_MetaData), NewProp_PinGrantInfo_MetaData) }; // 3207408521
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_SelectedAccountId = { "SelectedAccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Auth_LinkAccountCallbackInfo, SelectedAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedAccountId_MetaData), NewProp_SelectedAccountId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_PinGrantInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewProp_SelectedAccountId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Auth_LinkAccountCallbackInfo",
	Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::PropPointers),
	sizeof(FEIK_Auth_LinkAccountCallbackInfo),
	alignof(FEIK_Auth_LinkAccountCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo.InnerSingleton;
}
// End ScriptStruct FEIK_Auth_LinkAccountCallbackInfo

// Begin Delegate FEIK_Auth_OnLinkAccountCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms
	{
		FEIK_Auth_LinkAccountCallbackInfo Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms, Data), Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo, METADATA_PARAMS(0, nullptr) }; // 687852796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Auth_OnLinkAccountCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Auth_OnLinkAccountCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Auth_OnLinkAccountCallback, FEIK_Auth_LinkAccountCallbackInfo Data)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms
	{
		FEIK_Auth_LinkAccountCallbackInfo Data;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Auth_OnLinkAccountCallback_Parms Parms;
	Parms.Data=Data;
	EIK_Auth_OnLinkAccountCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Auth_OnLinkAccountCallback

// Begin Class UEIK_Auth_LinkAccount Function LinkAccount
struct Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics
{
	struct EIK_Auth_LinkAccount_eventLinkAccount_Parms
	{
		FEIK_ContinuanceToken ContinuanceToken;
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EEIK_ELinkAccountFlags> LinkAccountFlags;
		UEIK_Auth_LinkAccount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *Link external account by continuing previous login attempt with a continuance token. The user will be presented with Epic Accounts onboarding flow managed by the SDK. On success, the user will be logged in at the completion of this action. This will commit this external account to the Epic Account and cannot be undone in the SDK.\n\x09*/" },
#endif
		{ "DisplayName", "EOS_Auth_LinkAccount" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Link external account by continuing previous login attempt with a continuance token. The user will be presented with Epic Accounts onboarding flow managed by the SDK. On success, the user will be logged in at the completion of this action. This will commit this external account to the Epic Account and cannot be undone in the SDK." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuanceToken;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkAccountFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_ContinuanceToken = { "ContinuanceToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_LinkAccount_eventLinkAccount_Parms, ContinuanceToken), Z_Construct_UScriptStruct_FEIK_ContinuanceToken, METADATA_PARAMS(0, nullptr) }; // 3322250395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_LinkAccount_eventLinkAccount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_LinkAccountFlags = { "LinkAccountFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_LinkAccount_eventLinkAccount_Parms, LinkAccountFlags), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ELinkAccountFlags, METADATA_PARAMS(0, nullptr) }; // 1010972428
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_LinkAccount_eventLinkAccount_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_LinkAccount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_ContinuanceToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_LinkAccountFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_LinkAccount, nullptr, "LinkAccount", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::EIK_Auth_LinkAccount_eventLinkAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::EIK_Auth_LinkAccount_eventLinkAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_LinkAccount::execLinkAccount)
{
	P_GET_STRUCT(FEIK_ContinuanceToken,Z_Param_ContinuanceToken);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FByteProperty,Z_Param_LinkAccountFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_LinkAccount**)Z_Param__Result=UEIK_Auth_LinkAccount::LinkAccount(Z_Param_ContinuanceToken,Z_Param_LocalUserId,EEIK_ELinkAccountFlags(Z_Param_LinkAccountFlags));
	P_NATIVE_END;
}
// End Class UEIK_Auth_LinkAccount Function LinkAccount

// Begin Class UEIK_Auth_LinkAccount
void UEIK_Auth_LinkAccount::StaticRegisterNativesUEIK_Auth_LinkAccount()
{
	UClass* Class = UEIK_Auth_LinkAccount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LinkAccount", &UEIK_Auth_LinkAccount::execLinkAccount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_LinkAccount);
UClass* Z_Construct_UClass_UEIK_Auth_LinkAccount_NoRegister()
{
	return UEIK_Auth_LinkAccount::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_LinkAccount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_LinkAccount_LinkAccount, "LinkAccount" }, // 1210114160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_LinkAccount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_LinkAccount, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Auth_OnLinkAccountCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 259938682
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::ClassParams = {
	&UEIK_Auth_LinkAccount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_LinkAccount()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_LinkAccount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_LinkAccount.OuterSingleton, Z_Construct_UClass_UEIK_Auth_LinkAccount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_LinkAccount.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_LinkAccount>()
{
	return UEIK_Auth_LinkAccount::StaticClass();
}
UEIK_Auth_LinkAccount::UEIK_Auth_LinkAccount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_LinkAccount);
UEIK_Auth_LinkAccount::~UEIK_Auth_LinkAccount() {}
// End Class UEIK_Auth_LinkAccount

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Auth_LinkAccountCallbackInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_Auth_LinkAccountCallbackInfo_Statics::NewStructOps, TEXT("EIK_Auth_LinkAccountCallbackInfo"), &Z_Registration_Info_UScriptStruct_EIK_Auth_LinkAccountCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Auth_LinkAccountCallbackInfo), 687852796U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_LinkAccount, UEIK_Auth_LinkAccount::StaticClass, TEXT("UEIK_Auth_LinkAccount"), &Z_Registration_Info_UClass_UEIK_Auth_LinkAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_LinkAccount), 2322421220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_1882163638(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_LinkAccount_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

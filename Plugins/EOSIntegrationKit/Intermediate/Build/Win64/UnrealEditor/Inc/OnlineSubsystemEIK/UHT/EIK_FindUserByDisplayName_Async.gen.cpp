// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_FindUserByDisplayName_Async() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FindUserByDisplayName_Async();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUserInfo();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIKUserInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKUserInfo;
class UScriptStruct* FEIKUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKUserInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIKUserInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKUserInfo>()
{
	return FEIKUserInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIKUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EpicAccountID_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Epic Account ID in string format of the found user */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Epic Account ID in string format of the found user" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the found users country. This may be null */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the found users country. This may be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display name (un-sanitized). This may be null */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display name (un-sanitized). This may be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredLanguage_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ISO 639 language code for the user's preferred language. This may be null */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ISO 639 language code for the user's preferred language. This may be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A nickname/alias for the target user assigned by the local user. This may be null */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A nickname/alias for the target user assigned by the local user. This may be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameSanitized_MetaData[] = {
		{ "Category", "EOS Integration Kit|UserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The raw display name (sanitized). This may be null */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The raw display name (sanitized). This may be null" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EpicAccountID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredLanguage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nickname;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNameSanitized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKUserInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_EpicAccountID = { "EpicAccountID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, EpicAccountID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EpicAccountID_MetaData), NewProp_EpicAccountID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_PreferredLanguage = { "PreferredLanguage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, PreferredLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredLanguage_MetaData), NewProp_PreferredLanguage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, Nickname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nickname_MetaData), NewProp_Nickname_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_DisplayNameSanitized = { "DisplayNameSanitized", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKUserInfo, DisplayNameSanitized), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameSanitized_MetaData), NewProp_DisplayNameSanitized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_EpicAccountID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_PreferredLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_Nickname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewProp_DisplayNameSanitized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKUserInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIKUserInfo",
	Z_Construct_UScriptStruct_FEIKUserInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKUserInfo_Statics::PropPointers),
	sizeof(FEIKUserInfo),
	alignof(FEIKUserInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKUserInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIKUserInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIKUserInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIKUserInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIKUserInfo.InnerSingleton;
}
// End ScriptStruct FEIKUserInfo

// Begin Delegate FFindUserByDisplayNameDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms
	{
		FEIKUserInfo EIKUserInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EIKUserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EIKUserInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::NewProp_EIKUserInfo = { "EIKUserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms, EIKUserInfo), Z_Construct_UScriptStruct_FEIKUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EIKUserInfo_MetaData), NewProp_EIKUserInfo_MetaData) }; // 1666179098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::NewProp_EIKUserInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "FindUserByDisplayNameDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFindUserByDisplayNameDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindUserByDisplayNameDelegate, const FEIKUserInfo EIKUserInfo)
{
	struct _Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms
	{
		FEIKUserInfo EIKUserInfo;
	};
	_Script_OnlineSubsystemEIK_eventFindUserByDisplayNameDelegate_Parms Parms;
	Parms.EIKUserInfo=EIKUserInfo;
	FindUserByDisplayNameDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFindUserByDisplayNameDelegate

// Begin Class UEIK_FindUserByDisplayName_Async Function FindEIkUserByDisplayName
struct Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics
{
	struct EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms
	{
		FString TargetDisplayName;
		FString LocalEpicID;
		UEIK_FindUserByDisplayName_Async* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "DisplayName", "Find EIK Player By Display Name" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetDisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalEpicID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_TargetDisplayName = { "TargetDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms, TargetDisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_LocalEpicID = { "LocalEpicID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms, LocalEpicID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms, ReturnValue), Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_TargetDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_LocalEpicID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FindUserByDisplayName_Async, nullptr, "FindEIkUserByDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::EIK_FindUserByDisplayName_Async_eventFindEIkUserByDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_FindUserByDisplayName_Async::execFindEIkUserByDisplayName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetDisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalEpicID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_FindUserByDisplayName_Async**)Z_Param__Result=UEIK_FindUserByDisplayName_Async::FindEIkUserByDisplayName(Z_Param_TargetDisplayName,Z_Param_LocalEpicID);
	P_NATIVE_END;
}
// End Class UEIK_FindUserByDisplayName_Async Function FindEIkUserByDisplayName

// Begin Class UEIK_FindUserByDisplayName_Async
void UEIK_FindUserByDisplayName_Async::StaticRegisterNativesUEIK_FindUserByDisplayName_Async()
{
	UClass* Class = UEIK_FindUserByDisplayName_Async::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindEIkUserByDisplayName", &UEIK_FindUserByDisplayName_Async::execFindEIkUserByDisplayName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_FindUserByDisplayName_Async);
UClass* Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_NoRegister()
{
	return UEIK_FindUserByDisplayName_Async::StaticClass();
}
struct Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_FindUserByDisplayName_Async.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_FindUserByDisplayName_Async_FindEIkUserByDisplayName, "FindEIkUserByDisplayName" }, // 346649238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_FindUserByDisplayName_Async>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_FindUserByDisplayName_Async, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 3272116620
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_FindUserByDisplayName_Async, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindUserByDisplayNameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 3272116620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::ClassParams = {
	&UEIK_FindUserByDisplayName_Async::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_FindUserByDisplayName_Async()
{
	if (!Z_Registration_Info_UClass_UEIK_FindUserByDisplayName_Async.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_FindUserByDisplayName_Async.OuterSingleton, Z_Construct_UClass_UEIK_FindUserByDisplayName_Async_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_FindUserByDisplayName_Async.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_FindUserByDisplayName_Async>()
{
	return UEIK_FindUserByDisplayName_Async::StaticClass();
}
UEIK_FindUserByDisplayName_Async::UEIK_FindUserByDisplayName_Async(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_FindUserByDisplayName_Async);
UEIK_FindUserByDisplayName_Async::~UEIK_FindUserByDisplayName_Async() {}
// End Class UEIK_FindUserByDisplayName_Async

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIKUserInfo::StaticStruct, Z_Construct_UScriptStruct_FEIKUserInfo_Statics::NewStructOps, TEXT("EIKUserInfo"), &Z_Registration_Info_UScriptStruct_EIKUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKUserInfo), 1666179098U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_FindUserByDisplayName_Async, UEIK_FindUserByDisplayName_Async::StaticClass, TEXT("UEIK_FindUserByDisplayName_Async"), &Z_Registration_Info_UClass_UEIK_FindUserByDisplayName_Async, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_FindUserByDisplayName_Async), 2721023330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_3342508504(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_FindUserByDisplayName_Async_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

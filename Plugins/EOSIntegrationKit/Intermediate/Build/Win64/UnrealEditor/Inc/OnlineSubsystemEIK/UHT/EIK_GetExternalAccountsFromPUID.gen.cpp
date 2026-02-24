// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetExternalAccountsFromPUID() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountIdAndType();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum ExternalAccountTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ExternalAccountTypes;
static UEnum* ExternalAccountTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ExternalAccountTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ExternalAccountTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ExternalAccountTypes"));
	}
	return Z_Registration_Info_UEnum_ExternalAccountTypes.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ExternalAccountTypes>()
{
	return ExternalAccountTypes_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EOS_EAT_AMAZON.DisplayName", "Amazon" },
		{ "EOS_EAT_AMAZON.Name", "ExternalAccountTypes::EOS_EAT_AMAZON" },
		{ "EOS_EAT_APPLE.DisplayName", "Apple" },
		{ "EOS_EAT_APPLE.Name", "ExternalAccountTypes::EOS_EAT_APPLE" },
		{ "EOS_EAT_DISCORD.DisplayName", "Discord" },
		{ "EOS_EAT_DISCORD.Name", "ExternalAccountTypes::EOS_EAT_DISCORD" },
		{ "EOS_EAT_EPIC.DisplayName", "Epic Games" },
		{ "EOS_EAT_EPIC.Name", "ExternalAccountTypes::EOS_EAT_EPIC" },
		{ "EOS_EAT_GOG.DisplayName", "GOG" },
		{ "EOS_EAT_GOG.Name", "ExternalAccountTypes::EOS_EAT_GOG" },
		{ "EOS_EAT_GOOGLE.DisplayName", "Google" },
		{ "EOS_EAT_GOOGLE.Name", "ExternalAccountTypes::EOS_EAT_GOOGLE" },
		{ "EOS_EAT_ITCHIO.DisplayName", "itch.io" },
		{ "EOS_EAT_ITCHIO.Name", "ExternalAccountTypes::EOS_EAT_ITCHIO" },
		{ "EOS_EAT_NINTENDO.DisplayName", "Nintendo" },
		{ "EOS_EAT_NINTENDO.Name", "ExternalAccountTypes::EOS_EAT_NINTENDO" },
		{ "EOS_EAT_OCULUS.DisplayName", "Oculus" },
		{ "EOS_EAT_OCULUS.Name", "ExternalAccountTypes::EOS_EAT_OCULUS" },
		{ "EOS_EAT_OPENID.DisplayName", "OpenID Provider" },
		{ "EOS_EAT_OPENID.Name", "ExternalAccountTypes::EOS_EAT_OPENID" },
		{ "EOS_EAT_PSN.DisplayName", "PlayStation Network" },
		{ "EOS_EAT_PSN.Name", "ExternalAccountTypes::EOS_EAT_PSN" },
		{ "EOS_EAT_STEAM.DisplayName", "Steam" },
		{ "EOS_EAT_STEAM.Name", "ExternalAccountTypes::EOS_EAT_STEAM" },
		{ "EOS_EAT_UPLAY.DisplayName", "Uplay" },
		{ "EOS_EAT_UPLAY.Name", "ExternalAccountTypes::EOS_EAT_UPLAY" },
		{ "EOS_EAT_XBL.DisplayName", "Xbox Live" },
		{ "EOS_EAT_XBL.Name", "ExternalAccountTypes::EOS_EAT_XBL" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ExternalAccountTypes::EOS_EAT_EPIC", (int64)ExternalAccountTypes::EOS_EAT_EPIC },
		{ "ExternalAccountTypes::EOS_EAT_STEAM", (int64)ExternalAccountTypes::EOS_EAT_STEAM },
		{ "ExternalAccountTypes::EOS_EAT_PSN", (int64)ExternalAccountTypes::EOS_EAT_PSN },
		{ "ExternalAccountTypes::EOS_EAT_XBL", (int64)ExternalAccountTypes::EOS_EAT_XBL },
		{ "ExternalAccountTypes::EOS_EAT_DISCORD", (int64)ExternalAccountTypes::EOS_EAT_DISCORD },
		{ "ExternalAccountTypes::EOS_EAT_GOG", (int64)ExternalAccountTypes::EOS_EAT_GOG },
		{ "ExternalAccountTypes::EOS_EAT_NINTENDO", (int64)ExternalAccountTypes::EOS_EAT_NINTENDO },
		{ "ExternalAccountTypes::EOS_EAT_UPLAY", (int64)ExternalAccountTypes::EOS_EAT_UPLAY },
		{ "ExternalAccountTypes::EOS_EAT_OPENID", (int64)ExternalAccountTypes::EOS_EAT_OPENID },
		{ "ExternalAccountTypes::EOS_EAT_APPLE", (int64)ExternalAccountTypes::EOS_EAT_APPLE },
		{ "ExternalAccountTypes::EOS_EAT_GOOGLE", (int64)ExternalAccountTypes::EOS_EAT_GOOGLE },
		{ "ExternalAccountTypes::EOS_EAT_OCULUS", (int64)ExternalAccountTypes::EOS_EAT_OCULUS },
		{ "ExternalAccountTypes::EOS_EAT_ITCHIO", (int64)ExternalAccountTypes::EOS_EAT_ITCHIO },
		{ "ExternalAccountTypes::EOS_EAT_AMAZON", (int64)ExternalAccountTypes::EOS_EAT_AMAZON },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"ExternalAccountTypes",
	"ExternalAccountTypes",
	Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes()
{
	if (!Z_Registration_Info_UEnum_ExternalAccountTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ExternalAccountTypes.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ExternalAccountTypes.InnerSingleton;
}
// End Enum ExternalAccountTypes

// Begin ScriptStruct FExternalAccountIdAndType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType;
class UScriptStruct* FExternalAccountIdAndType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalAccountIdAndType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ExternalAccountIdAndType"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FExternalAccountIdAndType>()
{
	return FExternalAccountIdAndType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountType_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLogin_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalAccountType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalAccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLogin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalAccountIdAndType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_ExternalAccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_ExternalAccountType = { "ExternalAccountType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalAccountIdAndType, ExternalAccountType), Z_Construct_UEnum_OnlineSubsystemEIK_ExternalAccountTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountType_MetaData), NewProp_ExternalAccountType_MetaData) }; // 1555013185
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalAccountIdAndType, AccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountId_MetaData), NewProp_AccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalAccountIdAndType, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_LastLogin = { "LastLogin", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalAccountIdAndType, LastLogin), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLogin_MetaData), NewProp_LastLogin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_ExternalAccountType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_ExternalAccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_AccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewProp_LastLogin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"ExternalAccountIdAndType",
	Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::PropPointers),
	sizeof(FExternalAccountIdAndType),
	alignof(FExternalAccountIdAndType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountIdAndType()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.InnerSingleton, Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType.InnerSingleton;
}
// End ScriptStruct FExternalAccountIdAndType

// Begin ScriptStruct FProductUserIdAndExternalAccountIds
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds;
class UScriptStruct* FProductUserIdAndExternalAccountIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ProductUserIdAndExternalAccountIds"));
	}
	return Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FProductUserIdAndExternalAccountIds>()
{
	return FProductUserIdAndExternalAccountIds::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIds_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalAccountIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalAccountIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProductUserIdAndExternalAccountIds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ExternalAccountIds_Inner = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExternalAccountIdAndType, METADATA_PARAMS(0, nullptr) }; // 1920692358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ExternalAccountIds = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProductUserIdAndExternalAccountIds, ExternalAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountIds_MetaData), NewProp_ExternalAccountIds_MetaData) }; // 1920692358
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProductUserIdAndExternalAccountIds, ProductUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductUserId_MetaData), NewProp_ProductUserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ExternalAccountIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ExternalAccountIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewProp_ProductUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"ProductUserIdAndExternalAccountIds",
	Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::PropPointers),
	sizeof(FProductUserIdAndExternalAccountIds),
	alignof(FProductUserIdAndExternalAccountIds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds()
{
	if (!Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.InnerSingleton, Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds.InnerSingleton;
}
// End ScriptStruct FProductUserIdAndExternalAccountIds

// Begin Delegate FGetExternalAccountsFromPUIDDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms
	{
		TArray<FProductUserIdAndExternalAccountIds> UserInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::NewProp_UserInfo_Inner = { "UserInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds, METADATA_PARAMS(0, nullptr) }; // 2618347559
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms, UserInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInfo_MetaData), NewProp_UserInfo_MetaData) }; // 2618347559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::NewProp_UserInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::NewProp_UserInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetExternalAccountsFromPUIDDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGetExternalAccountsFromPUIDDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetExternalAccountsFromPUIDDelegate, TArray<FProductUserIdAndExternalAccountIds> const& UserInfo)
{
	struct _Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms
	{
		TArray<FProductUserIdAndExternalAccountIds> UserInfo;
	};
	_Script_OnlineSubsystemEIK_eventGetExternalAccountsFromPUIDDelegate_Parms Parms;
	Parms.UserInfo=UserInfo;
	GetExternalAccountsFromPUIDDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGetExternalAccountsFromPUIDDelegate

// Begin Class UEIK_GetExternalAccountsFromPUID Function EIKGetExternalAccountsFromPuid
struct Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics
{
	struct EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms
	{
		TArray<FString> TargetProductUserIds;
		FString LocalProductUserId;
		UEIK_GetExternalAccountsFromPUID* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "DisplayName", "Get External Accounts From Product User Ids" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProductUserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetProductUserIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_TargetProductUserIds_Inner = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_TargetProductUserIds = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms, TargetProductUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_LocalProductUserId = { "LocalProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms, LocalProductUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_TargetProductUserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_TargetProductUserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_LocalProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID, nullptr, "EIKGetExternalAccountsFromPuid", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::EIK_GetExternalAccountsFromPUID_eventEIKGetExternalAccountsFromPuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetExternalAccountsFromPUID::execEIKGetExternalAccountsFromPuid)
{
	P_GET_TARRAY(FString,Z_Param_TargetProductUserIds);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalProductUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetExternalAccountsFromPUID**)Z_Param__Result=UEIK_GetExternalAccountsFromPUID::EIKGetExternalAccountsFromPuid(Z_Param_TargetProductUserIds,Z_Param_LocalProductUserId);
	P_NATIVE_END;
}
// End Class UEIK_GetExternalAccountsFromPUID Function EIKGetExternalAccountsFromPuid

// Begin Class UEIK_GetExternalAccountsFromPUID
void UEIK_GetExternalAccountsFromPUID::StaticRegisterNativesUEIK_GetExternalAccountsFromPUID()
{
	UClass* Class = UEIK_GetExternalAccountsFromPUID::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIKGetExternalAccountsFromPuid", &UEIK_GetExternalAccountsFromPUID::execEIKGetExternalAccountsFromPuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetExternalAccountsFromPUID);
UClass* Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_NoRegister()
{
	return UEIK_GetExternalAccountsFromPUID::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetExternalAccountsFromPUID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetExternalAccountsFromPUID_EIKGetExternalAccountsFromPuid, "EIKGetExternalAccountsFromPuid" }, // 1768711901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetExternalAccountsFromPUID>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetExternalAccountsFromPUID, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 3886571667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetExternalAccountsFromPUID, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetExternalAccountsFromPUIDDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 3886571667
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::ClassParams = {
	&UEIK_GetExternalAccountsFromPUID::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID()
{
	if (!Z_Registration_Info_UClass_UEIK_GetExternalAccountsFromPUID.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetExternalAccountsFromPUID.OuterSingleton, Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetExternalAccountsFromPUID.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetExternalAccountsFromPUID>()
{
	return UEIK_GetExternalAccountsFromPUID::StaticClass();
}
UEIK_GetExternalAccountsFromPUID::UEIK_GetExternalAccountsFromPUID(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetExternalAccountsFromPUID);
UEIK_GetExternalAccountsFromPUID::~UEIK_GetExternalAccountsFromPUID() {}
// End Class UEIK_GetExternalAccountsFromPUID

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ExternalAccountTypes_StaticEnum, TEXT("ExternalAccountTypes"), &Z_Registration_Info_UEnum_ExternalAccountTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555013185U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalAccountIdAndType::StaticStruct, Z_Construct_UScriptStruct_FExternalAccountIdAndType_Statics::NewStructOps, TEXT("ExternalAccountIdAndType"), &Z_Registration_Info_UScriptStruct_ExternalAccountIdAndType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalAccountIdAndType), 1920692358U) },
		{ FProductUserIdAndExternalAccountIds::StaticStruct, Z_Construct_UScriptStruct_FProductUserIdAndExternalAccountIds_Statics::NewStructOps, TEXT("ProductUserIdAndExternalAccountIds"), &Z_Registration_Info_UScriptStruct_ProductUserIdAndExternalAccountIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProductUserIdAndExternalAccountIds), 2618347559U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetExternalAccountsFromPUID, UEIK_GetExternalAccountsFromPUID::StaticClass, TEXT("UEIK_GetExternalAccountsFromPUID"), &Z_Registration_Info_UClass_UEIK_GetExternalAccountsFromPUID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetExternalAccountsFromPUID), 2912716734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_906475048(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetExternalAccountsFromPUID_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

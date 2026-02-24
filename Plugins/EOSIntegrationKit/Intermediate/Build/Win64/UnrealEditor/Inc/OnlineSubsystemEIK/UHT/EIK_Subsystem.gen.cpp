// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Subsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Subsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Subsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FFileListStruct();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FOffersStruct();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum EEIKAttributeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIKAttributeType;
static UEnum* EEIKAttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIKAttributeType"));
	}
	return Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIKAttributeType>()
{
	return EEIKAttributeType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "Bool" },
		{ "Integer.Name", "Integer" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "String.Name", "String" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "String", (int64)String },
		{ "Bool", (int64)Bool },
		{ "Integer", (int64)Integer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EEIKAttributeType",
	"EEIKAttributeType",
	Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType()
{
	if (!Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton;
}
// End Enum EEIKAttributeType

// Begin ScriptStruct FEIKAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKAttribute;
class UScriptStruct* FEIKAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKAttribute, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKAttribute>()
{
	return FEIKAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIKAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, AttributeType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeType_MetaData), NewProp_AttributeType_MetaData) }; // 1656980961
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
void Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FEIKAttribute*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIKAttribute), &Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIKAttribute",
	Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers),
	sizeof(FEIKAttribute),
	alignof(FEIKAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton, Z_Construct_UScriptStruct_FEIKAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton;
}
// End ScriptStruct FEIKAttribute

// Begin ScriptStruct FOffersStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OffersStruct;
class UScriptStruct* FOffersStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOffersStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("OffersStruct"));
	}
	return Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FOffersStruct>()
{
	return FOffersStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOffersStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularPriceText_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericPrice_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LongDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RegularPriceText;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RegularPrice;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PriceText;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_NumericPrice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOffersStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, LongDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongDescription_MetaData), NewProp_LongDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText = { "RegularPriceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, RegularPriceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularPriceText_MetaData), NewProp_RegularPriceText_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice = { "RegularPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, RegularPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularPrice_MetaData), NewProp_RegularPrice_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, PriceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriceText_MetaData), NewProp_PriceText_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice = { "NumericPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, NumericPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericPrice_MetaData), NewProp_NumericPrice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseDate_MetaData), NewProp_ReleaseDate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationDate_MetaData), NewProp_ExpirationDate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOffersStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"OffersStruct",
	Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers),
	sizeof(FOffersStruct),
	alignof(FOffersStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOffersStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOffersStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton, Z_Construct_UScriptStruct_FOffersStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton;
}
// End ScriptStruct FOffersStruct

// Begin ScriptStruct FSessionFindStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionFindStruct;
class UScriptStruct* FSessionFindStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionFindStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("SessionFindStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FSessionFindStruct>()
{
	return FSessionFindStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSessionFindStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumberOfPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPlayers;
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionFindStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionResult_MetaData), NewProp_SessionResult_MetaData) }; // 1307808723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionSettings_MetaData), NewProp_SessionSettings_MetaData) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers = { "CurrentNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, CurrentNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumberOfPlayers_MetaData), NewProp_CurrentNumberOfPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers = { "MaxNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, MaxNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfPlayers_MetaData), NewProp_MaxNumberOfPlayers_MetaData) };
void Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((FSessionFindStruct*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSessionFindStruct), &Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDedicatedServer_MetaData), NewProp_bIsDedicatedServer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"SessionFindStruct",
	Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers),
	sizeof(FSessionFindStruct),
	alignof(FSessionFindStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton, Z_Construct_UScriptStruct_FSessionFindStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton;
}
// End ScriptStruct FSessionFindStruct

// Begin ScriptStruct FFileListStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileListStruct;
class UScriptStruct* FFileListStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileListStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("FileListStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FFileListStruct>()
{
	return FFileListStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFileListStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hash value, if applicable, of the given file contents */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash value, if applicable, of the given file contents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashType_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The hash algorithm used to sign this file */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hash algorithm used to sign this file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLName_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filename as downloaded */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filename as downloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Logical filename, maps to the downloaded filename */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logical filename, maps to the downloaded filename" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** File size */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The full URL to download the file if it is stored in a CDN or separate host site */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The full URL to download the file if it is stored in a CDN or separate host site" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iChunkID_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The chunk id this file represents */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chunk id this file represents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStorageIds_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointers to externally-accessible representations of this file */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to externally-accessible representations of this file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HashType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DLName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iChunkID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalStorageIds_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalStorageIds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalStorageIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileListStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType = { "HashType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, HashType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashType_MetaData), NewProp_HashType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName = { "DLName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, DLName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLName_MetaData), NewProp_DLName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID = { "iChunkID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, iChunkID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iChunkID_MetaData), NewProp_iChunkID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_ValueProp = { "ExternalStorageIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_Key_KeyProp = { "ExternalStorageIds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds = { "ExternalStorageIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, ExternalStorageIds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalStorageIds_MetaData), NewProp_ExternalStorageIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileListStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"FileListStruct",
	Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers),
	sizeof(FFileListStruct),
	alignof(FFileListStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileListStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileListStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton, Z_Construct_UScriptStruct_FFileListStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton;
}
// End ScriptStruct FFileListStruct

// Begin Enum ERegionInfo
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERegionInfo;
static UEnum* ERegionInfo_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ERegionInfo"));
	}
	return Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ERegionInfo>()
{
	return ERegionInfo_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "RE_Africa.DisplayName", "Africa" },
		{ "RE_Africa.Name", "ERegionInfo::RE_Africa" },
		{ "RE_Asia.DisplayName", "Asia" },
		{ "RE_Asia.Name", "ERegionInfo::RE_Asia" },
		{ "RE_Australia.DisplayName", "Australia" },
		{ "RE_Australia.Name", "ERegionInfo::RE_Australia" },
		{ "RE_Europe.DisplayName", "Europe" },
		{ "RE_Europe.Name", "ERegionInfo::RE_Europe" },
		{ "RE_NorthAmerica.DisplayName", "North America" },
		{ "RE_NorthAmerica.Name", "ERegionInfo::RE_NorthAmerica" },
		{ "RE_NoSelection.DisplayName", "No Selection" },
		{ "RE_NoSelection.Name", "ERegionInfo::RE_NoSelection" },
		{ "RE_SouthAmerica.DisplayName", "South America" },
		{ "RE_SouthAmerica.Name", "ERegionInfo::RE_SouthAmerica" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERegionInfo::RE_NoSelection", (int64)ERegionInfo::RE_NoSelection },
		{ "ERegionInfo::RE_Asia", (int64)ERegionInfo::RE_Asia },
		{ "ERegionInfo::RE_NorthAmerica", (int64)ERegionInfo::RE_NorthAmerica },
		{ "ERegionInfo::RE_SouthAmerica", (int64)ERegionInfo::RE_SouthAmerica },
		{ "ERegionInfo::RE_Africa", (int64)ERegionInfo::RE_Africa },
		{ "ERegionInfo::RE_Europe", (int64)ERegionInfo::RE_Europe },
		{ "ERegionInfo::RE_Australia", (int64)ERegionInfo::RE_Australia },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"ERegionInfo",
	"ERegionInfo",
	Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo()
{
	if (!Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton;
}
// End Enum ERegionInfo

// Begin Enum EMatchType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchType;
static UEnum* EMatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EMatchType"));
	}
	return Z_Registration_Info_UEnum_EMatchType.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EMatchType>()
{
	return EMatchType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "MT_Lobby.DisplayName", "Lobby Session" },
		{ "MT_Lobby.Name", "EMatchType::MT_Lobby" },
		{ "MT_MatchMakingSession.DisplayName", "Matchmaking Session" },
		{ "MT_MatchMakingSession.Name", "EMatchType::MT_MatchMakingSession" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMatchType::MT_MatchMakingSession", (int64)EMatchType::MT_MatchMakingSession },
		{ "EMatchType::MT_Lobby", (int64)EMatchType::MT_Lobby },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EMatchType",
	"EMatchType",
	Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType()
{
	if (!Z_Registration_Info_UEnum_EMatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMatchType.InnerSingleton;
}
// End Enum EMatchType

// Begin ScriptStruct FEIKUniqueNetId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKUniqueNetId;
class UScriptStruct* FEIKUniqueNetId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKUniqueNetId, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKUniqueNetId"));
	}
	return Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKUniqueNetId>()
{
	return FEIKUniqueNetId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Love you VaRest for this :D\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Love you VaRest for this :D" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKUniqueNetId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIKUniqueNetId",
	nullptr,
	0,
	sizeof(FEIKUniqueNetId),
	alignof(FEIKUniqueNetId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId()
{
	if (!Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton, Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton;
}
// End ScriptStruct FEIKUniqueNetId

// Begin ScriptStruct FEIK_Stats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Stats;
class UScriptStruct* FEIK_Stats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Stats, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Stats"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Stats>()
{
	return FEIK_Stats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Stats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsName_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsValue_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatsName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatsValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Stats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName = { "StatsName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats, StatsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsName_MetaData), NewProp_StatsName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue = { "StatsValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats, StatsValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsValue_MetaData), NewProp_StatsValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Stats",
	Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers),
	sizeof(FEIK_Stats),
	alignof(FEIK_Stats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Stats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Stats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton;
}
// End ScriptStruct FEIK_Stats

// Begin Delegate FBP_Login_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates for callbacks in BP\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for callbacks in BP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_Login_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_Login_Callback_DelegateWrapper(const FScriptDelegate& BP_Login_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_Login_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_Login_Callback

// Begin Delegate FBP_Logout_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_Logout_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_Logout_Callback_DelegateWrapper(const FScriptDelegate& BP_Logout_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_Logout_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_Logout_Callback

// Begin Delegate FBP_CreateSession_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_CreateSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_CreateSession_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateSession_Callback, bool bWasSuccess, FName const& SessionName)
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
	_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionName=SessionName;
	BP_CreateSession_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_CreateSession_Callback

// Begin Delegate FBP_CreateLobby_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_CreateLobby_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_CreateLobby_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateLobby_Callback, bool bWasSuccess, FName const& SessionName)
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
	_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionName=SessionName;
	BP_CreateLobby_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_CreateLobby_Callback

// Begin Delegate FBP_DestroySession_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_DestroySession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_DestroySession_Callback_DelegateWrapper(const FScriptDelegate& BP_DestroySession_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_DestroySession_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_DestroySession_Callback

// Begin Delegate FBP_PurchaseOffer_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_PurchaseOffer_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_PurchaseOffer_Callback_DelegateWrapper(const FScriptDelegate& BP_PurchaseOffer_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_PurchaseOffer_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_PurchaseOffer_Callback

// Begin Delegate FBP_JoinSession_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_JoinSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_JoinSession_Callback_DelegateWrapper(const FScriptDelegate& BP_JoinSession_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_JoinSession_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_JoinSession_Callback

// Begin Delegate FBP_GetTitleFile_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetTitleFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_GetTitleFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetTitleFile_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_GetTitleFile_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_GetTitleFile_Callback

// Begin Delegate FBP_UpdateStat_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_UpdateStat_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_UpdateStat_Callback_DelegateWrapper(const FScriptDelegate& BP_UpdateStat_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_UpdateStat_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_UpdateStat_Callback

// Begin Delegate FBP_GetStats_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FEIK_Stats> Stats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Stats, METADATA_PARAMS(0, nullptr) }; // 853134591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 853134591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetStats_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_GetStats_Callback_DelegateWrapper(const FScriptDelegate& BP_GetStats_Callback, bool bWasSuccess, TArray<FEIK_Stats> const& Stats)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FEIK_Stats> Stats;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Stats=Stats;
	BP_GetStats_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_GetStats_Callback

// Begin Delegate FBP_FindSession_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FSessionFindStruct> SessionResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 1699625377
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionResults_MetaData), NewProp_SessionResults_MetaData) }; // 1699625377
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_FindSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_FindSession_Callback_DelegateWrapper(const FScriptDelegate& BP_FindSession_Callback, bool bWasSuccess, TArray<FSessionFindStruct> const& SessionResults)
{
	struct _Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FSessionFindStruct> SessionResults;
	};
	_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionResults=SessionResults;
	BP_FindSession_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_FindSession_Callback

// Begin Delegate FBP_WriteFile_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_WriteFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_WriteFile_Callback_DelegateWrapper(const FScriptDelegate& BP_WriteFile_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_WriteFile_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_WriteFile_Callback

// Begin Delegate FBP_GetOffers_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FOffersStruct> Offers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Offers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_Inner = { "Offers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffersStruct, METADATA_PARAMS(0, nullptr) }; // 3833374453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers = { "Offers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms, Offers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offers_MetaData), NewProp_Offers_MetaData) }; // 3833374453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetOffers_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_GetOffers_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOffers_Callback, bool bWasSuccess, TArray<FOffersStruct> const& Offers)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FOffersStruct> Offers;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Offers=Offers;
	BP_GetOffers_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_GetOffers_Callback

// Begin Delegate FBP_GetOwnedItems_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FString> OwnedItemNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedItemNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnedItemNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedItemNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms, OwnedItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedItemNames_MetaData), NewProp_OwnedItemNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetOwnedItems_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_GetOwnedItems_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOwnedItems_Callback, bool bWasSuccess, TArray<FString> const& OwnedItemNames)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FString> OwnedItemNames;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.OwnedItemNames=OwnedItemNames;
	BP_GetOwnedItems_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_GetOwnedItems_Callback

// Begin Delegate FBP_GetFile_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms
	{
		bool bWasSuccess;
		USaveGame* SaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_GetFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetFile_Callback, bool bWasSuccess, USaveGame* SaveGame)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms
	{
		bool bWasSuccess;
		USaveGame* SaveGame;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SaveGame=SaveGame;
	BP_GetFile_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_GetFile_Callback

// Begin Delegate FBP_ConnectEOSAndPlayFab_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_ConnectEOSAndPlayFab_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_ConnectEOSAndPlayFab_Callback_DelegateWrapper(const FScriptDelegate& BP_ConnectEOSAndPlayFab_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_ConnectEOSAndPlayFab_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_ConnectEOSAndPlayFab_Callback

// Begin Delegate FBP_TitleFileList_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_TitleFileList_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_TitleFileList_Callback_DelegateWrapper(const FScriptDelegate& BP_TitleFileList_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_TitleFileList_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_TitleFileList_Callback

// Begin Delegate FBP_HostMigration_Callback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms
	{
		bool bLocalHost;
		FString PromotedMember;
		FString JoinAddress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromotedMember_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bLocalHost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PromotedMember;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms*)Obj)->bLocalHost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost = { "bLocalHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember = { "PromotedMember", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms, PromotedMember), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromotedMember_MetaData), NewProp_PromotedMember_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress = { "JoinAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms, JoinAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinAddress_MetaData), NewProp_JoinAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_HostMigration_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_HostMigration_Callback_DelegateWrapper(const FScriptDelegate& BP_HostMigration_Callback, bool bLocalHost, const FString& PromotedMember, const FString& JoinAddress)
{
	struct _Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms
	{
		bool bLocalHost;
		FString PromotedMember;
		FString JoinAddress;
	};
	_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms Parms;
	Parms.bLocalHost=bLocalHost ? true : false;
	Parms.PromotedMember=PromotedMember;
	Parms.JoinAddress=JoinAddress;
	BP_HostMigration_Callback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBP_HostMigration_Callback

// Begin Delegate FBP_FriendInviteRecievedDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms
	{
		FEIKUniqueNetId LocalUserId;
		FEIKUniqueNetId InvitedUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvitedUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvitedUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 3785727623
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::NewProp_InvitedUserId = { "InvitedUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms, InvitedUserId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvitedUserId_MetaData), NewProp_InvitedUserId_MetaData) }; // 3785727623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::NewProp_InvitedUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_FriendInviteRecievedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FriendInviteRecievedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_FriendInviteRecievedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BP_FriendInviteRecievedDelegate, FEIKUniqueNetId const& LocalUserId, FEIKUniqueNetId const& InvitedUserId)
{
	struct _Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms
	{
		FEIKUniqueNetId LocalUserId;
		FEIKUniqueNetId InvitedUserId;
	};
	_Script_OnlineSubsystemEIK_eventBP_FriendInviteRecievedDelegate_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.InvitedUserId=InvitedUserId;
	BP_FriendInviteRecievedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBP_FriendInviteRecievedDelegate

// Begin Delegate FBP_SessionInviteRecievedDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms
	{
		FString SessionInfo;
		FString LocalProductId;
		FString InvitedProductId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalProductId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvitedProductId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvitedProductId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms, SessionInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionInfo_MetaData), NewProp_SessionInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_LocalProductId = { "LocalProductId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms, LocalProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalProductId_MetaData), NewProp_LocalProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_InvitedProductId = { "InvitedProductId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms, InvitedProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvitedProductId_MetaData), NewProp_InvitedProductId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_SessionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_LocalProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::NewProp_InvitedProductId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_SessionInviteRecievedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_SessionInviteRecievedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBP_SessionInviteRecievedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BP_SessionInviteRecievedDelegate, const FString& SessionInfo, const FString& LocalProductId, const FString& InvitedProductId)
{
	struct _Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms
	{
		FString SessionInfo;
		FString LocalProductId;
		FString InvitedProductId;
	};
	_Script_OnlineSubsystemEIK_eventBP_SessionInviteRecievedDelegate_Parms Parms;
	Parms.SessionInfo=SessionInfo;
	Parms.LocalProductId=LocalProductId;
	Parms.InvitedProductId=InvitedProductId;
	BP_SessionInviteRecievedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBP_SessionInviteRecievedDelegate

// Begin Class UEIK_Subsystem Function ConnectEosAndPlayFab
struct Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics
{
	struct EIK_Subsystem_eventConnectEosAndPlayFab_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || PlayFab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for finding Epic Online Services Sessions\n" },
#endif
		{ "DisplayName", "Connect EOS And PlayFab" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for finding Epic Online Services Sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventConnectEosAndPlayFab_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1663094054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "ConnectEosAndPlayFab", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::EIK_Subsystem_eventConnectEosAndPlayFab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::EIK_Subsystem_eventConnectEosAndPlayFab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execConnectEosAndPlayFab)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectEosAndPlayFab(FBP_ConnectEOSAndPlayFab_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function ConnectEosAndPlayFab

// Begin Class UEIK_Subsystem Function CreateEOSLobby
struct Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics
{
	struct EIK_Subsystem_eventCreateEOSLobby_Parms
	{
		FScriptDelegate Result;
		TMap<FString,FString> Custom_Settings;
		FString SessionName;
		bool bUseVoiceChat;
		bool bUsePresence;
		bool bAllowInvites;
		bool bAdvertise;
		bool bAllowJoinInProgress;
		bool bIsLan;
		int32 NumberOfPublicConnections;
		int32 NumberOfPrivateConnections;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for creating Epic Online Services Lobbies\n" },
#endif
		{ "CPP_Default_bAdvertise", "true" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_bIsLan", "false" },
		{ "CPP_Default_bUsePresence", "true" },
		{ "CPP_Default_bUseVoiceChat", "true" },
		{ "CPP_Default_NumberOfPrivateConnections", "4" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_SessionName", "Modified_EOS_Session" },
		{ "DisplayName", "Create EOS Lobby" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for creating Epic Online Services Lobbies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Custom_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static void NewProp_bUseVoiceChat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceChat;
	static void NewProp_bUsePresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static void NewProp_bIsLan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2285241689
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_ValueProp = { "Custom_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_Key_KeyProp = { "Custom_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings = { "Custom_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, Custom_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bUseVoiceChat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat = { "bUseVoiceChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bUsePresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise = { "bAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bIsLan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan = { "bIsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, NumberOfPrivateConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPrivateConnections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "CreateEOSLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::EIK_Subsystem_eventCreateEOSLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::EIK_Subsystem_eventCreateEOSLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execCreateEOSLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_TMAP(FString,FString,Z_Param_Custom_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bUseVoiceChat);
	P_GET_UBOOL(Z_Param_bUsePresence);
	P_GET_UBOOL(Z_Param_bAllowInvites);
	P_GET_UBOOL(Z_Param_bAdvertise);
	P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
	P_GET_UBOOL(Z_Param_bIsLan);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPrivateConnections);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateEOSLobby(FBP_CreateLobby_Callback(Z_Param_Out_Result),Z_Param_Custom_Settings,Z_Param_SessionName,Z_Param_bUseVoiceChat,Z_Param_bUsePresence,Z_Param_bAllowInvites,Z_Param_bAdvertise,Z_Param_bAllowJoinInProgress,Z_Param_bIsLan,Z_Param_NumberOfPublicConnections,Z_Param_NumberOfPrivateConnections);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function CreateEOSLobby

// Begin Class UEIK_Subsystem Function CreateEOSSession
struct Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics
{
	struct EIK_Subsystem_eventCreateEOSSession_Parms
	{
		FScriptDelegate Result;
		TMap<FString,FString> Custom_Settings;
		FString SessionName;
		bool bIsDedicatedServer;
		bool bIsLan;
		int32 NumberOfPublicConnections;
		ERegionInfo Region;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for creating Epic Online Services Sessions\n" },
#endif
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bIsLan", "false" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_Region", "RE_NoSelection" },
		{ "CPP_Default_SessionName", "Modified_EOS_Session" },
		{ "DisplayName", "Create EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for creating Epic Online Services Sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Custom_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static void NewProp_bIsLan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3107541686
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_ValueProp = { "Custom_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_Key_KeyProp = { "Custom_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings = { "Custom_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Custom_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSSession_Parms*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan_SetBit(void* Obj)
{
	((EIK_Subsystem_eventCreateEOSSession_Parms*)Obj)->bIsLan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan = { "bIsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(0, nullptr) }; // 1209445512
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "CreateEOSSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::EIK_Subsystem_eventCreateEOSSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::EIK_Subsystem_eventCreateEOSSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execCreateEOSSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_TMAP(FString,FString,Z_Param_Custom_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bIsDedicatedServer);
	P_GET_UBOOL(Z_Param_bIsLan);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_ENUM(ERegionInfo,Z_Param_Region);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateEOSSession(FBP_CreateSession_Callback(Z_Param_Out_Result),Z_Param_Custom_Settings,Z_Param_SessionName,Z_Param_bIsDedicatedServer,Z_Param_bIsLan,Z_Param_NumberOfPublicConnections,ERegionInfo(Z_Param_Region));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function CreateEOSSession

// Begin Class UEIK_Subsystem Function DestroyEosSession
struct Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics
{
	struct EIK_Subsystem_eventDestroyEosSession_Parms
	{
		FScriptDelegate Result;
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for destroying Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/destroy-sessions\n" },
#endif
		{ "DisplayName", "Destroy EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for destroying Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/destroy-sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventDestroyEosSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 547825916
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventDestroyEosSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "DestroyEosSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::EIK_Subsystem_eventDestroyEosSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::EIK_Subsystem_eventDestroyEosSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execDestroyEosSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyEosSession(FBP_DestroySession_Callback(Z_Param_Out_Result),Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function DestroyEosSession

// Begin Class UEIK_Subsystem Function EndSession
struct Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics
{
	struct EIK_Subsystem_eventEndSession_Parms
	{
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "DisplayName", "End EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventEndSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "EndSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::EIK_Subsystem_eventEndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::EIK_Subsystem_eventEndSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execEndSession)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function EndSession

// Begin Class UEIK_Subsystem Function EnumerateTitleFiles
struct Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics
{
	struct EIK_Subsystem_eventEnumerateTitleFiles_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventEnumerateTitleFiles_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2615382838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "EnumerateTitleFiles", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::EIK_Subsystem_eventEnumerateTitleFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::EIK_Subsystem_eventEnumerateTitleFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execEnumerateTitleFiles)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateTitleFiles(FBP_TitleFileList_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function EnumerateTitleFiles

// Begin Class UEIK_Subsystem Function FindEOSSession
struct Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics
{
	struct EIK_Subsystem_eventFindEOSSession_Parms
	{
		FScriptDelegate Result;
		TMap<FString,FString> Search_Settings;
		EMatchType MatchType;
		ERegionInfo RegionToSearch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for finding Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/find-sessions-and-lobbies\n" },
#endif
		{ "CPP_Default_MatchType", "MT_Lobby" },
		{ "CPP_Default_RegionToSearch", "RE_NoSelection" },
		{ "DisplayName", "Find EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for finding Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/find-sessions-and-lobbies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Search_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Search_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Search_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RegionToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RegionToSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 781254828
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_ValueProp = { "Search_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_Key_KeyProp = { "Search_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings = { "Search_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, Search_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, MatchType), Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType, METADATA_PARAMS(0, nullptr) }; // 1973039095
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch = { "RegionToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, RegionToSearch), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(0, nullptr) }; // 1209445512
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "FindEOSSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::EIK_Subsystem_eventFindEOSSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::EIK_Subsystem_eventFindEOSSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execFindEOSSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_TMAP(FString,FString,Z_Param_Search_Settings);
	P_GET_ENUM(EMatchType,Z_Param_MatchType);
	P_GET_ENUM(ERegionInfo,Z_Param_RegionToSearch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindEOSSession(FBP_FindSession_Callback(Z_Param_Out_Result),Z_Param_Search_Settings,EMatchType(Z_Param_MatchType),ERegionInfo(Z_Param_RegionToSearch));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function FindEOSSession

// Begin Class UEIK_Subsystem Function GenerateSessionCode
struct Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics
{
	struct EIK_Subsystem_eventGenerateSessionCode_Parms
	{
		int32 CodeLength;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store. - Switch to Async Nodes\n" },
#endif
		{ "CPP_Default_CodeLength", "9" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store. - Switch to Async Nodes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CodeLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_CodeLength = { "CodeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGenerateSessionCode_Parms, CodeLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGenerateSessionCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_CodeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GenerateSessionCode", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::EIK_Subsystem_eventGenerateSessionCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::EIK_Subsystem_eventGenerateSessionCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGenerateSessionCode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CodeLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GenerateSessionCode(Z_Param_CodeLength);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GenerateSessionCode

// Begin Class UEIK_Subsystem Function GetEpicID
struct Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics
{
	struct EIK_Subsystem_eventGetEpicID_Parms
	{
		FEIKUniqueNetId UniqueNetId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the Epic ID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-epicid\n" },
#endif
		{ "DisplayName", "Get Epic ID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the Epic ID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-epicid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetEpicID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNetId_MetaData), NewProp_UniqueNetId_MetaData) }; // 3785727623
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetEpicID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetEpicID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::EIK_Subsystem_eventGetEpicID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::EIK_Subsystem_eventGetEpicID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetEpicID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetEpicID)
{
	P_GET_STRUCT_REF(FEIKUniqueNetId,Z_Param_Out_UniqueNetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_Subsystem::GetEpicID(Z_Param_Out_UniqueNetId);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetEpicID

// Begin Class UEIK_Subsystem Function GetLeaderboard
struct Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics
{
	struct EIK_Subsystem_eventGetLeaderboard_Parms
	{
		FScriptDelegate Result;
		FName LeaderboardName;
		int32 Rank;
		int32 Range;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Leaderboard" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1960857429
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Rank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Range), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Rank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetLeaderboard", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::EIK_Subsystem_eventGetLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::EIK_Subsystem_eventGetLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FNameProperty,Z_Param_LeaderboardName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
	P_GET_PROPERTY(FIntProperty,Z_Param_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboard(FBP_GetFile_Callback(Z_Param_Out_Result),Z_Param_LeaderboardName,Z_Param_Rank,Z_Param_Range);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetLeaderboard

// Begin Class UEIK_Subsystem Function GetLoginStatus
struct Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics
{
	struct EIK_Subsystem_eventGetLoginStatus_Parms
	{
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the login status of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the login status of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserNum_MetaData), NewProp_LocalUserNum_MetaData) };
void Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_Subsystem_eventGetLoginStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventGetLoginStatus_Parms), &Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::EIK_Subsystem_eventGetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::EIK_Subsystem_eventGetLoginStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetLoginStatus)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_Subsystem::GetLoginStatus(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetLoginStatus

// Begin Class UEIK_Subsystem Function GetOwnedItems
struct Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics
{
	struct EIK_Subsystem_eventGetOwnedItems_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetOwnedItems_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3582145285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetOwnedItems", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::EIK_Subsystem_eventGetOwnedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::EIK_Subsystem_eventGetOwnedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetOwnedItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOwnedItems(FBP_GetOwnedItems_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetOwnedItems

// Begin Class UEIK_Subsystem Function GetPlayerData
struct Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics
{
	struct EIK_Subsystem_eventGetPlayerData_Parms
	{
		FScriptDelegate Result;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerData_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1960857429
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetPlayerData", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::EIK_Subsystem_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::EIK_Subsystem_eventGetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetPlayerData)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerData(FBP_GetFile_Callback(Z_Param_Out_Result),Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetPlayerData

// Begin Class UEIK_Subsystem Function GetPlayerNickname
struct Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics
{
	struct EIK_Subsystem_eventGetPlayerNickname_Parms
	{
		int32 LocalUserNum;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the nickname of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the nickname of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerNickname_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserNum_MetaData), NewProp_LocalUserNum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetPlayerNickname", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::EIK_Subsystem_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::EIK_Subsystem_eventGetPlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetPlayerNickname)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_Subsystem::GetPlayerNickname(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetPlayerNickname

// Begin Class UEIK_Subsystem Function GetProductUserID
struct Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics
{
	struct EIK_Subsystem_eventGetProductUserID_Parms
	{
		FEIKUniqueNetId UniqueNetId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the Product UserID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-productuserid\n" },
#endif
		{ "DisplayName", "Get Product UserID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the Product UserID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-productuserid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetProductUserID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNetId_MetaData), NewProp_UniqueNetId_MetaData) }; // 3785727623
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetProductUserID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::EIK_Subsystem_eventGetProductUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::EIK_Subsystem_eventGetProductUserID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetProductUserID)
{
	P_GET_STRUCT_REF(FEIKUniqueNetId,Z_Param_Out_UniqueNetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_Subsystem::GetProductUserID(Z_Param_Out_UniqueNetId);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetProductUserID

// Begin Class UEIK_Subsystem Function GetStats
struct Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics
{
	struct EIK_Subsystem_eventGetStats_Parms
	{
		FScriptDelegate Result;
		TArray<FString> StatName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Statistics" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetStats_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505354095
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName_Inner = { "StatName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetStats_Parms, StatName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetStats", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::EIK_Subsystem_eventGetStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::EIK_Subsystem_eventGetStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_TARRAY(FString,Z_Param_StatName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetStats(FBP_GetStats_Callback(Z_Param_Out_Result),Z_Param_StatName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetStats

// Begin Class UEIK_Subsystem Function GetTitleFile
struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics
{
	struct EIK_Subsystem_eventGetTitleFile_Parms
	{
		FScriptDelegate Result;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFile_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2407986638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFile", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::EIK_Subsystem_eventGetTitleFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::EIK_Subsystem_eventGetTitleFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFile)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTitleFile(FBP_GetTitleFile_Callback(Z_Param_Out_Result),Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetTitleFile

// Begin Class UEIK_Subsystem Function GetTitleFileContent
struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics
{
	struct EIK_Subsystem_eventGetTitleFileContent_Parms
	{
		FString FileName;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileContent_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFileContent", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::EIK_Subsystem_eventGetTitleFileContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::EIK_Subsystem_eventGetTitleFileContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFileContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetTitleFileContent(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetTitleFileContent

// Begin Class UEIK_Subsystem Function GetTitleFileList
struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics
{
	struct EIK_Subsystem_eventGetTitleFileList_Parms
	{
		TArray<FFileListStruct> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFileListStruct, METADATA_PARAMS(0, nullptr) }; // 2717628474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2717628474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFileList", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::EIK_Subsystem_eventGetTitleFileList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::EIK_Subsystem_eventGetTitleFileList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFileList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFileListStruct>*)Z_Param__Result=P_THIS->GetTitleFileList();
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetTitleFileList

// Begin Class UEIK_Subsystem Function GetUserUniqueID
struct Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics
{
	struct EIK_Subsystem_eventGetUserUniqueID_Parms
	{
		FEIKUniqueNetId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the User Unique NetID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid\n" },
#endif
		{ "DisplayName", "Get User Unique NetID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the User Unique NetID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetUserUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetUserUniqueID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::EIK_Subsystem_eventGetUserUniqueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::EIK_Subsystem_eventGetUserUniqueID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execGetUserUniqueID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIKUniqueNetId*)Z_Param__Result=P_THIS->GetUserUniqueID();
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function GetUserUniqueID

// Begin Class UEIK_Subsystem Function JoinEosSession
struct Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics
{
	struct EIK_Subsystem_eventJoinEosSession_Parms
	{
		FScriptDelegate Result;
		FName SessionName;
		bool bIsDedicatedServerSession;
		FBlueprintSessionResult SessionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for joining Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/join-sessions\n" },
#endif
		{ "DisplayName", "Join EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for joining Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/join-sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bIsDedicatedServerSession_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServerSession;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2088454771
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession_SetBit(void* Obj)
{
	((EIK_Subsystem_eventJoinEosSession_Parms*)Obj)->bIsDedicatedServerSession = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession = { "bIsDedicatedServerSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventJoinEosSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "JoinEosSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::EIK_Subsystem_eventJoinEosSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::EIK_Subsystem_eventJoinEosSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execJoinEosSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bIsDedicatedServerSession);
	P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinEosSession(FBP_JoinSession_Callback(Z_Param_Out_Result),Z_Param_SessionName,Z_Param_bIsDedicatedServerSession,Z_Param_SessionResult);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function JoinEosSession

// Begin Class UEIK_Subsystem Function LoginWithAccountPortal
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics
{
	struct EIK_Subsystem_eventLoginWithAccountPortal_Parms
	{
		int32 LocalUserNum;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-account-portal\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-account-portal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithAccountPortal_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithAccountPortal_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithAccountPortal", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::EIK_Subsystem_eventLoginWithAccountPortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::EIK_Subsystem_eventLoginWithAccountPortal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithAccountPortal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithAccountPortal(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithAccountPortal

// Begin Class UEIK_Subsystem Function LoginWithDeveloperTool
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics
{
	struct EIK_Subsystem_eventLoginWithDeveloperTool_Parms
	{
		int32 LocalUserNum;
		FString LocalIP;
		FString Credential;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using a developer tool and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-devtool\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using a developer tool and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-devtool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalIP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Credential;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalIP = { "LocalIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, LocalIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, Credential), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Credential,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithDeveloperTool", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::EIK_Subsystem_eventLoginWithDeveloperTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::EIK_Subsystem_eventLoginWithDeveloperTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithDeveloperTool)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalIP);
	P_GET_PROPERTY(FStrProperty,Z_Param_Credential);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithDeveloperTool(Z_Param_LocalUserNum,Z_Param_LocalIP,Z_Param_Credential,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithDeveloperTool

// Begin Class UEIK_Subsystem Function LoginWithDeviceID
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics
{
	struct EIK_Subsystem_eventLoginWithDeviceID_Parms
	{
		int32 LocalUserNum;
		FString DisplayName;
		FString DeviceName;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Switch to Async Nodes\n// This C++ method logs in a user to an online subsystem using their device ID and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-device-id\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch to Async Nodes\n This C++ method logs in a user to an online subsystem using their device ID and sets up a callback function to handle the login response.\n Documentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-device-id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, DisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithDeviceID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::EIK_Subsystem_eventLoginWithDeviceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::EIK_Subsystem_eventLoginWithDeviceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithDeviceID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithDeviceID(Z_Param_LocalUserNum,Z_Param_DisplayName,Z_Param_DeviceName,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithDeviceID

// Begin Class UEIK_Subsystem Function LoginWithEpicLauncher
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics
{
	struct EIK_Subsystem_eventLoginWithEpicLauncher_Parms
	{
		int32 LocalUserNum;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using the Epic Launcher and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-epic-launcher\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using the Epic Launcher and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-epic-launcher" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithEpicLauncher_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithEpicLauncher_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithEpicLauncher", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::EIK_Subsystem_eventLoginWithEpicLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::EIK_Subsystem_eventLoginWithEpicLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithEpicLauncher)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithEpicLauncher(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithEpicLauncher

// Begin Class UEIK_Subsystem Function LoginWithPersistantAuth
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics
{
	struct EIK_Subsystem_eventLoginWithPersistantAuth_Parms
	{
		int32 LocalUserNum;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using persistent authentication and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-persistent-auth\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using persistent authentication and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-persistent-auth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithPersistantAuth_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithPersistantAuth_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithPersistantAuth", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::EIK_Subsystem_eventLoginWithPersistantAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::EIK_Subsystem_eventLoginWithPersistantAuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithPersistantAuth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithPersistantAuth(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithPersistantAuth

// Begin Class UEIK_Subsystem Function LoginWithSteam
struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics
{
	struct EIK_Subsystem_eventLoginWithSteam_Parms
	{
		int32 LocalUserNum;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-steam\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-steam" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithSteam_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithSteam_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2332120759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithSteam", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::EIK_Subsystem_eventLoginWithSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::EIK_Subsystem_eventLoginWithSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithSteam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithSteam(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function LoginWithSteam

// Begin Class UEIK_Subsystem Function Logout
struct Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics
{
	struct EIK_Subsystem_eventLogout_Parms
	{
		int32 LocalUserNum;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for logging out a user from an online subsystem, and it sets up a callback function to handle the logout response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/logout\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for logging out a user from an online subsystem, and it sets up a callback function to handle the logout response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/logout" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLogout_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLogout_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3975712536
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::EIK_Subsystem_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::EIK_Subsystem_eventLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execLogout)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout(Z_Param_LocalUserNum,FBP_Logout_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function Logout

// Begin Class UEIK_Subsystem Function OnHostMigrated
struct Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics
{
	struct EIK_Subsystem_eventOnHostMigrated_Parms
	{
		FScriptDelegate Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventOnHostMigrated_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 6290182
void Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_Subsystem_eventOnHostMigrated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventOnHostMigrated_Parms), &Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "OnHostMigrated", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::EIK_Subsystem_eventOnHostMigrated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::EIK_Subsystem_eventOnHostMigrated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execOnHostMigrated)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_Subsystem::OnHostMigrated(FBP_HostMigration_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function OnHostMigrated

// Begin Class UEIK_Subsystem Function PurchaseItem
struct Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics
{
	struct EIK_Subsystem_eventPurchaseItem_Parms
	{
		FScriptDelegate Result;
		FString ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventPurchaseItem_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2041262537
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventPurchaseItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "PurchaseItem", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::EIK_Subsystem_eventPurchaseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::EIK_Subsystem_eventPurchaseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execPurchaseItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PurchaseItem(FBP_PurchaseOffer_Callback(Z_Param_Out_Result),Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function PurchaseItem

// Begin Class UEIK_Subsystem Function QueryOffers
struct Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics
{
	struct EIK_Subsystem_eventQueryOffers_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventQueryOffers_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 601677758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "QueryOffers", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::EIK_Subsystem_eventQueryOffers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::EIK_Subsystem_eventQueryOffers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_QueryOffers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execQueryOffers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryOffers(FBP_GetOffers_Callback(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function QueryOffers

// Begin Class UEIK_Subsystem Function RegisterPlayer
struct Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics
{
	struct EIK_Subsystem_eventRegisterPlayer_Parms
	{
		FName SessionName;
		bool bWasInvited;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for registering Players into the session\n" },
#endif
		{ "DisplayName", "Register Players" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for registering Players into the session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bWasInvited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvited;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit(void* Obj)
{
	((EIK_Subsystem_eventRegisterPlayer_Parms*)Obj)->bWasInvited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited = { "bWasInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::EIK_Subsystem_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::EIK_Subsystem_eventRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execRegisterPlayer)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bWasInvited);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayer(Z_Param_SessionName,Z_Param_bWasInvited);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function RegisterPlayer

// Begin Class UEIK_Subsystem Function SetPlayerData
struct Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics
{
	struct EIK_Subsystem_eventSetPlayerData_Parms
	{
		FScriptDelegate Result;
		FString FileName;
		USaveGame* SavedGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3671832323
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_SavedGame = { "SavedGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, SavedGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_SavedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "SetPlayerData", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::EIK_Subsystem_eventSetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::EIK_Subsystem_eventSetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execSetPlayerData)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT(USaveGame,Z_Param_SavedGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerData(FBP_WriteFile_Callback(Z_Param_Out_Result),Z_Param_FileName,Z_Param_SavedGame);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function SetPlayerData

// Begin Class UEIK_Subsystem Function ShowFriendUserInterface
struct Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics
{
	struct EIK_Subsystem_eventShowFriendUserInterface_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Friend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for getting the auth token of a player from an online subsystem.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the auth token of a player from an online subsystem." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_Subsystem_eventShowFriendUserInterface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventShowFriendUserInterface_Parms), &Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "ShowFriendUserInterface", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::EIK_Subsystem_eventShowFriendUserInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::EIK_Subsystem_eventShowFriendUserInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execShowFriendUserInterface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowFriendUserInterface();
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function ShowFriendUserInterface

// Begin Class UEIK_Subsystem Function StartSession
struct Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics
{
	struct EIK_Subsystem_eventStartSession_Parms
	{
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "DisplayName", "Start EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventStartSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "StartSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::EIK_Subsystem_eventStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::EIK_Subsystem_eventStartSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_StartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execStartSession)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function StartSession

// Begin Class UEIK_Subsystem Function UnRegisterPlayer
struct Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics
{
	struct EIK_Subsystem_eventUnRegisterPlayer_Parms
	{
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for unregistering Players into the session\n" },
#endif
		{ "DisplayName", "Unregister Players" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for unregistering Players into the session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUnRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "UnRegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::EIK_Subsystem_eventUnRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::EIK_Subsystem_eventUnRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execUnRegisterPlayer)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegisterPlayer(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function UnRegisterPlayer

// Begin Class UEIK_Subsystem Function UpdateStats
struct Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics
{
	struct EIK_Subsystem_eventUpdateStats_Parms
	{
		FScriptDelegate Result;
		FString StatName;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Statistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stat Functions\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1556013618
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "UpdateStats", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::EIK_Subsystem_eventUpdateStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::EIK_Subsystem_eventUpdateStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Subsystem_UpdateStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Subsystem::execUpdateStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStats(FBP_UpdateStat_Callback(Z_Param_Out_Result),Z_Param_StatName,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UEIK_Subsystem Function UpdateStats

// Begin Class UEIK_Subsystem
void UEIK_Subsystem::StaticRegisterNativesUEIK_Subsystem()
{
	UClass* Class = UEIK_Subsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectEosAndPlayFab", &UEIK_Subsystem::execConnectEosAndPlayFab },
		{ "CreateEOSLobby", &UEIK_Subsystem::execCreateEOSLobby },
		{ "CreateEOSSession", &UEIK_Subsystem::execCreateEOSSession },
		{ "DestroyEosSession", &UEIK_Subsystem::execDestroyEosSession },
		{ "EndSession", &UEIK_Subsystem::execEndSession },
		{ "EnumerateTitleFiles", &UEIK_Subsystem::execEnumerateTitleFiles },
		{ "FindEOSSession", &UEIK_Subsystem::execFindEOSSession },
		{ "GenerateSessionCode", &UEIK_Subsystem::execGenerateSessionCode },
		{ "GetEpicID", &UEIK_Subsystem::execGetEpicID },
		{ "GetLeaderboard", &UEIK_Subsystem::execGetLeaderboard },
		{ "GetLoginStatus", &UEIK_Subsystem::execGetLoginStatus },
		{ "GetOwnedItems", &UEIK_Subsystem::execGetOwnedItems },
		{ "GetPlayerData", &UEIK_Subsystem::execGetPlayerData },
		{ "GetPlayerNickname", &UEIK_Subsystem::execGetPlayerNickname },
		{ "GetProductUserID", &UEIK_Subsystem::execGetProductUserID },
		{ "GetStats", &UEIK_Subsystem::execGetStats },
		{ "GetTitleFile", &UEIK_Subsystem::execGetTitleFile },
		{ "GetTitleFileContent", &UEIK_Subsystem::execGetTitleFileContent },
		{ "GetTitleFileList", &UEIK_Subsystem::execGetTitleFileList },
		{ "GetUserUniqueID", &UEIK_Subsystem::execGetUserUniqueID },
		{ "JoinEosSession", &UEIK_Subsystem::execJoinEosSession },
		{ "LoginWithAccountPortal", &UEIK_Subsystem::execLoginWithAccountPortal },
		{ "LoginWithDeveloperTool", &UEIK_Subsystem::execLoginWithDeveloperTool },
		{ "LoginWithDeviceID", &UEIK_Subsystem::execLoginWithDeviceID },
		{ "LoginWithEpicLauncher", &UEIK_Subsystem::execLoginWithEpicLauncher },
		{ "LoginWithPersistantAuth", &UEIK_Subsystem::execLoginWithPersistantAuth },
		{ "LoginWithSteam", &UEIK_Subsystem::execLoginWithSteam },
		{ "Logout", &UEIK_Subsystem::execLogout },
		{ "OnHostMigrated", &UEIK_Subsystem::execOnHostMigrated },
		{ "PurchaseItem", &UEIK_Subsystem::execPurchaseItem },
		{ "QueryOffers", &UEIK_Subsystem::execQueryOffers },
		{ "RegisterPlayer", &UEIK_Subsystem::execRegisterPlayer },
		{ "SetPlayerData", &UEIK_Subsystem::execSetPlayerData },
		{ "ShowFriendUserInterface", &UEIK_Subsystem::execShowFriendUserInterface },
		{ "StartSession", &UEIK_Subsystem::execStartSession },
		{ "UnRegisterPlayer", &UEIK_Subsystem::execUnRegisterPlayer },
		{ "UpdateStats", &UEIK_Subsystem::execUpdateStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Subsystem);
UClass* Z_Construct_UClass_UEIK_Subsystem_NoRegister()
{
	return UEIK_Subsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_Subsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/EIK_Subsystem.h" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab, "ConnectEosAndPlayFab" }, // 1146511257
		{ &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby, "CreateEOSLobby" }, // 2274264743
		{ &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession, "CreateEOSSession" }, // 2611342917
		{ &Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession, "DestroyEosSession" }, // 4206648410
		{ &Z_Construct_UFunction_UEIK_Subsystem_EndSession, "EndSession" }, // 687161781
		{ &Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles, "EnumerateTitleFiles" }, // 4011077952
		{ &Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession, "FindEOSSession" }, // 2998844186
		{ &Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode, "GenerateSessionCode" }, // 3956367657
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetEpicID, "GetEpicID" }, // 1469148117
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard, "GetLeaderboard" }, // 2541240141
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus, "GetLoginStatus" }, // 3602865045
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems, "GetOwnedItems" }, // 1573312301
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData, "GetPlayerData" }, // 4278223175
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname, "GetPlayerNickname" }, // 2469473583
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID, "GetProductUserID" }, // 2050520670
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetStats, "GetStats" }, // 1733824259
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile, "GetTitleFile" }, // 2008167366
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent, "GetTitleFileContent" }, // 838298707
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList, "GetTitleFileList" }, // 1134223879
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID, "GetUserUniqueID" }, // 4028535448
		{ &Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession, "JoinEosSession" }, // 1254317530
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal, "LoginWithAccountPortal" }, // 4038777403
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool, "LoginWithDeveloperTool" }, // 2040042460
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID, "LoginWithDeviceID" }, // 1351044451
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher, "LoginWithEpicLauncher" }, // 1848969192
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth, "LoginWithPersistantAuth" }, // 4084762157
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam, "LoginWithSteam" }, // 2326149610
		{ &Z_Construct_UFunction_UEIK_Subsystem_Logout, "Logout" }, // 1797740079
		{ &Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated, "OnHostMigrated" }, // 1686644386
		{ &Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem, "PurchaseItem" }, // 1375092934
		{ &Z_Construct_UFunction_UEIK_Subsystem_QueryOffers, "QueryOffers" }, // 527645714
		{ &Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer, "RegisterPlayer" }, // 3730715948
		{ &Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData, "SetPlayerData" }, // 2127312768
		{ &Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface, "ShowFriendUserInterface" }, // 561860576
		{ &Z_Construct_UFunction_UEIK_Subsystem_StartSession, "StartSession" }, // 2951685828
		{ &Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer, "UnRegisterPlayer" }, // 2132913275
		{ &Z_Construct_UFunction_UEIK_Subsystem_UpdateStats, "UpdateStats" }, // 3744112866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Subsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_Subsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Subsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Subsystem_Statics::ClassParams = {
	&UEIK_Subsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Subsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Subsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton, Z_Construct_UClass_UEIK_Subsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Subsystem>()
{
	return UEIK_Subsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Subsystem);
UEIK_Subsystem::~UEIK_Subsystem() {}
// End Class UEIK_Subsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEIKAttributeType_StaticEnum, TEXT("EEIKAttributeType"), &Z_Registration_Info_UEnum_EEIKAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1656980961U) },
		{ ERegionInfo_StaticEnum, TEXT("ERegionInfo"), &Z_Registration_Info_UEnum_ERegionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1209445512U) },
		{ EMatchType_StaticEnum, TEXT("EMatchType"), &Z_Registration_Info_UEnum_EMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1973039095U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIKAttribute::StaticStruct, Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewStructOps, TEXT("EIKAttribute"), &Z_Registration_Info_UScriptStruct_EIKAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKAttribute), 3874449400U) },
		{ FOffersStruct::StaticStruct, Z_Construct_UScriptStruct_FOffersStruct_Statics::NewStructOps, TEXT("OffersStruct"), &Z_Registration_Info_UScriptStruct_OffersStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOffersStruct), 3833374453U) },
		{ FSessionFindStruct::StaticStruct, Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewStructOps, TEXT("SessionFindStruct"), &Z_Registration_Info_UScriptStruct_SessionFindStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionFindStruct), 1699625377U) },
		{ FFileListStruct::StaticStruct, Z_Construct_UScriptStruct_FFileListStruct_Statics::NewStructOps, TEXT("FileListStruct"), &Z_Registration_Info_UScriptStruct_FileListStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileListStruct), 2717628474U) },
		{ FEIKUniqueNetId::StaticStruct, Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::NewStructOps, TEXT("EIKUniqueNetId"), &Z_Registration_Info_UScriptStruct_EIKUniqueNetId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKUniqueNetId), 3785727623U) },
		{ FEIK_Stats::StaticStruct, Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewStructOps, TEXT("EIK_Stats"), &Z_Registration_Info_UScriptStruct_EIK_Stats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Stats), 853134591U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Subsystem, UEIK_Subsystem::StaticClass, TEXT("UEIK_Subsystem"), &Z_Registration_Info_UClass_UEIK_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Subsystem), 3588826388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_732708234(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

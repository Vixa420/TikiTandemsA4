// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EIKVoiceChat/Subsystem/EIK_Voice_Subsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Voice_Subsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EIKVOICECHAT_API UClass* Z_Construct_UClass_UEIK_Voice_Subsystem();
EIKVOICECHAT_API UClass* Z_Construct_UClass_UEIK_Voice_Subsystem_NoRegister();
EIKVOICECHAT_API UEnum* Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes();
EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature();
EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature();
EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature();
EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature();
EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature();
EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings();
EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FEVIKPlayerList();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_EIKVoiceChat();
// End Cross Module References

// Begin Enum EEVIKResultCodes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEVIKResultCodes;
static UEnum* EEVIKResultCodes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes, (UObject*)Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("EEVIKResultCodes"));
	}
	return Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton;
}
template<> EIKVOICECHAT_API UEnum* StaticEnum<EEVIKResultCodes>()
{
	return EEVIKResultCodes_StaticEnum();
}
struct Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EEVIKResultCodes::Failed" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
		{ "Success.Name", "EEVIKResultCodes::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEVIKResultCodes::Success", (int64)EEVIKResultCodes::Success },
		{ "EEVIKResultCodes::Failed", (int64)EEVIKResultCodes::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	nullptr,
	"EEVIKResultCodes",
	"EEVIKResultCodes",
	Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes()
{
	if (!Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton, Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton;
}
// End Enum EEVIKResultCodes

// Begin ScriptStruct FDeviceEVIKSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceEVIKSettings;
class UScriptStruct* FDeviceEVIKSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceEVIKSettings, (UObject*)Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("DeviceEVIKSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton;
}
template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<FDeviceEVIKSettings>()
{
	return FDeviceEVIKSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceEVIKSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceEVIKSettings, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceEVIKSettings, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	nullptr,
	&NewStructOps,
	"DeviceEVIKSettings",
	Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers),
	sizeof(FDeviceEVIKSettings),
	alignof(FDeviceEVIKSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton, Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton;
}
// End ScriptStruct FDeviceEVIKSettings

// Begin ScriptStruct FEVIKPlayerList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EVIKPlayerList;
class UScriptStruct* FEVIKPlayerList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEVIKPlayerList, (UObject*)Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("EVIKPlayerList"));
	}
	return Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton;
}
template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<FEVIKPlayerList>()
{
	return FEVIKPlayerList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEVIKPlayerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerEOSVoiceChatName_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerEOSVoiceChatName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEVIKPlayerList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName = { "PlayerEOSVoiceChatName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVIKPlayerList, PlayerEOSVoiceChatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerEOSVoiceChatName_MetaData), NewProp_PlayerEOSVoiceChatName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVIKPlayerList, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActor_MetaData), NewProp_PlayerActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	nullptr,
	&NewStructOps,
	"EVIKPlayerList",
	Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers),
	sizeof(FEVIKPlayerList),
	alignof(FEVIKPlayerList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEVIKPlayerList()
{
	if (!Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton, Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton;
}
// End ScriptStruct FEVIKPlayerList

// Begin Delegate FEIKResultDelegate
struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics
{
	struct _Script_EIKVoiceChat_eventEIKResultDelegate_Parms
	{
		bool bWasSuccess;
		EEVIKResultCodes Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_EIKVoiceChat_eventEIKResultDelegate_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EIKVoiceChat_eventEIKResultDelegate_Parms), &Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIKResultDelegate_Parms, Result), Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes, METADATA_PARAMS(0, nullptr) }; // 3302218158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIKResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIKResultDelegate_DelegateWrapper(const FScriptDelegate& EIKResultDelegate, bool bWasSuccess, EEVIKResultCodes Result)
{
	struct _Script_EIKVoiceChat_eventEIKResultDelegate_Parms
	{
		bool bWasSuccess;
		EEVIKResultCodes Result;
	};
	_Script_EIKVoiceChat_eventEIKResultDelegate_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Result=Result;
	EIKResultDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIKResultDelegate

// Begin Delegate FEIKRoomTokenResultDelegate
struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics
{
	struct _Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms
	{
		bool bWasSuccess;
		FString RoomData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms), &Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms, RoomData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_RoomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIKRoomTokenResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIKRoomTokenResultDelegate_DelegateWrapper(const FScriptDelegate& EIKRoomTokenResultDelegate, bool bWasSuccess, const FString& RoomData)
{
	struct _Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms
	{
		bool bWasSuccess;
		FString RoomData;
	};
	_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.RoomData=RoomData;
	EIKRoomTokenResultDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIKRoomTokenResultDelegate

// Begin Delegate FEIK_OnPlayerAdded
struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics
{
	struct _Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms
	{
		FString ChannelName;
		FString PlayerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms, ChannelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIK_OnPlayerAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnPlayerAdded_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnPlayerAdded, const FString& ChannelName, const FString& PlayerName)
{
	struct _Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms
	{
		FString ChannelName;
		FString PlayerName;
	};
	_Script_EIKVoiceChat_eventEIK_OnPlayerAdded_Parms Parms;
	Parms.ChannelName=ChannelName;
	Parms.PlayerName=PlayerName;
	EIK_OnPlayerAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnPlayerAdded

// Begin Delegate FEIK_OnPlayerRemoved
struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics
{
	struct _Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms
	{
		FString ChannelName;
		FString PlayerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms, ChannelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIK_OnPlayerRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnPlayerRemoved_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnPlayerRemoved, const FString& ChannelName, const FString& PlayerName)
{
	struct _Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms
	{
		FString ChannelName;
		FString PlayerName;
	};
	_Script_EIKVoiceChat_eventEIK_OnPlayerRemoved_Parms Parms;
	Parms.ChannelName=ChannelName;
	Parms.PlayerName=PlayerName;
	EIK_OnPlayerRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnPlayerRemoved

// Begin Delegate FEIK_OnChannelExited
struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics
{
	struct _Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms
	{
		FString ChannelName;
		FString Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms, ChannelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIK_OnChannelExited__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnChannelExited_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnChannelExited, const FString& ChannelName, const FString& Result)
{
	struct _Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms
	{
		FString ChannelName;
		FString Result;
	};
	_Script_EIKVoiceChat_eventEIK_OnChannelExited_Parms Parms;
	Parms.ChannelName=ChannelName;
	Parms.Result=Result;
	EIK_OnChannelExited.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnChannelExited

// Begin Class UEIK_Voice_Subsystem Function EVIK_Local_Connect
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics
{
	struct EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms
	{
		FScriptDelegate ResultDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms, ResultDelegate), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultDelegate_MetaData), NewProp_ResultDelegate_MetaData) }; // 3134908429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "EVIK_Local_Connect", nullptr, nullptr, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execEVIK_Local_Connect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EVIK_Local_Connect(FEIKResultDelegate(Z_Param_Out_ResultDelegate));
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function EVIK_Local_Connect

// Begin Class UEIK_Voice_Subsystem Function EVIK_Local_Initialize
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics
{
	struct EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "EVIK_Local_Initialize", nullptr, nullptr, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execEVIK_Local_Initialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EVIK_Local_Initialize();
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function EVIK_Local_Initialize

// Begin Class UEIK_Voice_Subsystem Function ForceUpdateOutputVolume
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics
{
	struct EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms
	{
		bool bUseThisVolume;
		bool bUseWithPositionalChat;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseThisVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseThisVolume;
	static void NewProp_bUseWithPositionalChat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWithPositionalChat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume_SetBit(void* Obj)
{
	((EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms*)Obj)->bUseThisVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume = { "bUseThisVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat_SetBit(void* Obj)
{
	((EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms*)Obj)->bUseWithPositionalChat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat = { "bUseWithPositionalChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "ForceUpdateOutputVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execForceUpdateOutputVolume)
{
	P_GET_UBOOL(Z_Param_bUseThisVolume);
	P_GET_UBOOL(Z_Param_bUseWithPositionalChat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdateOutputVolume(Z_Param_bUseThisVolume,Z_Param_bUseWithPositionalChat,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function ForceUpdateOutputVolume

// Begin Class UEIK_Voice_Subsystem Function PlayerListUpdated
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "PlayerListUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execPlayerListUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerListUpdated();
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function PlayerListUpdated

// Begin Class UEIK_Voice_Subsystem Function SetupPlayerList
struct EIK_Voice_Subsystem_eventSetupPlayerList_Parms
{
	TArray<FEVIKPlayerList> PlayerList;
};
static FName NAME_UEIK_Voice_Subsystem_SetupPlayerList = FName(TEXT("SetupPlayerList"));
void UEIK_Voice_Subsystem::SetupPlayerList(TArray<FEVIKPlayerList> const& PlayerList)
{
	EIK_Voice_Subsystem_eventSetupPlayerList_Parms Parms;
	Parms.PlayerList=PlayerList;
	ProcessEvent(FindFunctionChecked(NAME_UEIK_Voice_Subsystem_SetupPlayerList),&Parms);
}
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_Inner = { "PlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEVIKPlayerList, METADATA_PARAMS(0, nullptr) }; // 3900773060
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList = { "PlayerList", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Voice_Subsystem_eventSetupPlayerList_Parms, PlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerList_MetaData), NewProp_PlayerList_MetaData) }; // 3900773060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "SetupPlayerList", nullptr, nullptr, Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers), sizeof(EIK_Voice_Subsystem_eventSetupPlayerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(EIK_Voice_Subsystem_eventSetupPlayerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execSetupPlayerList)
{
	P_GET_TARRAY(FEVIKPlayerList,Z_Param_PlayerList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayerList_Implementation(Z_Param_PlayerList);
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function SetupPlayerList

// Begin Class UEIK_Voice_Subsystem Function UpdatePositionalVoiceChat
struct Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics
{
	struct EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms
	{
		bool UsePositionalVoiceChat;
		float FMaxHearingDistance;
		bool V_bUseDebugPoint;
		FVector V_DebugPointLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UsePositionalVoiceChat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePositionalVoiceChat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FMaxHearingDistance;
	static void NewProp_V_bUseDebugPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_V_bUseDebugPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_V_DebugPointLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat_SetBit(void* Obj)
{
	((EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms*)Obj)->UsePositionalVoiceChat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat = { "UsePositionalVoiceChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_FMaxHearingDistance = { "FMaxHearingDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms, FMaxHearingDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_bUseDebugPoint_SetBit(void* Obj)
{
	((EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms*)Obj)->V_bUseDebugPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_bUseDebugPoint = { "V_bUseDebugPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_bUseDebugPoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_DebugPointLocation = { "V_DebugPointLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms, V_DebugPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_FMaxHearingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_bUseDebugPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_V_DebugPointLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "UpdatePositionalVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Voice_Subsystem::execUpdatePositionalVoiceChat)
{
	P_GET_UBOOL(Z_Param_UsePositionalVoiceChat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FMaxHearingDistance);
	P_GET_UBOOL(Z_Param_V_bUseDebugPoint);
	P_GET_STRUCT(FVector,Z_Param_V_DebugPointLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePositionalVoiceChat(Z_Param_UsePositionalVoiceChat,Z_Param_FMaxHearingDistance,Z_Param_V_bUseDebugPoint,Z_Param_V_DebugPointLocation);
	P_NATIVE_END;
}
// End Class UEIK_Voice_Subsystem Function UpdatePositionalVoiceChat

// Begin Class UEIK_Voice_Subsystem
void UEIK_Voice_Subsystem::StaticRegisterNativesUEIK_Voice_Subsystem()
{
	UClass* Class = UEIK_Voice_Subsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EVIK_Local_Connect", &UEIK_Voice_Subsystem::execEVIK_Local_Connect },
		{ "EVIK_Local_Initialize", &UEIK_Voice_Subsystem::execEVIK_Local_Initialize },
		{ "ForceUpdateOutputVolume", &UEIK_Voice_Subsystem::execForceUpdateOutputVolume },
		{ "PlayerListUpdated", &UEIK_Voice_Subsystem::execPlayerListUpdated },
		{ "SetupPlayerList", &UEIK_Voice_Subsystem::execSetupPlayerList },
		{ "UpdatePositionalVoiceChat", &UEIK_Voice_Subsystem::execUpdatePositionalVoiceChat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Voice_Subsystem);
UClass* Z_Construct_UClass_UEIK_Voice_Subsystem_NoRegister()
{
	return UEIK_Voice_Subsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_Voice_Subsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystem/EIK_Voice_Subsystem.h" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerListVar_MetaData[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerRemoved_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerAdded_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChannelExited_MetaData[] = {
		{ "Category", "EOS Integration Kit|Voice Chat" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerListVar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerListVar;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChannelExited;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect, "EVIK_Local_Connect" }, // 841279239
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize, "EVIK_Local_Initialize" }, // 1653706419
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume, "ForceUpdateOutputVolume" }, // 2950962354
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated, "PlayerListUpdated" }, // 1006768245
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList, "SetupPlayerList" }, // 3317755850
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat, "UpdatePositionalVoiceChat" }, // 51953077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Voice_Subsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_Inner = { "PlayerListVar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEVIKPlayerList, METADATA_PARAMS(0, nullptr) }; // 3900773060
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar = { "PlayerListVar", "PlayerListUpdated", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Voice_Subsystem, PlayerListVar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerListVar_MetaData), NewProp_PlayerListVar_MetaData) }; // 3900773060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnPlayerRemoved = { "OnPlayerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Voice_Subsystem, OnPlayerRemoved), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerRemoved_MetaData), NewProp_OnPlayerRemoved_MetaData) }; // 3010868898
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnPlayerAdded = { "OnPlayerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Voice_Subsystem, OnPlayerAdded), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnPlayerAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerAdded_MetaData), NewProp_OnPlayerAdded_MetaData) }; // 792991198
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnChannelExited = { "OnChannelExited", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Voice_Subsystem, OnChannelExited), Z_Construct_UDelegateFunction_EIKVoiceChat_EIK_OnChannelExited__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChannelExited_MetaData), NewProp_OnChannelExited_MetaData) }; // 3043906390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnPlayerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnPlayerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_OnChannelExited,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::ClassParams = {
	&UEIK_Voice_Subsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Voice_Subsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton, Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton;
}
template<> EIKVOICECHAT_API UClass* StaticClass<UEIK_Voice_Subsystem>()
{
	return UEIK_Voice_Subsystem::StaticClass();
}
void UEIK_Voice_Subsystem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerListVar(TEXT("PlayerListVar"));
	const bool bIsValid = true
		&& Name_PlayerListVar == ClassReps[(int32)ENetFields_Private::PlayerListVar].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEIK_Voice_Subsystem"));
}
UEIK_Voice_Subsystem::UEIK_Voice_Subsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Voice_Subsystem);
UEIK_Voice_Subsystem::~UEIK_Voice_Subsystem() {}
// End Class UEIK_Voice_Subsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEVIKResultCodes_StaticEnum, TEXT("EEVIKResultCodes"), &Z_Registration_Info_UEnum_EEVIKResultCodes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3302218158U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeviceEVIKSettings::StaticStruct, Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewStructOps, TEXT("DeviceEVIKSettings"), &Z_Registration_Info_UScriptStruct_DeviceEVIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceEVIKSettings), 1398718711U) },
		{ FEVIKPlayerList::StaticStruct, Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewStructOps, TEXT("EVIKPlayerList"), &Z_Registration_Info_UScriptStruct_EVIKPlayerList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVIKPlayerList), 3900773060U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Voice_Subsystem, UEIK_Voice_Subsystem::StaticClass, TEXT("UEIK_Voice_Subsystem"), &Z_Registration_Info_UClass_UEIK_Voice_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Voice_Subsystem), 3537399717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_4021486383(TEXT("/Script/EIKVoiceChat"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

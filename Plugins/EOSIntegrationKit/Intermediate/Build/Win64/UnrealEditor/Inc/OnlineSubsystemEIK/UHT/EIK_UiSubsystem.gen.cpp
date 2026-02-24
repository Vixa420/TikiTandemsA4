// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/UIInterface/EIK_UiSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_UiSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UiSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UiSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_UI_ENotificationLocation();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_NotificationId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_UI_EventId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnDisplaySettingsUpdated
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms
	{
		bool bIsVisible;
		bool bIsExclusiveInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsExclusiveInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExclusiveInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsExclusiveInput_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms*)Obj)->bIsExclusiveInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsExclusiveInput = { "bIsExclusiveInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsExclusiveInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::NewProp_bIsExclusiveInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnDisplaySettingsUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnDisplaySettingsUpdated_DelegateWrapper(const FScriptDelegate& EIK_OnDisplaySettingsUpdated, bool bIsVisible, bool bIsExclusiveInput)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms
	{
		bool bIsVisible;
		bool bIsExclusiveInput;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnDisplaySettingsUpdated_Parms Parms;
	Parms.bIsVisible=bIsVisible ? true : false;
	Parms.bIsExclusiveInput=bIsExclusiveInput ? true : false;
	EIK_OnDisplaySettingsUpdated.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnDisplaySettingsUpdated

// Begin Delegate FEIK_OnMemoryMonitor
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnMemoryMonitor__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnMemoryMonitor_DelegateWrapper(const FScriptDelegate& EIK_OnMemoryMonitor)
{
	EIK_OnMemoryMonitor.ProcessDelegate<UObject>(NULL);
}
// End Delegate FEIK_OnMemoryMonitor

// Begin Class UEIK_UiSubsystem Function EIK_UI_AcknowledgeEventId
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms
	{
		FEIK_UI_EventId UiEventId;
		TEnumAsByte<EEIK_Result> Result;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Lets the SDK know that the given UI event ID has been acknowledged and should be released. EOS_Success is returned if the UI event ID has been acknowledged. EOS_NotFound is returned if the UI event ID does not exist.\n" },
#endif
		{ "DisplayName", "EOS_UI_AcknowledgeEventId" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets the SDK know that the given UI event ID has been acknowledged and should be released. EOS_Success is returned if the UI event ID has been acknowledged. EOS_NotFound is returned if the UI event ID does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiEventId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UiEventId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_UiEventId = { "UiEventId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms, UiEventId), Z_Construct_UScriptStruct_FEIK_UI_EventId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiEventId_MetaData), NewProp_UiEventId_MetaData) }; // 272776284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_UiEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_AcknowledgeEventId", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::EIK_UiSubsystem_eventEIK_UI_AcknowledgeEventId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_AcknowledgeEventId)
{
	P_GET_STRUCT_REF(FEIK_UI_EventId,Z_Param_Out_UiEventId);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_UiSubsystem::EIK_UI_AcknowledgeEventId(Z_Param_Out_UiEventId,(TEnumAsByte<EEIK_Result>&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_AcknowledgeEventId

// Begin Class UEIK_UiSubsystem Function EIK_UI_AddNotifyDisplaySettingsUpdated
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_AddNotifyDisplaySettingsUpdated_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications when the overlay display settings are updated. Newly registered handlers will always be called the next tick with the current state.\n" },
#endif
		{ "DisplayName", "EOS_UI_AddNotifyDisplaySettingsUpdated" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications when the overlay display settings are updated. Newly registered handlers will always be called the next tick with the current state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AddNotifyDisplaySettingsUpdated_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDisplaySettingsUpdated__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3175767529
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AddNotifyDisplaySettingsUpdated_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_AddNotifyDisplaySettingsUpdated", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::EIK_UiSubsystem_eventEIK_UI_AddNotifyDisplaySettingsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::EIK_UiSubsystem_eventEIK_UI_AddNotifyDisplaySettingsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_AddNotifyDisplaySettingsUpdated)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_UI_AddNotifyDisplaySettingsUpdated(FEIK_OnDisplaySettingsUpdated(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_AddNotifyDisplaySettingsUpdated

// Begin Class UEIK_UiSubsystem Function EIK_UI_AddNotifyMemoryMonitor
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_AddNotifyMemoryMonitor_Parms
	{
		FScriptDelegate Callback;
		FEIK_NotificationId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register to receive notifications from the memory monitor. Newly registered handlers will always be called the next tick with the current state.\n" },
#endif
		{ "DisplayName", "EOS_UI_AddNotifyMemoryMonitor" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register to receive notifications from the memory monitor. Newly registered handlers will always be called the next tick with the current state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AddNotifyMemoryMonitor_Parms, Callback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnMemoryMonitor__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1641600848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_AddNotifyMemoryMonitor_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_AddNotifyMemoryMonitor", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::EIK_UiSubsystem_eventEIK_UI_AddNotifyMemoryMonitor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::EIK_UiSubsystem_eventEIK_UI_AddNotifyMemoryMonitor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_AddNotifyMemoryMonitor)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_NotificationId*)Z_Param__Result=P_THIS->EIK_UI_AddNotifyMemoryMonitor(FEIK_OnMemoryMonitor(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_AddNotifyMemoryMonitor

// Begin Class UEIK_UiSubsystem Function EIK_UI_GetFriendsExclusiveInput
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the friends overlay exclusive input state.\n" },
#endif
		{ "DisplayName", "EOS_UI_GetFriendsExclusiveInput" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the friends overlay exclusive input state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
void Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms), &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_GetFriendsExclusiveInput", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::EIK_UiSubsystem_eventEIK_UI_GetFriendsExclusiveInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_GetFriendsExclusiveInput)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_UiSubsystem::EIK_UI_GetFriendsExclusiveInput(Z_Param_Out_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_GetFriendsExclusiveInput

// Begin Class UEIK_UiSubsystem Function EIK_UI_GetFriendsVisible
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the friends overlay visibility.\n" },
#endif
		{ "DisplayName", "EOS_UI_GetFriendsVisible" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the friends overlay visibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
void Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms), &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_GetFriendsVisible", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::EIK_UiSubsystem_eventEIK_UI_GetFriendsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_GetFriendsVisible)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_UiSubsystem::EIK_UI_GetFriendsVisible(Z_Param_Out_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_GetFriendsVisible

// Begin Class UEIK_UiSubsystem Function EIK_UI_GetNotificationLocationPreference
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_GetNotificationLocationPreference_Parms
	{
		TEnumAsByte<EEIK_UI_ENotificationLocation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the current notification location display preference.\n" },
#endif
		{ "DisplayName", "EOS_UI_GetNotificationLocationPreference" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current notification location display preference." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_GetNotificationLocationPreference_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_UI_ENotificationLocation, METADATA_PARAMS(0, nullptr) }; // 138971362
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_GetNotificationLocationPreference", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::EIK_UiSubsystem_eventEIK_UI_GetNotificationLocationPreference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::EIK_UiSubsystem_eventEIK_UI_GetNotificationLocationPreference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_GetNotificationLocationPreference)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_UI_ENotificationLocation>*)Z_Param__Result=UEIK_UiSubsystem::EIK_UI_GetNotificationLocationPreference();
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_GetNotificationLocationPreference

// Begin Class UEIK_UiSubsystem Function EIK_UI_PauseSocialOverlay
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms
	{
		bool bIsPaused;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the bIsPaused state of the overlay. While true then all notifications will be delayed until after the bIsPaused is false again. While true then the key and button events will not toggle the overlay. If the Overlay was visible before being paused then it will be hidden. If it is known that the Overlay should now be visible after being paused then it will be shown.\n" },
#endif
		{ "DisplayName", "EOS_UI_PauseSocialOverlay" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the bIsPaused state of the overlay. While true then all notifications will be delayed until after the bIsPaused is false again. While true then the key and button events will not toggle the overlay. If the Overlay was visible before being paused then it will be hidden. If it is known that the Overlay should now be visible after being paused then it will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms), &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_bIsPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_PauseSocialOverlay", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::EIK_UiSubsystem_eventEIK_UI_PauseSocialOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_PauseSocialOverlay)
{
	P_GET_UBOOL(Z_Param_bIsPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_UI_PauseSocialOverlay(Z_Param_bIsPaused);
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_PauseSocialOverlay

// Begin Class UEIK_UiSubsystem Function EIK_UI_RemoveNotifyDisplaySettingsUpdated
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_RemoveNotifyDisplaySettingsUpdated_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when the overlay display settings are updated.\n" },
#endif
		{ "DisplayName", "EOS_UI_RemoveNotifyDisplaySettingsUpdated" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when the overlay display settings are updated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_RemoveNotifyDisplaySettingsUpdated_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_RemoveNotifyDisplaySettingsUpdated", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::EIK_UiSubsystem_eventEIK_UI_RemoveNotifyDisplaySettingsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::EIK_UiSubsystem_eventEIK_UI_RemoveNotifyDisplaySettingsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_RemoveNotifyDisplaySettingsUpdated)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_UI_RemoveNotifyDisplaySettingsUpdated(Z_Param_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_RemoveNotifyDisplaySettingsUpdated

// Begin Class UEIK_UiSubsystem Function EIK_UI_RemoveNotifyMemoryMonitor
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_RemoveNotifyMemoryMonitor_Parms
	{
		FEIK_NotificationId NotificationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister from receiving notifications when the memory monitor posts a notification.\n" },
#endif
		{ "DisplayName", "EOS_UI_RemoveNotifyMemoryMonitor" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister from receiving notifications when the memory monitor posts a notification." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_RemoveNotifyMemoryMonitor_Parms, NotificationId), Z_Construct_UScriptStruct_FEIK_NotificationId, METADATA_PARAMS(0, nullptr) }; // 2277137232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::NewProp_NotificationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_RemoveNotifyMemoryMonitor", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::EIK_UiSubsystem_eventEIK_UI_RemoveNotifyMemoryMonitor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::EIK_UiSubsystem_eventEIK_UI_RemoveNotifyMemoryMonitor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_RemoveNotifyMemoryMonitor)
{
	P_GET_STRUCT(FEIK_NotificationId,Z_Param_NotificationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EIK_UI_RemoveNotifyMemoryMonitor(Z_Param_NotificationId);
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_RemoveNotifyMemoryMonitor

// Begin Class UEIK_UiSubsystem Function EIK_UI_SetDisplayPreference
struct Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics
{
	struct EIK_UiSubsystem_eventEIK_UI_SetDisplayPreference_Parms
	{
		TEnumAsByte<EEIK_UI_ENotificationLocation> DisplayPreference;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | UI Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Define any preferences for any display settings.\n" },
#endif
		{ "DisplayName", "EOS_UI_SetDisplayPreference" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define any preferences for any display settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPreference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayPreference;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::NewProp_DisplayPreference = { "DisplayPreference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_SetDisplayPreference_Parms, DisplayPreference), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_UI_ENotificationLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPreference_MetaData), NewProp_DisplayPreference_MetaData) }; // 138971362
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UiSubsystem_eventEIK_UI_SetDisplayPreference_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::NewProp_DisplayPreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UiSubsystem, nullptr, "EIK_UI_SetDisplayPreference", nullptr, nullptr, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::EIK_UiSubsystem_eventEIK_UI_SetDisplayPreference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::EIK_UiSubsystem_eventEIK_UI_SetDisplayPreference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UiSubsystem::execEIK_UI_SetDisplayPreference)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_DisplayPreference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=P_THIS->EIK_UI_SetDisplayPreference((TEnumAsByte<EEIK_UI_ENotificationLocation>&)(Z_Param_Out_DisplayPreference));
	P_NATIVE_END;
}
// End Class UEIK_UiSubsystem Function EIK_UI_SetDisplayPreference

// Begin Class UEIK_UiSubsystem
void UEIK_UiSubsystem::StaticRegisterNativesUEIK_UiSubsystem()
{
	UClass* Class = UEIK_UiSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_UI_AcknowledgeEventId", &UEIK_UiSubsystem::execEIK_UI_AcknowledgeEventId },
		{ "EIK_UI_AddNotifyDisplaySettingsUpdated", &UEIK_UiSubsystem::execEIK_UI_AddNotifyDisplaySettingsUpdated },
		{ "EIK_UI_AddNotifyMemoryMonitor", &UEIK_UiSubsystem::execEIK_UI_AddNotifyMemoryMonitor },
		{ "EIK_UI_GetFriendsExclusiveInput", &UEIK_UiSubsystem::execEIK_UI_GetFriendsExclusiveInput },
		{ "EIK_UI_GetFriendsVisible", &UEIK_UiSubsystem::execEIK_UI_GetFriendsVisible },
		{ "EIK_UI_GetNotificationLocationPreference", &UEIK_UiSubsystem::execEIK_UI_GetNotificationLocationPreference },
		{ "EIK_UI_PauseSocialOverlay", &UEIK_UiSubsystem::execEIK_UI_PauseSocialOverlay },
		{ "EIK_UI_RemoveNotifyDisplaySettingsUpdated", &UEIK_UiSubsystem::execEIK_UI_RemoveNotifyDisplaySettingsUpdated },
		{ "EIK_UI_RemoveNotifyMemoryMonitor", &UEIK_UiSubsystem::execEIK_UI_RemoveNotifyMemoryMonitor },
		{ "EIK_UI_SetDisplayPreference", &UEIK_UiSubsystem::execEIK_UI_SetDisplayPreference },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_UiSubsystem);
UClass* Z_Construct_UClass_UEIK_UiSubsystem_NoRegister()
{
	return UEIK_UiSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_UiSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/UIInterface/EIK_UiSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AcknowledgeEventId, "EIK_UI_AcknowledgeEventId" }, // 4037810590
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyDisplaySettingsUpdated, "EIK_UI_AddNotifyDisplaySettingsUpdated" }, // 2276887957
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_AddNotifyMemoryMonitor, "EIK_UI_AddNotifyMemoryMonitor" }, // 3620039234
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsExclusiveInput, "EIK_UI_GetFriendsExclusiveInput" }, // 543203864
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetFriendsVisible, "EIK_UI_GetFriendsVisible" }, // 2910992576
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_GetNotificationLocationPreference, "EIK_UI_GetNotificationLocationPreference" }, // 245742331
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_PauseSocialOverlay, "EIK_UI_PauseSocialOverlay" }, // 1514223659
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyDisplaySettingsUpdated, "EIK_UI_RemoveNotifyDisplaySettingsUpdated" }, // 2274934824
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_RemoveNotifyMemoryMonitor, "EIK_UI_RemoveNotifyMemoryMonitor" }, // 2137217852
		{ &Z_Construct_UFunction_UEIK_UiSubsystem_EIK_UI_SetDisplayPreference, "EIK_UI_SetDisplayPreference" }, // 3552317750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_UiSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_UiSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UiSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_UiSubsystem_Statics::ClassParams = {
	&UEIK_UiSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UiSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_UiSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_UiSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_UiSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_UiSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_UiSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_UiSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_UiSubsystem>()
{
	return UEIK_UiSubsystem::StaticClass();
}
UEIK_UiSubsystem::UEIK_UiSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_UiSubsystem);
UEIK_UiSubsystem::~UEIK_UiSubsystem() {}
// End Class UEIK_UiSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_UiSubsystem, UEIK_UiSubsystem::StaticClass, TEXT("UEIK_UiSubsystem"), &Z_Registration_Info_UClass_UEIK_UiSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_UiSubsystem), 1847650840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_4178967772(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UIInterface_EIK_UiSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

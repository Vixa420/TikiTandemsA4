// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Presence_SetPresence() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Presence_SetPresence();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Presence_SetPresence_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HPresenceModification();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Presence_SetPresenceComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Presence_SetPresenceComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Presence_SetPresenceComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Presence_SetPresenceComplete, FEIK_EpicAccountId const& LocalUserId, TEnumAsByte<EEIK_Result> const& Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Presence_SetPresenceComplete_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Result=Result;
	EIK_Presence_SetPresenceComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Presence_SetPresenceComplete

// Begin Class UEIK_Presence_SetPresence Function EIK_Presence_SetPresence
struct Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics
{
	struct EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_HPresenceModification PresenceModificationHandle;
		UEIK_Presence_SetPresence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Presence Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.\n" },
#endif
		{ "DisplayName", "EOS_Presence_SetPresence" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceModificationHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_PresenceModificationHandle = { "PresenceModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms, PresenceModificationHandle), Z_Construct_UScriptStruct_FEIK_HPresenceModification, METADATA_PARAMS(0, nullptr) }; // 228223137
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms, ReturnValue), Z_Construct_UClass_UEIK_Presence_SetPresence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_PresenceModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Presence_SetPresence, nullptr, "EIK_Presence_SetPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::EIK_Presence_SetPresence_eventEIK_Presence_SetPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Presence_SetPresence::execEIK_Presence_SetPresence)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_HPresenceModification,Z_Param_PresenceModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Presence_SetPresence**)Z_Param__Result=UEIK_Presence_SetPresence::EIK_Presence_SetPresence(Z_Param_LocalUserId,Z_Param_PresenceModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_Presence_SetPresence Function EIK_Presence_SetPresence

// Begin Class UEIK_Presence_SetPresence
void UEIK_Presence_SetPresence::StaticRegisterNativesUEIK_Presence_SetPresence()
{
	UClass* Class = UEIK_Presence_SetPresence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Presence_SetPresence", &UEIK_Presence_SetPresence::execEIK_Presence_SetPresence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Presence_SetPresence);
UClass* Z_Construct_UClass_UEIK_Presence_SetPresence_NoRegister()
{
	return UEIK_Presence_SetPresence::StaticClass();
}
struct Z_Construct_UClass_UEIK_Presence_SetPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h" },
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/PresenceInterface/EIK_Presence_SetPresence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Presence_SetPresence_EIK_Presence_SetPresence, "EIK_Presence_SetPresence" }, // 149208456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Presence_SetPresence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Presence_SetPresence, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Presence_SetPresenceComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3783449006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::ClassParams = {
	&UEIK_Presence_SetPresence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Presence_SetPresence()
{
	if (!Z_Registration_Info_UClass_UEIK_Presence_SetPresence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Presence_SetPresence.OuterSingleton, Z_Construct_UClass_UEIK_Presence_SetPresence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Presence_SetPresence.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Presence_SetPresence>()
{
	return UEIK_Presence_SetPresence::StaticClass();
}
UEIK_Presence_SetPresence::UEIK_Presence_SetPresence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Presence_SetPresence);
UEIK_Presence_SetPresence::~UEIK_Presence_SetPresence() {}
// End Class UEIK_Presence_SetPresence

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Presence_SetPresence, UEIK_Presence_SetPresence::StaticClass, TEXT("UEIK_Presence_SetPresence"), &Z_Registration_Info_UClass_UEIK_Presence_SetPresence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Presence_SetPresence), 2825471779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_1219076263(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_PresenceInterface_EIK_Presence_SetPresence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

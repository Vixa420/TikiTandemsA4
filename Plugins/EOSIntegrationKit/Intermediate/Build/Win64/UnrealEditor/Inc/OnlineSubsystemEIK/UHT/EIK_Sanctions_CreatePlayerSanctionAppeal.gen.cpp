// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sanctions_CreatePlayerSanctionAppeal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ESanctionAppealReason();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Sanctions_CreatePlayerSanctionAppealComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Sanctions_CreatePlayerSanctionAppealComplete_DelegateWrapper(const FMulticastScriptDelegate& EIK_Sanctions_CreatePlayerSanctionAppealComplete, FEIK_ProductUserId const& LocalUserId, TEnumAsByte<EEIK_Result> const& Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Sanctions_CreatePlayerSanctionAppealComplete_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Result=Result;
	EIK_Sanctions_CreatePlayerSanctionAppealComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Sanctions_CreatePlayerSanctionAppealComplete

// Begin Class UEIK_Sanctions_CreatePlayerSanctionAppeal Function EIK_Sanctions_CreatePlayerSanctionAppeal
struct Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics
{
	struct EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_ESanctionAppealReason> AppealReason;
		FString ReferenceId;
		UEIK_Sanctions_CreatePlayerSanctionAppeal* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sanctions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create a sanction appeal on behalf of a local user. Note that for creating the sanction appeal you'll need the sanction reference id, which is available through CopyPlayerSanctionByIndex.\n" },
#endif
		{ "DisplayName", "EOS_Sanctions_CreatePlayerSanctionAppeal" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a sanction appeal on behalf of a local user. Note that for creating the sanction appeal you'll need the sanction reference id, which is available through CopyPlayerSanctionByIndex." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppealReason_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AppealReason;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_AppealReason = { "AppealReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms, AppealReason), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ESanctionAppealReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppealReason_MetaData), NewProp_AppealReason_MetaData) }; // 660636629
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_ReferenceId = { "ReferenceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms, ReferenceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceId_MetaData), NewProp_ReferenceId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_AppealReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_ReferenceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal, nullptr, "EIK_Sanctions_CreatePlayerSanctionAppeal", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::EIK_Sanctions_CreatePlayerSanctionAppeal_eventEIK_Sanctions_CreatePlayerSanctionAppeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sanctions_CreatePlayerSanctionAppeal::execEIK_Sanctions_CreatePlayerSanctionAppeal)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AppealReason);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReferenceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sanctions_CreatePlayerSanctionAppeal**)Z_Param__Result=UEIK_Sanctions_CreatePlayerSanctionAppeal::EIK_Sanctions_CreatePlayerSanctionAppeal(Z_Param_LocalUserId,(TEnumAsByte<EEIK_ESanctionAppealReason>&)(Z_Param_Out_AppealReason),Z_Param_ReferenceId);
	P_NATIVE_END;
}
// End Class UEIK_Sanctions_CreatePlayerSanctionAppeal Function EIK_Sanctions_CreatePlayerSanctionAppeal

// Begin Class UEIK_Sanctions_CreatePlayerSanctionAppeal
void UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticRegisterNativesUEIK_Sanctions_CreatePlayerSanctionAppeal()
{
	UClass* Class = UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sanctions_CreatePlayerSanctionAppeal", &UEIK_Sanctions_CreatePlayerSanctionAppeal::execEIK_Sanctions_CreatePlayerSanctionAppeal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sanctions_CreatePlayerSanctionAppeal);
UClass* Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_NoRegister()
{
	return UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sanctions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_Sanctions_CreatePlayerSanctionAppeal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sanctions_CreatePlayerSanctionAppeal_EIK_Sanctions_CreatePlayerSanctionAppeal, "EIK_Sanctions_CreatePlayerSanctionAppeal" }, // 3475370737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sanctions_CreatePlayerSanctionAppeal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sanctions_CreatePlayerSanctionAppeal, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Sanctions_CreatePlayerSanctionAppealComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1398631452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::ClassParams = {
	&UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal()
{
	if (!Z_Registration_Info_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal.OuterSingleton, Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sanctions_CreatePlayerSanctionAppeal>()
{
	return UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticClass();
}
UEIK_Sanctions_CreatePlayerSanctionAppeal::UEIK_Sanctions_CreatePlayerSanctionAppeal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sanctions_CreatePlayerSanctionAppeal);
UEIK_Sanctions_CreatePlayerSanctionAppeal::~UEIK_Sanctions_CreatePlayerSanctionAppeal() {}
// End Class UEIK_Sanctions_CreatePlayerSanctionAppeal

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal, UEIK_Sanctions_CreatePlayerSanctionAppeal::StaticClass, TEXT("UEIK_Sanctions_CreatePlayerSanctionAppeal"), &Z_Registration_Info_UClass_UEIK_Sanctions_CreatePlayerSanctionAppeal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sanctions_CreatePlayerSanctionAppeal), 3034256916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_2119176539(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_Sanctions_CreatePlayerSanctionAppeal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

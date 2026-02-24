// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_QueryProductUserIdMappings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Connect_QueryProductUserIdMappings_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_QueryProductUserIdMappings_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_QueryProductUserIdMappings_Delegate, FEIK_ProductUserId const& LocalUserId, EEIK_Result Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryProductUserIdMappings_Delegate_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Result=Result;
	EIK_Connect_QueryProductUserIdMappings_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_QueryProductUserIdMappings_Delegate

// Begin Class UEIK_Connect_QueryProductUserIdMappings Function EIK_Connect_QueryProductUserIdMappings
struct Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics
{
	struct EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TArray<FEIK_ProductUserId> TargetProductUserIds;
		UEIK_Connect_QueryProductUserIdMappings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve the equivalent external account mappings from a list of Product User IDs. The values will be cached and retrievable via EOS_Connect_GetProductUserIdMapping, EOS_Connect_CopyProductUserExternalAccountByIndex, EOS_Connect_CopyProductUserExternalAccountByAccountType or EOS_Connect_CopyProductUserExternalAccountByAccountId.\n" },
#endif
		{ "DisplayName", "EOS_Connect_QueryProductUserIdMappings" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the equivalent external account mappings from a list of Product User IDs. The values will be cached and retrievable via EOS_Connect_GetProductUserIdMapping, EOS_Connect_CopyProductUserExternalAccountByIndex, EOS_Connect_CopyProductUserExternalAccountByAccountType or EOS_Connect_CopyProductUserExternalAccountByAccountId." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetProductUserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetProductUserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetProductUserIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_TargetProductUserIds_Inner = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_TargetProductUserIds = { "TargetProductUserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms, TargetProductUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetProductUserIds_MetaData), NewProp_TargetProductUserIds_MetaData) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_TargetProductUserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_TargetProductUserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings, nullptr, "EIK_Connect_QueryProductUserIdMappings", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::EIK_Connect_QueryProductUserIdMappings_eventEIK_Connect_QueryProductUserIdMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_QueryProductUserIdMappings::execEIK_Connect_QueryProductUserIdMappings)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_TARRAY_REF(FEIK_ProductUserId,Z_Param_Out_TargetProductUserIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_QueryProductUserIdMappings**)Z_Param__Result=UEIK_Connect_QueryProductUserIdMappings::EIK_Connect_QueryProductUserIdMappings(Z_Param_LocalUserId,Z_Param_Out_TargetProductUserIds);
	P_NATIVE_END;
}
// End Class UEIK_Connect_QueryProductUserIdMappings Function EIK_Connect_QueryProductUserIdMappings

// Begin Class UEIK_Connect_QueryProductUserIdMappings
void UEIK_Connect_QueryProductUserIdMappings::StaticRegisterNativesUEIK_Connect_QueryProductUserIdMappings()
{
	UClass* Class = UEIK_Connect_QueryProductUserIdMappings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_QueryProductUserIdMappings", &UEIK_Connect_QueryProductUserIdMappings::execEIK_Connect_QueryProductUserIdMappings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_QueryProductUserIdMappings);
UClass* Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_NoRegister()
{
	return UEIK_Connect_QueryProductUserIdMappings::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryProductUserIdMappings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_QueryProductUserIdMappings_EIK_Connect_QueryProductUserIdMappings, "EIK_Connect_QueryProductUserIdMappings" }, // 1588367909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_QueryProductUserIdMappings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_QueryProductUserIdMappings, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryProductUserIdMappings_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1935307789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::ClassParams = {
	&UEIK_Connect_QueryProductUserIdMappings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_QueryProductUserIdMappings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_QueryProductUserIdMappings.OuterSingleton, Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_QueryProductUserIdMappings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_QueryProductUserIdMappings>()
{
	return UEIK_Connect_QueryProductUserIdMappings::StaticClass();
}
UEIK_Connect_QueryProductUserIdMappings::UEIK_Connect_QueryProductUserIdMappings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_QueryProductUserIdMappings);
UEIK_Connect_QueryProductUserIdMappings::~UEIK_Connect_QueryProductUserIdMappings() {}
// End Class UEIK_Connect_QueryProductUserIdMappings

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_QueryProductUserIdMappings, UEIK_Connect_QueryProductUserIdMappings::StaticClass, TEXT("UEIK_Connect_QueryProductUserIdMappings"), &Z_Registration_Info_UClass_UEIK_Connect_QueryProductUserIdMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_QueryProductUserIdMappings), 4215551382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_1188969051(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryProductUserIdMappings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

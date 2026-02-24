// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_QueryExternalAccountMappings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Connect_QueryExternalAccountMappings_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms
	{
		FEIK_ProductUserId ProductUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms, ProductUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductUserId_MetaData), NewProp_ProductUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::NewProp_ProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_QueryExternalAccountMappings_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_QueryExternalAccountMappings_Delegate, FEIK_ProductUserId const& ProductUserId, EEIK_Result Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms
	{
		FEIK_ProductUserId ProductUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_QueryExternalAccountMappings_Delegate_Parms Parms;
	Parms.ProductUserId=ProductUserId;
	Parms.Result=Result;
	EIK_Connect_QueryExternalAccountMappings_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_QueryExternalAccountMappings_Delegate

// Begin Class UEIK_Connect_QueryExternalAccountMappings Function EIK_Connect_QueryExternalAccountMappings
struct Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics
{
	struct EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms
	{
		FEIK_ProductUserId ProductUserId;
		TEnumAsByte<EEIK_EExternalAccountType> AccountType;
		TArray<FString> ExternalAccountIds;
		UEIK_Connect_QueryExternalAccountMappings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Retrieve the equivalent Product User IDs from a list of external account IDs from supported account providers. The values will be cached and retrievable through EOS_Connect_GetExternalAccountMapping. Queries using external account IDs of another account system may not be available, depending on the account system specifics.\n" },
#endif
		{ "DisplayName", "EOS_Connect_QueryExternalAccountMappings" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the equivalent Product User IDs from a list of external account IDs from supported account providers. The values will be cached and retrievable through EOS_Connect_GetExternalAccountMapping. Queries using external account IDs of another account system may not be available, depending on the account system specifics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalAccountIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalAccountIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms, ProductUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms, AccountType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_EExternalAccountType, METADATA_PARAMS(0, nullptr) }; // 2565716192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ExternalAccountIds_Inner = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ExternalAccountIds = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms, ExternalAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountIds_MetaData), NewProp_ExternalAccountIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_AccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ExternalAccountIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ExternalAccountIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings, nullptr, "EIK_Connect_QueryExternalAccountMappings", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::EIK_Connect_QueryExternalAccountMappings_eventEIK_Connect_QueryExternalAccountMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_QueryExternalAccountMappings::execEIK_Connect_QueryExternalAccountMappings)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_ProductUserId);
	P_GET_PROPERTY(FByteProperty,Z_Param_AccountType);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ExternalAccountIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_QueryExternalAccountMappings**)Z_Param__Result=UEIK_Connect_QueryExternalAccountMappings::EIK_Connect_QueryExternalAccountMappings(Z_Param_ProductUserId,EEIK_EExternalAccountType(Z_Param_AccountType),Z_Param_Out_ExternalAccountIds);
	P_NATIVE_END;
}
// End Class UEIK_Connect_QueryExternalAccountMappings Function EIK_Connect_QueryExternalAccountMappings

// Begin Class UEIK_Connect_QueryExternalAccountMappings
void UEIK_Connect_QueryExternalAccountMappings::StaticRegisterNativesUEIK_Connect_QueryExternalAccountMappings()
{
	UClass* Class = UEIK_Connect_QueryExternalAccountMappings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_QueryExternalAccountMappings", &UEIK_Connect_QueryExternalAccountMappings::execEIK_Connect_QueryExternalAccountMappings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_QueryExternalAccountMappings);
UClass* Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_NoRegister()
{
	return UEIK_Connect_QueryExternalAccountMappings::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_QueryExternalAccountMappings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_QueryExternalAccountMappings_EIK_Connect_QueryExternalAccountMappings, "EIK_Connect_QueryExternalAccountMappings" }, // 2997091112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_QueryExternalAccountMappings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_QueryExternalAccountMappings, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_QueryExternalAccountMappings_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 50671139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::ClassParams = {
	&UEIK_Connect_QueryExternalAccountMappings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_QueryExternalAccountMappings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_QueryExternalAccountMappings.OuterSingleton, Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_QueryExternalAccountMappings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_QueryExternalAccountMappings>()
{
	return UEIK_Connect_QueryExternalAccountMappings::StaticClass();
}
UEIK_Connect_QueryExternalAccountMappings::UEIK_Connect_QueryExternalAccountMappings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_QueryExternalAccountMappings);
UEIK_Connect_QueryExternalAccountMappings::~UEIK_Connect_QueryExternalAccountMappings() {}
// End Class UEIK_Connect_QueryExternalAccountMappings

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryExternalAccountMappings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_QueryExternalAccountMappings, UEIK_Connect_QueryExternalAccountMappings::StaticClass, TEXT("UEIK_Connect_QueryExternalAccountMappings"), &Z_Registration_Info_UClass_UEIK_Connect_QueryExternalAccountMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_QueryExternalAccountMappings), 2559436529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryExternalAccountMappings_h_4014231807(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryExternalAccountMappings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_QueryExternalAccountMappings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

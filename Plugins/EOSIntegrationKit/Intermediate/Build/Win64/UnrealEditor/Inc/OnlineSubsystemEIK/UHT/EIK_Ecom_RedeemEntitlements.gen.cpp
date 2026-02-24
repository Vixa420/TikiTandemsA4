// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Ecom_RedeemEntitlements() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Ecom_EntitlementId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Ecom_RedeemEntitlementsCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		int32 RedeemedEntitlementIdsCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RedeemedEntitlementIdsCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_RedeemedEntitlementIdsCount = { "RedeemedEntitlementIdsCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms, RedeemedEntitlementIdsCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::NewProp_RedeemedEntitlementIdsCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Ecom_RedeemEntitlementsCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Ecom_RedeemEntitlementsCallback, FEIK_EpicAccountId const& LocalUserId, const EEIK_Result ResultCode, int32 RedeemedEntitlementIdsCount)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TEnumAsByte<EEIK_Result> ResultCode;
		int32 RedeemedEntitlementIdsCount;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Ecom_RedeemEntitlementsCallback_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.ResultCode=ResultCode;
	Parms.RedeemedEntitlementIdsCount=RedeemedEntitlementIdsCount;
	EIK_Ecom_RedeemEntitlementsCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Ecom_RedeemEntitlementsCallback

// Begin Class UEIK_Ecom_RedeemEntitlements Function EIK_Ecom_RedeemEntitlements
struct Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics
{
	struct EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		TArray<FEIK_Ecom_EntitlementId> EntitlementIds;
		UEIK_Ecom_RedeemEntitlements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Requests that the provided entitlement be marked redeemed. This will cause that entitlement to no longer be returned from QueryEntitlements unless the include redeemed request flag is set true.\n" },
#endif
		{ "DisplayName", "EOS_Ecom_RedeemEntitlements" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests that the provided entitlement be marked redeemed. This will cause that entitlement to no longer be returned from QueryEntitlements unless the include redeemed request flag is set true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntitlementIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntitlementIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_EntitlementIds_Inner = { "EntitlementIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Ecom_EntitlementId, METADATA_PARAMS(0, nullptr) }; // 1921211264
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_EntitlementIds = { "EntitlementIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms, EntitlementIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementIds_MetaData), NewProp_EntitlementIds_MetaData) }; // 1921211264
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms, ReturnValue), Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_EntitlementIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_EntitlementIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements, nullptr, "EIK_Ecom_RedeemEntitlements", nullptr, nullptr, Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::EIK_Ecom_RedeemEntitlements_eventEIK_Ecom_RedeemEntitlements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Ecom_RedeemEntitlements::execEIK_Ecom_RedeemEntitlements)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_TARRAY_REF(FEIK_Ecom_EntitlementId,Z_Param_Out_EntitlementIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Ecom_RedeemEntitlements**)Z_Param__Result=UEIK_Ecom_RedeemEntitlements::EIK_Ecom_RedeemEntitlements(Z_Param_Out_LocalUserId,Z_Param_Out_EntitlementIds);
	P_NATIVE_END;
}
// End Class UEIK_Ecom_RedeemEntitlements Function EIK_Ecom_RedeemEntitlements

// Begin Class UEIK_Ecom_RedeemEntitlements
void UEIK_Ecom_RedeemEntitlements::StaticRegisterNativesUEIK_Ecom_RedeemEntitlements()
{
	UClass* Class = UEIK_Ecom_RedeemEntitlements::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Ecom_RedeemEntitlements", &UEIK_Ecom_RedeemEntitlements::execEIK_Ecom_RedeemEntitlements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Ecom_RedeemEntitlements);
UClass* Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_NoRegister()
{
	return UEIK_Ecom_RedeemEntitlements::StaticClass();
}
struct Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Ecom Interface" },
		{ "ModuleRelativePath", "SdkFunctions/EcomInterface/EIK_Ecom_RedeemEntitlements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Ecom_RedeemEntitlements_EIK_Ecom_RedeemEntitlements, "EIK_Ecom_RedeemEntitlements" }, // 1136721121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Ecom_RedeemEntitlements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Ecom_RedeemEntitlements, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Ecom_RedeemEntitlementsCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3668714759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::ClassParams = {
	&UEIK_Ecom_RedeemEntitlements::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements()
{
	if (!Z_Registration_Info_UClass_UEIK_Ecom_RedeemEntitlements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Ecom_RedeemEntitlements.OuterSingleton, Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Ecom_RedeemEntitlements.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Ecom_RedeemEntitlements>()
{
	return UEIK_Ecom_RedeemEntitlements::StaticClass();
}
UEIK_Ecom_RedeemEntitlements::UEIK_Ecom_RedeemEntitlements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Ecom_RedeemEntitlements);
UEIK_Ecom_RedeemEntitlements::~UEIK_Ecom_RedeemEntitlements() {}
// End Class UEIK_Ecom_RedeemEntitlements

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_RedeemEntitlements_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Ecom_RedeemEntitlements, UEIK_Ecom_RedeemEntitlements::StaticClass, TEXT("UEIK_Ecom_RedeemEntitlements"), &Z_Registration_Info_UClass_UEIK_Ecom_RedeemEntitlements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Ecom_RedeemEntitlements), 550880424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_RedeemEntitlements_h_519825987(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_RedeemEntitlements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_EcomInterface_EIK_Ecom_RedeemEntitlements_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

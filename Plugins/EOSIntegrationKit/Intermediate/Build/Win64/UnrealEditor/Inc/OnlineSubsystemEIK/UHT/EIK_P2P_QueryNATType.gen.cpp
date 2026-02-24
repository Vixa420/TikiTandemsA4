// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_P2P_QueryNATType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_P2P_QueryNATType();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_P2P_QueryNATType_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENATType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_P2P_QueryNATTypeDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		TEnumAsByte<EEIK_ENATType> NATType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NATType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NATType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::NewProp_NATType = { "NATType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms, NATType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_ENATType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NATType_MetaData), NewProp_NATType_MetaData) }; // 2930682262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::NewProp_NATType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_P2P_QueryNATTypeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_P2P_QueryNATTypeDelegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_P2P_QueryNATTypeDelegate, TEnumAsByte<EEIK_Result> const& Result, TEnumAsByte<EEIK_ENATType> const& NATType)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		TEnumAsByte<EEIK_ENATType> NATType;
	};
	_Script_OnlineSubsystemEIK_eventEIK_P2P_QueryNATTypeDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.NATType=NATType;
	EIK_P2P_QueryNATTypeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_P2P_QueryNATTypeDelegate

// Begin Class UEIK_P2P_QueryNATType Function EIK_P2P_QueryNATType
struct Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics
{
	struct EIK_P2P_QueryNATType_eventEIK_P2P_QueryNATType_Parms
	{
		UEIK_P2P_QueryNATType* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | P2P Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query the current NAT-type of our connection.\n" },
#endif
		{ "DisplayName", "EOS_P2P_QueryNATType" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query the current NAT-type of our connection." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_P2P_QueryNATType_eventEIK_P2P_QueryNATType_Parms, ReturnValue), Z_Construct_UClass_UEIK_P2P_QueryNATType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_P2P_QueryNATType, nullptr, "EIK_P2P_QueryNATType", nullptr, nullptr, Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::EIK_P2P_QueryNATType_eventEIK_P2P_QueryNATType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::EIK_P2P_QueryNATType_eventEIK_P2P_QueryNATType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_P2P_QueryNATType::execEIK_P2P_QueryNATType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_P2P_QueryNATType**)Z_Param__Result=UEIK_P2P_QueryNATType::EIK_P2P_QueryNATType();
	P_NATIVE_END;
}
// End Class UEIK_P2P_QueryNATType Function EIK_P2P_QueryNATType

// Begin Class UEIK_P2P_QueryNATType
void UEIK_P2P_QueryNATType::StaticRegisterNativesUEIK_P2P_QueryNATType()
{
	UClass* Class = UEIK_P2P_QueryNATType::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_P2P_QueryNATType", &UEIK_P2P_QueryNATType::execEIK_P2P_QueryNATType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_P2P_QueryNATType);
UClass* Z_Construct_UClass_UEIK_P2P_QueryNATType_NoRegister()
{
	return UEIK_P2P_QueryNATType::StaticClass();
}
struct Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h" },
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/P2PInterface/EIK_P2P_QueryNATType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_P2P_QueryNATType_EIK_P2P_QueryNATType, "EIK_P2P_QueryNATType" }, // 2004766421
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_P2P_QueryNATType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_P2P_QueryNATType, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_P2P_QueryNATTypeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1476013458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::ClassParams = {
	&UEIK_P2P_QueryNATType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_P2P_QueryNATType()
{
	if (!Z_Registration_Info_UClass_UEIK_P2P_QueryNATType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_P2P_QueryNATType.OuterSingleton, Z_Construct_UClass_UEIK_P2P_QueryNATType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_P2P_QueryNATType.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_P2P_QueryNATType>()
{
	return UEIK_P2P_QueryNATType::StaticClass();
}
UEIK_P2P_QueryNATType::UEIK_P2P_QueryNATType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_P2P_QueryNATType);
UEIK_P2P_QueryNATType::~UEIK_P2P_QueryNATType() {}
// End Class UEIK_P2P_QueryNATType

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_P2P_QueryNATType, UEIK_P2P_QueryNATType::StaticClass, TEXT("UEIK_P2P_QueryNATType"), &Z_Registration_Info_UClass_UEIK_P2P_QueryNATType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_P2P_QueryNATType), 808860197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_750770504(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_P2PInterface_EIK_P2P_QueryNATType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

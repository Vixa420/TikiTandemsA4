// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SessionSearch_Find() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SessionSearch_Find();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SessionSearch_Find_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionSearch();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnSessionSearch_FindCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnSessionSearch_FindCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnSessionSearch_FindCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnSessionSearch_FindCallback, TEnumAsByte<EEIK_Result> const& ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnSessionSearch_FindCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIK_OnSessionSearch_FindCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnSessionSearch_FindCallback

// Begin Class UEIK_SessionSearch_Find Function EIK_SessionSearch_Find
struct Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics
{
	struct EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms
	{
		FEIK_HSessionSearch SessionSearchHandle;
		FEIK_ProductUserId LocalUserId;
		UEIK_SessionSearch_Find* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Find sessions matching the search criteria setup via this session search handle. When the operation completes, this handle will have the search results that can be parsed\n" },
#endif
		{ "DisplayName", "EOS_SessionSearch_Find" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find sessions matching the search criteria setup via this session search handle. When the operation completes, this handle will have the search results that can be parsed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSearchHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_SessionSearchHandle = { "SessionSearchHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms, SessionSearchHandle), Z_Construct_UScriptStruct_FEIK_HSessionSearch, METADATA_PARAMS(0, nullptr) }; // 34234496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms, ReturnValue), Z_Construct_UClass_UEIK_SessionSearch_Find_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_SessionSearchHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SessionSearch_Find, nullptr, "EIK_SessionSearch_Find", nullptr, nullptr, Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::EIK_SessionSearch_Find_eventEIK_SessionSearch_Find_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SessionSearch_Find::execEIK_SessionSearch_Find)
{
	P_GET_STRUCT(FEIK_HSessionSearch,Z_Param_SessionSearchHandle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SessionSearch_Find**)Z_Param__Result=UEIK_SessionSearch_Find::EIK_SessionSearch_Find(Z_Param_SessionSearchHandle,Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_SessionSearch_Find Function EIK_SessionSearch_Find

// Begin Class UEIK_SessionSearch_Find
void UEIK_SessionSearch_Find::StaticRegisterNativesUEIK_SessionSearch_Find()
{
	UClass* Class = UEIK_SessionSearch_Find::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_SessionSearch_Find", &UEIK_SessionSearch_Find::execEIK_SessionSearch_Find },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SessionSearch_Find);
UClass* Z_Construct_UClass_UEIK_SessionSearch_Find_NoRegister()
{
	return UEIK_SessionSearch_Find::StaticClass();
}
struct Z_Construct_UClass_UEIK_SessionSearch_Find_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_SessionSearch_Find.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SessionSearch_Find_EIK_SessionSearch_Find, "EIK_SessionSearch_Find" }, // 1155282302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SessionSearch_Find>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SessionSearch_Find, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnSessionSearch_FindCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4040918252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::ClassParams = {
	&UEIK_SessionSearch_Find::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SessionSearch_Find()
{
	if (!Z_Registration_Info_UClass_UEIK_SessionSearch_Find.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SessionSearch_Find.OuterSingleton, Z_Construct_UClass_UEIK_SessionSearch_Find_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SessionSearch_Find.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SessionSearch_Find>()
{
	return UEIK_SessionSearch_Find::StaticClass();
}
UEIK_SessionSearch_Find::UEIK_SessionSearch_Find(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SessionSearch_Find);
UEIK_SessionSearch_Find::~UEIK_SessionSearch_Find() {}
// End Class UEIK_SessionSearch_Find

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SessionSearch_Find, UEIK_SessionSearch_Find::StaticClass, TEXT("UEIK_SessionSearch_Find"), &Z_Registration_Info_UClass_UEIK_SessionSearch_Find, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SessionSearch_Find), 2727965653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_2410111563(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_SessionSearch_Find_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

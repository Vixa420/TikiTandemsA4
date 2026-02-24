// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_DestroySession() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_DestroySession();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_DestroySession_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnDestroySessionCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnDestroySessionCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnDestroySessionCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnDestroySessionCallback, TEnumAsByte<EEIK_Result> const& ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnDestroySessionCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIK_OnDestroySessionCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnDestroySessionCallback

// Begin Class UEIK_Sessions_DestroySession Function EIK_Sessions_DestroySession
struct Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics
{
	struct EIK_Sessions_DestroySession_eventEIK_Sessions_DestroySession_Parms
	{
		FString SessionName;
		UEIK_Sessions_DestroySession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Destroy a session given a session name\n" },
#endif
		{ "DisplayName", "EOS_Sessions_DestroySession" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy a session given a session name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_DestroySession_eventEIK_Sessions_DestroySession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_DestroySession_eventEIK_Sessions_DestroySession_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_DestroySession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_DestroySession, nullptr, "EIK_Sessions_DestroySession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::EIK_Sessions_DestroySession_eventEIK_Sessions_DestroySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::EIK_Sessions_DestroySession_eventEIK_Sessions_DestroySession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_DestroySession::execEIK_Sessions_DestroySession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_DestroySession**)Z_Param__Result=UEIK_Sessions_DestroySession::EIK_Sessions_DestroySession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_DestroySession Function EIK_Sessions_DestroySession

// Begin Class UEIK_Sessions_DestroySession
void UEIK_Sessions_DestroySession::StaticRegisterNativesUEIK_Sessions_DestroySession()
{
	UClass* Class = UEIK_Sessions_DestroySession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_DestroySession", &UEIK_Sessions_DestroySession::execEIK_Sessions_DestroySession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_DestroySession);
UClass* Z_Construct_UClass_UEIK_Sessions_DestroySession_NoRegister()
{
	return UEIK_Sessions_DestroySession::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_DestroySession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_DestroySession_EIK_Sessions_DestroySession, "EIK_Sessions_DestroySession" }, // 1575750797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_DestroySession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_DestroySession, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnDestroySessionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1187276465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::ClassParams = {
	&UEIK_Sessions_DestroySession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_DestroySession()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_DestroySession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_DestroySession.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_DestroySession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_DestroySession.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_DestroySession>()
{
	return UEIK_Sessions_DestroySession::StaticClass();
}
UEIK_Sessions_DestroySession::UEIK_Sessions_DestroySession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_DestroySession);
UEIK_Sessions_DestroySession::~UEIK_Sessions_DestroySession() {}
// End Class UEIK_Sessions_DestroySession

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_DestroySession_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_DestroySession, UEIK_Sessions_DestroySession::StaticClass, TEXT("UEIK_Sessions_DestroySession"), &Z_Registration_Info_UClass_UEIK_Sessions_DestroySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_DestroySession), 3398036822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_DestroySession_h_1894947063(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_DestroySession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_DestroySession_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

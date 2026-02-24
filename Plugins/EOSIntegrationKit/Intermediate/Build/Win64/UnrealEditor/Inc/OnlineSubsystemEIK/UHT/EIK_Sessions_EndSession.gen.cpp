// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_EndSession() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_EndSession();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_EndSession_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnEndSessionCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnEndSessionCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnEndSessionCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnEndSessionCallback, TEnumAsByte<EEIK_Result> const& ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnEndSessionCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIK_OnEndSessionCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnEndSessionCallback

// Begin Class UEIK_Sessions_EndSession Function EIK_Sessions_EndSession
struct Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics
{
	struct EIK_Sessions_EndSession_eventEIK_Sessions_EndSession_Parms
	{
		FString SessionName;
		UEIK_Sessions_EndSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mark a session as ended, making it unavailable to find if \"join in progress\" was disabled. The session may be started again if desired\n" },
#endif
		{ "DisplayName", "EOS_Sessions_EndSession" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mark a session as ended, making it unavailable to find if \"join in progress\" was disabled. The session may be started again if desired" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_EndSession_eventEIK_Sessions_EndSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_EndSession_eventEIK_Sessions_EndSession_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_EndSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_EndSession, nullptr, "EIK_Sessions_EndSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::EIK_Sessions_EndSession_eventEIK_Sessions_EndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::EIK_Sessions_EndSession_eventEIK_Sessions_EndSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_EndSession::execEIK_Sessions_EndSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_EndSession**)Z_Param__Result=UEIK_Sessions_EndSession::EIK_Sessions_EndSession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_EndSession Function EIK_Sessions_EndSession

// Begin Class UEIK_Sessions_EndSession
void UEIK_Sessions_EndSession::StaticRegisterNativesUEIK_Sessions_EndSession()
{
	UClass* Class = UEIK_Sessions_EndSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_EndSession", &UEIK_Sessions_EndSession::execEIK_Sessions_EndSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_EndSession);
UClass* Z_Construct_UClass_UEIK_Sessions_EndSession_NoRegister()
{
	return UEIK_Sessions_EndSession::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_EndSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_EndSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_EndSession_EIK_Sessions_EndSession, "EIK_Sessions_EndSession" }, // 3332695139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_EndSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_EndSession, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnEndSessionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 946092352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::ClassParams = {
	&UEIK_Sessions_EndSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_EndSession()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_EndSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_EndSession.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_EndSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_EndSession.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_EndSession>()
{
	return UEIK_Sessions_EndSession::StaticClass();
}
UEIK_Sessions_EndSession::UEIK_Sessions_EndSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_EndSession);
UEIK_Sessions_EndSession::~UEIK_Sessions_EndSession() {}
// End Class UEIK_Sessions_EndSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_EndSession_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_EndSession, UEIK_Sessions_EndSession::StaticClass, TEXT("UEIK_Sessions_EndSession"), &Z_Registration_Info_UClass_UEIK_Sessions_EndSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_EndSession), 3159801957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_EndSession_h_3234966601(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_EndSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_EndSession_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

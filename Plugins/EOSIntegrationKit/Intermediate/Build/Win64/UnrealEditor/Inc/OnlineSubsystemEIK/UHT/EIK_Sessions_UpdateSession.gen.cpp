// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_UpdateSession() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_UpdateSession();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_UpdateSession_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionModification();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnUpdateSessionCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FString SessionName;
		FString SessionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::NewProp_SessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnUpdateSessionCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnUpdateSessionCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnUpdateSessionCallback, TEnumAsByte<EEIK_Result> const& ResultCode, const FString& SessionName, const FString& SessionId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FString SessionName;
		FString SessionId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnUpdateSessionCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.SessionName=SessionName;
	Parms.SessionId=SessionId;
	EIK_OnUpdateSessionCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnUpdateSessionCallback

// Begin Class UEIK_Sessions_UpdateSession Function EIK_Sessions_UpdateSession
struct Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics
{
	struct EIK_Sessions_UpdateSession_eventEIK_Sessions_UpdateSession_Parms
	{
		FEIK_HSessionModification SessionModificationHandle;
		UEIK_Sessions_UpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update a session given a session modification handle created by EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n" },
#endif
		{ "DisplayName", "EOS_Sessions_UpdateSession" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update a session given a session modification handle created by EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionModificationHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::NewProp_SessionModificationHandle = { "SessionModificationHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_UpdateSession_eventEIK_Sessions_UpdateSession_Parms, SessionModificationHandle), Z_Construct_UScriptStruct_FEIK_HSessionModification, METADATA_PARAMS(0, nullptr) }; // 2995697222
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_UpdateSession_eventEIK_Sessions_UpdateSession_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_UpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::NewProp_SessionModificationHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_UpdateSession, nullptr, "EIK_Sessions_UpdateSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::EIK_Sessions_UpdateSession_eventEIK_Sessions_UpdateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::EIK_Sessions_UpdateSession_eventEIK_Sessions_UpdateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_UpdateSession::execEIK_Sessions_UpdateSession)
{
	P_GET_STRUCT(FEIK_HSessionModification,Z_Param_SessionModificationHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_UpdateSession**)Z_Param__Result=UEIK_Sessions_UpdateSession::EIK_Sessions_UpdateSession(Z_Param_SessionModificationHandle);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_UpdateSession Function EIK_Sessions_UpdateSession

// Begin Class UEIK_Sessions_UpdateSession
void UEIK_Sessions_UpdateSession::StaticRegisterNativesUEIK_Sessions_UpdateSession()
{
	UClass* Class = UEIK_Sessions_UpdateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_UpdateSession", &UEIK_Sessions_UpdateSession::execEIK_Sessions_UpdateSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_UpdateSession);
UClass* Z_Construct_UClass_UEIK_Sessions_UpdateSession_NoRegister()
{
	return UEIK_Sessions_UpdateSession::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UpdateSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_UpdateSession_EIK_Sessions_UpdateSession, "EIK_Sessions_UpdateSession" }, // 2862225935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_UpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_UpdateSession, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUpdateSessionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3354673858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::ClassParams = {
	&UEIK_Sessions_UpdateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_UpdateSession()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_UpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_UpdateSession.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_UpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_UpdateSession.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_UpdateSession>()
{
	return UEIK_Sessions_UpdateSession::StaticClass();
}
UEIK_Sessions_UpdateSession::UEIK_Sessions_UpdateSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_UpdateSession);
UEIK_Sessions_UpdateSession::~UEIK_Sessions_UpdateSession() {}
// End Class UEIK_Sessions_UpdateSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UpdateSession_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_UpdateSession, UEIK_Sessions_UpdateSession::StaticClass, TEXT("UEIK_Sessions_UpdateSession"), &Z_Registration_Info_UClass_UEIK_Sessions_UpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_UpdateSession), 1327890346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UpdateSession_h_1380574834(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UpdateSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UpdateSession_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_JoinSession() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_JoinSession();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_JoinSession_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HSessionDetails();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnJoinSessionCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnJoinSessionCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnJoinSessionCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnJoinSessionCallback, TEnumAsByte<EEIK_Result> const& ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnJoinSessionCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIK_OnJoinSessionCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnJoinSessionCallback

// Begin Class UEIK_Sessions_JoinSession Function EIK_Sessions_JoinSession
struct Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics
{
	struct EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms
	{
		FString SessionName;
		FEIK_ProductUserId LocalUserId;
		FEIK_HSessionDetails SessionHandle;
		bool bPresenceEnabled;
		UEIK_Sessions_JoinSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Join a session, creating a local session under a given session name. Backend will validate various conditions to make sure it is possible to join the session.\n" },
#endif
		{ "DisplayName", "EOS_Sessions_JoinSession" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join a session, creating a local session under a given session name. Backend will validate various conditions to make sure it is possible to join the session." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionHandle;
	static void NewProp_bPresenceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresenceEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_SessionHandle = { "SessionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms, SessionHandle), Z_Construct_UScriptStruct_FEIK_HSessionDetails, METADATA_PARAMS(0, nullptr) }; // 3711588645
void Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_bPresenceEnabled_SetBit(void* Obj)
{
	((EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms*)Obj)->bPresenceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_bPresenceEnabled = { "bPresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms), &Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_bPresenceEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_JoinSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_SessionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_bPresenceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_JoinSession, nullptr, "EIK_Sessions_JoinSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::EIK_Sessions_JoinSession_eventEIK_Sessions_JoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_JoinSession::execEIK_Sessions_JoinSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_HSessionDetails,Z_Param_SessionHandle);
	P_GET_UBOOL(Z_Param_bPresenceEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_JoinSession**)Z_Param__Result=UEIK_Sessions_JoinSession::EIK_Sessions_JoinSession(Z_Param_SessionName,Z_Param_LocalUserId,Z_Param_SessionHandle,Z_Param_bPresenceEnabled);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_JoinSession Function EIK_Sessions_JoinSession

// Begin Class UEIK_Sessions_JoinSession
void UEIK_Sessions_JoinSession::StaticRegisterNativesUEIK_Sessions_JoinSession()
{
	UClass* Class = UEIK_Sessions_JoinSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_JoinSession", &UEIK_Sessions_JoinSession::execEIK_Sessions_JoinSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_JoinSession);
UClass* Z_Construct_UClass_UEIK_Sessions_JoinSession_NoRegister()
{
	return UEIK_Sessions_JoinSession::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_JoinSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_JoinSession_EIK_Sessions_JoinSession, "EIK_Sessions_JoinSession" }, // 115178703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_JoinSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_JoinSession, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnJoinSessionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2667526710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::ClassParams = {
	&UEIK_Sessions_JoinSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_JoinSession()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_JoinSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_JoinSession.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_JoinSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_JoinSession.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_JoinSession>()
{
	return UEIK_Sessions_JoinSession::StaticClass();
}
UEIK_Sessions_JoinSession::UEIK_Sessions_JoinSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_JoinSession);
UEIK_Sessions_JoinSession::~UEIK_Sessions_JoinSession() {}
// End Class UEIK_Sessions_JoinSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_JoinSession_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_JoinSession, UEIK_Sessions_JoinSession::StaticClass, TEXT("UEIK_Sessions_JoinSession"), &Z_Registration_Info_UClass_UEIK_Sessions_JoinSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_JoinSession), 2918169284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_JoinSession_h_3992555182(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_JoinSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_JoinSession_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

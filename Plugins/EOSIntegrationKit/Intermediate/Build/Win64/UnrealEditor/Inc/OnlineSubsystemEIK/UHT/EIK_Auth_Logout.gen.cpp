// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AuthInterface/EIK_Auth_Logout.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Auth_Logout() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_Logout();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Auth_Logout_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnLogoutCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId EpicAccountId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Logout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms, EpicAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::NewProp_EpicAccountId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnLogoutCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLogoutCallback_DelegateWrapper(const FMulticastScriptDelegate& OnLogoutCallback, EEIK_Result ResultCode, FEIK_EpicAccountId EpicAccountId)
{
	struct _Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId EpicAccountId;
	};
	_Script_OnlineSubsystemEIK_eventOnLogoutCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.EpicAccountId=EpicAccountId;
	OnLogoutCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLogoutCallback

// Begin Class UEIK_Auth_Logout Function Logout
struct Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics
{
	struct EIK_Auth_Logout_eventLogout_Parms
	{
		FEIK_EpicAccountId EpicAccountId;
		UEIK_Auth_Logout* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Auth Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Signs the player out of the online service.\n" },
#endif
		{ "DisplayName", "EOS_Auth_Logout" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Logout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Signs the player out of the online service." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_Logout_eventLogout_Parms, EpicAccountId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Auth_Logout_eventLogout_Parms, ReturnValue), Z_Construct_UClass_UEIK_Auth_Logout_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::NewProp_EpicAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Auth_Logout, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::EIK_Auth_Logout_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::EIK_Auth_Logout_eventLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Auth_Logout_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Auth_Logout_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Auth_Logout::execLogout)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_EpicAccountId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Auth_Logout**)Z_Param__Result=UEIK_Auth_Logout::Logout(Z_Param_EpicAccountId);
	P_NATIVE_END;
}
// End Class UEIK_Auth_Logout Function Logout

// Begin Class UEIK_Auth_Logout
void UEIK_Auth_Logout::StaticRegisterNativesUEIK_Auth_Logout()
{
	UClass* Class = UEIK_Auth_Logout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Logout", &UEIK_Auth_Logout::execLogout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Auth_Logout);
UClass* Z_Construct_UClass_UEIK_Auth_Logout_NoRegister()
{
	return UEIK_Auth_Logout::StaticClass();
}
struct Z_Construct_UClass_UEIK_Auth_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AuthInterface/EIK_Auth_Logout.h" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Logout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/AuthInterface/EIK_Auth_Logout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Auth_Logout_Logout, "Logout" }, // 2728058236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Auth_Logout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Auth_Logout_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Auth_Logout, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnLogoutCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2844160579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Auth_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Auth_Logout_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Logout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Auth_Logout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Logout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Auth_Logout_Statics::ClassParams = {
	&UEIK_Auth_Logout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Auth_Logout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Logout_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Auth_Logout_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Auth_Logout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Auth_Logout()
{
	if (!Z_Registration_Info_UClass_UEIK_Auth_Logout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Auth_Logout.OuterSingleton, Z_Construct_UClass_UEIK_Auth_Logout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Auth_Logout.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Auth_Logout>()
{
	return UEIK_Auth_Logout::StaticClass();
}
UEIK_Auth_Logout::UEIK_Auth_Logout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Auth_Logout);
UEIK_Auth_Logout::~UEIK_Auth_Logout() {}
// End Class UEIK_Auth_Logout

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Logout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Auth_Logout, UEIK_Auth_Logout::StaticClass, TEXT("UEIK_Auth_Logout"), &Z_Registration_Info_UClass_UEIK_Auth_Logout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Auth_Logout), 3099233804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Logout_h_2814782361(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Logout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AuthInterface_EIK_Auth_Logout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

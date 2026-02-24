// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_CreateUser() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_CreateUser();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_CreateUser_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ContinuanceToken();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnCreateUserCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::NewProp_LocalUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnCreateUserCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateUserCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateUserCallback, EEIK_Result ResultCode, FEIK_ProductUserId LocalUserId)
{
	struct _Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
	};
	_Script_OnlineSubsystemEIK_eventOnCreateUserCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LocalUserId=LocalUserId;
	OnCreateUserCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateUserCallback

// Begin Class UEIK_Connect_CreateUser Function CreateUser
struct Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics
{
	struct EIK_Connect_CreateUser_eventCreateUser_Parms
	{
		FEIK_ContinuanceToken ContinuanceToken;
		UEIK_Connect_CreateUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create an account association with the Epic Online Service as a product user given their external auth credentials.\n" },
#endif
		{ "DisplayName", "EOS_Connect_CreateUser" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an account association with the Epic Online Service as a product user given their external auth credentials." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuanceToken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::NewProp_ContinuanceToken = { "ContinuanceToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_CreateUser_eventCreateUser_Parms, ContinuanceToken), Z_Construct_UScriptStruct_FEIK_ContinuanceToken, METADATA_PARAMS(0, nullptr) }; // 3322250395
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_CreateUser_eventCreateUser_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_CreateUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::NewProp_ContinuanceToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_CreateUser, nullptr, "CreateUser", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::EIK_Connect_CreateUser_eventCreateUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::EIK_Connect_CreateUser_eventCreateUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_CreateUser::execCreateUser)
{
	P_GET_STRUCT(FEIK_ContinuanceToken,Z_Param_ContinuanceToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_CreateUser**)Z_Param__Result=UEIK_Connect_CreateUser::CreateUser(Z_Param_ContinuanceToken);
	P_NATIVE_END;
}
// End Class UEIK_Connect_CreateUser Function CreateUser

// Begin Class UEIK_Connect_CreateUser
void UEIK_Connect_CreateUser::StaticRegisterNativesUEIK_Connect_CreateUser()
{
	UClass* Class = UEIK_Connect_CreateUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateUser", &UEIK_Connect_CreateUser::execCreateUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_CreateUser);
UClass* Z_Construct_UClass_UEIK_Connect_CreateUser_NoRegister()
{
	return UEIK_Connect_CreateUser::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_CreateUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_CreateUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_CreateUser_CreateUser, "CreateUser" }, // 1558574062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_CreateUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_CreateUser, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateUserCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3086308528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::ClassParams = {
	&UEIK_Connect_CreateUser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_CreateUser()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_CreateUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_CreateUser.OuterSingleton, Z_Construct_UClass_UEIK_Connect_CreateUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_CreateUser.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_CreateUser>()
{
	return UEIK_Connect_CreateUser::StaticClass();
}
UEIK_Connect_CreateUser::UEIK_Connect_CreateUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_CreateUser);
UEIK_Connect_CreateUser::~UEIK_Connect_CreateUser() {}
// End Class UEIK_Connect_CreateUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_CreateUser, UEIK_Connect_CreateUser::StaticClass, TEXT("UEIK_Connect_CreateUser"), &Z_Registration_Info_UClass_UEIK_Connect_CreateUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_CreateUser), 3374869643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_311630934(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_CreateUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

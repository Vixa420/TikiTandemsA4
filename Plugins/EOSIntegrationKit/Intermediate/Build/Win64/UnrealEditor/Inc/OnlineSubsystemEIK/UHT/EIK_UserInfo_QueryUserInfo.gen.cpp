// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_UserInfo_QueryUserInfo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnQueryUserInfoCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnQueryUserInfoCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnQueryUserInfoCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnQueryUserInfoCallback, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnQueryUserInfoCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	EIK_OnQueryUserInfoCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnQueryUserInfoCallback

// Begin Class UEIK_UserInfo_QueryUserInfo Function EIK_UserInfo_QueryUserInfo
struct Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics
{
	struct EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		UEIK_UserInfo_QueryUserInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | User Info Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account. Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n" },
#endif
		{ "DisplayName", "EOS_UserInfo_QueryUserInfo" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account. Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms, ReturnValue), Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo, nullptr, "EIK_UserInfo_QueryUserInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::EIK_UserInfo_QueryUserInfo_eventEIK_UserInfo_QueryUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UserInfo_QueryUserInfo::execEIK_UserInfo_QueryUserInfo)
{
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_LocalUserId);
	P_GET_STRUCT_REF(FEIK_EpicAccountId,Z_Param_Out_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_UserInfo_QueryUserInfo**)Z_Param__Result=UEIK_UserInfo_QueryUserInfo::EIK_UserInfo_QueryUserInfo(Z_Param_Out_LocalUserId,Z_Param_Out_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_UserInfo_QueryUserInfo Function EIK_UserInfo_QueryUserInfo

// Begin Class UEIK_UserInfo_QueryUserInfo
void UEIK_UserInfo_QueryUserInfo::StaticRegisterNativesUEIK_UserInfo_QueryUserInfo()
{
	UClass* Class = UEIK_UserInfo_QueryUserInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_UserInfo_QueryUserInfo", &UEIK_UserInfo_QueryUserInfo::execEIK_UserInfo_QueryUserInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_UserInfo_QueryUserInfo);
UClass* Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_NoRegister()
{
	return UEIK_UserInfo_QueryUserInfo::StaticClass();
}
struct Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/UserInfoInterface/EIK_UserInfo_QueryUserInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_UserInfo_QueryUserInfo_EIK_UserInfo_QueryUserInfo, "EIK_UserInfo_QueryUserInfo" }, // 937056716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_UserInfo_QueryUserInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UserInfo_QueryUserInfo, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnQueryUserInfoCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 475559550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::ClassParams = {
	&UEIK_UserInfo_QueryUserInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo()
{
	if (!Z_Registration_Info_UClass_UEIK_UserInfo_QueryUserInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_UserInfo_QueryUserInfo.OuterSingleton, Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_UserInfo_QueryUserInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_UserInfo_QueryUserInfo>()
{
	return UEIK_UserInfo_QueryUserInfo::StaticClass();
}
UEIK_UserInfo_QueryUserInfo::UEIK_UserInfo_QueryUserInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_UserInfo_QueryUserInfo);
UEIK_UserInfo_QueryUserInfo::~UEIK_UserInfo_QueryUserInfo() {}
// End Class UEIK_UserInfo_QueryUserInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_UserInfo_QueryUserInfo, UEIK_UserInfo_QueryUserInfo::StaticClass, TEXT("UEIK_UserInfo_QueryUserInfo"), &Z_Registration_Info_UClass_UEIK_UserInfo_QueryUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_UserInfo_QueryUserInfo), 1931890449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_2304900391(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_UserInfoInterface_EIK_UserInfo_QueryUserInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

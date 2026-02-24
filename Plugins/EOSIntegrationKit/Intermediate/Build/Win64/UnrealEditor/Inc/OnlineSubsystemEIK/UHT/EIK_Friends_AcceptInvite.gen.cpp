// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Friends_AcceptInvite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Friends_AcceptInvite();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Friends_AcceptInvite_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_EpicAccountId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Friends_AcceptInviteCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Accept a friend invitation from another user.\n * @return A valid friends handle if the request was started successfully, NULL otherwise\n */" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accept a friend invitation from another user.\n@return A valid friends handle if the request was started successfully, NULL otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUserId_MetaData), NewProp_TargetUserId_MetaData) }; // 1965434336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Friends_AcceptInviteCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Friends_AcceptInviteCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_Friends_AcceptInviteCallback, TEnumAsByte<EEIK_Result> const& Result, FEIK_EpicAccountId const& LocalUserId, FEIK_EpicAccountId const& TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Friends_AcceptInviteCallback_Parms Parms;
	Parms.Result=Result;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	EIK_Friends_AcceptInviteCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Friends_AcceptInviteCallback

// Begin Class UEIK_Friends_AcceptInvite Function EIK_Friends_AcceptInvite
struct Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics
{
	struct EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms
	{
		FEIK_EpicAccountId LocalUserId;
		FEIK_EpicAccountId TargetUserId;
		UEIK_Friends_AcceptInvite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\x09@param LocalUserId The Epic Account ID of the local, logged-in user who is accepting the friends list invitation\n\x09@param TargetUserId The Epic Account ID of the user who sent the friends list invitation\n\x09 */" },
#endif
		{ "DisplayName", "EOS_Friends_AcceptInvite" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n@param LocalUserId The Epic Account ID of the local, logged-in user who is accepting the friends list invitation\n@param TargetUserId The Epic Account ID of the user who sent the friends list invitation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_EpicAccountId, METADATA_PARAMS(0, nullptr) }; // 1965434336
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms, ReturnValue), Z_Construct_UClass_UEIK_Friends_AcceptInvite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Friends_AcceptInvite, nullptr, "EIK_Friends_AcceptInvite", nullptr, nullptr, Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::EIK_Friends_AcceptInvite_eventEIK_Friends_AcceptInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Friends_AcceptInvite::execEIK_Friends_AcceptInvite)
{
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_EpicAccountId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Friends_AcceptInvite**)Z_Param__Result=UEIK_Friends_AcceptInvite::EIK_Friends_AcceptInvite(Z_Param_LocalUserId,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_Friends_AcceptInvite Function EIK_Friends_AcceptInvite

// Begin Class UEIK_Friends_AcceptInvite
void UEIK_Friends_AcceptInvite::StaticRegisterNativesUEIK_Friends_AcceptInvite()
{
	UClass* Class = UEIK_Friends_AcceptInvite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Friends_AcceptInvite", &UEIK_Friends_AcceptInvite::execEIK_Friends_AcceptInvite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Friends_AcceptInvite);
UClass* Z_Construct_UClass_UEIK_Friends_AcceptInvite_NoRegister()
{
	return UEIK_Friends_AcceptInvite::StaticClass();
}
struct Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h" },
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | Friends Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate to execute when the async task completes */" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/FriendsInterface/EIK_Friends_AcceptInvite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to execute when the async task completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Friends_AcceptInvite_EIK_Friends_AcceptInvite, "EIK_Friends_AcceptInvite" }, // 623049491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Friends_AcceptInvite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Friends_AcceptInvite, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Friends_AcceptInviteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1543791107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::ClassParams = {
	&UEIK_Friends_AcceptInvite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Friends_AcceptInvite()
{
	if (!Z_Registration_Info_UClass_UEIK_Friends_AcceptInvite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Friends_AcceptInvite.OuterSingleton, Z_Construct_UClass_UEIK_Friends_AcceptInvite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Friends_AcceptInvite.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Friends_AcceptInvite>()
{
	return UEIK_Friends_AcceptInvite::StaticClass();
}
UEIK_Friends_AcceptInvite::UEIK_Friends_AcceptInvite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Friends_AcceptInvite);
UEIK_Friends_AcceptInvite::~UEIK_Friends_AcceptInvite() {}
// End Class UEIK_Friends_AcceptInvite

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_AcceptInvite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Friends_AcceptInvite, UEIK_Friends_AcceptInvite::StaticClass, TEXT("UEIK_Friends_AcceptInvite"), &Z_Registration_Info_UClass_UEIK_Friends_AcceptInvite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Friends_AcceptInvite), 2629883844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_AcceptInvite_h_3659113238(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_AcceptInvite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_FriendsInterface_EIK_Friends_AcceptInvite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_LobbySearch_Find() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LobbySearch_Find();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_LobbySearch_Find_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_HLobbySearch();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIKLobbySearchFind
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::NewProp_ResultCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIKLobbySearchFind__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIKLobbySearchFind_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbySearchFind, TEnumAsByte<EEIK_Result> const& ResultCode)
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
	};
	_Script_OnlineSubsystemEIK_eventEIKLobbySearchFind_Parms Parms;
	Parms.ResultCode=ResultCode;
	EIKLobbySearchFind.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIKLobbySearchFind

// Begin Class UEIK_LobbySearch_Find Function EIK_LobbySearch_Find
struct Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics
{
	struct EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms
	{
		FEIK_HLobbySearch Handle;
		FEIK_ProductUserId LocalUserId;
		UEIK_LobbySearch_Find* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Find lobbies matching the search criteria setup via this lobby search handle. When the operation completes, this handle will have the search results that can be parsed\n" },
#endif
		{ "DisplayName", "EOS_LobbySearch_Find" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find lobbies matching the search criteria setup via this lobby search handle. When the operation completes, this handle will have the search results that can be parsed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms, Handle), Z_Construct_UScriptStruct_FEIK_HLobbySearch, METADATA_PARAMS(0, nullptr) }; // 1557403278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms, ReturnValue), Z_Construct_UClass_UEIK_LobbySearch_Find_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_LobbySearch_Find, nullptr, "EIK_LobbySearch_Find", nullptr, nullptr, Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::EIK_LobbySearch_Find_eventEIK_LobbySearch_Find_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_LobbySearch_Find::execEIK_LobbySearch_Find)
{
	P_GET_STRUCT(FEIK_HLobbySearch,Z_Param_Handle);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_LobbySearch_Find**)Z_Param__Result=UEIK_LobbySearch_Find::EIK_LobbySearch_Find(Z_Param_Handle,Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_LobbySearch_Find Function EIK_LobbySearch_Find

// Begin Class UEIK_LobbySearch_Find
void UEIK_LobbySearch_Find::StaticRegisterNativesUEIK_LobbySearch_Find()
{
	UClass* Class = UEIK_LobbySearch_Find::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_LobbySearch_Find", &UEIK_LobbySearch_Find::execEIK_LobbySearch_Find },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_LobbySearch_Find);
UClass* Z_Construct_UClass_UEIK_LobbySearch_Find_NoRegister()
{
	return UEIK_LobbySearch_Find::StaticClass();
}
struct Z_Construct_UClass_UEIK_LobbySearch_Find_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_LobbySearch_Find.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_LobbySearch_Find_EIK_LobbySearch_Find, "EIK_LobbySearch_Find" }, // 2319831869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_LobbySearch_Find>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_LobbySearch_Find, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbySearchFind__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1975135896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::ClassParams = {
	&UEIK_LobbySearch_Find::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_LobbySearch_Find()
{
	if (!Z_Registration_Info_UClass_UEIK_LobbySearch_Find.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_LobbySearch_Find.OuterSingleton, Z_Construct_UClass_UEIK_LobbySearch_Find_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_LobbySearch_Find.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_LobbySearch_Find>()
{
	return UEIK_LobbySearch_Find::StaticClass();
}
UEIK_LobbySearch_Find::UEIK_LobbySearch_Find(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_LobbySearch_Find);
UEIK_LobbySearch_Find::~UEIK_LobbySearch_Find() {}
// End Class UEIK_LobbySearch_Find

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_LobbySearch_Find, UEIK_LobbySearch_Find::StaticClass, TEXT("UEIK_LobbySearch_Find"), &Z_Registration_Info_UClass_UEIK_LobbySearch_Find, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_LobbySearch_Find), 767372098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_2225863596(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_LobbySearch_Find_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

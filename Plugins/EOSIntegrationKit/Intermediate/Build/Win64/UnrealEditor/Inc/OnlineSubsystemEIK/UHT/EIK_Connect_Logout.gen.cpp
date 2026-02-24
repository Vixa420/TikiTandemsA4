// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_Logout.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_Logout() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_Logout();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_Logout_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Connect_Logout_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms
	{
		FEIK_ProductUserId ProductUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Logout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms, ProductUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductUserId_MetaData), NewProp_ProductUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::NewProp_ProductUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_Logout_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_Logout_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_Logout_Delegate, FEIK_ProductUserId const& ProductUserId)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms
	{
		FEIK_ProductUserId ProductUserId;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_Logout_Delegate_Parms Parms;
	Parms.ProductUserId=ProductUserId;
	EIK_Connect_Logout_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_Logout_Delegate

// Begin Class UEIK_Connect_Logout Function EIK_Connect_Logout
struct Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics
{
	struct EIK_Connect_Logout_eventEIK_Connect_Logout_Parms
	{
		FEIK_ProductUserId ProductUserId;
		UEIK_Connect_Logout* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Logout a currently logged in user. NOTE: Access tokens for Product User IDs cannot be revoked. This operation really just cleans up state for the Product User ID and locally discards any associated access token.\n" },
#endif
		{ "DisplayName", "EOS_Connect_Logout" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Logout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logout a currently logged in user. NOTE: Access tokens for Product User IDs cannot be revoked. This operation really just cleans up state for the Product User ID and locally discards any associated access token." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_Logout_eventEIK_Connect_Logout_Parms, ProductUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_Logout_eventEIK_Connect_Logout_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_Logout_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::NewProp_ProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_Logout, nullptr, "EIK_Connect_Logout", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::EIK_Connect_Logout_eventEIK_Connect_Logout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::EIK_Connect_Logout_eventEIK_Connect_Logout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_Logout::execEIK_Connect_Logout)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_ProductUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_Logout**)Z_Param__Result=UEIK_Connect_Logout::EIK_Connect_Logout(Z_Param_ProductUserId);
	P_NATIVE_END;
}
// End Class UEIK_Connect_Logout Function EIK_Connect_Logout

// Begin Class UEIK_Connect_Logout
void UEIK_Connect_Logout::StaticRegisterNativesUEIK_Connect_Logout()
{
	UClass* Class = UEIK_Connect_Logout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_Logout", &UEIK_Connect_Logout::execEIK_Connect_Logout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_Logout);
UClass* Z_Construct_UClass_UEIK_Connect_Logout_NoRegister()
{
	return UEIK_Connect_Logout::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_Logout.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Logout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_Logout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_Logout_EIK_Connect_Logout, "EIK_Connect_Logout" }, // 1798734528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_Logout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_Logout_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_Logout, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_Logout_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4258288282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_Logout_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Logout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_Logout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Logout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_Logout_Statics::ClassParams = {
	&UEIK_Connect_Logout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_Logout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Logout_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_Logout_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_Logout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_Logout()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_Logout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_Logout.OuterSingleton, Z_Construct_UClass_UEIK_Connect_Logout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_Logout.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_Logout>()
{
	return UEIK_Connect_Logout::StaticClass();
}
UEIK_Connect_Logout::UEIK_Connect_Logout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_Logout);
UEIK_Connect_Logout::~UEIK_Connect_Logout() {}
// End Class UEIK_Connect_Logout

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Logout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_Logout, UEIK_Connect_Logout::StaticClass, TEXT("UEIK_Connect_Logout"), &Z_Registration_Info_UClass_UEIK_Connect_Logout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_Logout), 1937471935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Logout_h_243043418(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Logout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_Logout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

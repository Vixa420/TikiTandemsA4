// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_DeleteDeviceId_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FDeleteDeviceIDResponsDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "DeleteDeviceIDResponsDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDeleteDeviceIDResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeleteDeviceIDResponsDelegate)
{
	DeleteDeviceIDResponsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDeleteDeviceIDResponsDelegate

// Begin Class UEIK_DeleteDeviceId_AsyncFunction Function DeleteDeviceId
struct Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics
{
	struct EIK_DeleteDeviceId_AsyncFunction_eventDeleteDeviceId_Parms
	{
		UEIK_DeleteDeviceId_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_DeleteDeviceId_AsyncFunction_eventDeleteDeviceId_Parms, ReturnValue), Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction, nullptr, "DeleteDeviceId", nullptr, nullptr, Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::EIK_DeleteDeviceId_AsyncFunction_eventDeleteDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::EIK_DeleteDeviceId_AsyncFunction_eventDeleteDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_DeleteDeviceId_AsyncFunction::execDeleteDeviceId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_DeleteDeviceId_AsyncFunction**)Z_Param__Result=UEIK_DeleteDeviceId_AsyncFunction::DeleteDeviceId();
	P_NATIVE_END;
}
// End Class UEIK_DeleteDeviceId_AsyncFunction Function DeleteDeviceId

// Begin Class UEIK_DeleteDeviceId_AsyncFunction
void UEIK_DeleteDeviceId_AsyncFunction::StaticRegisterNativesUEIK_DeleteDeviceId_AsyncFunction()
{
	UClass* Class = UEIK_DeleteDeviceId_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteDeviceId", &UEIK_DeleteDeviceId_AsyncFunction::execDeleteDeviceId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_DeleteDeviceId_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_NoRegister()
{
	return UEIK_DeleteDeviceId_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_DeleteDeviceId_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_DeleteDeviceId_AsyncFunction_DeleteDeviceId, "DeleteDeviceId" }, // 965092648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_DeleteDeviceId_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_DeleteDeviceId_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2813725315
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_DeleteDeviceId_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DeleteDeviceIDResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2813725315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::ClassParams = {
	&UEIK_DeleteDeviceId_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_DeleteDeviceId_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_DeleteDeviceId_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_DeleteDeviceId_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_DeleteDeviceId_AsyncFunction>()
{
	return UEIK_DeleteDeviceId_AsyncFunction::StaticClass();
}
UEIK_DeleteDeviceId_AsyncFunction::UEIK_DeleteDeviceId_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_DeleteDeviceId_AsyncFunction);
UEIK_DeleteDeviceId_AsyncFunction::~UEIK_DeleteDeviceId_AsyncFunction() {}
// End Class UEIK_DeleteDeviceId_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_DeleteDeviceId_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_DeleteDeviceId_AsyncFunction, UEIK_DeleteDeviceId_AsyncFunction::StaticClass, TEXT("UEIK_DeleteDeviceId_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_DeleteDeviceId_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_DeleteDeviceId_AsyncFunction), 2401195906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_DeleteDeviceId_AsyncFunction_h_1316067031(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_DeleteDeviceId_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_DeleteDeviceId_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

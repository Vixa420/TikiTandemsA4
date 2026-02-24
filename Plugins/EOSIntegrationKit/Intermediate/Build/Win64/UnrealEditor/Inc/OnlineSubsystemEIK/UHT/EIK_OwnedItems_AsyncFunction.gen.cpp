// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_OwnedItems_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FGetOwnedItems_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms
	{
		TArray<FString> OwnedItemNames;
		FString ErrorString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedItemNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnedItemNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedItemNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_OwnedItemNames = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms, OwnedItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedItemNames_MetaData), NewProp_OwnedItemNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms, ErrorString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorString_MetaData), NewProp_ErrorString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_OwnedItemNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::NewProp_ErrorString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetOwnedItems_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGetOwnedItems_Delegate_DelegateWrapper(const FMulticastScriptDelegate& GetOwnedItems_Delegate, TArray<FString> const& OwnedItemNames, const FString& ErrorString)
{
	struct _Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms
	{
		TArray<FString> OwnedItemNames;
		FString ErrorString;
	};
	_Script_OnlineSubsystemEIK_eventGetOwnedItems_Delegate_Parms Parms;
	Parms.OwnedItemNames=OwnedItemNames;
	Parms.ErrorString=ErrorString;
	GetOwnedItems_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGetOwnedItems_Delegate

// Begin Class UEIK_OwnedItems_AsyncFunction Function GetEIKOwnedItems
struct Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics
{
	struct EIK_OwnedItems_AsyncFunction_eventGetEIKOwnedItems_Parms
	{
		UEIK_OwnedItems_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the owned items in the online subsystem using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/stats/\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Owned Items" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the owned items in the online subsystem using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/stats/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_OwnedItems_AsyncFunction_eventGetEIKOwnedItems_Parms, ReturnValue), Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction, nullptr, "GetEIKOwnedItems", nullptr, nullptr, Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::EIK_OwnedItems_AsyncFunction_eventGetEIKOwnedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::EIK_OwnedItems_AsyncFunction_eventGetEIKOwnedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_OwnedItems_AsyncFunction::execGetEIKOwnedItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_OwnedItems_AsyncFunction**)Z_Param__Result=UEIK_OwnedItems_AsyncFunction::GetEIKOwnedItems();
	P_NATIVE_END;
}
// End Class UEIK_OwnedItems_AsyncFunction Function GetEIKOwnedItems

// Begin Class UEIK_OwnedItems_AsyncFunction
void UEIK_OwnedItems_AsyncFunction::StaticRegisterNativesUEIK_OwnedItems_AsyncFunction()
{
	UClass* Class = UEIK_OwnedItems_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEIKOwnedItems", &UEIK_OwnedItems_AsyncFunction::execGetEIKOwnedItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_OwnedItems_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_NoRegister()
{
	return UEIK_OwnedItems_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_OwnedItems_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_OwnedItems_AsyncFunction_GetEIKOwnedItems, "GetEIKOwnedItems" }, // 3775507508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_OwnedItems_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_OwnedItems_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3023477735
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_OwnedItems_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOwnedItems_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 3023477735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::ClassParams = {
	&UEIK_OwnedItems_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_OwnedItems_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_OwnedItems_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_OwnedItems_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_OwnedItems_AsyncFunction>()
{
	return UEIK_OwnedItems_AsyncFunction::StaticClass();
}
UEIK_OwnedItems_AsyncFunction::UEIK_OwnedItems_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_OwnedItems_AsyncFunction);
UEIK_OwnedItems_AsyncFunction::~UEIK_OwnedItems_AsyncFunction() {}
// End Class UEIK_OwnedItems_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_OwnedItems_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_OwnedItems_AsyncFunction, UEIK_OwnedItems_AsyncFunction::StaticClass, TEXT("UEIK_OwnedItems_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_OwnedItems_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_OwnedItems_AsyncFunction), 2336839562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_OwnedItems_AsyncFunction_h_97986211(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_OwnedItems_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_OwnedItems_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

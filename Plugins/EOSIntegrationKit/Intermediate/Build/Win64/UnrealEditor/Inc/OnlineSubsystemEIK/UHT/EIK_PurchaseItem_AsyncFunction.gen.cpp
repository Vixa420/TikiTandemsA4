// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_PurchaseItem_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FPurchaseItemResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "PurchaseItemResult__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPurchaseItemResult_DelegateWrapper(const FMulticastScriptDelegate& PurchaseItemResult)
{
	PurchaseItemResult.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPurchaseItemResult

// Begin Class UEIK_PurchaseItem_AsyncFunction Function PurchaseItem
struct Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics
{
	struct EIK_PurchaseItem_AsyncFunction_eventPurchaseItem_Parms
	{
		FString ItemID;
		UEIK_PurchaseItem_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method purchases an item in the online subsystem using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09*/" },
#endif
		{ "DisplayName", "Purchase EIK Item" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method purchases an item in the online subsystem using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PurchaseItem_AsyncFunction_eventPurchaseItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_PurchaseItem_AsyncFunction_eventPurchaseItem_Parms, ReturnValue), Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction, nullptr, "PurchaseItem", nullptr, nullptr, Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::EIK_PurchaseItem_AsyncFunction_eventPurchaseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::EIK_PurchaseItem_AsyncFunction_eventPurchaseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_PurchaseItem_AsyncFunction::execPurchaseItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_PurchaseItem_AsyncFunction**)Z_Param__Result=UEIK_PurchaseItem_AsyncFunction::PurchaseItem(Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UEIK_PurchaseItem_AsyncFunction Function PurchaseItem

// Begin Class UEIK_PurchaseItem_AsyncFunction
void UEIK_PurchaseItem_AsyncFunction::StaticRegisterNativesUEIK_PurchaseItem_AsyncFunction()
{
	UClass* Class = UEIK_PurchaseItem_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PurchaseItem", &UEIK_PurchaseItem_AsyncFunction::execPurchaseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_PurchaseItem_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_NoRegister()
{
	return UEIK_PurchaseItem_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_PurchaseItem_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_PurchaseItem_AsyncFunction_PurchaseItem, "PurchaseItem" }, // 2017008988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_PurchaseItem_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PurchaseItem_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4189140484
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_PurchaseItem_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_PurchaseItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 4189140484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::ClassParams = {
	&UEIK_PurchaseItem_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_PurchaseItem_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_PurchaseItem_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_PurchaseItem_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_PurchaseItem_AsyncFunction>()
{
	return UEIK_PurchaseItem_AsyncFunction::StaticClass();
}
UEIK_PurchaseItem_AsyncFunction::UEIK_PurchaseItem_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_PurchaseItem_AsyncFunction);
UEIK_PurchaseItem_AsyncFunction::~UEIK_PurchaseItem_AsyncFunction() {}
// End Class UEIK_PurchaseItem_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_PurchaseItem_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_PurchaseItem_AsyncFunction, UEIK_PurchaseItem_AsyncFunction::StaticClass, TEXT("UEIK_PurchaseItem_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_PurchaseItem_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_PurchaseItem_AsyncFunction), 3364624523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_PurchaseItem_AsyncFunction_h_580284474(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_PurchaseItem_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_PurchaseItem_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

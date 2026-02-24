// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SetPlayerData_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FSetDataResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "SetDataResult__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSetDataResult_DelegateWrapper(const FMulticastScriptDelegate& SetDataResult)
{
	SetDataResult.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FSetDataResult

// Begin Class UEIK_SetPlayerData_AsyncFunction Function SetPlayerData
struct Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics
{
	struct EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms
	{
		FString FileName;
		TArray<uint8> DataToSave;
		UEIK_SetPlayerData_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Storage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method updates the player data in the online subsystem using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/playerdata/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
#endif
		{ "DisplayName", "Set EIK Player Storage" },
		{ "ModuleRelativePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method updates the player data in the online subsystem using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/playerdata/\nFor Input Parameters, please refer to the documentation link above." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction, nullptr, "SetPlayerData", nullptr, nullptr, Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::EIK_SetPlayerData_AsyncFunction_eventSetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SetPlayerData_AsyncFunction::execSetPlayerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataToSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SetPlayerData_AsyncFunction**)Z_Param__Result=UEIK_SetPlayerData_AsyncFunction::SetPlayerData(Z_Param_FileName,Z_Param_Out_DataToSave);
	P_NATIVE_END;
}
// End Class UEIK_SetPlayerData_AsyncFunction Function SetPlayerData

// Begin Class UEIK_SetPlayerData_AsyncFunction
void UEIK_SetPlayerData_AsyncFunction::StaticRegisterNativesUEIK_SetPlayerData_AsyncFunction()
{
	UClass* Class = UEIK_SetPlayerData_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPlayerData", &UEIK_SetPlayerData_AsyncFunction::execSetPlayerData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SetPlayerData_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_NoRegister()
{
	return UEIK_SetPlayerData_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/PlayerStorage/EIK_SetPlayerData_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SetPlayerData_AsyncFunction_SetPlayerData, "SetPlayerData" }, // 964417292
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SetPlayerData_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SetPlayerData_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1384079169
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SetPlayerData_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetDataResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 1384079169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::ClassParams = {
	&UEIK_SetPlayerData_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_SetPlayerData_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SetPlayerData_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SetPlayerData_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SetPlayerData_AsyncFunction>()
{
	return UEIK_SetPlayerData_AsyncFunction::StaticClass();
}
UEIK_SetPlayerData_AsyncFunction::UEIK_SetPlayerData_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SetPlayerData_AsyncFunction);
UEIK_SetPlayerData_AsyncFunction::~UEIK_SetPlayerData_AsyncFunction() {}
// End Class UEIK_SetPlayerData_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_SetPlayerData_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SetPlayerData_AsyncFunction, UEIK_SetPlayerData_AsyncFunction::StaticClass, TEXT("UEIK_SetPlayerData_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_SetPlayerData_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SetPlayerData_AsyncFunction), 1966467453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_SetPlayerData_AsyncFunction_h_3536639608(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_SetPlayerData_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_SetPlayerData_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

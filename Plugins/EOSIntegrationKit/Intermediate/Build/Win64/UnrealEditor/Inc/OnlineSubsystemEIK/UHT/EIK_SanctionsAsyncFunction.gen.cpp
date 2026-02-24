// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SanctionsAsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Sanctions_PlayerSanction();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FSanctionsDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms
	{
		TArray<FEIK_Sanctions_PlayerSanction> Sanctions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sanctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sanctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sanctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_Inner = { "Sanctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Sanctions_PlayerSanction, METADATA_PARAMS(0, nullptr) }; // 1384981515
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions = { "Sanctions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms, Sanctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sanctions_MetaData), NewProp_Sanctions_MetaData) }; // 1384981515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "SanctionsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSanctionsDelegate_DelegateWrapper(const FMulticastScriptDelegate& SanctionsDelegate, TArray<FEIK_Sanctions_PlayerSanction> const& Sanctions)
{
	struct _Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms
	{
		TArray<FEIK_Sanctions_PlayerSanction> Sanctions;
	};
	_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms Parms;
	Parms.Sanctions=Sanctions;
	SanctionsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSanctionsDelegate

// Begin Class UEIK_SanctionsAsyncFunction Function GetEikPlayerSanctionsAsyncFunction
struct Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics
{
	struct EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms
	{
		FString LocalProductUserID;
		FString TargetProductUserID;
		UEIK_SanctionsAsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the logged in user's achievements from the EOS backend.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Player Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the logged in user's achievements from the EOS backend.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductUserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProductUserID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_LocalProductUserID = { "LocalProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, LocalProductUserID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_TargetProductUserID = { "TargetProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, TargetProductUserID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_LocalProductUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_TargetProductUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SanctionsAsyncFunction, nullptr, "GetEikPlayerSanctionsAsyncFunction", nullptr, nullptr, Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SanctionsAsyncFunction::execGetEikPlayerSanctionsAsyncFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalProductUserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetProductUserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SanctionsAsyncFunction**)Z_Param__Result=UEIK_SanctionsAsyncFunction::GetEikPlayerSanctionsAsyncFunction(Z_Param_LocalProductUserID,Z_Param_TargetProductUserID);
	P_NATIVE_END;
}
// End Class UEIK_SanctionsAsyncFunction Function GetEikPlayerSanctionsAsyncFunction

// Begin Class UEIK_SanctionsAsyncFunction
void UEIK_SanctionsAsyncFunction::StaticRegisterNativesUEIK_SanctionsAsyncFunction()
{
	UClass* Class = UEIK_SanctionsAsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEikPlayerSanctionsAsyncFunction", &UEIK_SanctionsAsyncFunction::execGetEikPlayerSanctionsAsyncFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SanctionsAsyncFunction);
UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister()
{
	return UEIK_SanctionsAsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction, "GetEikPlayerSanctionsAsyncFunction" }, // 752423731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SanctionsAsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SanctionsAsyncFunction, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 413088224
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SanctionsAsyncFunction, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 413088224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::ClassParams = {
	&UEIK_SanctionsAsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SanctionsAsyncFunction>()
{
	return UEIK_SanctionsAsyncFunction::StaticClass();
}
UEIK_SanctionsAsyncFunction::UEIK_SanctionsAsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SanctionsAsyncFunction);
UEIK_SanctionsAsyncFunction::~UEIK_SanctionsAsyncFunction() {}
// End Class UEIK_SanctionsAsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SanctionsAsyncFunction, UEIK_SanctionsAsyncFunction::StaticClass, TEXT("UEIK_SanctionsAsyncFunction"), &Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SanctionsAsyncFunction), 3782165178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_3695716712(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

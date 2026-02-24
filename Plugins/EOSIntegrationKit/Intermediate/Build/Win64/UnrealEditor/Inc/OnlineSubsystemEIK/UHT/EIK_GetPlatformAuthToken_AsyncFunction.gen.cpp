// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetPlatformAuthToken_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum EEIK_PlatformToUse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_PlatformToUse;
static UEnum* EEIK_PlatformToUse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_PlatformToUse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_PlatformToUse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIK_PlatformToUse"));
	}
	return Z_Registration_Info_UEnum_EEIK_PlatformToUse.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_PlatformToUse>()
{
	return EEIK_PlatformToUse_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Apple.Name", "Apple" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
		{ "Steam.Name", "Steam" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Steam", (int64)Steam },
		{ "Apple", (int64)Apple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EEIK_PlatformToUse",
	"EEIK_PlatformToUse",
	Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse()
{
	if (!Z_Registration_Info_UEnum_EEIK_PlatformToUse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_PlatformToUse.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_PlatformToUse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_PlatformToUse.InnerSingleton;
}
// End Enum EEIK_PlatformToUse

// Begin Delegate FOnGetPlatformAuthTokenComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms
	{
		FString AuthToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuthToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms, AuthToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthToken_MetaData), NewProp_AuthToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::NewProp_AuthToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnGetPlatformAuthTokenComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetPlatformAuthTokenComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetPlatformAuthTokenComplete, const FString& AuthToken)
{
	struct _Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms
	{
		FString AuthToken;
	};
	_Script_OnlineSubsystemEIK_eventOnGetPlatformAuthTokenComplete_Parms Parms;
	Parms.AuthToken=AuthToken;
	OnGetPlatformAuthTokenComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetPlatformAuthTokenComplete

// Begin Class UEIK_GetPlatformAuthToken_AsyncFunction Function GetPlatformAuthToken
struct Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics
{
	struct EIK_GetPlatformAuthToken_AsyncFunction_eventGetPlatformAuthToken_Parms
	{
		UEIK_GetPlatformAuthToken_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit|Extra" },
		{ "DisplayName", "Get Steam Auth Token" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetPlatformAuthToken_AsyncFunction_eventGetPlatformAuthToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction, nullptr, "GetPlatformAuthToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::EIK_GetPlatformAuthToken_AsyncFunction_eventGetPlatformAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::EIK_GetPlatformAuthToken_AsyncFunction_eventGetPlatformAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetPlatformAuthToken_AsyncFunction::execGetPlatformAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetPlatformAuthToken_AsyncFunction**)Z_Param__Result=UEIK_GetPlatformAuthToken_AsyncFunction::GetPlatformAuthToken();
	P_NATIVE_END;
}
// End Class UEIK_GetPlatformAuthToken_AsyncFunction Function GetPlatformAuthToken

// Begin Class UEIK_GetPlatformAuthToken_AsyncFunction
void UEIK_GetPlatformAuthToken_AsyncFunction::StaticRegisterNativesUEIK_GetPlatformAuthToken_AsyncFunction()
{
	UClass* Class = UEIK_GetPlatformAuthToken_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlatformAuthToken", &UEIK_GetPlatformAuthToken_AsyncFunction::execGetPlatformAuthToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetPlatformAuthToken_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_NoRegister()
{
	return UEIK_GetPlatformAuthToken_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_GetPlatformAuthToken_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetPlatformAuthToken_AsyncFunction_GetPlatformAuthToken, "GetPlatformAuthToken" }, // 2014319234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetPlatformAuthToken_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetPlatformAuthToken_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 424451819
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetPlatformAuthToken_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetPlatformAuthTokenComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 424451819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::ClassParams = {
	&UEIK_GetPlatformAuthToken_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_GetPlatformAuthToken_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetPlatformAuthToken_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetPlatformAuthToken_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetPlatformAuthToken_AsyncFunction>()
{
	return UEIK_GetPlatformAuthToken_AsyncFunction::StaticClass();
}
UEIK_GetPlatformAuthToken_AsyncFunction::UEIK_GetPlatformAuthToken_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetPlatformAuthToken_AsyncFunction);
UEIK_GetPlatformAuthToken_AsyncFunction::~UEIK_GetPlatformAuthToken_AsyncFunction() {}
// End Class UEIK_GetPlatformAuthToken_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEIK_PlatformToUse_StaticEnum, TEXT("EEIK_PlatformToUse"), &Z_Registration_Info_UEnum_EEIK_PlatformToUse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1237973599U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetPlatformAuthToken_AsyncFunction, UEIK_GetPlatformAuthToken_AsyncFunction::StaticClass, TEXT("UEIK_GetPlatformAuthToken_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetPlatformAuthToken_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetPlatformAuthToken_AsyncFunction), 521436593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_1106067935(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_GetPlatformAuthToken_AsyncFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

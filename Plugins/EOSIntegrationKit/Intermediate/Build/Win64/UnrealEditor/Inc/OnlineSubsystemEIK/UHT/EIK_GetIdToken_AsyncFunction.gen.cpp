// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetIdToken_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKCopyAuthToken();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIKCopyAuthToken
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKCopyAuthToken;
class UScriptStruct* FEIKCopyAuthToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKCopyAuthToken, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKCopyAuthToken"));
	}
	return Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKCopyAuthToken>()
{
	return FEIKCopyAuthToken::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EpicAccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdToken_JWT_MetaData[] = {
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IdToken_JWT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKCopyAuthToken>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKCopyAuthToken, EpicAccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EpicAccountId_MetaData), NewProp_EpicAccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::NewProp_IdToken_JWT = { "IdToken_JWT", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKCopyAuthToken, IdToken_JWT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdToken_JWT_MetaData), NewProp_IdToken_JWT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::NewProp_EpicAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::NewProp_IdToken_JWT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIKCopyAuthToken",
	Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::PropPointers),
	sizeof(FEIKCopyAuthToken),
	alignof(FEIKCopyAuthToken),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIKCopyAuthToken()
{
	if (!Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.InnerSingleton, Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIKCopyAuthToken.InnerSingleton;
}
// End ScriptStruct FEIKCopyAuthToken

// Begin Delegate FGetIdToken_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms
	{
		FEIKCopyAuthToken EIKCopyAuthToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EIKCopyAuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EIKCopyAuthToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::NewProp_EIKCopyAuthToken = { "EIKCopyAuthToken", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms, EIKCopyAuthToken), Z_Construct_UScriptStruct_FEIKCopyAuthToken, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EIKCopyAuthToken_MetaData), NewProp_EIKCopyAuthToken_MetaData) }; // 3784712433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::NewProp_EIKCopyAuthToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetIdToken_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGetIdToken_Delegate_DelegateWrapper(const FMulticastScriptDelegate& GetIdToken_Delegate, const FEIKCopyAuthToken EIKCopyAuthToken)
{
	struct _Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms
	{
		FEIKCopyAuthToken EIKCopyAuthToken;
	};
	_Script_OnlineSubsystemEIK_eventGetIdToken_Delegate_Parms Parms;
	Parms.EIKCopyAuthToken=EIKCopyAuthToken;
	GetIdToken_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGetIdToken_Delegate

// Begin Class UEIK_GetIdToken_AsyncFunction Function GetEIKAuthToken
struct Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics
{
	struct EIK_GetIdToken_AsyncFunction_eventGetEIKAuthToken_Parms
	{
		FString EpicAccountId;
		UEIK_GetIdToken_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Login" },
		{ "DisplayName", "Get EIK Auth Token" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get id token, often used for OpenID. Returns an ID token as a JSON Web Token (JWT) in string format. Only works with Epic accounts." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetIdToken_AsyncFunction_eventGetEIKAuthToken_Parms, EpicAccountId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetIdToken_AsyncFunction_eventGetEIKAuthToken_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::NewProp_EpicAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction, nullptr, "GetEIKAuthToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::EIK_GetIdToken_AsyncFunction_eventGetEIKAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::EIK_GetIdToken_AsyncFunction_eventGetEIKAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetIdToken_AsyncFunction::execGetEIKAuthToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EpicAccountId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetIdToken_AsyncFunction**)Z_Param__Result=UEIK_GetIdToken_AsyncFunction::GetEIKAuthToken(Z_Param_EpicAccountId);
	P_NATIVE_END;
}
// End Class UEIK_GetIdToken_AsyncFunction Function GetEIKAuthToken

// Begin Class UEIK_GetIdToken_AsyncFunction
void UEIK_GetIdToken_AsyncFunction::StaticRegisterNativesUEIK_GetIdToken_AsyncFunction()
{
	UClass* Class = UEIK_GetIdToken_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEIKAuthToken", &UEIK_GetIdToken_AsyncFunction::execGetEIKAuthToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetIdToken_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_NoRegister()
{
	return UEIK_GetIdToken_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_GetIdToken_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetIdToken_AsyncFunction_GetEIKAuthToken, "GetEIKAuthToken" }, // 3605812145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetIdToken_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetIdToken_AsyncFunction, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 1170111686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetIdToken_AsyncFunction, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetIdToken_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 1170111686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::ClassParams = {
	&UEIK_GetIdToken_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_GetIdToken_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetIdToken_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetIdToken_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetIdToken_AsyncFunction>()
{
	return UEIK_GetIdToken_AsyncFunction::StaticClass();
}
UEIK_GetIdToken_AsyncFunction::UEIK_GetIdToken_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetIdToken_AsyncFunction);
UEIK_GetIdToken_AsyncFunction::~UEIK_GetIdToken_AsyncFunction() {}
// End Class UEIK_GetIdToken_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIKCopyAuthToken::StaticStruct, Z_Construct_UScriptStruct_FEIKCopyAuthToken_Statics::NewStructOps, TEXT("EIKCopyAuthToken"), &Z_Registration_Info_UScriptStruct_EIKCopyAuthToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKCopyAuthToken), 3784712433U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetIdToken_AsyncFunction, UEIK_GetIdToken_AsyncFunction::StaticClass, TEXT("UEIK_GetIdToken_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetIdToken_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetIdToken_AsyncFunction), 2140539795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_1137500248(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_GetIdToken_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EIKLoginMethods/Public/GoogleLogin_SLK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleLogin_SLK() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EIKLOGINMETHODS_API UClass* Z_Construct_UClass_UGoogleLogin_SLK();
EIKLOGINMETHODS_API UClass* Z_Construct_UClass_UGoogleLogin_SLK_NoRegister();
EIKLOGINMETHODS_API UFunction* Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EIKLoginMethods();
// End Cross Module References

// Begin Delegate FGoogleSignInCallback
struct Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics
{
	struct _Script_EIKLoginMethods_eventGoogleSignInCallback_Parms
	{
		FString Token;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleLogin_SLK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKLoginMethods_eventGoogleSignInCallback_Parms, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EIKLoginMethods_eventGoogleSignInCallback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKLoginMethods, nullptr, "GoogleSignInCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::_Script_EIKLoginMethods_eventGoogleSignInCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::_Script_EIKLoginMethods_eventGoogleSignInCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGoogleSignInCallback_DelegateWrapper(const FMulticastScriptDelegate& GoogleSignInCallback, const FString& Token, const FString& Error)
{
	struct _Script_EIKLoginMethods_eventGoogleSignInCallback_Parms
	{
		FString Token;
		FString Error;
	};
	_Script_EIKLoginMethods_eventGoogleSignInCallback_Parms Parms;
	Parms.Token=Token;
	Parms.Error=Error;
	GoogleSignInCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGoogleSignInCallback

// Begin Class UGoogleLogin_SLK Function GoogleLogin
struct Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics
{
	struct GoogleLogin_SLK_eventGoogleLogin_Parms
	{
		UObject* WorldContextObject;
		FString ClientID;
		UGoogleLogin_SLK* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/GoogleLogin_SLK.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleLogin_SLK_eventGoogleLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleLogin_SLK_eventGoogleLogin_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientID_MetaData), NewProp_ClientID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleLogin_SLK_eventGoogleLogin_Parms, ReturnValue), Z_Construct_UClass_UGoogleLogin_SLK_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_ClientID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleLogin_SLK, nullptr, "GoogleLogin", nullptr, nullptr, Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::GoogleLogin_SLK_eventGoogleLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::GoogleLogin_SLK_eventGoogleLogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoogleLogin_SLK::execGoogleLogin)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClientID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGoogleLogin_SLK**)Z_Param__Result=UGoogleLogin_SLK::GoogleLogin(Z_Param_WorldContextObject,Z_Param_ClientID);
	P_NATIVE_END;
}
// End Class UGoogleLogin_SLK Function GoogleLogin

// Begin Class UGoogleLogin_SLK
void UGoogleLogin_SLK::StaticRegisterNativesUGoogleLogin_SLK()
{
	UClass* Class = UGoogleLogin_SLK::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GoogleLogin", &UGoogleLogin_SLK::execGoogleLogin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleLogin_SLK);
UClass* Z_Construct_UClass_UGoogleLogin_SLK_NoRegister()
{
	return UGoogleLogin_SLK::StaticClass();
}
struct Z_Construct_UClass_UGoogleLogin_SLK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GoogleLogin_SLK.h" },
		{ "ModuleRelativePath", "Public/GoogleLogin_SLK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "GoogleSubsystem" },
		{ "ModuleRelativePath", "Public/GoogleLogin_SLK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "GoogleSubsystem" },
		{ "ModuleRelativePath", "Public/GoogleLogin_SLK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleLogin_SLK_GoogleLogin, "GoogleLogin" }, // 3582092207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleLogin_SLK>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoogleLogin_SLK_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoogleLogin_SLK, Success), Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 3042892325
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoogleLogin_SLK_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoogleLogin_SLK, Failure), Z_Construct_UDelegateFunction_EIKLoginMethods_GoogleSignInCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 3042892325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleLogin_SLK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleLogin_SLK_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleLogin_SLK_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleLogin_SLK_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGoogleLogin_SLK_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EIKLoginMethods,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleLogin_SLK_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleLogin_SLK_Statics::ClassParams = {
	&UGoogleLogin_SLK::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGoogleLogin_SLK_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleLogin_SLK_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleLogin_SLK_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoogleLogin_SLK_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGoogleLogin_SLK()
{
	if (!Z_Registration_Info_UClass_UGoogleLogin_SLK.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleLogin_SLK.OuterSingleton, Z_Construct_UClass_UGoogleLogin_SLK_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoogleLogin_SLK.OuterSingleton;
}
template<> EIKLOGINMETHODS_API UClass* StaticClass<UGoogleLogin_SLK>()
{
	return UGoogleLogin_SLK::StaticClass();
}
UGoogleLogin_SLK::UGoogleLogin_SLK(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleLogin_SLK);
UGoogleLogin_SLK::~UGoogleLogin_SLK() {}
// End Class UGoogleLogin_SLK

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleLogin_SLK, UGoogleLogin_SLK::StaticClass, TEXT("UGoogleLogin_SLK"), &Z_Registration_Info_UClass_UGoogleLogin_SLK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleLogin_SLK), 1557081267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_427952131(TEXT("/Script/EIKLoginMethods"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_AcceptFriendInvite_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnAcceptFriendInviteComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnAcceptFriendInviteComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAcceptFriendInviteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAcceptFriendInviteComplete, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms
	{
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventOnAcceptFriendInviteComplete_Parms Parms;
	Parms.Error=Error;
	OnAcceptFriendInviteComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAcceptFriendInviteComplete

// Begin Class UEIK_AcceptFriendInvite_AsyncFunction Function AcceptFriendInvite
struct Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics
{
	struct EIK_AcceptFriendInvite_AsyncFunction_eventAcceptFriendInvite_Parms
	{
		FEIKUniqueNetId FriendId;
		UEIK_AcceptFriendInvite_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Friends" },
		{ "DisplayName", "Accept Friend Invite" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::NewProp_FriendId = { "FriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AcceptFriendInvite_AsyncFunction_eventAcceptFriendInvite_Parms, FriendId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_AcceptFriendInvite_AsyncFunction_eventAcceptFriendInvite_Parms, ReturnValue), Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::NewProp_FriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction, nullptr, "AcceptFriendInvite", nullptr, nullptr, Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::EIK_AcceptFriendInvite_AsyncFunction_eventAcceptFriendInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::EIK_AcceptFriendInvite_AsyncFunction_eventAcceptFriendInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_AcceptFriendInvite_AsyncFunction::execAcceptFriendInvite)
{
	P_GET_STRUCT(FEIKUniqueNetId,Z_Param_FriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_AcceptFriendInvite_AsyncFunction**)Z_Param__Result=UEIK_AcceptFriendInvite_AsyncFunction::AcceptFriendInvite(Z_Param_FriendId);
	P_NATIVE_END;
}
// End Class UEIK_AcceptFriendInvite_AsyncFunction Function AcceptFriendInvite

// Begin Class UEIK_AcceptFriendInvite_AsyncFunction
void UEIK_AcceptFriendInvite_AsyncFunction::StaticRegisterNativesUEIK_AcceptFriendInvite_AsyncFunction()
{
	UClass* Class = UEIK_AcceptFriendInvite_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptFriendInvite", &UEIK_AcceptFriendInvite_AsyncFunction::execAcceptFriendInvite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_AcceptFriendInvite_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_NoRegister()
{
	return UEIK_AcceptFriendInvite_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_AcceptFriendInvite_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_AcceptFriendInvite_AsyncFunction_AcceptFriendInvite, "AcceptFriendInvite" }, // 2463800795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_AcceptFriendInvite_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_AcceptFriendInvite_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1462239576
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_AcceptFriendInvite_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnAcceptFriendInviteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1462239576
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::ClassParams = {
	&UEIK_AcceptFriendInvite_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_AcceptFriendInvite_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_AcceptFriendInvite_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_AcceptFriendInvite_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_AcceptFriendInvite_AsyncFunction>()
{
	return UEIK_AcceptFriendInvite_AsyncFunction::StaticClass();
}
UEIK_AcceptFriendInvite_AsyncFunction::UEIK_AcceptFriendInvite_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_AcceptFriendInvite_AsyncFunction);
UEIK_AcceptFriendInvite_AsyncFunction::~UEIK_AcceptFriendInvite_AsyncFunction() {}
// End Class UEIK_AcceptFriendInvite_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_AcceptFriendInvite_AsyncFunction, UEIK_AcceptFriendInvite_AsyncFunction::StaticClass, TEXT("UEIK_AcceptFriendInvite_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_AcceptFriendInvite_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_AcceptFriendInvite_AsyncFunction), 1729041269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_2421759135(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_AcceptFriendInvite_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

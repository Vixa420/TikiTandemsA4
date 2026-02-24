// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_UnregisterPlayers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnUnregisterPlayersCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		TArray<FEIK_ProductUserId> UnregisteredPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnregisteredPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnregisteredPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnregisteredPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_UnregisteredPlayers_Inner = { "UnregisteredPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_UnregisteredPlayers = { "UnregisteredPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms, UnregisteredPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnregisteredPlayers_MetaData), NewProp_UnregisteredPlayers_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_UnregisteredPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::NewProp_UnregisteredPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnUnregisterPlayersCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnUnregisterPlayersCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnUnregisterPlayersCallback, TEnumAsByte<EEIK_Result> const& ResultCode, TArray<FEIK_ProductUserId> const& UnregisteredPlayers)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		TArray<FEIK_ProductUserId> UnregisteredPlayers;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnUnregisterPlayersCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.UnregisteredPlayers=UnregisteredPlayers;
	EIK_OnUnregisterPlayersCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnUnregisterPlayersCallback

// Begin Class UEIK_Sessions_UnregisterPlayers Function EIK_Sessions_UnregisterPlayers
struct Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics
{
	struct EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms
	{
		FString SessionName;
		TArray<FEIK_ProductUserId> PlayersToUnregister;
		UEIK_Sessions_UnregisterPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister a group of players with the session, freeing up space for others to join\n" },
#endif
		{ "DisplayName", "EOS_Sessions_UnregisterPlayers" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister a group of players with the session, freeing up space for others to join" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayersToUnregister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersToUnregister;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_PlayersToUnregister_Inner = { "PlayersToUnregister", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_PlayersToUnregister = { "PlayersToUnregister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms, PlayersToUnregister), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_PlayersToUnregister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_PlayersToUnregister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers, nullptr, "EIK_Sessions_UnregisterPlayers", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::EIK_Sessions_UnregisterPlayers_eventEIK_Sessions_UnregisterPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_UnregisterPlayers::execEIK_Sessions_UnregisterPlayers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_TARRAY(FEIK_ProductUserId,Z_Param_PlayersToUnregister);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_UnregisterPlayers**)Z_Param__Result=UEIK_Sessions_UnregisterPlayers::EIK_Sessions_UnregisterPlayers(Z_Param_SessionName,Z_Param_PlayersToUnregister);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_UnregisterPlayers Function EIK_Sessions_UnregisterPlayers

// Begin Class UEIK_Sessions_UnregisterPlayers
void UEIK_Sessions_UnregisterPlayers::StaticRegisterNativesUEIK_Sessions_UnregisterPlayers()
{
	UClass* Class = UEIK_Sessions_UnregisterPlayers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_UnregisterPlayers", &UEIK_Sessions_UnregisterPlayers::execEIK_Sessions_UnregisterPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_UnregisterPlayers);
UClass* Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_NoRegister()
{
	return UEIK_Sessions_UnregisterPlayers::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_UnregisterPlayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_UnregisterPlayers_EIK_Sessions_UnregisterPlayers, "EIK_Sessions_UnregisterPlayers" }, // 2324364741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_UnregisterPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_UnregisterPlayers, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnUnregisterPlayersCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2519951121
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::ClassParams = {
	&UEIK_Sessions_UnregisterPlayers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_UnregisterPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_UnregisterPlayers.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_UnregisterPlayers.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_UnregisterPlayers>()
{
	return UEIK_Sessions_UnregisterPlayers::StaticClass();
}
UEIK_Sessions_UnregisterPlayers::UEIK_Sessions_UnregisterPlayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_UnregisterPlayers);
UEIK_Sessions_UnregisterPlayers::~UEIK_Sessions_UnregisterPlayers() {}
// End Class UEIK_Sessions_UnregisterPlayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_UnregisterPlayers, UEIK_Sessions_UnregisterPlayers::StaticClass, TEXT("UEIK_Sessions_UnregisterPlayers"), &Z_Registration_Info_UClass_UEIK_Sessions_UnregisterPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_UnregisterPlayers), 2675710471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_534123687(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_UnregisterPlayers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

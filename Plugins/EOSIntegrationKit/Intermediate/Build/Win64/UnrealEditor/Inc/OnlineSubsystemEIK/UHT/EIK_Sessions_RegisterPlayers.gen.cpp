// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Sessions_RegisterPlayers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_RegisterPlayers();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_OnRegisterPlayersCallback
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		TArray<FEIK_ProductUserId> RegisteredPlayers;
		TArray<FEIK_ProductUserId> SanctionedPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SanctionedPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SanctionedPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SanctionedPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_RegisteredPlayers_Inner = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_RegisteredPlayers = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms, RegisteredPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredPlayers_MetaData), NewProp_RegisteredPlayers_MetaData) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_SanctionedPlayers_Inner = { "SanctionedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_SanctionedPlayers = { "SanctionedPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms, SanctionedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SanctionedPlayers_MetaData), NewProp_SanctionedPlayers_MetaData) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_RegisteredPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_RegisteredPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_SanctionedPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::NewProp_SanctionedPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_OnRegisterPlayersCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_OnRegisterPlayersCallback_DelegateWrapper(const FMulticastScriptDelegate& EIK_OnRegisterPlayersCallback, TEnumAsByte<EEIK_Result> const& ResultCode, TArray<FEIK_ProductUserId> const& RegisteredPlayers, TArray<FEIK_ProductUserId> const& SanctionedPlayers)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		TArray<FEIK_ProductUserId> RegisteredPlayers;
		TArray<FEIK_ProductUserId> SanctionedPlayers;
	};
	_Script_OnlineSubsystemEIK_eventEIK_OnRegisterPlayersCallback_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.RegisteredPlayers=RegisteredPlayers;
	Parms.SanctionedPlayers=SanctionedPlayers;
	EIK_OnRegisterPlayersCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_OnRegisterPlayersCallback

// Begin Class UEIK_Sessions_RegisterPlayers Function EIK_Sessions_RegisterPlayers
struct Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics
{
	struct EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms
	{
		FString SessionName;
		TArray<FEIK_ProductUserId> PlayersToRegister;
		UEIK_Sessions_RegisterPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session\n" },
#endif
		{ "DisplayName", "EOS_Sessions_RegisterPlayers" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayersToRegister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersToRegister;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_PlayersToRegister_Inner = { "PlayersToRegister", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_PlayersToRegister = { "PlayersToRegister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms, PlayersToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms, ReturnValue), Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_PlayersToRegister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_PlayersToRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Sessions_RegisterPlayers, nullptr, "EIK_Sessions_RegisterPlayers", nullptr, nullptr, Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::EIK_Sessions_RegisterPlayers_eventEIK_Sessions_RegisterPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Sessions_RegisterPlayers::execEIK_Sessions_RegisterPlayers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_TARRAY(FEIK_ProductUserId,Z_Param_PlayersToRegister);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Sessions_RegisterPlayers**)Z_Param__Result=UEIK_Sessions_RegisterPlayers::EIK_Sessions_RegisterPlayers(Z_Param_SessionName,Z_Param_PlayersToRegister);
	P_NATIVE_END;
}
// End Class UEIK_Sessions_RegisterPlayers Function EIK_Sessions_RegisterPlayers

// Begin Class UEIK_Sessions_RegisterPlayers
void UEIK_Sessions_RegisterPlayers::StaticRegisterNativesUEIK_Sessions_RegisterPlayers()
{
	UClass* Class = UEIK_Sessions_RegisterPlayers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sessions_RegisterPlayers", &UEIK_Sessions_RegisterPlayers::execEIK_Sessions_RegisterPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Sessions_RegisterPlayers);
UClass* Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_NoRegister()
{
	return UEIK_Sessions_RegisterPlayers::StaticClass();
}
struct Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sessions Interface" },
		{ "ModuleRelativePath", "SdkFunctions/SessionsInterface/EIK_Sessions_RegisterPlayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Sessions_RegisterPlayers_EIK_Sessions_RegisterPlayers, "EIK_Sessions_RegisterPlayers" }, // 2978050437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Sessions_RegisterPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Sessions_RegisterPlayers, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_OnRegisterPlayersCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 721145815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::ClassParams = {
	&UEIK_Sessions_RegisterPlayers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Sessions_RegisterPlayers()
{
	if (!Z_Registration_Info_UClass_UEIK_Sessions_RegisterPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Sessions_RegisterPlayers.OuterSingleton, Z_Construct_UClass_UEIK_Sessions_RegisterPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Sessions_RegisterPlayers.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Sessions_RegisterPlayers>()
{
	return UEIK_Sessions_RegisterPlayers::StaticClass();
}
UEIK_Sessions_RegisterPlayers::UEIK_Sessions_RegisterPlayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Sessions_RegisterPlayers);
UEIK_Sessions_RegisterPlayers::~UEIK_Sessions_RegisterPlayers() {}
// End Class UEIK_Sessions_RegisterPlayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Sessions_RegisterPlayers, UEIK_Sessions_RegisterPlayers::StaticClass, TEXT("UEIK_Sessions_RegisterPlayers"), &Z_Registration_Info_UClass_UEIK_Sessions_RegisterPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Sessions_RegisterPlayers), 1367369807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_4182568664(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SessionsInterface_EIK_Sessions_RegisterPlayers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

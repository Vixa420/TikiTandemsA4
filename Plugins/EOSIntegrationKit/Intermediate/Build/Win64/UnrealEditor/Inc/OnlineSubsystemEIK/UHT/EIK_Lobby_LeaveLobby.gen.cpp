// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Lobby_LeaveLobby() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_LeaveLobby();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_LeaveLobby_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_LobbyId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIKLobbyLeaveLobby
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_LobbyId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3666982492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIKLobbyLeaveLobby__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIKLobbyLeaveLobby_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbyLeaveLobby, TEnumAsByte<EEIK_Result> const& ResultCode, FEIK_LobbyId const& LobbyId)
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_LobbyId LobbyId;
	};
	_Script_OnlineSubsystemEIK_eventEIKLobbyLeaveLobby_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LobbyId=LobbyId;
	EIKLobbyLeaveLobby.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIKLobbyLeaveLobby

// Begin Class UEIK_Lobby_LeaveLobby Function EIK_Lobby_LeaveLobby
struct Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics
{
	struct EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_LobbyId LobbyId;
		UEIK_Lobby_LeaveLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Leave a lobby given a lobby ID If the lobby you are leaving had an RTC Room enabled, leaving the lobby will also automatically leave the RTC room.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_LeaveLobby" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leave a lobby given a lobby ID If the lobby you are leaving had an RTC Room enabled, leaving the lobby will also automatically leave the RTC room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms, LobbyId), Z_Construct_UScriptStruct_FEIK_LobbyId, METADATA_PARAMS(0, nullptr) }; // 3666982492
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_Lobby_LeaveLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Lobby_LeaveLobby, nullptr, "EIK_Lobby_LeaveLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::EIK_Lobby_LeaveLobby_eventEIK_Lobby_LeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Lobby_LeaveLobby::execEIK_Lobby_LeaveLobby)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_LobbyId,Z_Param_LobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Lobby_LeaveLobby**)Z_Param__Result=UEIK_Lobby_LeaveLobby::EIK_Lobby_LeaveLobby(Z_Param_LocalUserId,Z_Param_LobbyId);
	P_NATIVE_END;
}
// End Class UEIK_Lobby_LeaveLobby Function EIK_Lobby_LeaveLobby

// Begin Class UEIK_Lobby_LeaveLobby
void UEIK_Lobby_LeaveLobby::StaticRegisterNativesUEIK_Lobby_LeaveLobby()
{
	UClass* Class = UEIK_Lobby_LeaveLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_LeaveLobby", &UEIK_Lobby_LeaveLobby::execEIK_Lobby_LeaveLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Lobby_LeaveLobby);
UClass* Z_Construct_UClass_UEIK_Lobby_LeaveLobby_NoRegister()
{
	return UEIK_Lobby_LeaveLobby::StaticClass();
}
struct Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_LeaveLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Lobby_LeaveLobby_EIK_Lobby_LeaveLobby, "EIK_Lobby_LeaveLobby" }, // 3297533322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Lobby_LeaveLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Lobby_LeaveLobby, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyLeaveLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2488547769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::ClassParams = {
	&UEIK_Lobby_LeaveLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Lobby_LeaveLobby()
{
	if (!Z_Registration_Info_UClass_UEIK_Lobby_LeaveLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Lobby_LeaveLobby.OuterSingleton, Z_Construct_UClass_UEIK_Lobby_LeaveLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Lobby_LeaveLobby.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Lobby_LeaveLobby>()
{
	return UEIK_Lobby_LeaveLobby::StaticClass();
}
UEIK_Lobby_LeaveLobby::UEIK_Lobby_LeaveLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Lobby_LeaveLobby);
UEIK_Lobby_LeaveLobby::~UEIK_Lobby_LeaveLobby() {}
// End Class UEIK_Lobby_LeaveLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_LeaveLobby_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Lobby_LeaveLobby, UEIK_Lobby_LeaveLobby::StaticClass, TEXT("UEIK_Lobby_LeaveLobby"), &Z_Registration_Info_UClass_UEIK_Lobby_LeaveLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Lobby_LeaveLobby), 3489800921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_LeaveLobby_h_2364411383(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_LeaveLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_LeaveLobby_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

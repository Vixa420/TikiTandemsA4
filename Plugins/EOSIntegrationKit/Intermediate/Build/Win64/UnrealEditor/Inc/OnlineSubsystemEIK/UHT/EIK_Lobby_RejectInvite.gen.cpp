// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Lobby_RejectInvite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_RejectInvite();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Lobby_RejectInvite_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIKLobbyRejectInvite
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FString InviteId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3297013413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms, InviteId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteId_MetaData), NewProp_InviteId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::NewProp_InviteId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIKLobbyRejectInvite__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIKLobbyRejectInvite_DelegateWrapper(const FMulticastScriptDelegate& EIKLobbyRejectInvite, TEnumAsByte<EEIK_Result> const& ResultCode, const FString& InviteId)
{
	struct _Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FString InviteId;
	};
	_Script_OnlineSubsystemEIK_eventEIKLobbyRejectInvite_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.InviteId=InviteId;
	EIKLobbyRejectInvite.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIKLobbyRejectInvite

// Begin Class UEIK_Lobby_RejectInvite Function EIK_Lobby_RejectInvite
struct Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics
{
	struct EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FString InviteId;
		UEIK_Lobby_RejectInvite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Lobby Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reject an invite from another user.\n" },
#endif
		{ "DisplayName", "EOS_Lobby_RejectInvite" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reject an invite from another user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms, InviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms, ReturnValue), Z_Construct_UClass_UEIK_Lobby_RejectInvite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Lobby_RejectInvite, nullptr, "EIK_Lobby_RejectInvite", nullptr, nullptr, Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::EIK_Lobby_RejectInvite_eventEIK_Lobby_RejectInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Lobby_RejectInvite::execEIK_Lobby_RejectInvite)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InviteId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Lobby_RejectInvite**)Z_Param__Result=UEIK_Lobby_RejectInvite::EIK_Lobby_RejectInvite(Z_Param_LocalUserId,Z_Param_InviteId);
	P_NATIVE_END;
}
// End Class UEIK_Lobby_RejectInvite Function EIK_Lobby_RejectInvite

// Begin Class UEIK_Lobby_RejectInvite
void UEIK_Lobby_RejectInvite::StaticRegisterNativesUEIK_Lobby_RejectInvite()
{
	UClass* Class = UEIK_Lobby_RejectInvite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Lobby_RejectInvite", &UEIK_Lobby_RejectInvite::execEIK_Lobby_RejectInvite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Lobby_RejectInvite);
UClass* Z_Construct_UClass_UEIK_Lobby_RejectInvite_NoRegister()
{
	return UEIK_Lobby_RejectInvite::StaticClass();
}
struct Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h" },
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/LobbyInterface/EIK_Lobby_RejectInvite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Lobby_RejectInvite_EIK_Lobby_RejectInvite, "EIK_Lobby_RejectInvite" }, // 1576431852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Lobby_RejectInvite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Lobby_RejectInvite, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIKLobbyRejectInvite__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 292834662
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::ClassParams = {
	&UEIK_Lobby_RejectInvite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Lobby_RejectInvite()
{
	if (!Z_Registration_Info_UClass_UEIK_Lobby_RejectInvite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Lobby_RejectInvite.OuterSingleton, Z_Construct_UClass_UEIK_Lobby_RejectInvite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Lobby_RejectInvite.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Lobby_RejectInvite>()
{
	return UEIK_Lobby_RejectInvite::StaticClass();
}
UEIK_Lobby_RejectInvite::UEIK_Lobby_RejectInvite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Lobby_RejectInvite);
UEIK_Lobby_RejectInvite::~UEIK_Lobby_RejectInvite() {}
// End Class UEIK_Lobby_RejectInvite

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_RejectInvite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Lobby_RejectInvite, UEIK_Lobby_RejectInvite::StaticClass, TEXT("UEIK_Lobby_RejectInvite"), &Z_Registration_Info_UClass_UEIK_Lobby_RejectInvite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Lobby_RejectInvite), 1271877728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_RejectInvite_h_34064158(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_RejectInvite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_LobbyInterface_EIK_Lobby_RejectInvite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

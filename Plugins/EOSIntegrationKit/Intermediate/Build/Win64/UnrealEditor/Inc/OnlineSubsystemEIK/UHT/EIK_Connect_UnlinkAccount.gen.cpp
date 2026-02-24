// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_UnlinkAccount() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_UnlinkAccount();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_UnlinkAccount_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Connect_UnlinkAccount_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_UnlinkAccount_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_UnlinkAccount_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_UnlinkAccount_Delegate, FEIK_ProductUserId const& LocalUserId, EEIK_Result Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_UnlinkAccount_Delegate_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Result=Result;
	EIK_Connect_UnlinkAccount_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_UnlinkAccount_Delegate

// Begin Class UEIK_Connect_UnlinkAccount Function EIK_Connect_UnlinkAccount
struct Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics
{
	struct EIK_Connect_UnlinkAccount_eventEIK_Connect_UnlinkAccount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		UEIK_Connect_UnlinkAccount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unlink external auth credentials from the owning keychain of a logged in product user. This function allows recovering the user from scenarios where they have accidentally proceeded to creating a new product user for the local native user account, instead of linking it with an existing keychain that they have previously created by playing the game (or another game owned by the organization) on another platform. In such scenario, after the initial platform login and a new product user creation, the user wishes to re-login using other set of external auth credentials to connect with their existing game progression data. In order to allow automatic login also on the current platform, they will need to unlink the accidentally created new keychain and product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform account with that previously created existing product user and its owning keychain. In another scenario, the user may simply want to disassociate the account that they have logged in with from the current keychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again. In order to protect against account theft, it is only possible to unlink user accounts that have been authenticated and logged in to the product user in the current session. This prevents a malicious actor from gaining access to one of the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious actor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking operation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without authenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface related to account theft scenarios.\n" },
#endif
		{ "DisplayName", "EOS_Connect_UnlinkAccount" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlink external auth credentials from the owning keychain of a logged in product user. This function allows recovering the user from scenarios where they have accidentally proceeded to creating a new product user for the local native user account, instead of linking it with an existing keychain that they have previously created by playing the game (or another game owned by the organization) on another platform. In such scenario, after the initial platform login and a new product user creation, the user wishes to re-login using other set of external auth credentials to connect with their existing game progression data. In order to allow automatic login also on the current platform, they will need to unlink the accidentally created new keychain and product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform account with that previously created existing product user and its owning keychain. In another scenario, the user may simply want to disassociate the account that they have logged in with from the current keychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again. In order to protect against account theft, it is only possible to unlink user accounts that have been authenticated and logged in to the product user in the current session. This prevents a malicious actor from gaining access to one of the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious actor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking operation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without authenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface related to account theft scenarios." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_UnlinkAccount_eventEIK_Connect_UnlinkAccount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_UnlinkAccount_eventEIK_Connect_UnlinkAccount_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_UnlinkAccount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_UnlinkAccount, nullptr, "EIK_Connect_UnlinkAccount", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::EIK_Connect_UnlinkAccount_eventEIK_Connect_UnlinkAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::EIK_Connect_UnlinkAccount_eventEIK_Connect_UnlinkAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_UnlinkAccount::execEIK_Connect_UnlinkAccount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_UnlinkAccount**)Z_Param__Result=UEIK_Connect_UnlinkAccount::EIK_Connect_UnlinkAccount(Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_Connect_UnlinkAccount Function EIK_Connect_UnlinkAccount

// Begin Class UEIK_Connect_UnlinkAccount
void UEIK_Connect_UnlinkAccount::StaticRegisterNativesUEIK_Connect_UnlinkAccount()
{
	UClass* Class = UEIK_Connect_UnlinkAccount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_UnlinkAccount", &UEIK_Connect_UnlinkAccount::execEIK_Connect_UnlinkAccount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_UnlinkAccount);
UClass* Z_Construct_UClass_UEIK_Connect_UnlinkAccount_NoRegister()
{
	return UEIK_Connect_UnlinkAccount::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_UnlinkAccount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_UnlinkAccount_EIK_Connect_UnlinkAccount, "EIK_Connect_UnlinkAccount" }, // 3236649547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_UnlinkAccount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_UnlinkAccount, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_UnlinkAccount_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 610836371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::ClassParams = {
	&UEIK_Connect_UnlinkAccount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_UnlinkAccount()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_UnlinkAccount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_UnlinkAccount.OuterSingleton, Z_Construct_UClass_UEIK_Connect_UnlinkAccount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_UnlinkAccount.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_UnlinkAccount>()
{
	return UEIK_Connect_UnlinkAccount::StaticClass();
}
UEIK_Connect_UnlinkAccount::UEIK_Connect_UnlinkAccount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_UnlinkAccount);
UEIK_Connect_UnlinkAccount::~UEIK_Connect_UnlinkAccount() {}
// End Class UEIK_Connect_UnlinkAccount

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_UnlinkAccount_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_UnlinkAccount, UEIK_Connect_UnlinkAccount::StaticClass, TEXT("UEIK_Connect_UnlinkAccount"), &Z_Registration_Info_UClass_UEIK_Connect_UnlinkAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_UnlinkAccount), 3446287223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_UnlinkAccount_h_1500677328(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_UnlinkAccount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_UnlinkAccount_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_CreateDeviceId_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnCreateDeviceIdComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The result of a create device id request\n * @param Result The result of the create device id request\n */" },
#endif
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The result of a create device id request\n@param Result The result of the create device id request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnCreateDeviceIdComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateDeviceIdComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCreateDeviceIdComplete, TEnumAsByte<EEIK_Result> const& Result)
{
	struct _Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms
	{
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventOnCreateDeviceIdComplete_Parms Parms;
	Parms.Result=Result;
	OnCreateDeviceIdComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateDeviceIdComplete

// Begin Class UEIK_CreateDeviceId_AsyncFunction Function CreateDeviceId
struct Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics
{
	struct EIK_CreateDeviceId_AsyncFunction_eventCreateDeviceId_Parms
	{
		FString DeviceModel;
		UEIK_CreateDeviceId_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n\n\x09This function is intended to be used by mobile games and PC games that wish to allow a new user to start playing without requiring to login to the game using any user identity.\n\n\x09In addition to this, the Device ID feature is used to automatically login the local user also when they have linked at least one external user account(s) with the local Device ID.\n\n\x09It is possible to link many devices with the same user's account keyring using the Device ID feature.\n\n\x09Linking a device later or immediately with a real user account will ensure that the player will not lose their progress if they switch devices or lose the device at some point, as they will be always able to login with one of their linked real accounts and also link another new device with the user account associations keychain.\n\n\x09Otherwise, without having at least one permanent user account linked to the Device ID, the player would lose all of their game data and progression permanently should something happen to their device or the local user profile on the device.\n\n\x09""After a successful one-time CreateDeviceId operation, the game can login the local user automatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN credentials type.\n\n\x09If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed error result is returned and the caller should proceed to calling EOS_Connect_Login directly.\n\x09*/" },
#endif
		{ "DisplayName", "EOS_Connect_CreateDeviceId" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n\nThis function is intended to be used by mobile games and PC games that wish to allow a new user to start playing without requiring to login to the game using any user identity.\n\nIn addition to this, the Device ID feature is used to automatically login the local user also when they have linked at least one external user account(s) with the local Device ID.\n\nIt is possible to link many devices with the same user's account keyring using the Device ID feature.\n\nLinking a device later or immediately with a real user account will ensure that the player will not lose their progress if they switch devices or lose the device at some point, as they will be always able to login with one of their linked real accounts and also link another new device with the user account associations keychain.\n\nOtherwise, without having at least one permanent user account linked to the Device ID, the player would lose all of their game data and progression permanently should something happen to their device or the local user profile on the device.\n\nAfter a successful one-time CreateDeviceId operation, the game can login the local user automatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN credentials type.\n\nIf a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed error result is returned and the caller should proceed to calling EOS_Connect_Login directly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateDeviceId_AsyncFunction_eventCreateDeviceId_Parms, DeviceModel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateDeviceId_AsyncFunction_eventCreateDeviceId_Parms, ReturnValue), Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::NewProp_DeviceModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction, nullptr, "CreateDeviceId", nullptr, nullptr, Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::EIK_CreateDeviceId_AsyncFunction_eventCreateDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::EIK_CreateDeviceId_AsyncFunction_eventCreateDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_CreateDeviceId_AsyncFunction::execCreateDeviceId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_CreateDeviceId_AsyncFunction**)Z_Param__Result=UEIK_CreateDeviceId_AsyncFunction::CreateDeviceId(Z_Param_DeviceModel);
	P_NATIVE_END;
}
// End Class UEIK_CreateDeviceId_AsyncFunction Function CreateDeviceId

// Begin Class UEIK_CreateDeviceId_AsyncFunction
void UEIK_CreateDeviceId_AsyncFunction::StaticRegisterNativesUEIK_CreateDeviceId_AsyncFunction()
{
	UClass* Class = UEIK_CreateDeviceId_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDeviceId", &UEIK_CreateDeviceId_AsyncFunction::execCreateDeviceId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_CreateDeviceId_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_NoRegister()
{
	return UEIK_CreateDeviceId_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_CreateDeviceId_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_CreateDeviceId_AsyncFunction_CreateDeviceId, "CreateDeviceId" }, // 1965189733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_CreateDeviceId_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateDeviceId_AsyncFunction, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnCreateDeviceIdComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2805297686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::ClassParams = {
	&UEIK_CreateDeviceId_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_CreateDeviceId_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_CreateDeviceId_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_CreateDeviceId_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_CreateDeviceId_AsyncFunction>()
{
	return UEIK_CreateDeviceId_AsyncFunction::StaticClass();
}
UEIK_CreateDeviceId_AsyncFunction::UEIK_CreateDeviceId_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_CreateDeviceId_AsyncFunction);
UEIK_CreateDeviceId_AsyncFunction::~UEIK_CreateDeviceId_AsyncFunction() {}
// End Class UEIK_CreateDeviceId_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_CreateDeviceId_AsyncFunction, UEIK_CreateDeviceId_AsyncFunction::StaticClass, TEXT("UEIK_CreateDeviceId_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_CreateDeviceId_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_CreateDeviceId_AsyncFunction), 2166192727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_2210054243(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_CreateDeviceId_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

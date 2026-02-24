// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Connect_TransferDeviceIdAccount() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FEIK_Connect_TransferDeviceIdAccount_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEIK_Connect_TransferDeviceIdAccount_Delegate_DelegateWrapper(const FMulticastScriptDelegate& EIK_Connect_TransferDeviceIdAccount_Delegate, FEIK_ProductUserId const& LocalUserId, EEIK_Result Result)
{
	struct _Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms
	{
		FEIK_ProductUserId LocalUserId;
		TEnumAsByte<EEIK_Result> Result;
	};
	_Script_OnlineSubsystemEIK_eventEIK_Connect_TransferDeviceIdAccount_Delegate_Parms Parms;
	Parms.LocalUserId=LocalUserId;
	Parms.Result=Result;
	EIK_Connect_TransferDeviceIdAccount_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEIK_Connect_TransferDeviceIdAccount_Delegate

// Begin Class UEIK_Connect_TransferDeviceIdAccount Function EIK_Connect_TransferDeviceIdAccount
struct Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics
{
	struct EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms
	{
		FEIK_ProductUserId PrimaryLocalUserId;
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId ProductUserIdToPreserve;
		UEIK_Connect_TransferDeviceIdAccount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Connect Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transfer a Device ID pseudo-account and the product user associated with it into another keychain linked with real user accounts (such as Epic Games, PlayStation(TM)Network, Xbox Live, and other). This function allows transferring a product user, i.e. the local user's game progression backend data from a Device ID owned keychain into a keychain with real user accounts linked to it. The transfer of Device ID owned product user into a keychain of real user accounts allows persisting the user's game data on the backend in the event that they would lose access to the local device or otherwise switch to another device or platform. This function is only applicable in the situation of where the local user first plays the game using the anonymous Device ID login, then later logs in using a real user account that they have also already used to play the same game or another game under the same organization within Epic Online Services. In such situation, while normally the login attempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken and allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain, instead the login operation succeeds and finds an existing user because the association already exists. Because the user cannot have two product users simultaneously to play with, the game should prompt the user to choose which profile to keep and which one to discard permanently. Based on the user choice, the game may then proceed to transfer the Device ID login into the keychain that is persistent and backed by real user accounts, and if the user chooses so, move the product user as well into the destination keychain and overwrite the existing previous product user with it. To clarify, moving the product user with the Device ID login in this way into a persisted keychain allows to preserve the so far only locally persisted game progression and thus protect the user against a case where they lose access to the device. On success, the completion callback will return the preserved EOS_ProductUserId that remains logged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently. Consecutive logins using the existing Device ID login type or the external account will connect the user to the same backend data belonging to the preserved EOS_ProductUserId. Example walkthrough: Cross-platform mobile game using the anonymous Device ID login. For onboarding new users, the game will attempt to always automatically login the local user by calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local Device ID credentials are not found, and the game wants a frictionless entry for the first time user experience, the game will automatically call EOS_Connect_CreateDeviceId to create new Device ID pseudo-account and then login the local user into it. Consecutive game starts will thus automatically login the user to their locally persisted Device ID account. The user starts playing anonymously using the Device ID login type and makes significant game progress. Later, they login using an external account that they have already used previously for the same game perhaps on another platform, or another game owned by the same organization. In such case, EOS_Connect_Login will automatically login the user to their existing account linking keychain and create automatically a new empty product user for this product. In order for the user to use their existing previously created keychain and have the locally created Device ID login reference to that keychain instead, the user's current product user needs to be moved to be under that keychain so that their existing game progression will be preserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the Device ID login and the product user associated with it into the other keychain that has real external user account(s) linked to it. Note that it is important that the game either automatically checks that the other product user does not have any meaningful progression data, or otherwise will prompt the user to make the choice on which game progression to preserve and which can be discarded permanently. The other product user will be discarded permanently and cannot be recovered, so it is very important that the user is guided to make the right choice to avoid accidental loss of all game progression.\n" },
#endif
		{ "DisplayName", "EOS_Connect_TransferDeviceIdAccount" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transfer a Device ID pseudo-account and the product user associated with it into another keychain linked with real user accounts (such as Epic Games, PlayStation(TM)Network, Xbox Live, and other). This function allows transferring a product user, i.e. the local user's game progression backend data from a Device ID owned keychain into a keychain with real user accounts linked to it. The transfer of Device ID owned product user into a keychain of real user accounts allows persisting the user's game data on the backend in the event that they would lose access to the local device or otherwise switch to another device or platform. This function is only applicable in the situation of where the local user first plays the game using the anonymous Device ID login, then later logs in using a real user account that they have also already used to play the same game or another game under the same organization within Epic Online Services. In such situation, while normally the login attempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken and allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain, instead the login operation succeeds and finds an existing user because the association already exists. Because the user cannot have two product users simultaneously to play with, the game should prompt the user to choose which profile to keep and which one to discard permanently. Based on the user choice, the game may then proceed to transfer the Device ID login into the keychain that is persistent and backed by real user accounts, and if the user chooses so, move the product user as well into the destination keychain and overwrite the existing previous product user with it. To clarify, moving the product user with the Device ID login in this way into a persisted keychain allows to preserve the so far only locally persisted game progression and thus protect the user against a case where they lose access to the device. On success, the completion callback will return the preserved EOS_ProductUserId that remains logged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently. Consecutive logins using the existing Device ID login type or the external account will connect the user to the same backend data belonging to the preserved EOS_ProductUserId. Example walkthrough: Cross-platform mobile game using the anonymous Device ID login. For onboarding new users, the game will attempt to always automatically login the local user by calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local Device ID credentials are not found, and the game wants a frictionless entry for the first time user experience, the game will automatically call EOS_Connect_CreateDeviceId to create new Device ID pseudo-account and then login the local user into it. Consecutive game starts will thus automatically login the user to their locally persisted Device ID account. The user starts playing anonymously using the Device ID login type and makes significant game progress. Later, they login using an external account that they have already used previously for the same game perhaps on another platform, or another game owned by the same organization. In such case, EOS_Connect_Login will automatically login the user to their existing account linking keychain and create automatically a new empty product user for this product. In order for the user to use their existing previously created keychain and have the locally created Device ID login reference to that keychain instead, the user's current product user needs to be moved to be under that keychain so that their existing game progression will be preserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the Device ID login and the product user associated with it into the other keychain that has real external user account(s) linked to it. Note that it is important that the game either automatically checks that the other product user does not have any meaningful progression data, or otherwise will prompt the user to make the choice on which game progression to preserve and which can be discarded permanently. The other product user will be discarded permanently and cannot be recovered, so it is very important that the user is guided to make the right choice to avoid accidental loss of all game progression." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryLocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductUserIdToPreserve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_PrimaryLocalUserId = { "PrimaryLocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms, PrimaryLocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_ProductUserIdToPreserve = { "ProductUserIdToPreserve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms, ProductUserIdToPreserve), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms, ReturnValue), Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_PrimaryLocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_ProductUserIdToPreserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount, nullptr, "EIK_Connect_TransferDeviceIdAccount", nullptr, nullptr, Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::EIK_Connect_TransferDeviceIdAccount_eventEIK_Connect_TransferDeviceIdAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Connect_TransferDeviceIdAccount::execEIK_Connect_TransferDeviceIdAccount)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_PrimaryLocalUserId);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_ProductUserIdToPreserve);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Connect_TransferDeviceIdAccount**)Z_Param__Result=UEIK_Connect_TransferDeviceIdAccount::EIK_Connect_TransferDeviceIdAccount(Z_Param_PrimaryLocalUserId,Z_Param_LocalUserId,Z_Param_ProductUserIdToPreserve);
	P_NATIVE_END;
}
// End Class UEIK_Connect_TransferDeviceIdAccount Function EIK_Connect_TransferDeviceIdAccount

// Begin Class UEIK_Connect_TransferDeviceIdAccount
void UEIK_Connect_TransferDeviceIdAccount::StaticRegisterNativesUEIK_Connect_TransferDeviceIdAccount()
{
	UClass* Class = UEIK_Connect_TransferDeviceIdAccount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Connect_TransferDeviceIdAccount", &UEIK_Connect_TransferDeviceIdAccount::execEIK_Connect_TransferDeviceIdAccount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Connect_TransferDeviceIdAccount);
UClass* Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_NoRegister()
{
	return UEIK_Connect_TransferDeviceIdAccount::StaticClass();
}
struct Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "SdkFunctions/ConnectInterface/EIK_Connect_TransferDeviceIdAccount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Connect_TransferDeviceIdAccount_EIK_Connect_TransferDeviceIdAccount, "EIK_Connect_TransferDeviceIdAccount" }, // 1946275381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Connect_TransferDeviceIdAccount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Connect_TransferDeviceIdAccount, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_EIK_Connect_TransferDeviceIdAccount_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2489391073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::ClassParams = {
	&UEIK_Connect_TransferDeviceIdAccount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount()
{
	if (!Z_Registration_Info_UClass_UEIK_Connect_TransferDeviceIdAccount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Connect_TransferDeviceIdAccount.OuterSingleton, Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Connect_TransferDeviceIdAccount.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Connect_TransferDeviceIdAccount>()
{
	return UEIK_Connect_TransferDeviceIdAccount::StaticClass();
}
UEIK_Connect_TransferDeviceIdAccount::UEIK_Connect_TransferDeviceIdAccount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Connect_TransferDeviceIdAccount);
UEIK_Connect_TransferDeviceIdAccount::~UEIK_Connect_TransferDeviceIdAccount() {}
// End Class UEIK_Connect_TransferDeviceIdAccount

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_TransferDeviceIdAccount_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Connect_TransferDeviceIdAccount, UEIK_Connect_TransferDeviceIdAccount::StaticClass, TEXT("UEIK_Connect_TransferDeviceIdAccount"), &Z_Registration_Info_UClass_UEIK_Connect_TransferDeviceIdAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Connect_TransferDeviceIdAccount), 2900414735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_TransferDeviceIdAccount_h_1726433251(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_TransferDeviceIdAccount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_ConnectInterface_EIK_Connect_TransferDeviceIdAccount_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

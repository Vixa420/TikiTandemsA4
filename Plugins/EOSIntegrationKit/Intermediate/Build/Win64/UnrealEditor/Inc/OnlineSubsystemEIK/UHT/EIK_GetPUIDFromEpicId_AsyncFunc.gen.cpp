// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetPUIDFromEpicId_AsyncFunc() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FProductUserIdAndEpicId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FProductUserIdAndEpicId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId;
class UScriptStruct* FProductUserIdAndEpicId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProductUserIdAndEpicId, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ProductUserIdAndEpicId"));
	}
	return Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FProductUserIdAndEpicId>()
{
	return FProductUserIdAndEpicId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EpicAccountId_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductUserId_MetaData[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProductUserIdAndEpicId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProductUserIdAndEpicId, EpicAccountId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EpicAccountId_MetaData), NewProp_EpicAccountId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProductUserIdAndEpicId, ProductUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductUserId_MetaData), NewProp_ProductUserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::NewProp_EpicAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::NewProp_ProductUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"ProductUserIdAndEpicId",
	Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::PropPointers),
	sizeof(FProductUserIdAndEpicId),
	alignof(FProductUserIdAndEpicId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProductUserIdAndEpicId()
{
	if (!Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.InnerSingleton, Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId.InnerSingleton;
}
// End ScriptStruct FProductUserIdAndEpicId

// Begin Delegate FGetPUIDFromEpicIdDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms
	{
		TArray<FProductUserIdAndEpicId> UserInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::NewProp_UserInfo_Inner = { "UserInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProductUserIdAndEpicId, METADATA_PARAMS(0, nullptr) }; // 3351300652
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms, UserInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInfo_MetaData), NewProp_UserInfo_MetaData) }; // 3351300652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::NewProp_UserInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::NewProp_UserInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetPUIDFromEpicIdDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGetPUIDFromEpicIdDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetPUIDFromEpicIdDelegate, TArray<FProductUserIdAndEpicId> const& UserInfo)
{
	struct _Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms
	{
		TArray<FProductUserIdAndEpicId> UserInfo;
	};
	_Script_OnlineSubsystemEIK_eventGetPUIDFromEpicIdDelegate_Parms Parms;
	Parms.UserInfo=UserInfo;
	GetPUIDFromEpicIdDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGetPUIDFromEpicIdDelegate

// Begin Class UEIK_GetPUIDFromEpicId_AsyncFunc Function EIKGetPUIDFromEpicId
struct Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics
{
	struct EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms
	{
		TArray<FString> TargetEpicAccountIds;
		FString LocalProductUserId;
		UEIK_GetPUIDFromEpicId_AsyncFunc* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "DisplayName", "Get Product User Id From Epic Id" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetEpicAccountIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetEpicAccountIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_TargetEpicAccountIds_Inner = { "TargetEpicAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_TargetEpicAccountIds = { "TargetEpicAccountIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms, TargetEpicAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_LocalProductUserId = { "LocalProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms, LocalProductUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_TargetEpicAccountIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_TargetEpicAccountIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_LocalProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc, nullptr, "EIKGetPUIDFromEpicId", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::EIK_GetPUIDFromEpicId_AsyncFunc_eventEIKGetPUIDFromEpicId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetPUIDFromEpicId_AsyncFunc::execEIKGetPUIDFromEpicId)
{
	P_GET_TARRAY(FString,Z_Param_TargetEpicAccountIds);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalProductUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetPUIDFromEpicId_AsyncFunc**)Z_Param__Result=UEIK_GetPUIDFromEpicId_AsyncFunc::EIKGetPUIDFromEpicId(Z_Param_TargetEpicAccountIds,Z_Param_LocalProductUserId);
	P_NATIVE_END;
}
// End Class UEIK_GetPUIDFromEpicId_AsyncFunc Function EIKGetPUIDFromEpicId

// Begin Class UEIK_GetPUIDFromEpicId_AsyncFunc
void UEIK_GetPUIDFromEpicId_AsyncFunc::StaticRegisterNativesUEIK_GetPUIDFromEpicId_AsyncFunc()
{
	UClass* Class = UEIK_GetPUIDFromEpicId_AsyncFunc::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIKGetPUIDFromEpicId", &UEIK_GetPUIDFromEpicId_AsyncFunc::execEIKGetPUIDFromEpicId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetPUIDFromEpicId_AsyncFunc);
UClass* Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_NoRegister()
{
	return UEIK_GetPUIDFromEpicId_AsyncFunc::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/UserInfo/EIK_GetPUIDFromEpicId_AsyncFunc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetPUIDFromEpicId_AsyncFunc_EIKGetPUIDFromEpicId, "EIKGetPUIDFromEpicId" }, // 2777880695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetPUIDFromEpicId_AsyncFunc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetPUIDFromEpicId_AsyncFunc, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2994078700
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetPUIDFromEpicId_AsyncFunc, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetPUIDFromEpicIdDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 2994078700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::ClassParams = {
	&UEIK_GetPUIDFromEpicId_AsyncFunc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc()
{
	if (!Z_Registration_Info_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc.OuterSingleton, Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetPUIDFromEpicId_AsyncFunc>()
{
	return UEIK_GetPUIDFromEpicId_AsyncFunc::StaticClass();
}
UEIK_GetPUIDFromEpicId_AsyncFunc::UEIK_GetPUIDFromEpicId_AsyncFunc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetPUIDFromEpicId_AsyncFunc);
UEIK_GetPUIDFromEpicId_AsyncFunc::~UEIK_GetPUIDFromEpicId_AsyncFunc() {}
// End Class UEIK_GetPUIDFromEpicId_AsyncFunc

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProductUserIdAndEpicId::StaticStruct, Z_Construct_UScriptStruct_FProductUserIdAndEpicId_Statics::NewStructOps, TEXT("ProductUserIdAndEpicId"), &Z_Registration_Info_UScriptStruct_ProductUserIdAndEpicId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProductUserIdAndEpicId), 3351300652U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc, UEIK_GetPUIDFromEpicId_AsyncFunc::StaticClass, TEXT("UEIK_GetPUIDFromEpicId_AsyncFunc"), &Z_Registration_Info_UClass_UEIK_GetPUIDFromEpicId_AsyncFunc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetPUIDFromEpicId_AsyncFunc), 2635593367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_2558737864(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_UserInfo_EIK_GetPUIDFromEpicId_AsyncFunc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetFriendList_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_FriendData();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_FriendData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_FriendData;
class UScriptStruct* FEIK_FriendData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_FriendData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_FriendData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_FriendData, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_FriendData"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_FriendData.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_FriendData>()
{
	return FEIK_FriendData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_FriendData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteStatus_MetaData[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStatus_MetaData[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_bIsOnline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_FriendData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_FriendData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_bIsOnline_SetBit(void* Obj)
{
	((FEIK_FriendData*)Obj)->bIsOnline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_FriendData), &Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnline_MetaData), NewProp_bIsOnline_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_InviteStatus = { "InviteStatus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_FriendData, InviteStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteStatus_MetaData), NewProp_InviteStatus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_FriendData, UserId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) }; // 3785727623
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_PresenceStatus = { "PresenceStatus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_FriendData, PresenceStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceStatus_MetaData), NewProp_PresenceStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_FriendData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_bIsOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_InviteStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewProp_PresenceStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_FriendData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_FriendData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_FriendData",
	Z_Construct_UScriptStruct_FEIK_FriendData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_FriendData_Statics::PropPointers),
	sizeof(FEIK_FriendData),
	alignof(FEIK_FriendData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_FriendData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_FriendData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_FriendData()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_FriendData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_FriendData.InnerSingleton, Z_Construct_UScriptStruct_FEIK_FriendData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_FriendData.InnerSingleton;
}
// End ScriptStruct FEIK_FriendData

// Begin Delegate FOnGetFriendListComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms
	{
		TArray<FEIK_FriendData> FriendList;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_FriendList_Inner = { "FriendList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_FriendData, METADATA_PARAMS(0, nullptr) }; // 188127690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_FriendList = { "FriendList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms, FriendList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendList_MetaData), NewProp_FriendList_MetaData) }; // 188127690
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_FriendList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_FriendList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnGetFriendListComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetFriendListComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetFriendListComplete, TArray<FEIK_FriendData> const& FriendList, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms
	{
		TArray<FEIK_FriendData> FriendList;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventOnGetFriendListComplete_Parms Parms;
	Parms.FriendList=FriendList;
	Parms.Error=Error;
	OnGetFriendListComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetFriendListComplete

// Begin Class UEIK_GetFriendList_AsyncFunction Function GetFriendList
struct Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics
{
	struct EIK_GetFriendList_AsyncFunction_eventGetFriendList_Parms
	{
		UEIK_GetFriendList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetFriendList_AsyncFunction_eventGetFriendList_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction, nullptr, "GetFriendList", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::EIK_GetFriendList_AsyncFunction_eventGetFriendList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::EIK_GetFriendList_AsyncFunction_eventGetFriendList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetFriendList_AsyncFunction::execGetFriendList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetFriendList_AsyncFunction**)Z_Param__Result=UEIK_GetFriendList_AsyncFunction::GetFriendList();
	P_NATIVE_END;
}
// End Class UEIK_GetFriendList_AsyncFunction Function GetFriendList

// Begin Class UEIK_GetFriendList_AsyncFunction
void UEIK_GetFriendList_AsyncFunction::StaticRegisterNativesUEIK_GetFriendList_AsyncFunction()
{
	UClass* Class = UEIK_GetFriendList_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFriendList", &UEIK_GetFriendList_AsyncFunction::execGetFriendList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetFriendList_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_NoRegister()
{
	return UEIK_GetFriendList_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Friends/EIK_GetFriendList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetFriendList_AsyncFunction_GetFriendList, "GetFriendList" }, // 2767157451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetFriendList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetFriendList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3937526809
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetFriendList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnGetFriendListComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3937526809
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::ClassParams = {
	&UEIK_GetFriendList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_GetFriendList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetFriendList_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetFriendList_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetFriendList_AsyncFunction>()
{
	return UEIK_GetFriendList_AsyncFunction::StaticClass();
}
UEIK_GetFriendList_AsyncFunction::UEIK_GetFriendList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetFriendList_AsyncFunction);
UEIK_GetFriendList_AsyncFunction::~UEIK_GetFriendList_AsyncFunction() {}
// End Class UEIK_GetFriendList_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_FriendData::StaticStruct, Z_Construct_UScriptStruct_FEIK_FriendData_Statics::NewStructOps, TEXT("EIK_FriendData"), &Z_Registration_Info_UScriptStruct_EIK_FriendData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_FriendData), 188127690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetFriendList_AsyncFunction, UEIK_GetFriendList_AsyncFunction::StaticClass, TEXT("UEIK_GetFriendList_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetFriendList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetFriendList_AsyncFunction), 666779393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_22051681(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Friends_EIK_GetFriendList_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

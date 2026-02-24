// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_JoinSession_AsyncFunction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_JoinSession_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum EEIKJoinResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIKJoinResult;
static UEnum* EEIKJoinResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIKJoinResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIKJoinResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIKJoinResult"));
	}
	return Z_Registration_Info_UEnum_EEIKJoinResult.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIKJoinResult>()
{
	return EEIKJoinResult_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlreadyInSession.DisplayName", "Already In Session" },
		{ "AlreadyInSession.Name", "EEIKJoinResult::AlreadyInSession" },
		{ "BlueprintType", "true" },
		{ "CouldNotRetrieveAddress.DisplayName", "Could Not Retrieve Address" },
		{ "CouldNotRetrieveAddress.Name", "EEIKJoinResult::CouldNotRetrieveAddress" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
		{ "SessionDoesNotExist.DisplayName", "Session Does Not Exist" },
		{ "SessionDoesNotExist.Name", "EEIKJoinResult::SessionDoesNotExist" },
		{ "SessionIsFull.DisplayName", "Session Is Full" },
		{ "SessionIsFull.Name", "EEIKJoinResult::SessionIsFull" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EEIKJoinResult::Success" },
		{ "UnknownError.DisplayName", "UnknownError" },
		{ "UnknownError.Name", "EEIKJoinResult::UnknownError" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEIKJoinResult::Success", (int64)EEIKJoinResult::Success },
		{ "EEIKJoinResult::SessionIsFull", (int64)EEIKJoinResult::SessionIsFull },
		{ "EEIKJoinResult::SessionDoesNotExist", (int64)EEIKJoinResult::SessionDoesNotExist },
		{ "EEIKJoinResult::CouldNotRetrieveAddress", (int64)EEIKJoinResult::CouldNotRetrieveAddress },
		{ "EEIKJoinResult::AlreadyInSession", (int64)EEIKJoinResult::AlreadyInSession },
		{ "EEIKJoinResult::UnknownError", (int64)EEIKJoinResult::UnknownError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EEIKJoinResult",
	"EEIKJoinResult",
	Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult()
{
	if (!Z_Registration_Info_UEnum_EEIKJoinResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIKJoinResult.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIKJoinResult.InnerSingleton;
}
// End Enum EEIKJoinResult

// Begin Delegate FJoinSession_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms
	{
		EEIKJoinResult Result;
		FString SessionJoinAddress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionJoinAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms, Result), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKJoinResult, METADATA_PARAMS(0, nullptr) }; // 3333878128
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_SessionJoinAddress = { "SessionJoinAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms, SessionJoinAddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_SessionJoinAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "JoinSession_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FJoinSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& JoinSession_Delegate, EEIKJoinResult Result, const FString& SessionJoinAddress)
{
	struct _Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms
	{
		EEIKJoinResult Result;
		FString SessionJoinAddress;
	};
	_Script_OnlineSubsystemEIK_eventJoinSession_Delegate_Parms Parms;
	Parms.Result=Result;
	Parms.SessionJoinAddress=SessionJoinAddress;
	JoinSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FJoinSession_Delegate

// Begin Class UEIK_JoinSession_AsyncFunction Function JoinEIKSessions
struct Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics
{
	struct EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms
	{
		UObject* WorldContextObject;
		FName SessionName;
		FSessionFindStruct SessionToJoin;
		bool bLanSession;
		UEIK_JoinSession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method joins a session using the EOS SDK and sets up a callback function to handle the join session response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
#endif
		{ "CPP_Default_bLanSession", "false" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "CPP_Default_SessionToJoin", "()" },
		{ "DisplayName", "Join EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method joins a session using the EOS SDK and sets up a callback function to handle the join session response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
	static void NewProp_bLanSession_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanSession;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms, SessionToJoin), Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 1699625377
void Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_bLanSession_SetBit(void* Obj)
{
	((EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms*)Obj)->bLanSession = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_bLanSession = { "bLanSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms), &Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_bLanSession_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms, ReturnValue), Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_SessionToJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_bLanSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_JoinSession_AsyncFunction, nullptr, "JoinEIKSessions", nullptr, nullptr, Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::EIK_JoinSession_AsyncFunction_eventJoinEIKSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_JoinSession_AsyncFunction::execJoinEIKSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_STRUCT(FSessionFindStruct,Z_Param_SessionToJoin);
	P_GET_UBOOL(Z_Param_bLanSession);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_JoinSession_AsyncFunction**)Z_Param__Result=UEIK_JoinSession_AsyncFunction::JoinEIKSessions(Z_Param_WorldContextObject,Z_Param_SessionName,Z_Param_SessionToJoin,Z_Param_bLanSession);
	P_NATIVE_END;
}
// End Class UEIK_JoinSession_AsyncFunction Function JoinEIKSessions

// Begin Class UEIK_JoinSession_AsyncFunction
void UEIK_JoinSession_AsyncFunction::StaticRegisterNativesUEIK_JoinSession_AsyncFunction()
{
	UClass* Class = UEIK_JoinSession_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinEIKSessions", &UEIK_JoinSession_AsyncFunction::execJoinEIKSessions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_JoinSession_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_NoRegister()
{
	return UEIK_JoinSession_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_JoinSession_AsyncFunction_JoinEIKSessions, "JoinEIKSessions" }, // 898250816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_JoinSession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_JoinSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3475844773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_JoinSession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_JoinSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 3475844773
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject = { "Var_WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_JoinSession_AsyncFunction, Var_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_WorldContextObject_MetaData), NewProp_Var_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_OnFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::ClassParams = {
	&UEIK_JoinSession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_JoinSession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_JoinSession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_JoinSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_JoinSession_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_JoinSession_AsyncFunction>()
{
	return UEIK_JoinSession_AsyncFunction::StaticClass();
}
UEIK_JoinSession_AsyncFunction::UEIK_JoinSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_JoinSession_AsyncFunction);
UEIK_JoinSession_AsyncFunction::~UEIK_JoinSession_AsyncFunction() {}
// End Class UEIK_JoinSession_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEIKJoinResult_StaticEnum, TEXT("EEIKJoinResult"), &Z_Registration_Info_UEnum_EEIKJoinResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3333878128U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_JoinSession_AsyncFunction, UEIK_JoinSession_AsyncFunction::StaticClass, TEXT("UEIK_JoinSession_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_JoinSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_JoinSession_AsyncFunction), 4239388911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_96243927(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

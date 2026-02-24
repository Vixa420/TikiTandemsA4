// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SetPresence_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum EPresenceStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPresenceStatus;
static UEnum* EPresenceStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPresenceStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPresenceStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EPresenceStatus"));
	}
	return Z_Registration_Info_UEnum_EPresenceStatus.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EPresenceStatus>()
{
	return EPresenceStatus_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
		{ "PR_Away.Comment", "/**\n * \n */" },
		{ "PR_Away.DisplayName", "Away" },
		{ "PR_Away.Name", "EPresenceStatus::PR_Away" },
		{ "PR_DoNotDisturb.Comment", "/**\n * \n */" },
		{ "PR_DoNotDisturb.DisplayName", "DoNotDisturb" },
		{ "PR_DoNotDisturb.Name", "EPresenceStatus::PR_DoNotDisturb" },
		{ "PR_ExtendedAway.Comment", "/**\n * \n */" },
		{ "PR_ExtendedAway.DisplayName", "ExtendedAway" },
		{ "PR_ExtendedAway.Name", "EPresenceStatus::PR_ExtendedAway" },
		{ "PR_Offline.Comment", "/**\n * \n */" },
		{ "PR_Offline.DisplayName", "Offline" },
		{ "PR_Offline.Name", "EPresenceStatus::PR_Offline" },
		{ "PR_Online.Comment", "/**\n * \n */" },
		{ "PR_Online.DisplayName", "Online" },
		{ "PR_Online.Name", "EPresenceStatus::PR_Online" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPresenceStatus::PR_Online", (int64)EPresenceStatus::PR_Online },
		{ "EPresenceStatus::PR_Offline", (int64)EPresenceStatus::PR_Offline },
		{ "EPresenceStatus::PR_Away", (int64)EPresenceStatus::PR_Away },
		{ "EPresenceStatus::PR_ExtendedAway", (int64)EPresenceStatus::PR_ExtendedAway },
		{ "EPresenceStatus::PR_DoNotDisturb", (int64)EPresenceStatus::PR_DoNotDisturb },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EPresenceStatus",
	"EPresenceStatus",
	Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus()
{
	if (!Z_Registration_Info_UEnum_EPresenceStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPresenceStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPresenceStatus.InnerSingleton;
}
// End Enum EPresenceStatus

// Begin Delegate FSetPresence_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms
	{
		FString RichPresenceStr;
		EPresenceStatus PresenceStatusEnum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichPresenceStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStatusEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RichPresenceStr;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresenceStatusEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresenceStatusEnum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_RichPresenceStr = { "RichPresenceStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms, RichPresenceStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichPresenceStr_MetaData), NewProp_RichPresenceStr_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_PresenceStatusEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_PresenceStatusEnum = { "PresenceStatusEnum", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms, PresenceStatusEnum), Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceStatusEnum_MetaData), NewProp_PresenceStatusEnum_MetaData) }; // 4223741989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_RichPresenceStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_PresenceStatusEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::NewProp_PresenceStatusEnum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "SetPresence_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSetPresence_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SetPresence_Delegate, const FString& RichPresenceStr, EPresenceStatus const& PresenceStatusEnum)
{
	struct _Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms
	{
		FString RichPresenceStr;
		EPresenceStatus PresenceStatusEnum;
	};
	_Script_OnlineSubsystemEIK_eventSetPresence_Delegate_Parms Parms;
	Parms.RichPresenceStr=RichPresenceStr;
	Parms.PresenceStatusEnum=PresenceStatusEnum;
	SetPresence_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSetPresence_Delegate

// Begin Class UEIK_SetPresence_AsyncFunction Function SetEOSPresence
struct Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics
{
	struct EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms
	{
		FString RichPresense;
		EPresenceStatus PresenceStatus;
		UEIK_SetPresence_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Presence" },
		{ "DisplayName", "Set EIK Presence" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RichPresense;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresenceStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresenceStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_RichPresense = { "RichPresense", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms, RichPresense), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_PresenceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_PresenceStatus = { "PresenceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms, PresenceStatus), Z_Construct_UEnum_OnlineSubsystemEIK_EPresenceStatus, METADATA_PARAMS(0, nullptr) }; // 4223741989
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms, ReturnValue), Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_RichPresense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_PresenceStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_PresenceStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SetPresence_AsyncFunction, nullptr, "SetEOSPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SetPresence_AsyncFunction::execSetEOSPresence)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RichPresense);
	P_GET_ENUM(EPresenceStatus,Z_Param_PresenceStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SetPresence_AsyncFunction**)Z_Param__Result=UEIK_SetPresence_AsyncFunction::SetEOSPresence(Z_Param_RichPresense,EPresenceStatus(Z_Param_PresenceStatus));
	P_NATIVE_END;
}
// End Class UEIK_SetPresence_AsyncFunction Function SetEOSPresence

// Begin Class UEIK_SetPresence_AsyncFunction
void UEIK_SetPresence_AsyncFunction::StaticRegisterNativesUEIK_SetPresence_AsyncFunction()
{
	UClass* Class = UEIK_SetPresence_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetEOSPresence", &UEIK_SetPresence_AsyncFunction::execSetEOSPresence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SetPresence_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister()
{
	return UEIK_SetPresence_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFaliure_MetaData[] = {
		{ "DisplayName", "Faliure" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFaliure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence, "SetEOSPresence" }, // 3701606521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SetPresence_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SetPresence_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1642782881
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::NewProp_OnFaliure = { "OnFaliure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SetPresence_AsyncFunction, OnFaliure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SetPresence_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFaliure_MetaData), NewProp_OnFaliure_MetaData) }; // 1642782881
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::NewProp_OnFaliure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::ClassParams = {
	&UEIK_SetPresence_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SetPresence_AsyncFunction>()
{
	return UEIK_SetPresence_AsyncFunction::StaticClass();
}
UEIK_SetPresence_AsyncFunction::UEIK_SetPresence_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SetPresence_AsyncFunction);
UEIK_SetPresence_AsyncFunction::~UEIK_SetPresence_AsyncFunction() {}
// End Class UEIK_SetPresence_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPresenceStatus_StaticEnum, TEXT("EPresenceStatus"), &Z_Registration_Info_UEnum_EPresenceStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223741989U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SetPresence_AsyncFunction, UEIK_SetPresence_AsyncFunction::StaticClass, TEXT("UEIK_SetPresence_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SetPresence_AsyncFunction), 3422578335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_3396627898(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Achievements_QueryPlayerAchievements() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnEIK_Achievements_QueryPlayerAchievementsComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::NewProp_TargetUserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEIK_Achievements_QueryPlayerAchievementsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnEIK_Achievements_QueryPlayerAchievementsComplete, EEIK_Result ResultCode, FEIK_ProductUserId LocalUserId, FEIK_ProductUserId TargetUserId)
{
	struct _Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
	};
	_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_QueryPlayerAchievementsComplete_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.LocalUserId=LocalUserId;
	Parms.TargetUserId=TargetUserId;
	OnEIK_Achievements_QueryPlayerAchievementsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEIK_Achievements_QueryPlayerAchievementsComplete

// Begin Class UEIK_Achievements_QueryPlayerAchievements Function EIK_Achievements_QueryPlayerAchievements
struct Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics
{
	struct EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms
	{
		FEIK_ProductUserId LocalUserId;
		FEIK_ProductUserId TargetUserId;
		UEIK_Achievements_QueryPlayerAchievements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query for a list of achievements for a specific player, including progress towards completion for each achievement.\n" },
#endif
		{ "DisplayName", "EOS_Achievements_QueryPlayerAchievements" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for a list of achievements for a specific player, including progress towards completion for each achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms, TargetUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms, ReturnValue), Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_TargetUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements, nullptr, "EIK_Achievements_QueryPlayerAchievements", nullptr, nullptr, Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::EIK_Achievements_QueryPlayerAchievements_eventEIK_Achievements_QueryPlayerAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Achievements_QueryPlayerAchievements::execEIK_Achievements_QueryPlayerAchievements)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_LocalUserId);
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_TargetUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Achievements_QueryPlayerAchievements**)Z_Param__Result=UEIK_Achievements_QueryPlayerAchievements::EIK_Achievements_QueryPlayerAchievements(Z_Param_LocalUserId,Z_Param_TargetUserId);
	P_NATIVE_END;
}
// End Class UEIK_Achievements_QueryPlayerAchievements Function EIK_Achievements_QueryPlayerAchievements

// Begin Class UEIK_Achievements_QueryPlayerAchievements
void UEIK_Achievements_QueryPlayerAchievements::StaticRegisterNativesUEIK_Achievements_QueryPlayerAchievements()
{
	UClass* Class = UEIK_Achievements_QueryPlayerAchievements::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Achievements_QueryPlayerAchievements", &UEIK_Achievements_QueryPlayerAchievements::execEIK_Achievements_QueryPlayerAchievements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Achievements_QueryPlayerAchievements);
UClass* Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_NoRegister()
{
	return UEIK_Achievements_QueryPlayerAchievements::StaticClass();
}
struct Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_QueryPlayerAchievements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Achievements_QueryPlayerAchievements_EIK_Achievements_QueryPlayerAchievements, "EIK_Achievements_QueryPlayerAchievements" }, // 2902467194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Achievements_QueryPlayerAchievements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Achievements_QueryPlayerAchievements, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_QueryPlayerAchievementsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1486319219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::ClassParams = {
	&UEIK_Achievements_QueryPlayerAchievements::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements()
{
	if (!Z_Registration_Info_UClass_UEIK_Achievements_QueryPlayerAchievements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Achievements_QueryPlayerAchievements.OuterSingleton, Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Achievements_QueryPlayerAchievements.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Achievements_QueryPlayerAchievements>()
{
	return UEIK_Achievements_QueryPlayerAchievements::StaticClass();
}
UEIK_Achievements_QueryPlayerAchievements::UEIK_Achievements_QueryPlayerAchievements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Achievements_QueryPlayerAchievements);
UEIK_Achievements_QueryPlayerAchievements::~UEIK_Achievements_QueryPlayerAchievements() {}
// End Class UEIK_Achievements_QueryPlayerAchievements

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_QueryPlayerAchievements_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Achievements_QueryPlayerAchievements, UEIK_Achievements_QueryPlayerAchievements::StaticClass, TEXT("UEIK_Achievements_QueryPlayerAchievements"), &Z_Registration_Info_UClass_UEIK_Achievements_QueryPlayerAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Achievements_QueryPlayerAchievements), 2280814166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_QueryPlayerAchievements_h_2265436075(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_QueryPlayerAchievements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_QueryPlayerAchievements_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

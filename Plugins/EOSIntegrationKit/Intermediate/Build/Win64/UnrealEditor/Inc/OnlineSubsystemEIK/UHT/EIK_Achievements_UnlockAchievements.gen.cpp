// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Achievements_UnlockAchievements() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Achievements_UnlockAchievements();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnEIK_Achievements_UnlockAchievementsComplete
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId UserId;
		int32 AchievementCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AchievementCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms, ResultCode), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_AchievementCount = { "AchievementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms, AchievementCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::NewProp_AchievementCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEIK_Achievements_UnlockAchievementsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnEIK_Achievements_UnlockAchievementsComplete, EEIK_Result ResultCode, FEIK_ProductUserId UserId, int32 AchievementCount)
{
	struct _Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms
	{
		TEnumAsByte<EEIK_Result> ResultCode;
		FEIK_ProductUserId UserId;
		int32 AchievementCount;
	};
	_Script_OnlineSubsystemEIK_eventOnEIK_Achievements_UnlockAchievementsComplete_Parms Parms;
	Parms.ResultCode=ResultCode;
	Parms.UserId=UserId;
	Parms.AchievementCount=AchievementCount;
	OnEIK_Achievements_UnlockAchievementsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEIK_Achievements_UnlockAchievementsComplete

// Begin Class UEIK_Achievements_UnlockAchievements Function EIK_Achievements_UnlockAchievements
struct Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics
{
	struct EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms
	{
		FEIK_ProductUserId UserId;
		TArray<FString> AchievementIds;
		UEIK_Achievements_UnlockAchievements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Achievements Interface" },
		{ "DisplayName", "EOS_Achievements_UnlockAchievements" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AchievementIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms, UserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(0, nullptr) }; // 1897485333
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_AchievementIds_Inner = { "AchievementIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_AchievementIds = { "AchievementIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms, AchievementIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms, ReturnValue), Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_AchievementIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_AchievementIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Achievements_UnlockAchievements, nullptr, "EIK_Achievements_UnlockAchievements", nullptr, nullptr, Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::EIK_Achievements_UnlockAchievements_eventEIK_Achievements_UnlockAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_Achievements_UnlockAchievements::execEIK_Achievements_UnlockAchievements)
{
	P_GET_STRUCT(FEIK_ProductUserId,Z_Param_UserId);
	P_GET_TARRAY(FString,Z_Param_AchievementIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_Achievements_UnlockAchievements**)Z_Param__Result=UEIK_Achievements_UnlockAchievements::EIK_Achievements_UnlockAchievements(Z_Param_UserId,Z_Param_AchievementIds);
	P_NATIVE_END;
}
// End Class UEIK_Achievements_UnlockAchievements Function EIK_Achievements_UnlockAchievements

// Begin Class UEIK_Achievements_UnlockAchievements
void UEIK_Achievements_UnlockAchievements::StaticRegisterNativesUEIK_Achievements_UnlockAchievements()
{
	UClass* Class = UEIK_Achievements_UnlockAchievements::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Achievements_UnlockAchievements", &UEIK_Achievements_UnlockAchievements::execEIK_Achievements_UnlockAchievements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Achievements_UnlockAchievements);
UClass* Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_NoRegister()
{
	return UEIK_Achievements_UnlockAchievements::StaticClass();
}
struct Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h" },
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "SdkFunctions/AchievementsInterface/EIK_Achievements_UnlockAchievements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Achievements_UnlockAchievements_EIK_Achievements_UnlockAchievements, "EIK_Achievements_UnlockAchievements" }, // 1366652807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Achievements_UnlockAchievements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_Achievements_UnlockAchievements, OnCallback), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnEIK_Achievements_UnlockAchievementsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3744842870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::ClassParams = {
	&UEIK_Achievements_UnlockAchievements::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_Achievements_UnlockAchievements()
{
	if (!Z_Registration_Info_UClass_UEIK_Achievements_UnlockAchievements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Achievements_UnlockAchievements.OuterSingleton, Z_Construct_UClass_UEIK_Achievements_UnlockAchievements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_Achievements_UnlockAchievements.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Achievements_UnlockAchievements>()
{
	return UEIK_Achievements_UnlockAchievements::StaticClass();
}
UEIK_Achievements_UnlockAchievements::UEIK_Achievements_UnlockAchievements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Achievements_UnlockAchievements);
UEIK_Achievements_UnlockAchievements::~UEIK_Achievements_UnlockAchievements() {}
// End Class UEIK_Achievements_UnlockAchievements

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Achievements_UnlockAchievements, UEIK_Achievements_UnlockAchievements::StaticClass, TEXT("UEIK_Achievements_UnlockAchievements"), &Z_Registration_Info_UClass_UEIK_Achievements_UnlockAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Achievements_UnlockAchievements), 1083215743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_1228092152(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_AchievementsInterface_EIK_Achievements_UnlockAchievements_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

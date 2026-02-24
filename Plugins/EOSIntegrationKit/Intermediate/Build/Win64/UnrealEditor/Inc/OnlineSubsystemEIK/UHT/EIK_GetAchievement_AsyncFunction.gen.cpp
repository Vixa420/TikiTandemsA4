// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetAchievement_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Achievement();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin ScriptStruct FEIK_Achievement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Achievement;
class UScriptStruct* FEIK_Achievement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Achievement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Achievement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Achievement, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Achievement"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Achievement.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Achievement>()
{
	return FEIK_Achievement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_Achievement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "EIK Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The id of the achievement */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the achievement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "EIK Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The progress towards completing this achievement: 0.0-100.0 */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The progress towards completing this achievement: 0.0-100.0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Achievement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Achievement_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Achievement, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEIK_Achievement_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Achievement, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Achievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Achievement_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Achievement_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Achievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Achievement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_Achievement",
	Z_Construct_UScriptStruct_FEIK_Achievement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Achievement_Statics::PropPointers),
	sizeof(FEIK_Achievement),
	alignof(FEIK_Achievement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Achievement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Achievement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_Achievement()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Achievement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Achievement.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Achievement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_Achievement.InnerSingleton;
}
// End ScriptStruct FEIK_Achievement

// Begin Delegate FAchievement_Delegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms
	{
		TArray<FEIK_Achievement> Achievements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Achievements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Achievements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Achievements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::NewProp_Achievements_Inner = { "Achievements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Achievement, METADATA_PARAMS(0, nullptr) }; // 2153860434
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::NewProp_Achievements = { "Achievements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms, Achievements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Achievements_MetaData), NewProp_Achievements_MetaData) }; // 2153860434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::NewProp_Achievements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::NewProp_Achievements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "Achievement_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAchievement_Delegate_DelegateWrapper(const FMulticastScriptDelegate& Achievement_Delegate, TArray<FEIK_Achievement> const& Achievements)
{
	struct _Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms
	{
		TArray<FEIK_Achievement> Achievements;
	};
	_Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms Parms;
	Parms.Achievements=Achievements;
	Achievement_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAchievement_Delegate

// Begin Class UEIK_GetAchievement_AsyncFunction Function GetEIKAchievements
struct Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics
{
	struct EIK_GetAchievement_AsyncFunction_eventGetEIKAchievements_Parms
	{
		UEIK_GetAchievement_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Achievements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the logged in user's achievements from the EOS backend.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Achievements" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the logged in user's achievements from the EOS backend.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetAchievement_AsyncFunction_eventGetEIKAchievements_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction, nullptr, "GetEIKAchievements", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::EIK_GetAchievement_AsyncFunction_eventGetEIKAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::EIK_GetAchievement_AsyncFunction_eventGetEIKAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_GetAchievement_AsyncFunction::execGetEIKAchievements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_GetAchievement_AsyncFunction**)Z_Param__Result=UEIK_GetAchievement_AsyncFunction::GetEIKAchievements();
	P_NATIVE_END;
}
// End Class UEIK_GetAchievement_AsyncFunction Function GetEIKAchievements

// Begin Class UEIK_GetAchievement_AsyncFunction
void UEIK_GetAchievement_AsyncFunction::StaticRegisterNativesUEIK_GetAchievement_AsyncFunction()
{
	UClass* Class = UEIK_GetAchievement_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEIKAchievements", &UEIK_GetAchievement_AsyncFunction::execGetEIKAchievements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetAchievement_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_NoRegister()
{
	return UEIK_GetAchievement_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetAchievement_AsyncFunction_GetEIKAchievements, "GetEIKAchievements" }, // 4212075187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetAchievement_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetAchievement_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 398589745
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetAchievement_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Achievement_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 398589745
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::ClassParams = {
	&UEIK_GetAchievement_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_GetAchievement_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetAchievement_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_GetAchievement_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetAchievement_AsyncFunction>()
{
	return UEIK_GetAchievement_AsyncFunction::StaticClass();
}
UEIK_GetAchievement_AsyncFunction::UEIK_GetAchievement_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetAchievement_AsyncFunction);
UEIK_GetAchievement_AsyncFunction::~UEIK_GetAchievement_AsyncFunction() {}
// End Class UEIK_GetAchievement_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_Achievement::StaticStruct, Z_Construct_UScriptStruct_FEIK_Achievement_Statics::NewStructOps, TEXT("EIK_Achievement"), &Z_Registration_Info_UScriptStruct_EIK_Achievement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Achievement), 2153860434U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction, UEIK_GetAchievement_AsyncFunction::StaticClass, TEXT("UEIK_GetAchievement_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetAchievement_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetAchievement_AsyncFunction), 2654096509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_2635036831(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

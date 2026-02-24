// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SendReport_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SendReport_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SendReport_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Enum E_PlayerReportCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_PlayerReportCategory;
static UEnum* E_PlayerReportCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_PlayerReportCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_PlayerReportCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("E_PlayerReportCategory"));
	}
	return Z_Registration_Info_UEnum_E_PlayerReportCategory.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<E_PlayerReportCategory>()
{
	return E_PlayerReportCategory_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "EOS_PRC_Cheating.Comment", "/** The reported player is cheating */" },
		{ "EOS_PRC_Cheating.DisplayName", "Cheating" },
		{ "EOS_PRC_Cheating.Name", "E_PlayerReportCategory::EOS_PRC_Cheating" },
		{ "EOS_PRC_Cheating.ToolTip", "The reported player is cheating" },
		{ "EOS_PRC_Exploiting.Comment", "/** The reported player is exploiting the game */" },
		{ "EOS_PRC_Exploiting.DisplayName", "Exploiting" },
		{ "EOS_PRC_Exploiting.Name", "E_PlayerReportCategory::EOS_PRC_Exploiting" },
		{ "EOS_PRC_Exploiting.ToolTip", "The reported player is exploiting the game" },
		{ "EOS_PRC_OffensiveProfile.Comment", "/** The reported player has an offensive profile, name, etc */" },
		{ "EOS_PRC_OffensiveProfile.DisplayName", "OffensiveProfile" },
		{ "EOS_PRC_OffensiveProfile.Name", "E_PlayerReportCategory::EOS_PRC_OffensiveProfile" },
		{ "EOS_PRC_OffensiveProfile.ToolTip", "The reported player has an offensive profile, name, etc" },
		{ "EOS_PRC_Other.Comment", "/** The player is being reported for something else */" },
		{ "EOS_PRC_Other.DisplayName", "Other" },
		{ "EOS_PRC_Other.Name", "E_PlayerReportCategory::EOS_PRC_Other" },
		{ "EOS_PRC_Other.ToolTip", "The player is being reported for something else" },
		{ "EOS_PRC_Scamming.Comment", "/** The reported player is scamming other players */" },
		{ "EOS_PRC_Scamming.DisplayName", "Scamming" },
		{ "EOS_PRC_Scamming.Name", "E_PlayerReportCategory::EOS_PRC_Scamming" },
		{ "EOS_PRC_Scamming.ToolTip", "The reported player is scamming other players" },
		{ "EOS_PRC_Spamming.Comment", "/** The reported player is spamming chat */" },
		{ "EOS_PRC_Spamming.DisplayName", "Spamming" },
		{ "EOS_PRC_Spamming.Name", "E_PlayerReportCategory::EOS_PRC_Spamming" },
		{ "EOS_PRC_Spamming.ToolTip", "The reported player is spamming chat" },
		{ "EOS_PRC_VerbalAbuse.Comment", "/** The reported player is being abusive in chat */" },
		{ "EOS_PRC_VerbalAbuse.DisplayName", "VerbalAbuse" },
		{ "EOS_PRC_VerbalAbuse.Name", "E_PlayerReportCategory::EOS_PRC_VerbalAbuse" },
		{ "EOS_PRC_VerbalAbuse.ToolTip", "The reported player is being abusive in chat" },
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_PlayerReportCategory::EOS_PRC_Cheating", (int64)E_PlayerReportCategory::EOS_PRC_Cheating },
		{ "E_PlayerReportCategory::EOS_PRC_Exploiting", (int64)E_PlayerReportCategory::EOS_PRC_Exploiting },
		{ "E_PlayerReportCategory::EOS_PRC_OffensiveProfile", (int64)E_PlayerReportCategory::EOS_PRC_OffensiveProfile },
		{ "E_PlayerReportCategory::EOS_PRC_VerbalAbuse", (int64)E_PlayerReportCategory::EOS_PRC_VerbalAbuse },
		{ "E_PlayerReportCategory::EOS_PRC_Scamming", (int64)E_PlayerReportCategory::EOS_PRC_Scamming },
		{ "E_PlayerReportCategory::EOS_PRC_Spamming", (int64)E_PlayerReportCategory::EOS_PRC_Spamming },
		{ "E_PlayerReportCategory::EOS_PRC_Other", (int64)E_PlayerReportCategory::EOS_PRC_Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"E_PlayerReportCategory",
	"E_PlayerReportCategory",
	Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory()
{
	if (!Z_Registration_Info_UEnum_E_PlayerReportCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_PlayerReportCategory.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_PlayerReportCategory.InnerSingleton;
}
// End Enum E_PlayerReportCategory

// Begin Delegate FReportsDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "ReportsDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReportsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReportsDelegate)
{
	ReportsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FReportsDelegate

// Begin Class UEIK_SendReport_AsyncFunction Function SendEIKPlayerReportAsyncFunction
struct Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics
{
	struct EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms
	{
		FString LocalReporterPUID;
		FString TargetPlayerPUID;
		E_PlayerReportCategory ReportCategory;
		FString Message;
		UEIK_SendReport_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Reports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Functions\n" },
#endif
		{ "DisplayName", "Send EIK Player Report" },
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalReporterPUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPlayerPUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReportCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_LocalReporterPUID = { "LocalReporterPUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms, LocalReporterPUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_TargetPlayerPUID = { "TargetPlayerPUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms, TargetPlayerPUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReportCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReportCategory = { "ReportCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms, ReportCategory), Z_Construct_UEnum_OnlineSubsystemEIK_E_PlayerReportCategory, METADATA_PARAMS(0, nullptr) }; // 19605713
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UEIK_SendReport_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_LocalReporterPUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_TargetPlayerPUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReportCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReportCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SendReport_AsyncFunction, nullptr, "SendEIKPlayerReportAsyncFunction", nullptr, nullptr, Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::EIK_SendReport_AsyncFunction_eventSendEIKPlayerReportAsyncFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SendReport_AsyncFunction::execSendEIKPlayerReportAsyncFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalReporterPUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetPlayerPUID);
	P_GET_ENUM(E_PlayerReportCategory,Z_Param_ReportCategory);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_SendReport_AsyncFunction**)Z_Param__Result=UEIK_SendReport_AsyncFunction::SendEIKPlayerReportAsyncFunction(Z_Param_LocalReporterPUID,Z_Param_TargetPlayerPUID,E_PlayerReportCategory(Z_Param_ReportCategory),Z_Param_Message);
	P_NATIVE_END;
}
// End Class UEIK_SendReport_AsyncFunction Function SendEIKPlayerReportAsyncFunction

// Begin Class UEIK_SendReport_AsyncFunction
void UEIK_SendReport_AsyncFunction::StaticRegisterNativesUEIK_SendReport_AsyncFunction()
{
	UClass* Class = UEIK_SendReport_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendEIKPlayerReportAsyncFunction", &UEIK_SendReport_AsyncFunction::execSendEIKPlayerReportAsyncFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SendReport_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_SendReport_AsyncFunction_NoRegister()
{
	return UEIK_SendReport_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit || Reports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit || Reports" },
		{ "ModuleRelativePath", "AsyncFunctions/Reports/EIK_SendReport_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SendReport_AsyncFunction_SendEIKPlayerReportAsyncFunction, "SendEIKPlayerReportAsyncFunction" }, // 29067777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SendReport_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SendReport_AsyncFunction, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 3618903716
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SendReport_AsyncFunction, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ReportsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 3618903716
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::ClassParams = {
	&UEIK_SendReport_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SendReport_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_SendReport_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SendReport_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SendReport_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SendReport_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SendReport_AsyncFunction>()
{
	return UEIK_SendReport_AsyncFunction::StaticClass();
}
UEIK_SendReport_AsyncFunction::UEIK_SendReport_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SendReport_AsyncFunction);
UEIK_SendReport_AsyncFunction::~UEIK_SendReport_AsyncFunction() {}
// End Class UEIK_SendReport_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_PlayerReportCategory_StaticEnum, TEXT("E_PlayerReportCategory"), &Z_Registration_Info_UEnum_E_PlayerReportCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 19605713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SendReport_AsyncFunction, UEIK_SendReport_AsyncFunction::StaticClass, TEXT("UEIK_SendReport_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_SendReport_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SendReport_AsyncFunction), 4011427002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_4137017281(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Reports_EIK_SendReport_AsyncFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

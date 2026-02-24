// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h"
#include "OnlineSubsystemEIK/SdkFunctions/EIK_SharedFunctionFile.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SanctionsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsSubsystem_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_ProductUserId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Sanctions_PlayerSanction();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_SanctionsSubsystem Function EIK_Sanctions_CopyPlayerSanctionByIndex
struct Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics
{
	struct EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 Index;
		FEIK_Sanctions_PlayerSanction OutSanction;
		TEnumAsByte<EEIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sanctions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Copies an active player sanction. You must call QueryActivePlayerSanctions first to retrieve the data from the service backend. On success, EOS_Sanctions_PlayerSanction_Release must be called on OutSanction to free memory.\n" },
#endif
		{ "DisplayName", "EOS_Sanctions_CopyPlayerSanctionByIndex" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies an active player sanction. You must call QueryActivePlayerSanctions first to retrieve the data from the service backend. On success, EOS_Sanctions_PlayerSanction_Release must be called on OutSanction to free memory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSanction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_OutSanction = { "OutSanction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms, OutSanction), Z_Construct_UScriptStruct_FEIK_Sanctions_PlayerSanction, METADATA_PARAMS(0, nullptr) }; // 1384981515
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_Result, METADATA_PARAMS(0, nullptr) }; // 3297013413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_OutSanction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SanctionsSubsystem, nullptr, "EIK_Sanctions_CopyPlayerSanctionByIndex", nullptr, nullptr, Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::EIK_SanctionsSubsystem_eventEIK_Sanctions_CopyPlayerSanctionByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SanctionsSubsystem::execEIK_Sanctions_CopyPlayerSanctionByIndex)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FEIK_Sanctions_PlayerSanction,Z_Param_Out_OutSanction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_Result>*)Z_Param__Result=UEIK_SanctionsSubsystem::EIK_Sanctions_CopyPlayerSanctionByIndex(Z_Param_Out_LocalUserId,Z_Param_Index,Z_Param_Out_OutSanction);
	P_NATIVE_END;
}
// End Class UEIK_SanctionsSubsystem Function EIK_Sanctions_CopyPlayerSanctionByIndex

// Begin Class UEIK_SanctionsSubsystem Function EIK_Sanctions_GetPlayerSanctionCount
struct Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics
{
	struct EIK_SanctionsSubsystem_eventEIK_Sanctions_GetPlayerSanctionCount_Parms
	{
		FEIK_ProductUserId LocalUserId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit | SDK Functions | Sanctions Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fetch the number of player sanctions that have been retrieved for a given player. You must call QueryActivePlayerSanctions first to retrieve the data from the service backend.\n" },
#endif
		{ "DisplayName", "EOS_Sanctions_GetPlayerSanctionCount" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetch the number of player sanctions that have been retrieved for a given player. You must call QueryActivePlayerSanctions first to retrieve the data from the service backend." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_GetPlayerSanctionCount_Parms, LocalUserId), Z_Construct_UScriptStruct_FEIK_ProductUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserId_MetaData), NewProp_LocalUserId_MetaData) }; // 1897485333
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsSubsystem_eventEIK_Sanctions_GetPlayerSanctionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SanctionsSubsystem, nullptr, "EIK_Sanctions_GetPlayerSanctionCount", nullptr, nullptr, Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::EIK_SanctionsSubsystem_eventEIK_Sanctions_GetPlayerSanctionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::EIK_SanctionsSubsystem_eventEIK_Sanctions_GetPlayerSanctionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_SanctionsSubsystem::execEIK_Sanctions_GetPlayerSanctionCount)
{
	P_GET_STRUCT_REF(FEIK_ProductUserId,Z_Param_Out_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEIK_SanctionsSubsystem::EIK_Sanctions_GetPlayerSanctionCount(Z_Param_Out_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_SanctionsSubsystem Function EIK_Sanctions_GetPlayerSanctionCount

// Begin Class UEIK_SanctionsSubsystem
void UEIK_SanctionsSubsystem::StaticRegisterNativesUEIK_SanctionsSubsystem()
{
	UClass* Class = UEIK_SanctionsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EIK_Sanctions_CopyPlayerSanctionByIndex", &UEIK_SanctionsSubsystem::execEIK_Sanctions_CopyPlayerSanctionByIndex },
		{ "EIK_Sanctions_GetPlayerSanctionCount", &UEIK_SanctionsSubsystem::execEIK_Sanctions_GetPlayerSanctionCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SanctionsSubsystem);
UClass* Z_Construct_UClass_UEIK_SanctionsSubsystem_NoRegister()
{
	return UEIK_SanctionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Sanctions Interface" },
		{ "IncludePath", "SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h" },
		{ "ModuleRelativePath", "SdkFunctions/SanctionsInterface/EIK_SanctionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_CopyPlayerSanctionByIndex, "EIK_Sanctions_CopyPlayerSanctionByIndex" }, // 137144015
		{ &Z_Construct_UFunction_UEIK_SanctionsSubsystem_EIK_Sanctions_GetPlayerSanctionCount, "EIK_Sanctions_GetPlayerSanctionCount" }, // 3895999953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SanctionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::ClassParams = {
	&UEIK_SanctionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_SanctionsSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_SanctionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SanctionsSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_SanctionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_SanctionsSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SanctionsSubsystem>()
{
	return UEIK_SanctionsSubsystem::StaticClass();
}
UEIK_SanctionsSubsystem::UEIK_SanctionsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SanctionsSubsystem);
UEIK_SanctionsSubsystem::~UEIK_SanctionsSubsystem() {}
// End Class UEIK_SanctionsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SanctionsSubsystem, UEIK_SanctionsSubsystem::StaticClass, TEXT("UEIK_SanctionsSubsystem"), &Z_Registration_Info_UClass_UEIK_SanctionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SanctionsSubsystem), 2482346134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_3338288586(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_SdkFunctions_SanctionsInterface_EIK_SanctionsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

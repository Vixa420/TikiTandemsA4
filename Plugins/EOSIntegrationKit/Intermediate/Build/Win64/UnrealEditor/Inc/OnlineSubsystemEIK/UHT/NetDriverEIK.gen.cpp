// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Private/NetDriverEIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriverEIK() {}

// Begin Cross Module References
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIK();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIK_NoRegister();
SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIKBase();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UNetDriverEIK
void UNetDriverEIK::StaticRegisterNativesUNetDriverEIK()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriverEIK);
UClass* Z_Construct_UClass_UNetDriverEIK_NoRegister()
{
	return UNetDriverEIK::StaticClass();
}
struct Z_Construct_UClass_UNetDriverEIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetDriverEIK.h" },
		{ "ModuleRelativePath", "Private/NetDriverEIK.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriverEIK>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetDriverEIK_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriverEIKBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIK_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriverEIK_Statics::ClassParams = {
	&UNetDriverEIK::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIK_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetDriverEIK_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetDriverEIK()
{
	if (!Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton, Z_Construct_UClass_UNetDriverEIK_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UNetDriverEIK>()
{
	return UNetDriverEIK::StaticClass();
}
UNetDriverEIK::UNetDriverEIK(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriverEIK);
UNetDriverEIK::~UNetDriverEIK() {}
// End Class UNetDriverEIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriverEIK, UNetDriverEIK::StaticClass, TEXT("UNetDriverEIK"), &Z_Registration_Info_UClass_UNetDriverEIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriverEIK), 3098673963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_2589061783(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

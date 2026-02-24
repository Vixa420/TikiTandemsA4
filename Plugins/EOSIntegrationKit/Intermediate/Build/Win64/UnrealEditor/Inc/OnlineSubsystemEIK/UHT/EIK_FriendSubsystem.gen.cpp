// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Public/EIK_FriendSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_FriendSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FriendSubsystem();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FriendSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Class UEIK_FriendSubsystem
void UEIK_FriendSubsystem::StaticRegisterNativesUEIK_FriendSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_FriendSubsystem);
UClass* Z_Construct_UClass_UEIK_FriendSubsystem_NoRegister()
{
	return UEIK_FriendSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEIK_FriendSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EIK_FriendSubsystem.h" },
		{ "ModuleRelativePath", "Public/EIK_FriendSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_FriendSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_FriendSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FriendSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_FriendSubsystem_Statics::ClassParams = {
	&UEIK_FriendSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FriendSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_FriendSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_FriendSubsystem()
{
	if (!Z_Registration_Info_UClass_UEIK_FriendSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_FriendSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_FriendSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_FriendSubsystem.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_FriendSubsystem>()
{
	return UEIK_FriendSubsystem::StaticClass();
}
UEIK_FriendSubsystem::UEIK_FriendSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_FriendSubsystem);
UEIK_FriendSubsystem::~UEIK_FriendSubsystem() {}
// End Class UEIK_FriendSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_FriendSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_FriendSubsystem, UEIK_FriendSubsystem::StaticClass, TEXT("UEIK_FriendSubsystem"), &Z_Registration_Info_UClass_UEIK_FriendSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_FriendSubsystem), 2448813725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_FriendSubsystem_h_3473919063(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_FriendSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_FriendSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

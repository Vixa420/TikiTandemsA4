// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketSubsystemEIK/Private/NetConnectionEIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionEIK() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetConnectionEIK();
SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetConnectionEIK_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocketSubsystemEIK();
// End Cross Module References

// Begin Class UNetConnectionEIK
void UNetConnectionEIK::StaticRegisterNativesUNetConnectionEIK()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetConnectionEIK);
UClass* Z_Construct_UClass_UNetConnectionEIK_NoRegister()
{
	return UNetConnectionEIK::StaticClass();
}
struct Z_Construct_UClass_UNetConnectionEIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetConnectionEIK.h" },
		{ "ModuleRelativePath", "Private/NetConnectionEIK.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnectionEIK>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetConnectionEIK_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEIK_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetConnectionEIK_Statics::ClassParams = {
	&UNetConnectionEIK::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEIK_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetConnectionEIK_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetConnectionEIK()
{
	if (!Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton, Z_Construct_UClass_UNetConnectionEIK_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton;
}
template<> SOCKETSUBSYSTEMEIK_API UClass* StaticClass<UNetConnectionEIK>()
{
	return UNetConnectionEIK::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnectionEIK);
UNetConnectionEIK::~UNetConnectionEIK() {}
// End Class UNetConnectionEIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetConnectionEIK, UNetConnectionEIK::StaticClass, TEXT("UNetConnectionEIK"), &Z_Registration_Info_UClass_UNetConnectionEIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetConnectionEIK), 4266859387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_541095795(TEXT("/Script/SocketSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

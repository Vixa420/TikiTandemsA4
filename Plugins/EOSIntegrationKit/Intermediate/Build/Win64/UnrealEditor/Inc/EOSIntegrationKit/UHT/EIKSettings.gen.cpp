// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSIntegrationKit/Public/EIKSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIKSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
EOSINTEGRATIONKIT_API UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings();
EOSINTEGRATIONKIT_API UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_NoRegister();
EOSINTEGRATIONKIT_API UClass* Z_Construct_UClass_UEIKSettings();
EOSINTEGRATIONKIT_API UClass* Z_Construct_UClass_UEIKSettings_NoRegister();
EOSINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType();
EOSINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration();
EOSINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType();
EOSINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings();
EOSINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FEArtifactSettings();
UPackage* Z_Construct_UPackage__Script_EOSIntegrationKit();
// End Cross Module References

// Begin Class UDEPRECATED_EIKArtifactSettings
void UDEPRECATED_EIKArtifactSettings::StaticRegisterNativesUDEPRECATED_EIKArtifactSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_EIKArtifactSettings);
UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_NoRegister()
{
	return UDEPRECATED_EIKArtifactSettings::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EIKSettings.h" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_EIKArtifactSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::ClassParams = {
	&UDEPRECATED_EIKArtifactSettings::StaticClass,
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
	0x020002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UClass* StaticClass<UDEPRECATED_EIKArtifactSettings>()
{
	return UDEPRECATED_EIKArtifactSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_EIKArtifactSettings);
UDEPRECATED_EIKArtifactSettings::~UDEPRECATED_EIKArtifactSettings() {}
// End Class UDEPRECATED_EIKArtifactSettings

// Begin ScriptStruct FEArtifactSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EArtifactSettings;
class UScriptStruct* FEArtifactSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEArtifactSettings, (UObject*)Z_Construct_UPackage__Script_EOSIntegrationKit(), TEXT("EArtifactSettings"));
	}
	return Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UScriptStruct* StaticStruct<FEArtifactSettings>()
{
	return FEArtifactSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEArtifactSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtifactName_MetaData[] = {
		{ "Category", "EOS Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This needs to match what the launcher passes in the -epicapp command line arg */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This needs to match what the launcher passes in the -epicapp command line arg" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArtifactName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEArtifactSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName = { "ArtifactName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, ArtifactName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtifactName_MetaData), NewProp_ArtifactName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, ClientSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientSecret_MetaData), NewProp_ClientSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEArtifactSettings, EncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptionKey_MetaData), NewProp_EncryptionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
	nullptr,
	&NewStructOps,
	"EArtifactSettings",
	Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers),
	sizeof(FEArtifactSettings),
	alignof(FEArtifactSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEArtifactSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEArtifactSettings()
{
	if (!Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton, Z_Construct_UScriptStruct_FEArtifactSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton;
}
// End ScriptStruct FEArtifactSettings

// Begin Enum EEIK_AutoLoginType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_AutoLoginType;
static UEnum* EEIK_AutoLoginType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_AutoLoginType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_AutoLoginType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType, (UObject*)Z_Construct_UPackage__Script_EOSIntegrationKit(), TEXT("EEIK_AutoLoginType"));
	}
	return Z_Registration_Info_UEnum_EEIK_AutoLoginType.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UEnum* StaticEnum<EEIK_AutoLoginType>()
{
	return EEIK_AutoLoginType_StaticEnum();
}
struct Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoLogin_AccountPortalLogin.Comment", "/** Account Portal login will automatically log the user in with the Epic Account Portal */" },
		{ "AutoLogin_AccountPortalLogin.DisplayName", "Account Portal Login" },
		{ "AutoLogin_AccountPortalLogin.Name", "AutoLogin_AccountPortalLogin" },
		{ "AutoLogin_AccountPortalLogin.ToolTip", "Account Portal login will automatically log the user in with the Epic Account Portal" },
		{ "AutoLogin_AppleLogin.Comment", "/** Apple login will automatically log the user in with the Apple login system but only works on iOS */" },
		{ "AutoLogin_AppleLogin.DisplayName", "Apple Login" },
		{ "AutoLogin_AppleLogin.Name", "AutoLogin_AppleLogin" },
		{ "AutoLogin_AppleLogin.ToolTip", "Apple login will automatically log the user in with the Apple login system but only works on iOS" },
		{ "AutoLogin_DeveloperTool.Comment", "/** Developer Token login will automatically log the user in with the developer token depending upon the standalone number */" },
		{ "AutoLogin_DeveloperTool.DisplayName", "Developer Tool" },
		{ "AutoLogin_DeveloperTool.Name", "AutoLogin_DeveloperTool" },
		{ "AutoLogin_DeveloperTool.ToolTip", "Developer Token login will automatically log the user in with the developer token depending upon the standalone number" },
		{ "AutoLogin_DeviceIdLogin.Comment", "/** Device ID login will automatically log the user in with the device ID */" },
		{ "AutoLogin_DeviceIdLogin.DisplayName", "Device ID Login" },
		{ "AutoLogin_DeviceIdLogin.Name", "AutoLogin_DeviceIdLogin" },
		{ "AutoLogin_DeviceIdLogin.ToolTip", "Device ID login will automatically log the user in with the device ID" },
		{ "AutoLogin_GoogleLogin.Comment", "/** Google login will automatically log the user in with the Google login system but only works on Android */" },
		{ "AutoLogin_GoogleLogin.DisplayName", "Google Login" },
		{ "AutoLogin_GoogleLogin.Name", "AutoLogin_GoogleLogin" },
		{ "AutoLogin_GoogleLogin.ToolTip", "Google login will automatically log the user in with the Google login system but only works on Android" },
		{ "AutoLogin_None.DisplayName", "None" },
		{ "AutoLogin_None.Name", "AutoLogin_None" },
		{ "AutoLogin_PersistentAuth.Comment", "/** Persistent Auth will automatically log the user in with EAS credentials if they have previously logged in */" },
		{ "AutoLogin_PersistentAuth.DisplayName", "Persistent Auth" },
		{ "AutoLogin_PersistentAuth.Name", "AutoLogin_PersistentAuth" },
		{ "AutoLogin_PersistentAuth.ToolTip", "Persistent Auth will automatically log the user in with EAS credentials if they have previously logged in" },
		{ "AutoLogin_PlatformLogin.Comment", "/** Platform login will automatically log the user in with the platform's login system */" },
		{ "AutoLogin_PlatformLogin.DisplayName", "Platform Login" },
		{ "AutoLogin_PlatformLogin.Name", "AutoLogin_PlatformLogin" },
		{ "AutoLogin_PlatformLogin.ToolTip", "Platform login will automatically log the user in with the platform's login system" },
		{ "AutoLogin_PSNLogin.Comment", "/** (NOT ACTIVE ATM) PSN login will automatically log the user in with the PSN login system */" },
		{ "AutoLogin_PSNLogin.DisplayName", "PSN Login" },
		{ "AutoLogin_PSNLogin.Name", "AutoLogin_PSNLogin" },
		{ "AutoLogin_PSNLogin.ToolTip", "(NOT ACTIVE ATM) PSN login will automatically log the user in with the PSN login system" },
		{ "AutoLogin_SteamLogin.Comment", "/** Steam login will automatically log the user in with the Steam login system */" },
		{ "AutoLogin_SteamLogin.DisplayName", "Steam Login" },
		{ "AutoLogin_SteamLogin.Name", "AutoLogin_SteamLogin" },
		{ "AutoLogin_SteamLogin.ToolTip", "Steam login will automatically log the user in with the Steam login system" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AutoLogin_None", (int64)AutoLogin_None },
		{ "AutoLogin_DeveloperTool", (int64)AutoLogin_DeveloperTool },
		{ "AutoLogin_PersistentAuth", (int64)AutoLogin_PersistentAuth },
		{ "AutoLogin_DeviceIdLogin", (int64)AutoLogin_DeviceIdLogin },
		{ "AutoLogin_AccountPortalLogin", (int64)AutoLogin_AccountPortalLogin },
		{ "AutoLogin_PlatformLogin", (int64)AutoLogin_PlatformLogin },
		{ "AutoLogin_SteamLogin", (int64)AutoLogin_SteamLogin },
		{ "AutoLogin_PSNLogin", (int64)AutoLogin_PSNLogin },
		{ "AutoLogin_GoogleLogin", (int64)AutoLogin_GoogleLogin },
		{ "AutoLogin_AppleLogin", (int64)AutoLogin_AppleLogin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
	nullptr,
	"EEIK_AutoLoginType",
	"EEIK_AutoLoginType",
	Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType()
{
	if (!Z_Registration_Info_UEnum_EEIK_AutoLoginType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_AutoLoginType.InnerSingleton, Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_AutoLoginType.InnerSingleton;
}
// End Enum EEIK_AutoLoginType

// Begin Enum EEIK_FallbackForAutoLoginType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType;
static UEnum* EEIK_FallbackForAutoLoginType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType, (UObject*)Z_Construct_UPackage__Script_EOSIntegrationKit(), TEXT("EEIK_FallbackForAutoLoginType"));
	}
	return Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UEnum* StaticEnum<EEIK_FallbackForAutoLoginType>()
{
	return EEIK_FallbackForAutoLoginType_StaticEnum();
}
struct Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fallback_AccountPortalLogin.Comment", "/** Use the Epic Account Portal login */" },
		{ "Fallback_AccountPortalLogin.DisplayName", "Account Portal Login" },
		{ "Fallback_AccountPortalLogin.Name", "Fallback_AccountPortalLogin" },
		{ "Fallback_AccountPortalLogin.ToolTip", "Use the Epic Account Portal login" },
		{ "Fallback_DeviceIdLogin.Comment", "/** Use the device id login */" },
		{ "Fallback_DeviceIdLogin.DisplayName", "Device ID Login" },
		{ "Fallback_DeviceIdLogin.Name", "Fallback_DeviceIdLogin" },
		{ "Fallback_DeviceIdLogin.ToolTip", "Use the device id login" },
		{ "Fallback_None.Comment", "/** No fallback */" },
		{ "Fallback_None.DisplayName", "None" },
		{ "Fallback_None.Name", "Fallback_None" },
		{ "Fallback_None.ToolTip", "No fallback" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Fallback_None", (int64)Fallback_None },
		{ "Fallback_DeviceIdLogin", (int64)Fallback_DeviceIdLogin },
		{ "Fallback_AccountPortalLogin", (int64)Fallback_AccountPortalLogin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
	nullptr,
	"EEIK_FallbackForAutoLoginType",
	"EEIK_FallbackForAutoLoginType",
	Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType()
{
	if (!Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.InnerSingleton, Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType.InnerSingleton;
}
// End Enum EEIK_FallbackForAutoLoginType

// Begin Enum EEIK_LoginFlags_LocalForSettings
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings;
static UEnum* EEIK_LoginFlags_LocalForSettings_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings, (UObject*)Z_Construct_UPackage__Script_EOSIntegrationKit(), TEXT("EEIK_LoginFlags_LocalForSettings"));
	}
	return Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UEnum* StaticEnum<EEIK_LoginFlags_LocalForSettings>()
{
	return EEIK_LoginFlags_LocalForSettings_StaticEnum();
}
struct Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EOS_AS_BasicProfile.Comment", "/** Permissions to see your account ID, display name, and language */" },
		{ "EOS_AS_BasicProfile.DisplayName", "Basic Profile" },
		{ "EOS_AS_BasicProfile.Name", "EOS_AS_BasicProfile" },
		{ "EOS_AS_BasicProfile.ToolTip", "Permissions to see your account ID, display name, and language" },
		{ "EOS_AS_Country.Comment", "/** Permissions to see your country */" },
		{ "EOS_AS_Country.DisplayName", "Country" },
		{ "EOS_AS_Country.Name", "EOS_AS_Country" },
		{ "EOS_AS_Country.ToolTip", "Permissions to see your country" },
		{ "EOS_AS_Email.Comment", "/** Permissions to see email in the response when fetching information for a user. This scope is restricted to Epic first party products, and attempting to use it will result in authentication failures. */" },
		{ "EOS_AS_Email.DisplayName", "Email" },
		{ "EOS_AS_Email.Name", "EOS_AS_Email" },
		{ "EOS_AS_Email.ToolTip", "Permissions to see email in the response when fetching information for a user. This scope is restricted to Epic first party products, and attempting to use it will result in authentication failures." },
		{ "EOS_AS_FriendsList.Comment", "/** Permissions to see a list of your friends who use this application */" },
		{ "EOS_AS_FriendsList.DisplayName", "Friends List" },
		{ "EOS_AS_FriendsList.Name", "EOS_AS_FriendsList" },
		{ "EOS_AS_FriendsList.ToolTip", "Permissions to see a list of your friends who use this application" },
		{ "EOS_AS_FriendsManagement.Comment", "/** Permissions to manage the Epic friends list. This scope is restricted to Epic first party products, and attempting to use it will result in authentication failures. */" },
		{ "EOS_AS_FriendsManagement.DisplayName", "Friends Management" },
		{ "EOS_AS_FriendsManagement.Name", "EOS_AS_FriendsManagement" },
		{ "EOS_AS_FriendsManagement.ToolTip", "Permissions to manage the Epic friends list. This scope is restricted to Epic first party products, and attempting to use it will result in authentication failures." },
		{ "EOS_AS_Presence.Comment", "/** Permissions to set your online presence and see presence of your friends */" },
		{ "EOS_AS_Presence.DisplayName", "Presence" },
		{ "EOS_AS_Presence.Name", "EOS_AS_Presence" },
		{ "EOS_AS_Presence.ToolTip", "Permissions to set your online presence and see presence of your friends" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "T_EOS_AS_NoFlags.DisplayName", "No Flags" },
		{ "T_EOS_AS_NoFlags.Name", "T_EOS_AS_NoFlags" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "T_EOS_AS_NoFlags", (int64)T_EOS_AS_NoFlags },
		{ "EOS_AS_BasicProfile", (int64)EOS_AS_BasicProfile },
		{ "EOS_AS_FriendsList", (int64)EOS_AS_FriendsList },
		{ "EOS_AS_Presence", (int64)EOS_AS_Presence },
		{ "EOS_AS_FriendsManagement", (int64)EOS_AS_FriendsManagement },
		{ "EOS_AS_Email", (int64)EOS_AS_Email },
		{ "EOS_AS_Country", (int64)EOS_AS_Country },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
	nullptr,
	"EEIK_LoginFlags_LocalForSettings",
	"EEIK_LoginFlags_LocalForSettings",
	Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings()
{
	if (!Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.InnerSingleton, Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings.InnerSingleton;
}
// End Enum EEIK_LoginFlags_LocalForSettings

// Begin Enum EEIK_BuildConfiguration
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_BuildConfiguration;
static UEnum* EEIK_BuildConfiguration_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_BuildConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_BuildConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration, (UObject*)Z_Construct_UPackage__Script_EOSIntegrationKit(), TEXT("EEIK_BuildConfiguration"));
	}
	return Z_Registration_Info_UEnum_EEIK_BuildConfiguration.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UEnum* StaticEnum<EEIK_BuildConfiguration>()
{
	return EEIK_BuildConfiguration_StaticEnum();
}
struct Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIK_Debug.Comment", "/** Debug build. */" },
		{ "EIK_Debug.DisplayName", "Debug" },
		{ "EIK_Debug.Name", "EIK_Debug" },
		{ "EIK_Debug.ToolTip", "Debug build." },
		{ "EIK_DebugGame.Comment", "/** DebugGame build. */" },
		{ "EIK_DebugGame.DisplayName", "DebugGame" },
		{ "EIK_DebugGame.Name", "EIK_DebugGame" },
		{ "EIK_DebugGame.ToolTip", "DebugGame build." },
		{ "EIK_Development.Comment", "/** Development build. */" },
		{ "EIK_Development.DisplayName", "Development" },
		{ "EIK_Development.Name", "EIK_Development" },
		{ "EIK_Development.ToolTip", "Development build." },
		{ "EIK_Shipping.Comment", "/** Shipping build. */" },
		{ "EIK_Shipping.DisplayName", "Shipping" },
		{ "EIK_Shipping.Name", "EIK_Shipping" },
		{ "EIK_Shipping.ToolTip", "Shipping build." },
		{ "EIK_Test.Comment", "/** Test build. */" },
		{ "EIK_Test.DisplayName", "Test" },
		{ "EIK_Test.Name", "EIK_Test" },
		{ "EIK_Test.ToolTip", "Test build." },
		{ "EIK_UnknownBuild.Comment", "/** Unknown build configuration. */" },
		{ "EIK_UnknownBuild.DisplayName", "Unknown" },
		{ "EIK_UnknownBuild.Name", "EIK_UnknownBuild" },
		{ "EIK_UnknownBuild.ToolTip", "Unknown build configuration." },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIK_UnknownBuild", (int64)EIK_UnknownBuild },
		{ "EIK_Debug", (int64)EIK_Debug },
		{ "EIK_DebugGame", (int64)EIK_DebugGame },
		{ "EIK_Development", (int64)EIK_Development },
		{ "EIK_Shipping", (int64)EIK_Shipping },
		{ "EIK_Test", (int64)EIK_Test },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
	nullptr,
	"EEIK_BuildConfiguration",
	"EEIK_BuildConfiguration",
	Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration()
{
	if (!Z_Registration_Info_UEnum_EEIK_BuildConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_BuildConfiguration.InnerSingleton, Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_BuildConfiguration.InnerSingleton;
}
// End Enum EEIK_BuildConfiguration

// Begin Class UEIKSettings
void UEIKSettings::StaticRegisterNativesUEIKSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIKSettings);
UClass* Z_Construct_UClass_UEIKSettings_NoRegister()
{
	return UEIKSettings::StaticClass();
}
struct Z_Construct_UClass_UEIKSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EIKSettings.h" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySetupEIK_MetaData[] = {
		{ "Category", "EOS Integration Kit Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This will automatically setup EOS Integration Kit.\n\x09 *\n\x09 * Restart the editor after changing this value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will automatically setup EOS Integration Kit.\n\nRestart the editor after changing this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLaunchDevTool_MetaData[] = {
		{ "Category", "EOS Integration Kit Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true, on every launch of the editor, the developer tool will be launched. */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, on every launch of the editor, the developer tool will be launched." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrganizationName_MetaData[] = {
		{ "Category", "EOS Integration Kit Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An organization is the highest level in the Epic Online Services (EOS) product management ecosystem. It encompasses all the products and the associated members, such as a publisher or game studio. */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An organization is the highest level in the Epic Online Services (EOS) product management ecosystem. It encompasses all the products and the associated members, such as a publisher or game studio." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[] = {
		{ "Category", "EOS Integration Kit Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Products are games or other software projects that contain sandboxes and deployments within EOS. */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Products are games or other software projects that contain sandboxes and deployments within EOS." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLoginType_MetaData[] = {
		{ "Category", "EOS Settings|Login Settings|Auto Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto-Logins the player into the game. Can be used for testing or games with only 1 type of login */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-Logins the player into the game. Can be used for testing or games with only 1 type of login" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackForAutoLoginType_MetaData[] = {
		{ "Category", "EOS Settings|Login Settings|Auto Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the AutoLoginType fails, this will be used as a fallback */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the AutoLoginType fails, this will be used as a fallback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUse_EAS_ForAutoLogin_MetaData[] = {
		{ "Category", "EOS Settings|Login Settings|Auto Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the Auth Interface will be used to login the user, inshort, the user will be logged in using the Epic Account Services */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the Auth Interface will be used to login the user, inshort, the user will be logged in using the Epic Account Services" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperToolUrl_MetaData[] = {
		{ "Category", "EOS Settings|Login Settings|Auto Login" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginFlags_MetaData[] = {
		{ "Category", "EOS Settings|Login Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LoginFlags help define what permissions the user has when they login. */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LoginFlags help define what permissions the user has when they login." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "Category", "EOS Settings|Player Ticketing Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Your api key found in Game Services -> Player Ticketing -> [Show Api Key]*/" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your api key found in Game Services -> Player Ticketing -> [Show Api Key]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheDir_MetaData[] = {
		{ "Category", "EOS Settings|Title Storage Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The directory any PDS/TDS files are cached into. This is per artifact e.g.:\n\x09 *\n\x09 * <UserDir>/<ArtifactId>/<CacheDir>\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The directory any PDS/TDS files are cached into. This is per artifact e.g.:\n\n<UserDir>/<ArtifactId>/<CacheDir>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickBudgetInMilliseconds_MetaData[] = {
		{ "Category", "EOS Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to throttle how much time EOS ticking can take */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to throttle how much time EOS ticking can take" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverlay_MetaData[] = {
		{ "Category", "EOS Settings|Overlay Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to enable the overlay (ecom features) */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable the overlay (ecom features)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSocialOverlay_MetaData[] = {
		{ "Category", "EOS Settings|Overlay Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to enable the social overlay (friends, invites, etc.) */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable the social overlay (friends, invites, etc.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnLevelName_MetaData[] = {
		{ "Category", "EOS Settings|Overlay Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select which level which leave party button in social overlay will return to. Leave empty to return to defult game map. */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select which level which leave party button in social overlay will return to. Leave empty to return to defult game map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorOverlay_MetaData[] = {
		{ "Category", "EOS Settings|Overlay Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to enable the overlay when running in the editor */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable the overlay when running in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLauncherChecks_MetaData[] = {
		{ "Category", "EOS Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to enable the social overlay (friends, invites, etc.) */" },
#endif
		{ "DisplayName", "Require Being Launched by the Epic Games Store" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable the social overlay (friends, invites, etc.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleStorageTags_MetaData[] = {
		{ "Category", "EOS Settings|Title Storage Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag combinations for paged queries in title file enumerations, separate tags within groups using `+` */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag combinations for paged queries in title file enumerations, separate tags within groups using `+`" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleStorageReadChunkLength_MetaData[] = {
		{ "Category", "EOS Settings|Title Storage Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chunk size used when reading a title file */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunk size used when reading a title file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArtifactName_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used when launched from a store other than EGS or when the specified artifact name was not present */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when launched from a store other than EGS or when the specified artifact name was not present" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceArtifactName_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Artifact settings to be used for voice operations */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Artifact settings to be used for voice operations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DedicatedServerArtifactName_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Artifact settings to be used for Dedicated Servers. If empty, the default artifact will be used  but Dedicated Server usually require the policy to not have User Required */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Artifact settings to be used for Dedicated Servers. If empty, the default artifact will be used  but Dedicated Server usually require the policy to not have User Required" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSpecificArtifactName_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Artifact settings to be used for IOS */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Artifact settings to be used for IOS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per artifact SDK settings. A game might have a FooStaging, FooQA, and public Foo artifact */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per artifact SDK settings. A game might have a FooStaging, FooQA, and public Foo artifact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific|Android" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific|Android" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific|Android" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific|Android" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "EOS Settings|Artifact Settings|Platform Specific|Android" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_BuildConfiguration_MetaData[] = {
		{ "Category", "One Click Deploy" },
		{ "DisplayName", "Build Configuration" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_OrganizationId_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Credentials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the Organization ID string that was provided along with your credentials. */" },
#endif
		{ "DisplayName", "Organization Id" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the Organization ID string that was provided along with your credentials." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_ProductId_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Credentials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the Product ID string that was provided along with your credentials. */" },
#endif
		{ "DisplayName", "Product Id" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the Product ID string that was provided along with your credentials." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_ArtifactId_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Credentials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the Artifact ID string that was provided along with your credentials. */" },
#endif
		{ "DisplayName", "Artifact Id" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the Artifact ID string that was provided along with your credentials." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_ClientId_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Credentials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BuildPatchTool uses a unique Client ID and Client Secret, separate from any EOS Client IDs your game may use. Refer to the Build Patch Tool Credentials section of your Product Settings in Dev Portal to obtain the correct Client ID and Secret. Clients listed under SDK Credentials will not function with the BuildPatchTool.*/" },
#endif
		{ "DisplayName", "Client Id" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BuildPatchTool uses a unique Client ID and Client Secret, separate from any EOS Client IDs your game may use. Refer to the Build Patch Tool Credentials section of your Product Settings in Dev Portal to obtain the correct Client ID and Secret. Clients listed under SDK Credentials will not function with the BuildPatchTool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_ClientSecret_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Credentials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BuildPatchTool uses a unique Client ID and Client Secret, separate from any EOS Client IDs your game may use. Refer to the Build Patch Tool Credentials section of your Product Settings in Dev Portal to obtain the correct Client ID and Secret. Clients listed under SDK Credentials will not function with the BuildPatchTool.*/" },
#endif
		{ "DisplayName", "Client Secret" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BuildPatchTool uses a unique Client ID and Client Secret, separate from any EOS Client IDs your game may use. Refer to the Build Patch Tool Credentials section of your Product Settings in Dev Portal to obtain the correct Client ID and Secret. Clients listed under SDK Credentials will not function with the BuildPatchTool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_CloudDirOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
		{ "DisplayName", "Cloud Dir" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_ArgsOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The commandline to send to the app on launch. This can be set to \xe2\x80\x9c\xe2\x80\x9d when no additional arguments are needed. */" },
#endif
		{ "DisplayName", "Args Override" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The commandline to send to the app on launch. This can be set to \xe2\x80\x9c\xe2\x80\x9d when no additional arguments are needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_AppLaunchOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
		{ "DisplayName", "App Launch Override" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_BuildVersionOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please leave this empty unless you really want to override the build version. We assign the build version automatically based on the timestamp of the build and the game version. */" },
#endif
		{ "DisplayName", "Build Version Override" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please leave this empty unless you really want to override the build version. We assign the build version automatically based on the timestamp of the build and the game version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_AppArgsOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
		{ "DisplayName", "App Args Override" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneClick_BuildRootOverride_MetaData[] = {
		{ "Category", "One Click Deploy|Build Patch Tool Parameters" },
		{ "DisplayName", "Build Root Override" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEAS_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to have Epic Accounts used (friends list will be unified with the default platform) */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to have Epic Accounts used (friends list will be unified with the default platform)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEOSConnect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to have EOS Connect APIs used to link accounts for crossplay */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to have EOS Connect APIs used to link accounts for crossplay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorStatsToEOS_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to write stats to EOS as well as the default platform */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to write stats to EOS as well as the default platform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorAchievementsToEOS_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to write achievement data to EOS as well as the default platform */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to write achievement data to EOS as well as the default platform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEOSSessions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to use EOS for session registration with data mirrored to the default platform */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to use EOS for session registration with data mirrored to the default platform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorPresenceToEAS_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true to have Epic Accounts presence information updated when the default platform is updated */" },
#endif
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to have Epic Accounts presence information updated when the default platform is updated" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutomaticallySetupEIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetupEIK;
	static void NewProp_bAutoLaunchDevTool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLaunchDevTool;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrganizationName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLoginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FallbackForAutoLoginType;
	static void NewProp_bUse_EAS_ForAutoLogin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse_EAS_ForAutoLogin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperToolUrl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoginFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoginFlags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CacheDir;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TickBudgetInMilliseconds;
	static void NewProp_bEnableOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverlay;
	static void NewProp_bEnableSocialOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSocialOverlay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnLevelName;
	static void NewProp_bEnableEditorOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorOverlay;
	static void NewProp_bUseLauncherChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLauncherChecks;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleStorageTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TitleStorageTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleStorageReadChunkLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultArtifactName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceArtifactName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DedicatedServerArtifactName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformSpecificArtifactName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Artifacts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OneClick_BuildConfiguration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_OrganizationId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_ArtifactId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_ClientId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_ClientSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_CloudDirOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_ArgsOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_AppLaunchOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_BuildVersionOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_AppArgsOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneClick_BuildRootOverride;
	static void NewProp_bUseEAS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEAS;
	static void NewProp_bUseEOSConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEOSConnect;
	static void NewProp_bMirrorStatsToEOS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorStatsToEOS;
	static void NewProp_bMirrorAchievementsToEOS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorAchievementsToEOS;
	static void NewProp_bUseEOSSessions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEOSSessions;
	static void NewProp_bMirrorPresenceToEAS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorPresenceToEAS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIKSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutomaticallySetupEIK_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bAutomaticallySetupEIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutomaticallySetupEIK = { "bAutomaticallySetupEIK", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutomaticallySetupEIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallySetupEIK_MetaData), NewProp_bAutomaticallySetupEIK_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutoLaunchDevTool_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bAutoLaunchDevTool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutoLaunchDevTool = { "bAutoLaunchDevTool", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutoLaunchDevTool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLaunchDevTool_MetaData), NewProp_bAutoLaunchDevTool_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName = { "OrganizationName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OrganizationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrganizationName_MetaData), NewProp_OrganizationName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ProductName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductName_MetaData), NewProp_ProductName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_AutoLoginType = { "AutoLoginType", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, AutoLoginType), Z_Construct_UEnum_EOSIntegrationKit_EEIK_AutoLoginType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLoginType_MetaData), NewProp_AutoLoginType_MetaData) }; // 1118228839
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_FallbackForAutoLoginType = { "FallbackForAutoLoginType", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, FallbackForAutoLoginType), Z_Construct_UEnum_EOSIntegrationKit_EEIK_FallbackForAutoLoginType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackForAutoLoginType_MetaData), NewProp_FallbackForAutoLoginType_MetaData) }; // 196800534
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUse_EAS_ForAutoLogin_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bUse_EAS_ForAutoLogin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUse_EAS_ForAutoLogin = { "bUse_EAS_ForAutoLogin", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUse_EAS_ForAutoLogin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUse_EAS_ForAutoLogin_MetaData), NewProp_bUse_EAS_ForAutoLogin_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeveloperToolUrl = { "DeveloperToolUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, DeveloperToolUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperToolUrl_MetaData), NewProp_DeveloperToolUrl_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_LoginFlags_Inner = { "LoginFlags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EOSIntegrationKit_EEIK_LoginFlags_LocalForSettings, METADATA_PARAMS(0, nullptr) }; // 2702844063
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_LoginFlags = { "LoginFlags", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, LoginFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginFlags_MetaData), NewProp_LoginFlags_MetaData) }; // 2702844063
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir = { "CacheDir", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, CacheDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheDir_MetaData), NewProp_CacheDir_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds = { "TickBudgetInMilliseconds", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, TickBudgetInMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickBudgetInMilliseconds_MetaData), NewProp_TickBudgetInMilliseconds_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bEnableOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay = { "bEnableOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOverlay_MetaData), NewProp_bEnableOverlay_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bEnableSocialOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay = { "bEnableSocialOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSocialOverlay_MetaData), NewProp_bEnableSocialOverlay_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ReturnLevelName = { "ReturnLevelName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ReturnLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnLevelName_MetaData), NewProp_ReturnLevelName_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bEnableEditorOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay = { "bEnableEditorOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEditorOverlay_MetaData), NewProp_bEnableEditorOverlay_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseLauncherChecks_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bUseLauncherChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseLauncherChecks = { "bUseLauncherChecks", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseLauncherChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLauncherChecks_MetaData), NewProp_bUseLauncherChecks_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_Inner = { "TitleStorageTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags = { "TitleStorageTags", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, TitleStorageTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleStorageTags_MetaData), NewProp_TitleStorageTags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength = { "TitleStorageReadChunkLength", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, TitleStorageReadChunkLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleStorageReadChunkLength_MetaData), NewProp_TitleStorageReadChunkLength_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName = { "DefaultArtifactName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, DefaultArtifactName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultArtifactName_MetaData), NewProp_DefaultArtifactName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_VoiceArtifactName = { "VoiceArtifactName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, VoiceArtifactName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceArtifactName_MetaData), NewProp_VoiceArtifactName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DedicatedServerArtifactName = { "DedicatedServerArtifactName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, DedicatedServerArtifactName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DedicatedServerArtifactName_MetaData), NewProp_DedicatedServerArtifactName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_PlatformSpecificArtifactName = { "PlatformSpecificArtifactName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, PlatformSpecificArtifactName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSpecificArtifactName_MetaData), NewProp_PlatformSpecificArtifactName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_Inner = { "Artifacts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEArtifactSettings, METADATA_PARAMS(0, nullptr) }; // 4284421374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, Artifacts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artifacts_MetaData), NewProp_Artifacts_MetaData) }; // 4284421374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ClientSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientSecret_MetaData), NewProp_ClientSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildConfiguration = { "OneClick_BuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_BuildConfiguration), Z_Construct_UEnum_EOSIntegrationKit_EEIK_BuildConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_BuildConfiguration_MetaData), NewProp_OneClick_BuildConfiguration_MetaData) }; // 3471537318
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_OrganizationId = { "OneClick_OrganizationId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_OrganizationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_OrganizationId_MetaData), NewProp_OneClick_OrganizationId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ProductId = { "OneClick_ProductId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_ProductId_MetaData), NewProp_OneClick_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ArtifactId = { "OneClick_ArtifactId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_ArtifactId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_ArtifactId_MetaData), NewProp_OneClick_ArtifactId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ClientId = { "OneClick_ClientId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_ClientId_MetaData), NewProp_OneClick_ClientId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ClientSecret = { "OneClick_ClientSecret", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_ClientSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_ClientSecret_MetaData), NewProp_OneClick_ClientSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_CloudDirOverride = { "OneClick_CloudDirOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_CloudDirOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_CloudDirOverride_MetaData), NewProp_OneClick_CloudDirOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ArgsOverride = { "OneClick_ArgsOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_ArgsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_ArgsOverride_MetaData), NewProp_OneClick_ArgsOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_AppLaunchOverride = { "OneClick_AppLaunchOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_AppLaunchOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_AppLaunchOverride_MetaData), NewProp_OneClick_AppLaunchOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildVersionOverride = { "OneClick_BuildVersionOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_BuildVersionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_BuildVersionOverride_MetaData), NewProp_OneClick_BuildVersionOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_AppArgsOverride = { "OneClick_AppArgsOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_AppArgsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_AppArgsOverride_MetaData), NewProp_OneClick_AppArgsOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildRootOverride = { "OneClick_BuildRootOverride", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIKSettings, OneClick_BuildRootOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneClick_BuildRootOverride_MetaData), NewProp_OneClick_BuildRootOverride_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bUseEAS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS = { "bUseEAS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEAS_MetaData), NewProp_bUseEAS_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bUseEOSConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect = { "bUseEOSConnect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEOSConnect_MetaData), NewProp_bUseEOSConnect_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bMirrorStatsToEOS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS = { "bMirrorStatsToEOS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorStatsToEOS_MetaData), NewProp_bMirrorStatsToEOS_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bMirrorAchievementsToEOS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS = { "bMirrorAchievementsToEOS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorAchievementsToEOS_MetaData), NewProp_bMirrorAchievementsToEOS_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bUseEOSSessions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions = { "bUseEOSSessions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEOSSessions_MetaData), NewProp_bUseEOSSessions_MetaData) };
void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_SetBit(void* Obj)
{
	((UEIKSettings*)Obj)->bMirrorPresenceToEAS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS = { "bMirrorPresenceToEAS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorPresenceToEAS_MetaData), NewProp_bMirrorPresenceToEAS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIKSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutomaticallySetupEIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bAutoLaunchDevTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_AutoLoginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_FallbackForAutoLoginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUse_EAS_ForAutoLogin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeveloperToolUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_LoginFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_LoginFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ReturnLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseLauncherChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_VoiceArtifactName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DedicatedServerArtifactName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_PlatformSpecificArtifactName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_OrganizationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ArtifactId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ClientSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_CloudDirOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_ArgsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_AppLaunchOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildVersionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_AppArgsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OneClick_BuildRootOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIKSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeOptionsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EOSIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIKSettings_Statics::ClassParams = {
	&UEIKSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEIKSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIKSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIKSettings()
{
	if (!Z_Registration_Info_UClass_UEIKSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIKSettings.OuterSingleton, Z_Construct_UClass_UEIKSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIKSettings.OuterSingleton;
}
template<> EOSINTEGRATIONKIT_API UClass* StaticClass<UEIKSettings>()
{
	return UEIKSettings::StaticClass();
}
UEIKSettings::UEIKSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIKSettings);
UEIKSettings::~UEIKSettings() {}
// End Class UEIKSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEIK_AutoLoginType_StaticEnum, TEXT("EEIK_AutoLoginType"), &Z_Registration_Info_UEnum_EEIK_AutoLoginType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1118228839U) },
		{ EEIK_FallbackForAutoLoginType_StaticEnum, TEXT("EEIK_FallbackForAutoLoginType"), &Z_Registration_Info_UEnum_EEIK_FallbackForAutoLoginType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 196800534U) },
		{ EEIK_LoginFlags_LocalForSettings_StaticEnum, TEXT("EEIK_LoginFlags_LocalForSettings"), &Z_Registration_Info_UEnum_EEIK_LoginFlags_LocalForSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2702844063U) },
		{ EEIK_BuildConfiguration_StaticEnum, TEXT("EEIK_BuildConfiguration"), &Z_Registration_Info_UEnum_EEIK_BuildConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3471537318U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEArtifactSettings::StaticStruct, Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewStructOps, TEXT("EArtifactSettings"), &Z_Registration_Info_UScriptStruct_EArtifactSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEArtifactSettings), 4284421374U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings, UDEPRECATED_EIKArtifactSettings::StaticClass, TEXT("UDEPRECATED_EIKArtifactSettings"), &Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_EIKArtifactSettings), 2306171399U) },
		{ Z_Construct_UClass_UEIKSettings, UEIKSettings::StaticClass, TEXT("UEIKSettings"), &Z_Registration_Info_UClass_UEIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIKSettings), 3999133301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_4069649967(TEXT("/Script/EOSIntegrationKit"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

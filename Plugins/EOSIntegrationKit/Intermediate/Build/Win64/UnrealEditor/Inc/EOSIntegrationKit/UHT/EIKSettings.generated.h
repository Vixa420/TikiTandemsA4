// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EIKSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EOSINTEGRATIONKIT_EIKSettings_generated_h
#error "EIKSettings.generated.h already included, missing '#pragma once' in EIKSettings.h"
#endif
#define EOSINTEGRATIONKIT_EIKSettings_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EIKArtifactSettings(); \
	friend struct Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_EIKArtifactSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EOSIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_EIKArtifactSettings)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_EIKArtifactSettings(UDEPRECATED_EIKArtifactSettings&&); \
	UDEPRECATED_EIKArtifactSettings(const UDEPRECATED_EIKArtifactSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EIKArtifactSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EIKArtifactSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_EIKArtifactSettings) \
	NO_API virtual ~UDEPRECATED_EIKArtifactSettings();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_27_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSINTEGRATIONKIT_API UClass* StaticClass<class UDEPRECATED_EIKArtifactSettings>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEArtifactSettings_Statics; \
	EOSINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


template<> EOSINTEGRATIONKIT_API UScriptStruct* StaticStruct<struct FEArtifactSettings>();

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIKSettings(); \
	friend struct Z_Construct_UClass_UEIKSettings_Statics; \
public: \
	DECLARE_CLASS(UEIKSettings, URuntimeOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EOSIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(UEIKSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIKSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEIKSettings(UEIKSettings&&); \
	UEIKSettings(const UEIKSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIKSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIKSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIKSettings) \
	NO_API virtual ~UEIKSettings();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_170_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_174_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSINTEGRATIONKIT_API UClass* StaticClass<class UEIKSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EOSIntegrationKit_Public_EIKSettings_h


#define FOREACH_ENUM_EEIK_AUTOLOGINTYPE(op) \
	op(AutoLogin_None) \
	op(AutoLogin_DeveloperTool) \
	op(AutoLogin_PersistentAuth) \
	op(AutoLogin_DeviceIdLogin) \
	op(AutoLogin_AccountPortalLogin) \
	op(AutoLogin_PlatformLogin) \
	op(AutoLogin_SteamLogin) \
	op(AutoLogin_PSNLogin) \
	op(AutoLogin_GoogleLogin) \
	op(AutoLogin_AppleLogin) 
#define FOREACH_ENUM_EEIK_FALLBACKFORAUTOLOGINTYPE(op) \
	op(Fallback_None) \
	op(Fallback_DeviceIdLogin) \
	op(Fallback_AccountPortalLogin) 
#define FOREACH_ENUM_EEIK_LOGINFLAGS_LOCALFORSETTINGS(op) \
	op(T_EOS_AS_NoFlags) \
	op(EOS_AS_BasicProfile) \
	op(EOS_AS_FriendsList) \
	op(EOS_AS_Presence) \
	op(EOS_AS_FriendsManagement) \
	op(EOS_AS_Email) \
	op(EOS_AS_Country) 
#define FOREACH_ENUM_EEIK_BUILDCONFIGURATION(op) \
	op(EIK_UnknownBuild) \
	op(EIK_Debug) \
	op(EIK_DebugGame) \
	op(EIK_Development) \
	op(EIK_Shipping) \
	op(EIK_Test) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleLogin_SLK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGoogleLogin_SLK;
class UObject;
#ifdef EIKLOGINMETHODS_GoogleLogin_SLK_generated_h
#error "GoogleLogin_SLK.generated.h already included, missing '#pragma once' in GoogleLogin_SLK.h"
#endif
#define EIKLOGINMETHODS_GoogleLogin_SLK_generated_h

#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_9_DELEGATE \
EIKLOGINMETHODS_API void FGoogleSignInCallback_DelegateWrapper(const FMulticastScriptDelegate& GoogleSignInCallback, const FString& Token, const FString& Error);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGoogleLogin);


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleLogin_SLK(); \
	friend struct Z_Construct_UClass_UGoogleLogin_SLK_Statics; \
public: \
	DECLARE_CLASS(UGoogleLogin_SLK, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EIKLoginMethods"), NO_API) \
	DECLARE_SERIALIZER(UGoogleLogin_SLK)


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleLogin_SLK(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGoogleLogin_SLK(UGoogleLogin_SLK&&); \
	UGoogleLogin_SLK(const UGoogleLogin_SLK&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleLogin_SLK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleLogin_SLK); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleLogin_SLK) \
	NO_API virtual ~UGoogleLogin_SLK();


#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_14_PROLOG
#define FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_INCLASS_NO_PURE_DECLS \
	FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EIKLOGINMETHODS_API UClass* StaticClass<class UGoogleLogin_SLK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_EIKLoginMethods_Public_GoogleLogin_SLK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

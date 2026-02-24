// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_UpdateSession_AsyncFunction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FUpdateSessionDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "UpdateSessionDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUpdateSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSessionDelegate)
{
	UpdateSessionDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FUpdateSessionDelegate

// Begin Class UEIK_UpdateSession_AsyncFunction Function UpdateEIKSessions
struct Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics
{
	struct EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FEIKAttribute> SessionSettings;
		FName SessionName;
		bool bShouldAdvertise;
		bool bAllowJoinInProgress;
		bool bAllowInvites;
		bool bUsesPresence;
		bool bIsLANMatch;
		bool bIsDedicatedServer;
		bool bIsUseLobbiesIfAvailable;
		bool bIsUseLobbiesVoiceChatIfAvailable;
		int32 NumberOfPublicConnections;
		int32 NumberOfPrivateConnections;
		UEIK_UpdateSession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bIsLANMatch", "false" },
		{ "CPP_Default_bIsUseLobbiesIfAvailable", "true" },
		{ "CPP_Default_bIsUseLobbiesVoiceChatIfAvailable", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUsesPresence", "false" },
		{ "CPP_Default_NumberOfPrivateConnections", "10" },
		{ "CPP_Default_NumberOfPublicConnections", "10" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Update EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bUsesPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
	static void NewProp_bIsLANMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLANMatch;
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static void NewProp_bIsUseLobbiesIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUseLobbiesIfAvailable;
	static void NewProp_bIsUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUseLobbiesVoiceChatIfAvailable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bUsesPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsLANMatch_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bIsLANMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsLANMatch = { "bIsLANMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsLANMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesIfAvailable_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bIsUseLobbiesIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesIfAvailable = { "bIsUseLobbiesIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
{
	((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bIsUseLobbiesVoiceChatIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesVoiceChatIfAvailable = { "bIsUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, NumberOfPrivateConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, ReturnValue), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsLANMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bIsUseLobbiesVoiceChatIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction, nullptr, "UpdateEIKSessions", nullptr, nullptr, Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_UpdateSession_AsyncFunction::execUpdateEIKSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FEIKAttribute,Z_Param_SessionSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bShouldAdvertise);
	P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
	P_GET_UBOOL(Z_Param_bAllowInvites);
	P_GET_UBOOL(Z_Param_bUsesPresence);
	P_GET_UBOOL(Z_Param_bIsLANMatch);
	P_GET_UBOOL(Z_Param_bIsDedicatedServer);
	P_GET_UBOOL(Z_Param_bIsUseLobbiesIfAvailable);
	P_GET_UBOOL(Z_Param_bIsUseLobbiesVoiceChatIfAvailable);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPrivateConnections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEIK_UpdateSession_AsyncFunction**)Z_Param__Result=UEIK_UpdateSession_AsyncFunction::UpdateEIKSessions(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_bShouldAdvertise,Z_Param_bAllowJoinInProgress,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bIsLANMatch,Z_Param_bIsDedicatedServer,Z_Param_bIsUseLobbiesIfAvailable,Z_Param_bIsUseLobbiesVoiceChatIfAvailable,Z_Param_NumberOfPublicConnections,Z_Param_NumberOfPrivateConnections);
	P_NATIVE_END;
}
// End Class UEIK_UpdateSession_AsyncFunction Function UpdateEIKSessions

// Begin Class UEIK_UpdateSession_AsyncFunction
void UEIK_UpdateSession_AsyncFunction::StaticRegisterNativesUEIK_UpdateSession_AsyncFunction()
{
	UClass* Class = UEIK_UpdateSession_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateEIKSessions", &UEIK_UpdateSession_AsyncFunction::execUpdateEIKSessions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_UpdateSession_AsyncFunction);
UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister()
{
	return UEIK_UpdateSession_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_WorldContextObject;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions, "UpdateEIKSessions" }, // 1998681659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_UpdateSession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject = { "Var_WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UpdateSession_AsyncFunction, Var_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_WorldContextObject_MetaData), NewProp_Var_WorldContextObject_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UpdateSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1417407744
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UpdateSession_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1417407744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::ClassParams = {
	&UEIK_UpdateSession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_UpdateSession_AsyncFunction>()
{
	return UEIK_UpdateSession_AsyncFunction::StaticClass();
}
UEIK_UpdateSession_AsyncFunction::UEIK_UpdateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_UpdateSession_AsyncFunction);
UEIK_UpdateSession_AsyncFunction::~UEIK_UpdateSession_AsyncFunction() {}
// End Class UEIK_UpdateSession_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction, UEIK_UpdateSession_AsyncFunction::StaticClass, TEXT("UEIK_UpdateSession_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_UpdateSession_AsyncFunction), 2062610629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_1210727016(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_BlueprintFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions();
ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType();
ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature();
ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References

// Begin Delegate FOnResponseFromSanctions
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms
	{
		bool bWasSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnResponseFromSanctions__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResponseFromSanctions_DelegateWrapper(const FScriptDelegate& OnResponseFromSanctions, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	OnResponseFromSanctions.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnResponseFromSanctions

// Begin Delegate FOnResponseFromEpicForAccessToken
struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms
	{
		bool bWasSuccess;
		FString AccessToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
{
	((_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms*)Obj)->bWasSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms, AccessToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessToken_MetaData), NewProp_AccessToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnResponseFromEpicForAccessToken__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResponseFromEpicForAccessToken_DelegateWrapper(const FScriptDelegate& OnResponseFromEpicForAccessToken, bool bWasSuccess, const FString& AccessToken)
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms
	{
		bool bWasSuccess;
		FString AccessToken;
	};
	_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.AccessToken=AccessToken;
	OnResponseFromEpicForAccessToken.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnResponseFromEpicForAccessToken

// Begin Enum EEOSSanctionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEOSSanctionType;
static UEnum* EEOSSanctionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEOSSanctionType"));
	}
	return Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEOSSanctionType>()
{
	return EEOSSanctionType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AppealForForgiveness.Name", "AppealForForgiveness" },
		{ "BlueprintType", "true" },
		{ "CompromisedAccount.Name", "CompromisedAccount" },
		{ "IncorrectSanction.Name", "IncorrectSanction" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "UnfairPunishment.Name", "UnfairPunishment" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "IncorrectSanction", (int64)IncorrectSanction },
		{ "CompromisedAccount", (int64)CompromisedAccount },
		{ "UnfairPunishment", (int64)UnfairPunishment },
		{ "AppealForForgiveness", (int64)AppealForForgiveness },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EEOSSanctionType",
	"EEOSSanctionType",
	Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType()
{
	if (!Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton;
}
// End Enum EEOSSanctionType

// Begin Enum EEIK_LoginStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_LoginStatus;
static UEnum* EEIK_LoginStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIK_LoginStatus"));
	}
	return Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_LoginStatus>()
{
	return EEIK_LoginStatus_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
		{ "LoggedIn.Name", "LoggedIn" },
		{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
		{ "NotLoggedIn.Name", "NotLoggedIn" },
		{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
		{ "UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
		{ "UsingLocalProfile.Name", "UsingLocalProfile" },
		{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NotLoggedIn", (int64)NotLoggedIn },
		{ "UsingLocalProfile", (int64)UsingLocalProfile },
		{ "LoggedIn", (int64)LoggedIn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"EEIK_LoginStatus",
	"EEIK_LoginStatus",
	Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus()
{
	if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton;
}
// End Enum EEIK_LoginStatus

// Begin Enum ESessionCurrentState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESessionCurrentState;
static UEnum* ESessionCurrentState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESessionCurrentState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESessionCurrentState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ESessionCurrentState"));
	}
	return Z_Registration_Info_UEnum_ESessionCurrentState.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ESessionCurrentState>()
{
	return ESessionCurrentState_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Creating.Comment", "/** An online session is in the process of being created */" },
		{ "Creating.Name", "Creating" },
		{ "Creating.ToolTip", "An online session is in the process of being created" },
		{ "Destroying.Comment", "/** The session is being destroyed */" },
		{ "Destroying.Name", "Destroying" },
		{ "Destroying.ToolTip", "The session is being destroyed" },
		{ "Ended.Comment", "/** The session is closed and any stats committed */" },
		{ "Ended.Name", "Ended" },
		{ "Ended.ToolTip", "The session is closed and any stats committed" },
		{ "Ending.Comment", "/** The session is still valid, but the session is no longer being played (post match lobby) */" },
		{ "Ending.Name", "Ending" },
		{ "Ending.ToolTip", "The session is still valid, but the session is no longer being played (post match lobby)" },
		{ "InProgress.Comment", "/** The current session has started. Sessions with join in progress disabled are no longer joinable */" },
		{ "InProgress.Name", "InProgress" },
		{ "InProgress.ToolTip", "The current session has started. Sessions with join in progress disabled are no longer joinable" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "NoSession.Comment", "/** An online session has not been created yet */" },
		{ "NoSession.Name", "NoSession" },
		{ "NoSession.ToolTip", "An online session has not been created yet" },
		{ "Pending.Comment", "/** Session has been created but the session hasn't started (pre match lobby) */" },
		{ "Pending.Name", "Pending" },
		{ "Pending.ToolTip", "Session has been created but the session hasn't started (pre match lobby)" },
		{ "Starting.Comment", "/** Session has been asked to start (may take time due to communication with backend) */" },
		{ "Starting.Name", "Starting" },
		{ "Starting.ToolTip", "Session has been asked to start (may take time due to communication with backend)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NoSession", (int64)NoSession },
		{ "Creating", (int64)Creating },
		{ "Pending", (int64)Pending },
		{ "Starting", (int64)Starting },
		{ "InProgress", (int64)InProgress },
		{ "Ending", (int64)Ending },
		{ "Ended", (int64)Ended },
		{ "Destroying", (int64)Destroying },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	"ESessionCurrentState",
	"ESessionCurrentState",
	Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState()
{
	if (!Z_Registration_Info_UEnum_ESessionCurrentState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESessionCurrentState.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESessionCurrentState.InnerSingleton;
}
// End Enum ESessionCurrentState

// Begin ScriptStruct FEIK_CurrentSessionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo;
class UScriptStruct* FEIK_CurrentSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_CurrentSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_CurrentSessionInfo>()
{
	return FEIK_CurrentSessionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHostingSession_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPublicJoinable_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFriendJoinable_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInviteOnly_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayers_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionOwner_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionState_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOpenPublicConnections_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOpenPrivateConnections_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionIdString_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompleteDebugString_MetaData[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHostingSession_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHostingSession;
	static void NewProp_bPublicJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublicJoinable;
	static void NewProp_bFriendJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFriendJoinable;
	static void NewProp_bInviteOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInviteOnly;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionOwner;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOpenPublicConnections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOpenPrivateConnections;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionIdString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompleteDebugString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_CurrentSessionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bHostingSession_SetBit(void* Obj)
{
	((FEIK_CurrentSessionInfo*)Obj)->bHostingSession = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bHostingSession = { "bHostingSession", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_CurrentSessionInfo), &Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bHostingSession_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHostingSession_MetaData), NewProp_bHostingSession_MetaData) };
void Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bPublicJoinable_SetBit(void* Obj)
{
	((FEIK_CurrentSessionInfo*)Obj)->bPublicJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bPublicJoinable = { "bPublicJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_CurrentSessionInfo), &Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bPublicJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPublicJoinable_MetaData), NewProp_bPublicJoinable_MetaData) };
void Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bFriendJoinable_SetBit(void* Obj)
{
	((FEIK_CurrentSessionInfo*)Obj)->bFriendJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bFriendJoinable = { "bFriendJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_CurrentSessionInfo), &Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bFriendJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFriendJoinable_MetaData), NewProp_bFriendJoinable_MetaData) };
void Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bInviteOnly_SetBit(void* Obj)
{
	((FEIK_CurrentSessionInfo*)Obj)->bInviteOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bInviteOnly = { "bInviteOnly", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_CurrentSessionInfo), &Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bInviteOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInviteOnly_MetaData), NewProp_bInviteOnly_MetaData) };
void Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((FEIK_CurrentSessionInfo*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIK_CurrentSessionInfo), &Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvites_MetaData), NewProp_bAllowInvites_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_RegisteredPlayers_Inner = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_RegisteredPlayers = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, RegisteredPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredPlayers_MetaData), NewProp_RegisteredPlayers_MetaData) }; // 3785727623
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionOwner = { "SessionOwner", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, SessionOwner), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionOwner_MetaData), NewProp_SessionOwner_MetaData) }; // 3785727623
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionState = { "SessionState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, SessionState), Z_Construct_UEnum_OnlineSubsystemEIK_ESessionCurrentState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionState_MetaData), NewProp_SessionState_MetaData) }; // 1551788445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 3874449400
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionSettings_MetaData), NewProp_SessionSettings_MetaData) }; // 3874449400
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_NumOpenPublicConnections = { "NumOpenPublicConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, NumOpenPublicConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOpenPublicConnections_MetaData), NewProp_NumOpenPublicConnections_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_NumOpenPrivateConnections = { "NumOpenPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, NumOpenPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOpenPrivateConnections_MetaData), NewProp_NumOpenPrivateConnections_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionIdString = { "SessionIdString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, SessionIdString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionIdString_MetaData), NewProp_SessionIdString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_CompleteDebugString = { "CompleteDebugString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_CurrentSessionInfo, CompleteDebugString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompleteDebugString_MetaData), NewProp_CompleteDebugString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bHostingSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bPublicJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bFriendJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bInviteOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_RegisteredPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_RegisteredPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_NumOpenPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_NumOpenPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_SessionIdString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewProp_CompleteDebugString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	nullptr,
	&NewStructOps,
	"EIK_CurrentSessionInfo",
	Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::PropPointers),
	sizeof(FEIK_CurrentSessionInfo),
	alignof(FEIK_CurrentSessionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo.InnerSingleton;
}
// End ScriptStruct FEIK_CurrentSessionInfo

// Begin Class UEIK_BlueprintFunctions Function AcceptSessionInvite
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics
{
	struct EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms
	{
		FString InviteId;
		FString LocalUserId;
		FString InviterUserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "DisplayName", "Accept EIK Session Invite" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviterUserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms, InviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms, LocalUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_InviterUserId = { "InviterUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms, InviterUserId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_InviterUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "AcceptSessionInvite", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::EIK_BlueprintFunctions_eventAcceptSessionInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execAcceptSessionInvite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InviteId);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InviterUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::AcceptSessionInvite(Z_Param_InviteId,Z_Param_LocalUserId,Z_Param_InviterUserId);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function AcceptSessionInvite

// Begin Class UEIK_BlueprintFunctions Function BlockLobbyVoiceChatPlayers
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics
{
	struct EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms
	{
		UObject* Context;
		TArray<FString> BlockedPlayers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlockedPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockedPlayers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_BlockedPlayers_Inner = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_BlockedPlayers = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms, BlockedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_BlockedPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_BlockedPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "BlockLobbyVoiceChatPlayers", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::EIK_BlueprintFunctions_eventBlockLobbyVoiceChatPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execBlockLobbyVoiceChatPlayers)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_TARRAY(FString,Z_Param_BlockedPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::BlockLobbyVoiceChatPlayers(Z_Param_Context,Z_Param_BlockedPlayers);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function BlockLobbyVoiceChatPlayers

// Begin Class UEIK_BlueprintFunctions Function ByteArrayToSaveGameObject
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics
{
	struct EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms
	{
		TArray<uint8> DataToConvert;
		USaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a TArray<uint8> to a SaveGame object.\n// The TArray<uint8> is deserialized to construct the SaveGame object.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a TArray<uint8> to a SaveGame object.\nThe TArray<uint8> is deserialized to construct the SaveGame object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToConvert_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToConvert;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_Inner = { "DataToConvert", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms, DataToConvert), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToConvert_MetaData), NewProp_DataToConvert_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ByteArrayToSaveGameObject", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execByteArrayToSaveGameObject)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataToConvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveGame**)Z_Param__Result=UEIK_BlueprintFunctions::ByteArrayToSaveGameObject(Z_Param_Out_DataToConvert);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function ByteArrayToSaveGameObject

// Begin Class UEIK_BlueprintFunctions Function ByteArrayToString
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics
{
	struct EIK_BlueprintFunctions_eventByteArrayToString_Parms
	{
		TArray<uint8> DataToConvert;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a TArray<uint8> to a FString using Base64 encoding.\n// This is useful for converting binary data to a human-readable string format.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a TArray<uint8> to a FString using Base64 encoding.\nThis is useful for converting binary data to a human-readable string format." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToConvert_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToConvert;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_Inner = { "DataToConvert", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToString_Parms, DataToConvert), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToConvert_MetaData), NewProp_DataToConvert_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ByteArrayToString", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::EIK_BlueprintFunctions_eventByteArrayToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::EIK_BlueprintFunctions_eventByteArrayToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execByteArrayToString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataToConvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::ByteArrayToString(Z_Param_Out_DataToConvert);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function ByteArrayToString

// Begin Class UEIK_BlueprintFunctions Function ConvertPosixTimeToDateTime
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics
{
	struct EIK_BlueprintFunctions_eventConvertPosixTimeToDateTime_Parms
	{
		int64 PosixTime;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "DisplayName", "Convert POSIX Time to DateTime" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PosixTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::NewProp_PosixTime = { "PosixTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventConvertPosixTimeToDateTime_Parms, PosixTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventConvertPosixTimeToDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::NewProp_PosixTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ConvertPosixTimeToDateTime", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::EIK_BlueprintFunctions_eventConvertPosixTimeToDateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::EIK_BlueprintFunctions_eventConvertPosixTimeToDateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execConvertPosixTimeToDateTime)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_PosixTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=UEIK_BlueprintFunctions::ConvertPosixTimeToDateTime(Z_Param_PosixTime);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function ConvertPosixTimeToDateTime

// Begin Class UEIK_BlueprintFunctions Function EndSession
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics
{
	struct EIK_BlueprintFunctions_eventEndSession_Parms
	{
		FName SessionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for ending lobbies and sessions\n" },
#endif
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "End EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for ending lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventEndSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventEndSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventEndSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "EndSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::EIK_BlueprintFunctions_eventEndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::EIK_BlueprintFunctions_eventEndSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execEndSession)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::EndSession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function EndSession

// Begin Class UEIK_BlueprintFunctions Function GenerateSessionCode
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics
{
	struct EIK_BlueprintFunctions_eventGenerateSessionCode_Parms
	{
		int32 CodeLength;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate a session code of the specified length.\n// This function returns a randomly generated alphanumeric session code.\n// The 'CodeLength' parameter determines the length of the generated code (default: 9).\n" },
#endif
		{ "CPP_Default_CodeLength", "9" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a session code of the specified length.\nThis function returns a randomly generated alphanumeric session code.\nThe 'CodeLength' parameter determines the length of the generated code (default: 9)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CodeLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength = { "CodeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, CodeLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GenerateSessionCode", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::EIK_BlueprintFunctions_eventGenerateSessionCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::EIK_BlueprintFunctions_eventGenerateSessionCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGenerateSessionCode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CodeLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GenerateSessionCode(Z_Param_CodeLength);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GenerateSessionCode

// Begin Class UEIK_BlueprintFunctions Function GetActiveSubsystem
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics
{
	struct EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the active EOS subsystem name.\n// This function returns the name of the active EOS subsystem as a FName.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the active EOS subsystem name.\nThis function returns the name of the active EOS subsystem as a FName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetActiveSubsystem", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetActiveSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UEIK_BlueprintFunctions::GetActiveSubsystem();
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetActiveSubsystem

// Begin Class UEIK_BlueprintFunctions Function GetAllCurrentSessionNames
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics
{
	struct EIK_BlueprintFunctions_eventGetAllCurrentSessionNames_Parms
	{
		UObject* Context;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetAllCurrentSessionNames_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetAllCurrentSessionNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetAllCurrentSessionNames", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::EIK_BlueprintFunctions_eventGetAllCurrentSessionNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::EIK_BlueprintFunctions_eventGetAllCurrentSessionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetAllCurrentSessionNames)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UEIK_BlueprintFunctions::GetAllCurrentSessionNames(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetAllCurrentSessionNames

// Begin Class UEIK_BlueprintFunctions Function GetCurrentPort
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics
{
	struct EIK_BlueprintFunctions_eventGetCurrentPort_Parms
	{
		AGameModeBase* CurrentGameMode;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_CurrentGameMode = { "CurrentGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentPort_Parms, CurrentGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentPort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_CurrentGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetCurrentPort", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::EIK_BlueprintFunctions_eventGetCurrentPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::EIK_BlueprintFunctions_eventGetCurrentPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetCurrentPort)
{
	P_GET_OBJECT(AGameModeBase,Z_Param_CurrentGameMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetCurrentPort(Z_Param_CurrentGameMode);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetCurrentPort

// Begin Class UEIK_BlueprintFunctions Function GetCurrentSessionInfo
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics
{
	struct EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms
	{
		UObject* Context;
		FName SessionName;
		FEIK_CurrentSessionInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo, METADATA_PARAMS(0, nullptr) }; // 1302627799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetCurrentSessionInfo", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::EIK_BlueprintFunctions_eventGetCurrentSessionInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetCurrentSessionInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIK_CurrentSessionInfo*)Z_Param__Result=UEIK_BlueprintFunctions::GetCurrentSessionInfo(Z_Param_Context,Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetCurrentSessionInfo

// Begin Class UEIK_BlueprintFunctions Function GetEIKPluginVersion
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics
{
	struct EIK_BlueprintFunctions_eventGetEIKPluginVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Plugin Version\n" },
#endif
		{ "DisplayName", "EIK Plugin Version" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Plugin Version" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEIKPluginVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEIKPluginVersion", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::EIK_BlueprintFunctions_eventGetEIKPluginVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::EIK_BlueprintFunctions_eventGetEIKPluginVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEIKPluginVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEIKPluginVersion();
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetEIKPluginVersion

// Begin Class UEIK_BlueprintFunctions Function GetEOSSDKVersion
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics
{
	struct EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "DisplayName", "EOS SDK Version" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEOSSDKVersion", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEOSSDKVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEOSSDKVersion();
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetEOSSDKVersion

// Begin Class UEIK_BlueprintFunctions Function GetEpicAccountId
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics
{
	struct EIK_BlueprintFunctions_eventGetEpicAccountId_Parms
	{
		UObject* Context;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEpicAccountId", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::EIK_BlueprintFunctions_eventGetEpicAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::EIK_BlueprintFunctions_eventGetEpicAccountId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEpicAccountId)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEpicAccountId(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetEpicAccountId

// Begin Class UEIK_BlueprintFunctions Function GetLobbyPlayerVoiceChatVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics
{
	struct EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms
	{
		UObject* Context;
		FString PlayerName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLobbyPlayerVoiceChatVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyPlayerVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLobbyPlayerVoiceChatVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEIK_BlueprintFunctions::GetLobbyPlayerVoiceChatVolume(Z_Param_Context,Z_Param_PlayerName);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetLobbyPlayerVoiceChatVolume

// Begin Class UEIK_BlueprintFunctions Function GetLobbyVoiceChatInputVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics
{
	struct EIK_BlueprintFunctions_eventGetLobbyVoiceChatInputVolume_Parms
	{
		UObject* Context;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyVoiceChatInputVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyVoiceChatInputVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLobbyVoiceChatInputVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyVoiceChatInputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyVoiceChatInputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLobbyVoiceChatInputVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEIK_BlueprintFunctions::GetLobbyVoiceChatInputVolume(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetLobbyVoiceChatInputVolume

// Begin Class UEIK_BlueprintFunctions Function GetLobbyVoiceChatOutputVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics
{
	struct EIK_BlueprintFunctions_eventGetLobbyVoiceChatOutputVolume_Parms
	{
		UObject* Context;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyVoiceChatOutputVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLobbyVoiceChatOutputVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLobbyVoiceChatOutputVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyVoiceChatOutputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::EIK_BlueprintFunctions_eventGetLobbyVoiceChatOutputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLobbyVoiceChatOutputVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEIK_BlueprintFunctions::GetLobbyVoiceChatOutputVolume(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetLobbyVoiceChatOutputVolume

// Begin Class UEIK_BlueprintFunctions Function GetLoginStatus
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics
{
	struct EIK_BlueprintFunctions_eventGetLoginStatus_Parms
	{
		int32 LocalUserNum;
		TEnumAsByte<EEIK_LoginStatus> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the login status of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the login status of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserNum_MetaData), NewProp_LocalUserNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, METADATA_PARAMS(0, nullptr) }; // 884584950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::EIK_BlueprintFunctions_eventGetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::EIK_BlueprintFunctions_eventGetLoginStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLoginStatus)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEIK_LoginStatus>*)Z_Param__Result=UEIK_BlueprintFunctions::GetLoginStatus(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetLoginStatus

// Begin Class UEIK_BlueprintFunctions Function GetPlayerNickname
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics
{
	struct EIK_BlueprintFunctions_eventGetPlayerNickname_Parms
	{
		int32 LocalUserNum;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the nickname of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the nickname of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUserNum_MetaData), NewProp_LocalUserNum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetPlayerNickname", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::EIK_BlueprintFunctions_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::EIK_BlueprintFunctions_eventGetPlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetPlayerNickname)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetPlayerNickname(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetPlayerNickname

// Begin Class UEIK_BlueprintFunctions Function GetProductUserID
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics
{
	struct EIK_BlueprintFunctions_eventGetProductUserID_Parms
	{
		UObject* Context;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetProductUserID", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::EIK_BlueprintFunctions_eventGetProductUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::EIK_BlueprintFunctions_eventGetProductUserID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetProductUserID)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetProductUserID(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetProductUserID

// Begin Class UEIK_BlueprintFunctions Function GetUserUniqueID
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics
{
	struct EIK_BlueprintFunctions_eventGetUserUniqueID_Parms
	{
		const APlayerController* PlayerController;
		bool bIsValid;
		FEIKUniqueNetId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the User Unique NetID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid\n" },
#endif
		{ "DisplayName", "Get User Unique NetID" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the User Unique NetID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventGetUserUniqueID_Parms*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetUserUniqueID", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::EIK_BlueprintFunctions_eventGetUserUniqueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::EIK_BlueprintFunctions_eventGetUserUniqueID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetUserUniqueID)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIKUniqueNetId*)Z_Param__Result=UEIK_BlueprintFunctions::GetUserUniqueID(Z_Param_PlayerController,Z_Param_Out_bIsValid);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function GetUserUniqueID

// Begin Class UEIK_BlueprintFunctions Function IsEIKActive
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics
{
	struct EIK_BlueprintFunctions_eventIsEIKActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if EOS (Epic Online Services) is active or not.\n// This function returns true if EOS is active, false otherwise.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if EOS (Epic Online Services) is active or not.\nThis function returns true if EOS is active, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventIsEIKActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsEIKActive_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsEIKActive", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::EIK_BlueprintFunctions_eventIsEIKActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::EIK_BlueprintFunctions_eventIsEIKActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsEIKActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsEIKActive();
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function IsEIKActive

// Begin Class UEIK_BlueprintFunctions Function IsInSession
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics
{
	struct EIK_BlueprintFunctions_eventIsInSession_Parms
	{
		FName SessionName;
		FEIKUniqueNetId PlayerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for checking if user is in a lobby or session\n" },
#endif
		{ "CPP_Default_PlayerId", "()" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Is In EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for checking if user is in a lobby or session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsInSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsInSession_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventIsInSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsInSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsInSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::EIK_BlueprintFunctions_eventIsInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::EIK_BlueprintFunctions_eventIsInSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsInSession)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsInSession(Z_Param_SessionName,Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function IsInSession

// Begin Class UEIK_BlueprintFunctions Function IsLobbyVoiceChatMuted
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics
{
	struct EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms
	{
		UObject* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsLobbyVoiceChatMuted", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::EIK_BlueprintFunctions_eventIsLobbyVoiceChatMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsLobbyVoiceChatMuted)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsLobbyVoiceChatMuted(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function IsLobbyVoiceChatMuted

// Begin Class UEIK_BlueprintFunctions Function IsValidSession
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics
{
	struct EIK_BlueprintFunctions_eventIsValidSession_Parms
	{
		FSessionFindStruct Session;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsValidSession_Parms, Session), Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 1699625377
void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventIsValidSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsValidSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsValidSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::EIK_BlueprintFunctions_eventIsValidSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::EIK_BlueprintFunctions_eventIsValidSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsValidSession)
{
	P_GET_STRUCT(FSessionFindStruct,Z_Param_Session);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsValidSession(Z_Param_Session);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function IsValidSession

// Begin Class UEIK_BlueprintFunctions Function MakeEIKUniqueNetId
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics
{
	struct EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms
	{
		FString EpicAccountId;
		FString ProductUserId;
		FEIKUniqueNetId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || UserInfo" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EpicAccountId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_EpicAccountId = { "EpicAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms, EpicAccountId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_ProductUserId = { "ProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms, ProductUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_EpicAccountId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_ProductUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "MakeEIKUniqueNetId", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::EIK_BlueprintFunctions_eventMakeEIKUniqueNetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execMakeEIKUniqueNetId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EpicAccountId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEIKUniqueNetId*)Z_Param__Result=UEIK_BlueprintFunctions::MakeEIKUniqueNetId(Z_Param_EpicAccountId,Z_Param_ProductUserId);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function MakeEIKUniqueNetId

// Begin Class UEIK_BlueprintFunctions Function MakeSanctionAppeal
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics
{
	struct EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms
	{
		FString AccessToken;
		TEnumAsByte<EEOSSanctionType> Reason;
		FScriptDelegate OnResponseFromSanctions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResponseFromSanctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponseFromSanctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, AccessToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, Reason), Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType, METADATA_PARAMS(0, nullptr) }; // 1311778103
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions = { "OnResponseFromSanctions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, OnResponseFromSanctions), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResponseFromSanctions_MetaData), NewProp_OnResponseFromSanctions_MetaData) }; // 566856853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_AccessToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "MakeSanctionAppeal", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execMakeSanctionAppeal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
	P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponseFromSanctions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_BlueprintFunctions::MakeSanctionAppeal(Z_Param_AccessToken,EEOSSanctionType(Z_Param_Reason),FOnResponseFromSanctions(Z_Param_Out_OnResponseFromSanctions));
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function MakeSanctionAppeal

// Begin Class UEIK_BlueprintFunctions Function MuteLobbyVoiceChat
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics
{
	struct EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms
	{
		UObject* Context;
		bool bMute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "MuteLobbyVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::EIK_BlueprintFunctions_eventMuteLobbyVoiceChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execMuteLobbyVoiceChat)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::MuteLobbyVoiceChat(Z_Param_Context,Z_Param_bMute);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function MuteLobbyVoiceChat

// Begin Class UEIK_BlueprintFunctions Function RegisterPlayer
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics
{
	struct EIK_BlueprintFunctions_eventRegisterPlayer_Parms
	{
		FName SessionName;
		FEIKUniqueNetId PlayerId;
		bool bWasInvited;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for registering players in lobbies and sessions\n" },
#endif
		{ "CPP_Default_bWasInvited", "false" },
		{ "CPP_Default_PlayerId", "()" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Register EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for registering players in lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static void NewProp_bWasInvited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvited;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->bWasInvited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited = { "bWasInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::EIK_BlueprintFunctions_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::EIK_BlueprintFunctions_eventRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRegisterPlayer)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
	P_GET_UBOOL(Z_Param_bWasInvited);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::RegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId,Z_Param_bWasInvited);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function RegisterPlayer

// Begin Class UEIK_BlueprintFunctions Function RejectSessionInvite
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics
{
	struct EIK_BlueprintFunctions_eventRejectSessionInvite_Parms
	{
		FString InviteId;
		FString LocalUserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "DisplayName", "Reject EIK Session Invite" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InviteId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalUserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRejectSessionInvite_Parms, InviteId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRejectSessionInvite_Parms, LocalUserId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventRejectSessionInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRejectSessionInvite_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_InviteId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_LocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RejectSessionInvite", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::EIK_BlueprintFunctions_eventRejectSessionInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::EIK_BlueprintFunctions_eventRejectSessionInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRejectSessionInvite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InviteId);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::RejectSessionInvite(Z_Param_InviteId,Z_Param_LocalUserId);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function RejectSessionInvite

// Begin Class UEIK_BlueprintFunctions Function RequestEOSAccessToken
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics
{
	struct EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms
	{
		FScriptDelegate Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "DisplayName", "Request EOS Access Token" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms, Response), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 4158785624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RequestEOSAccessToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRequestEOSAccessToken)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEIK_BlueprintFunctions::RequestEOSAccessToken(FOnResponseFromEpicForAccessToken(Z_Param_Out_Response));
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function RequestEOSAccessToken

// Begin Class UEIK_BlueprintFunctions Function SaveGameObjectToByteArray
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics
{
	struct EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms
	{
		USaveGame* DataToConvert;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a SaveGame object to a TArray<uint8>.\n// The SaveGame object is serialized into a binary data array (TArray<uint8>).\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a SaveGame object to a TArray<uint8>.\nThe SaveGame object is serialized into a binary data array (TArray<uint8>)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataToConvert;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms, DataToConvert), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_DataToConvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SaveGameObjectToByteArray", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSaveGameObjectToByteArray)
{
	P_GET_OBJECT(USaveGame,Z_Param_DataToConvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEIK_BlueprintFunctions::SaveGameObjectToByteArray(Z_Param_DataToConvert);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SaveGameObjectToByteArray

// Begin Class UEIK_BlueprintFunctions Function SetLobbyInputMethod
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics
{
	struct EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms
	{
		UObject* Context;
		FString MethodID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms, MethodID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_MethodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SetLobbyInputMethod", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::EIK_BlueprintFunctions_eventSetLobbyInputMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSetLobbyInputMethod)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::SetLobbyInputMethod(Z_Param_Context,Z_Param_MethodID);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SetLobbyInputMethod

// Begin Class UEIK_BlueprintFunctions Function SetLobbyOutputMethod
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics
{
	struct EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms
	{
		UObject* Context;
		FString MethodID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms, MethodID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_MethodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SetLobbyOutputMethod", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::EIK_BlueprintFunctions_eventSetLobbyOutputMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSetLobbyOutputMethod)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::SetLobbyOutputMethod(Z_Param_Context,Z_Param_MethodID);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SetLobbyOutputMethod

// Begin Class UEIK_BlueprintFunctions Function SetLobbyPlayerVoiceChatVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics
{
	struct EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms
	{
		UObject* Context;
		FString PlayerName;
		float Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SetLobbyPlayerVoiceChatVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyPlayerVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSetLobbyPlayerVoiceChatVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::SetLobbyPlayerVoiceChatVolume(Z_Param_Context,Z_Param_PlayerName,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SetLobbyPlayerVoiceChatVolume

// Begin Class UEIK_BlueprintFunctions Function SetLobbyVoiceChatInputVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics
{
	struct EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms
	{
		UObject* Context;
		float Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SetLobbyVoiceChatInputVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyVoiceChatInputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSetLobbyVoiceChatInputVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::SetLobbyVoiceChatInputVolume(Z_Param_Context,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SetLobbyVoiceChatInputVolume

// Begin Class UEIK_BlueprintFunctions Function SetLobbyVoiceChatOutputVolume
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics
{
	struct EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms
	{
		UObject* Context;
		float Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SetLobbyVoiceChatOutputVolume", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::EIK_BlueprintFunctions_eventSetLobbyVoiceChatOutputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSetLobbyVoiceChatOutputVolume)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::SetLobbyVoiceChatOutputVolume(Z_Param_Context,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function SetLobbyVoiceChatOutputVolume

// Begin Class UEIK_BlueprintFunctions Function ShowFriendsList
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics
{
	struct EIK_BlueprintFunctions_eventShowFriendsList_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Voice Chat Functions END */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voice Chat Functions END" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventShowFriendsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventShowFriendsList_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ShowFriendsList", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::EIK_BlueprintFunctions_eventShowFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::EIK_BlueprintFunctions_eventShowFriendsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execShowFriendsList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::ShowFriendsList();
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function ShowFriendsList

// Begin Class UEIK_BlueprintFunctions Function StartSession
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics
{
	struct EIK_BlueprintFunctions_eventStartSession_Parms
	{
		FName SessionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Start EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStartSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventStartSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventStartSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "StartSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::EIK_BlueprintFunctions_eventStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::EIK_BlueprintFunctions_eventStartSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execStartSession)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::StartSession(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function StartSession

// Begin Class UEIK_BlueprintFunctions Function StringToByteArray
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics
{
	struct EIK_BlueprintFunctions_eventStringToByteArray_Parms
	{
		FString DataToConvert;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert an FString to a TArray<uint8> using Base64 decoding.\n// This is useful for converting a string back to its original binary data representation.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an FString to a TArray<uint8> using Base64 decoding.\nThis is useful for converting a string back to its original binary data representation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataToConvert;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStringToByteArray_Parms, DataToConvert), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToConvert_MetaData), NewProp_DataToConvert_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStringToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "StringToByteArray", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::EIK_BlueprintFunctions_eventStringToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::EIK_BlueprintFunctions_eventStringToByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execStringToByteArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DataToConvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEIK_BlueprintFunctions::StringToByteArray(Z_Param_DataToConvert);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function StringToByteArray

// Begin Class UEIK_BlueprintFunctions Function UnblockLobbyVoiceChatPlayers
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics
{
	struct EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms
	{
		UObject* Context;
		TArray<FString> UnblockedPlayers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Lobby Voice" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnblockedPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnblockedPlayers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_UnblockedPlayers_Inner = { "UnblockedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_UnblockedPlayers = { "UnblockedPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms, UnblockedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_UnblockedPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_UnblockedPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "UnblockLobbyVoiceChatPlayers", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::EIK_BlueprintFunctions_eventUnblockLobbyVoiceChatPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execUnblockLobbyVoiceChatPlayers)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_TARRAY(FString,Z_Param_UnblockedPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::UnblockLobbyVoiceChatPlayers(Z_Param_Context,Z_Param_UnblockedPlayers);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function UnblockLobbyVoiceChatPlayers

// Begin Class UEIK_BlueprintFunctions Function UnRegisterPlayer
struct Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics
{
	struct EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms
	{
		FName SessionName;
		FEIKUniqueNetId PlayerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for unregistering players from lobbies and sessions\n" },
#endif
		{ "CPP_Default_PlayerId", "()" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Unregister EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for unregistering players from lobbies and sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 3785727623
void Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "UnRegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEIK_BlueprintFunctions::execUnRegisterPlayer)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::UnRegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class UEIK_BlueprintFunctions Function UnRegisterPlayer

// Begin Class UEIK_BlueprintFunctions
void UEIK_BlueprintFunctions::StaticRegisterNativesUEIK_BlueprintFunctions()
{
	UClass* Class = UEIK_BlueprintFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptSessionInvite", &UEIK_BlueprintFunctions::execAcceptSessionInvite },
		{ "BlockLobbyVoiceChatPlayers", &UEIK_BlueprintFunctions::execBlockLobbyVoiceChatPlayers },
		{ "ByteArrayToSaveGameObject", &UEIK_BlueprintFunctions::execByteArrayToSaveGameObject },
		{ "ByteArrayToString", &UEIK_BlueprintFunctions::execByteArrayToString },
		{ "ConvertPosixTimeToDateTime", &UEIK_BlueprintFunctions::execConvertPosixTimeToDateTime },
		{ "EndSession", &UEIK_BlueprintFunctions::execEndSession },
		{ "GenerateSessionCode", &UEIK_BlueprintFunctions::execGenerateSessionCode },
		{ "GetActiveSubsystem", &UEIK_BlueprintFunctions::execGetActiveSubsystem },
		{ "GetAllCurrentSessionNames", &UEIK_BlueprintFunctions::execGetAllCurrentSessionNames },
		{ "GetCurrentPort", &UEIK_BlueprintFunctions::execGetCurrentPort },
		{ "GetCurrentSessionInfo", &UEIK_BlueprintFunctions::execGetCurrentSessionInfo },
		{ "GetEIKPluginVersion", &UEIK_BlueprintFunctions::execGetEIKPluginVersion },
		{ "GetEOSSDKVersion", &UEIK_BlueprintFunctions::execGetEOSSDKVersion },
		{ "GetEpicAccountId", &UEIK_BlueprintFunctions::execGetEpicAccountId },
		{ "GetLobbyPlayerVoiceChatVolume", &UEIK_BlueprintFunctions::execGetLobbyPlayerVoiceChatVolume },
		{ "GetLobbyVoiceChatInputVolume", &UEIK_BlueprintFunctions::execGetLobbyVoiceChatInputVolume },
		{ "GetLobbyVoiceChatOutputVolume", &UEIK_BlueprintFunctions::execGetLobbyVoiceChatOutputVolume },
		{ "GetLoginStatus", &UEIK_BlueprintFunctions::execGetLoginStatus },
		{ "GetPlayerNickname", &UEIK_BlueprintFunctions::execGetPlayerNickname },
		{ "GetProductUserID", &UEIK_BlueprintFunctions::execGetProductUserID },
		{ "GetUserUniqueID", &UEIK_BlueprintFunctions::execGetUserUniqueID },
		{ "IsEIKActive", &UEIK_BlueprintFunctions::execIsEIKActive },
		{ "IsInSession", &UEIK_BlueprintFunctions::execIsInSession },
		{ "IsLobbyVoiceChatMuted", &UEIK_BlueprintFunctions::execIsLobbyVoiceChatMuted },
		{ "IsValidSession", &UEIK_BlueprintFunctions::execIsValidSession },
		{ "MakeEIKUniqueNetId", &UEIK_BlueprintFunctions::execMakeEIKUniqueNetId },
		{ "MakeSanctionAppeal", &UEIK_BlueprintFunctions::execMakeSanctionAppeal },
		{ "MuteLobbyVoiceChat", &UEIK_BlueprintFunctions::execMuteLobbyVoiceChat },
		{ "RegisterPlayer", &UEIK_BlueprintFunctions::execRegisterPlayer },
		{ "RejectSessionInvite", &UEIK_BlueprintFunctions::execRejectSessionInvite },
		{ "RequestEOSAccessToken", &UEIK_BlueprintFunctions::execRequestEOSAccessToken },
		{ "SaveGameObjectToByteArray", &UEIK_BlueprintFunctions::execSaveGameObjectToByteArray },
		{ "SetLobbyInputMethod", &UEIK_BlueprintFunctions::execSetLobbyInputMethod },
		{ "SetLobbyOutputMethod", &UEIK_BlueprintFunctions::execSetLobbyOutputMethod },
		{ "SetLobbyPlayerVoiceChatVolume", &UEIK_BlueprintFunctions::execSetLobbyPlayerVoiceChatVolume },
		{ "SetLobbyVoiceChatInputVolume", &UEIK_BlueprintFunctions::execSetLobbyVoiceChatInputVolume },
		{ "SetLobbyVoiceChatOutputVolume", &UEIK_BlueprintFunctions::execSetLobbyVoiceChatOutputVolume },
		{ "ShowFriendsList", &UEIK_BlueprintFunctions::execShowFriendsList },
		{ "StartSession", &UEIK_BlueprintFunctions::execStartSession },
		{ "StringToByteArray", &UEIK_BlueprintFunctions::execStringToByteArray },
		{ "UnblockLobbyVoiceChatPlayers", &UEIK_BlueprintFunctions::execUnblockLobbyVoiceChatPlayers },
		{ "UnRegisterPlayer", &UEIK_BlueprintFunctions::execUnRegisterPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_BlueprintFunctions);
UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister()
{
	return UEIK_BlueprintFunctions::StaticClass();
}
struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_AcceptSessionInvite, "AcceptSessionInvite" }, // 996945068
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_BlockLobbyVoiceChatPlayers, "BlockLobbyVoiceChatPlayers" }, // 772446147
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject, "ByteArrayToSaveGameObject" }, // 2193751082
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString, "ByteArrayToString" }, // 2309670738
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ConvertPosixTimeToDateTime, "ConvertPosixTimeToDateTime" }, // 1647375083
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession, "EndSession" }, // 533094923
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode, "GenerateSessionCode" }, // 3230393274
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem, "GetActiveSubsystem" }, // 2818865638
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetAllCurrentSessionNames, "GetAllCurrentSessionNames" }, // 4281302860
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort, "GetCurrentPort" }, // 64480483
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentSessionInfo, "GetCurrentSessionInfo" }, // 2709628861
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEIKPluginVersion, "GetEIKPluginVersion" }, // 1739665165
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion, "GetEOSSDKVersion" }, // 2264188432
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId, "GetEpicAccountId" }, // 1046367493
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyPlayerVoiceChatVolume, "GetLobbyPlayerVoiceChatVolume" }, // 1911873251
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatInputVolume, "GetLobbyVoiceChatInputVolume" }, // 3272863398
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLobbyVoiceChatOutputVolume, "GetLobbyVoiceChatOutputVolume" }, // 3310723236
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus, "GetLoginStatus" }, // 1472418635
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname, "GetPlayerNickname" }, // 2421238742
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID, "GetProductUserID" }, // 1446660764
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID, "GetUserUniqueID" }, // 2681177638
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive, "IsEIKActive" }, // 2687164372
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession, "IsInSession" }, // 411516758
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsLobbyVoiceChatMuted, "IsLobbyVoiceChatMuted" }, // 2249158763
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession, "IsValidSession" }, // 1134977719
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeEIKUniqueNetId, "MakeEIKUniqueNetId" }, // 4126306863
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal, "MakeSanctionAppeal" }, // 559700567
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_MuteLobbyVoiceChat, "MuteLobbyVoiceChat" }, // 1342245009
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer, "RegisterPlayer" }, // 1995304547
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RejectSessionInvite, "RejectSessionInvite" }, // 1109730535
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken, "RequestEOSAccessToken" }, // 1946087889
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray, "SaveGameObjectToByteArray" }, // 2301795217
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyInputMethod, "SetLobbyInputMethod" }, // 620614344
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyOutputMethod, "SetLobbyOutputMethod" }, // 3838256220
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyPlayerVoiceChatVolume, "SetLobbyPlayerVoiceChatVolume" }, // 191272032
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatInputVolume, "SetLobbyVoiceChatInputVolume" }, // 4129889319
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SetLobbyVoiceChatOutputVolume, "SetLobbyVoiceChatOutputVolume" }, // 1869219447
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList, "ShowFriendsList" }, // 3315173948
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession, "StartSession" }, // 3207559012
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray, "StringToByteArray" }, // 3484492608
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnblockLobbyVoiceChatPlayers, "UnblockLobbyVoiceChatPlayers" }, // 2929823175
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer, "UnRegisterPlayer" }, // 498264182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_BlueprintFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams = {
	&UEIK_BlueprintFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEIK_BlueprintFunctions()
{
	if (!Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton, Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_BlueprintFunctions>()
{
	return UEIK_BlueprintFunctions::StaticClass();
}
UEIK_BlueprintFunctions::UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_BlueprintFunctions);
UEIK_BlueprintFunctions::~UEIK_BlueprintFunctions() {}
// End Class UEIK_BlueprintFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEOSSanctionType_StaticEnum, TEXT("EEOSSanctionType"), &Z_Registration_Info_UEnum_EEOSSanctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1311778103U) },
		{ EEIK_LoginStatus_StaticEnum, TEXT("EEIK_LoginStatus"), &Z_Registration_Info_UEnum_EEIK_LoginStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 884584950U) },
		{ ESessionCurrentState_StaticEnum, TEXT("ESessionCurrentState"), &Z_Registration_Info_UEnum_ESessionCurrentState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1551788445U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEIK_CurrentSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FEIK_CurrentSessionInfo_Statics::NewStructOps, TEXT("EIK_CurrentSessionInfo"), &Z_Registration_Info_UScriptStruct_EIK_CurrentSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_CurrentSessionInfo), 1302627799U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_BlueprintFunctions, UEIK_BlueprintFunctions::StaticClass, TEXT("UEIK_BlueprintFunctions"), &Z_Registration_Info_UClass_UEIK_BlueprintFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_BlueprintFunctions), 853624627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_342118232(TEXT("/Script/OnlineSubsystemEIK"),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CompileEIK542_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

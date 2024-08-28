// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Actor/HomingProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADamageActorBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AHomingProjectile();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AHomingProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AHomingProjectile::execMulticastUpdateProjectileTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastUpdateProjectileTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHomingProjectile::execOnSphereOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AHomingProjectile_MulticastUpdateProjectileTransform = FName(TEXT("MulticastUpdateProjectileTransform"));
	void AHomingProjectile::MulticastUpdateProjectileTransform()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHomingProjectile_MulticastUpdateProjectileTransform),NULL);
	}
	void AHomingProjectile::StaticRegisterNativesAHomingProjectile()
	{
		UClass* Class = AHomingProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastUpdateProjectileTransform", &AHomingProjectile::execMulticastUpdateProjectileTransform },
			{ "OnSphereOverlap", &AHomingProjectile::execOnSphereOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHomingProjectile, nullptr, "MulticastUpdateProjectileTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics
	{
		struct HomingProjectile_eventOnSphereOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HomingProjectile_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HomingProjectile_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HomingProjectile_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HomingProjectile_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((HomingProjectile_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HomingProjectile_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HomingProjectile_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHomingProjectile, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::HomingProjectile_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::HomingProjectile_eventOnSphereOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHomingProjectile);
	UClass* Z_Construct_UClass_AHomingProjectile_NoRegister()
	{
		return AHomingProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AHomingProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomingAccelerationMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingAccelerationMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomingProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADamageActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHomingProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHomingProjectile_MulticastUpdateProjectileTransform, "MulticastUpdateProjectileTransform" }, // 1800751817
		{ &Z_Construct_UFunction_AHomingProjectile_OnSphereOverlap, "OnSphereOverlap" }, // 538479121
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HomingProjectile.h" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_HomingAccelerationMagnitude_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_HomingAccelerationMagnitude = { "HomingAccelerationMagnitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, HomingAccelerationMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_HomingAccelerationMagnitude_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_HomingAccelerationMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetDirection_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetRotator_MetaData[] = {
		{ "ModuleRelativePath", "Actor/HomingProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetRotator = { "TargetRotator", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, TargetRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetRotator_MetaData), Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetRotator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHomingProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_HomingAccelerationMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetRotator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomingProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomingProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHomingProjectile_Statics::ClassParams = {
		&AHomingProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHomingProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AHomingProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHomingProjectile()
	{
		if (!Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton, Z_Construct_UClass_AHomingProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AHomingProjectile>()
	{
		return AHomingProjectile::StaticClass();
	}

	void AHomingProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TargetLocation(TEXT("TargetLocation"));
		static const FName Name_TargetDirection(TEXT("TargetDirection"));
		static const FName Name_TargetRotator(TEXT("TargetRotator"));

		const bool bIsValid = true
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
			&& Name_TargetDirection == ClassReps[(int32)ENetFields_Private::TargetDirection].Property->GetFName()
			&& Name_TargetRotator == ClassReps[(int32)ENetFields_Private::TargetRotator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHomingProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomingProjectile);
	AHomingProjectile::~AHomingProjectile() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_HomingProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_HomingProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHomingProjectile, AHomingProjectile::StaticClass, TEXT("AHomingProjectile"), &Z_Registration_Info_UClass_AHomingProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHomingProjectile), 1620040255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_HomingProjectile_h_3437425196(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_HomingProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_HomingProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

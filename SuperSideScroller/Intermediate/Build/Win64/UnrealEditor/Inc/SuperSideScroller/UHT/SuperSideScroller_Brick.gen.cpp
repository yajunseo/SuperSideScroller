// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/SuperSideScroller_Brick.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSideScroller_Brick() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Brick();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Brick_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	DEFINE_FUNCTION(ASuperSideScroller_Brick::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ASuperSideScroller_Brick::StaticRegisterNativesASuperSideScroller_Brick()
	{
		UClass* Class = ASuperSideScroller_Brick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ASuperSideScroller_Brick::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics
	{
		struct SuperSideScroller_Brick_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuperSideScroller_Brick_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuperSideScroller_Brick_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuperSideScroller_Brick_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuperSideScroller_Brick_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuperSideScroller_Brick_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASuperSideScroller_Brick, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::SuperSideScroller_Brick_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::SuperSideScroller_Brick_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperSideScroller_Brick);
	UClass* Z_Construct_UClass_ASuperSideScroller_Brick_NoRegister()
	{
		return ASuperSideScroller_Brick::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSideScroller_Brick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BrickMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BrickCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCollectable_MetaData[];
#endif
		static void NewProp_bHasCollectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCollectable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectableValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectableValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Explosion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSideScroller_Brick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASuperSideScroller_Brick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASuperSideScroller_Brick_OnHit, "OnHit" }, // 3730568866
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SuperSideScroller_Brick.h" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickMesh_MetaData[] = {
		{ "Category", "Brick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickMesh = { "BrickMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Brick, BrickMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickMesh_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickCollision_MetaData[] = {
		{ "Category", "Brick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickCollision = { "BrickCollision", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Brick, BrickCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickCollision_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable_MetaData[] = {
		{ "Category", "SuperSideScroller_Brick" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	void Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable_SetBit(void* Obj)
	{
		((ASuperSideScroller_Brick*)Obj)->bHasCollectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable = { "bHasCollectable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASuperSideScroller_Brick), &Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_CollectableValue_MetaData[] = {
		{ "Category", "SuperSideScroller_Brick" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_CollectableValue = { "CollectableValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Brick, CollectableValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_CollectableValue_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_CollectableValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "Brick" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Brick, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_HitSound_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_HitSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "Brick" },
		{ "ModuleRelativePath", "SuperSideScroller_Brick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Brick, Explosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_Explosion_MetaData), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_Explosion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperSideScroller_Brick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_BrickCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_bHasCollectable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_CollectableValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_HitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Brick_Statics::NewProp_Explosion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSideScroller_Brick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSideScroller_Brick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperSideScroller_Brick_Statics::ClassParams = {
		&ASuperSideScroller_Brick::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASuperSideScroller_Brick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::Class_MetaDataParams), Z_Construct_UClass_ASuperSideScroller_Brick_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Brick_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASuperSideScroller_Brick()
	{
		if (!Z_Registration_Info_UClass_ASuperSideScroller_Brick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperSideScroller_Brick.OuterSingleton, Z_Construct_UClass_ASuperSideScroller_Brick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperSideScroller_Brick.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<ASuperSideScroller_Brick>()
	{
		return ASuperSideScroller_Brick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSideScroller_Brick);
	ASuperSideScroller_Brick::~ASuperSideScroller_Brick() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Brick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Brick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperSideScroller_Brick, ASuperSideScroller_Brick::StaticClass, TEXT("ASuperSideScroller_Brick"), &Z_Registration_Info_UClass_ASuperSideScroller_Brick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperSideScroller_Brick), 1019119522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Brick_h_342231778(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Brick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Brick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/PickableActor_Base.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableActor_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	DEFINE_FUNCTION(APickableActor_Base::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APickableActor_Base::StaticRegisterNativesAPickableActor_Base()
	{
		UClass* Class = APickableActor_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &APickableActor_Base::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics
	{
		struct PickableActor_Base_eventBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableActor_Base_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableActor_Base_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableActor_Base_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableActor_Base_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PickableActor_Base_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickableActor_Base_eventBeginOverlap_Parms), &Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickableActor_Base_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickableActor_Base, nullptr, "BeginOverlap", nullptr, nullptr, Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PickableActor_Base_eventBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::PickableActor_Base_eventBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickableActor_Base_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickableActor_Base_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableActor_Base);
	UClass* Z_Construct_UClass_APickableActor_Base_NoRegister()
	{
		return APickableActor_Base::StaticClass();
	}
	struct Z_Construct_UClass_APickableActor_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickableActor_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickableActor_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickableActor_Base_BeginOverlap, "BeginOverlap" }, // 92873820
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickableActor_Base.h" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "PickableActor_Base" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableActor_Base_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableActor_Base, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::NewProp_PickupSound_MetaData), Z_Construct_UClass_APickableActor_Base_Statics::NewProp_PickupSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "PickableItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableActor_Base_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableActor_Base, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_APickableActor_Base_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "PickableItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableActor_Base_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableActor_Base, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_APickableActor_Base_Statics::NewProp_MeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::NewProp_RotationComp_MetaData[] = {
		{ "Category", "PickableItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableActor_Base_Statics::NewProp_RotationComp = { "RotationComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableActor_Base, RotationComp), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::NewProp_RotationComp_MetaData), Z_Construct_UClass_APickableActor_Base_Statics::NewProp_RotationComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickableActor_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableActor_Base_Statics::NewProp_PickupSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableActor_Base_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableActor_Base_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableActor_Base_Statics::NewProp_RotationComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickableActor_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableActor_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableActor_Base_Statics::ClassParams = {
		&APickableActor_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickableActor_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableActor_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickableActor_Base()
	{
		if (!Z_Registration_Info_UClass_APickableActor_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableActor_Base.OuterSingleton, Z_Construct_UClass_APickableActor_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickableActor_Base.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<APickableActor_Base>()
	{
		return APickableActor_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickableActor_Base);
	APickableActor_Base::~APickableActor_Base() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickableActor_Base, APickableActor_Base::StaticClass, TEXT("APickableActor_Base"), &Z_Registration_Info_UClass_APickableActor_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableActor_Base), 1025443441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_2491267324(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

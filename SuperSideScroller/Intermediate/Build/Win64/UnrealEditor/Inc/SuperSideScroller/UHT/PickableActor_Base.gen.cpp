// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/PickableActor_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableActor_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void APickableActor_Base::StaticRegisterNativesAPickableActor_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableActor_Base);
	UClass* Z_Construct_UClass_APickableActor_Base_NoRegister()
	{
		return APickableActor_Base::StaticClass();
	}
	struct Z_Construct_UClass_APickableActor_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickableActor_Base.h" },
		{ "ModuleRelativePath", "PickableActor_Base.h" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_APickableActor_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_APickableActor_Base, APickableActor_Base::StaticClass, TEXT("APickableActor_Base"), &Z_Registration_Info_UClass_APickableActor_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableActor_Base), 3832650234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_2941171628(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

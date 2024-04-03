// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/PickableActor_Collectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableActor_Collectable() {}
// Cross Module References
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Collectable();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Collectable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void APickableActor_Collectable::StaticRegisterNativesAPickableActor_Collectable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableActor_Collectable);
	UClass* Z_Construct_UClass_APickableActor_Collectable_NoRegister()
	{
		return APickableActor_Collectable::StaticClass();
	}
	struct Z_Construct_UClass_APickableActor_Collectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectableValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectableValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickableActor_Collectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickableActor_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Collectable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Collectable_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickableActor_Collectable.h" },
		{ "ModuleRelativePath", "PickableActor_Collectable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Collectable_Statics::NewProp_CollectableValue_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "PickableActor_Collectable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickableActor_Collectable_Statics::NewProp_CollectableValue = { "CollectableValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickableActor_Collectable, CollectableValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Collectable_Statics::NewProp_CollectableValue_MetaData), Z_Construct_UClass_APickableActor_Collectable_Statics::NewProp_CollectableValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickableActor_Collectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableActor_Collectable_Statics::NewProp_CollectableValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickableActor_Collectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableActor_Collectable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableActor_Collectable_Statics::ClassParams = {
		&APickableActor_Collectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickableActor_Collectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Collectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Collectable_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableActor_Collectable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Collectable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickableActor_Collectable()
	{
		if (!Z_Registration_Info_UClass_APickableActor_Collectable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableActor_Collectable.OuterSingleton, Z_Construct_UClass_APickableActor_Collectable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickableActor_Collectable.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<APickableActor_Collectable>()
	{
		return APickableActor_Collectable::StaticClass();
	}
	APickableActor_Collectable::APickableActor_Collectable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickableActor_Collectable);
	APickableActor_Collectable::~APickableActor_Collectable() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Collectable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Collectable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickableActor_Collectable, APickableActor_Collectable::StaticClass, TEXT("APickableActor_Collectable"), &Z_Registration_Info_UClass_APickableActor_Collectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableActor_Collectable), 429879800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Collectable_h_1020251318(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Collectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Collectable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

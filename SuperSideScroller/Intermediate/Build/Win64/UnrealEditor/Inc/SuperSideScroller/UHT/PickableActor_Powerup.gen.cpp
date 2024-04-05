// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/PickableActor_Powerup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableActor_Powerup() {}
// Cross Module References
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Base();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Powerup();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_APickableActor_Powerup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void APickableActor_Powerup::StaticRegisterNativesAPickableActor_Powerup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickableActor_Powerup);
	UClass* Z_Construct_UClass_APickableActor_Powerup_NoRegister()
	{
		return APickableActor_Powerup::StaticClass();
	}
	struct Z_Construct_UClass_APickableActor_Powerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickableActor_Powerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickableActor_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Powerup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableActor_Powerup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickableActor_Powerup.h" },
		{ "ModuleRelativePath", "PickableActor_Powerup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickableActor_Powerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableActor_Powerup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableActor_Powerup_Statics::ClassParams = {
		&APickableActor_Powerup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableActor_Powerup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableActor_Powerup_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APickableActor_Powerup()
	{
		if (!Z_Registration_Info_UClass_APickableActor_Powerup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableActor_Powerup.OuterSingleton, Z_Construct_UClass_APickableActor_Powerup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickableActor_Powerup.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<APickableActor_Powerup>()
	{
		return APickableActor_Powerup::StaticClass();
	}
	APickableActor_Powerup::APickableActor_Powerup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickableActor_Powerup);
	APickableActor_Powerup::~APickableActor_Powerup() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Powerup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Powerup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickableActor_Powerup, APickableActor_Powerup::StaticClass, TEXT("APickableActor_Powerup"), &Z_Registration_Info_UClass_APickableActor_Powerup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableActor_Powerup), 888510524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Powerup_h_2561368914(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Powerup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PickableActor_Powerup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

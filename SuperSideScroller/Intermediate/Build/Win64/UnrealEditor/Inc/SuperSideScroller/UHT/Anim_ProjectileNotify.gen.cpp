// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/Anim_ProjectileNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnim_ProjectileNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_UAnim_ProjectileNotify();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_UAnim_ProjectileNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void UAnim_ProjectileNotify::StaticRegisterNativesUAnim_ProjectileNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnim_ProjectileNotify);
	UClass* Z_Construct_UClass_UAnim_ProjectileNotify_NoRegister()
	{
		return UAnim_ProjectileNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAnim_ProjectileNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnim_ProjectileNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnim_ProjectileNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnim_ProjectileNotify_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anim_ProjectileNotify.h" },
		{ "ModuleRelativePath", "Anim_ProjectileNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnim_ProjectileNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnim_ProjectileNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnim_ProjectileNotify_Statics::ClassParams = {
		&UAnim_ProjectileNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnim_ProjectileNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnim_ProjectileNotify_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnim_ProjectileNotify()
	{
		if (!Z_Registration_Info_UClass_UAnim_ProjectileNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnim_ProjectileNotify.OuterSingleton, Z_Construct_UClass_UAnim_ProjectileNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnim_ProjectileNotify.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<UAnim_ProjectileNotify>()
	{
		return UAnim_ProjectileNotify::StaticClass();
	}
	UAnim_ProjectileNotify::UAnim_ProjectileNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnim_ProjectileNotify);
	UAnim_ProjectileNotify::~UAnim_ProjectileNotify() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_Anim_ProjectileNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_Anim_ProjectileNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnim_ProjectileNotify, UAnim_ProjectileNotify::StaticClass, TEXT("UAnim_ProjectileNotify"), &Z_Registration_Info_UClass_UAnim_ProjectileNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnim_ProjectileNotify), 1784242907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_Anim_ProjectileNotify_h_2231252821(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_Anim_ProjectileNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_Anim_ProjectileNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

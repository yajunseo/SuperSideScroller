// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/SuperSideScroller_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSideScroller_Controller() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Controller();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Controller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void ASuperSideScroller_Controller::StaticRegisterNativesASuperSideScroller_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperSideScroller_Controller);
	UClass* Z_Construct_UClass_ASuperSideScroller_Controller_NoRegister()
	{
		return ASuperSideScroller_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSideScroller_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSideScroller_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Controller_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Controller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SuperSideScroller_Controller.h" },
		{ "ModuleRelativePath", "SuperSideScroller_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSideScroller_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSideScroller_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperSideScroller_Controller_Statics::ClassParams = {
		&ASuperSideScroller_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_ASuperSideScroller_Controller_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASuperSideScroller_Controller()
	{
		if (!Z_Registration_Info_UClass_ASuperSideScroller_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperSideScroller_Controller.OuterSingleton, Z_Construct_UClass_ASuperSideScroller_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperSideScroller_Controller.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<ASuperSideScroller_Controller>()
	{
		return ASuperSideScroller_Controller::StaticClass();
	}
	ASuperSideScroller_Controller::ASuperSideScroller_Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSideScroller_Controller);
	ASuperSideScroller_Controller::~ASuperSideScroller_Controller() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperSideScroller_Controller, ASuperSideScroller_Controller::StaticClass, TEXT("ASuperSideScroller_Controller"), &Z_Registration_Info_UClass_ASuperSideScroller_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperSideScroller_Controller), 290154748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Controller_h_1378855043(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

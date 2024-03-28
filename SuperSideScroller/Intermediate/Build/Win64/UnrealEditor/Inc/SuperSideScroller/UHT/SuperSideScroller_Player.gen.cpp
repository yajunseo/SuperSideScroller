// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/SuperSideScroller_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSideScroller_Player() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Player();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Player_NoRegister();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScrollerCharacter();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void ASuperSideScroller_Player::StaticRegisterNativesASuperSideScroller_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperSideScroller_Player);
	UClass* Z_Construct_UClass_ASuperSideScroller_Player_NoRegister()
	{
		return ASuperSideScroller_Player::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSideScroller_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IC_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IC_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Throw_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Throw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSideScroller_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASuperSideScrollerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SuperSideScroller_Player.h" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IC_Character_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IC_Character = { "IC_Character", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Player, IC_Character), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IC_Character_MetaData), Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IC_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Sprint_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Player, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Sprint_MetaData), Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Throw_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Throw = { "IA_Throw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Player, IA_Throw), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Throw_MetaData), Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Throw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_ThrowMontage_MetaData[] = {
		{ "Category", "SuperSideScroller_Player" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_ThrowMontage = { "ThrowMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASuperSideScroller_Player, ThrowMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_ThrowMontage_MetaData), Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_ThrowMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperSideScroller_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IC_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_IA_Throw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSideScroller_Player_Statics::NewProp_ThrowMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSideScroller_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSideScroller_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::ClassParams = {
		&ASuperSideScroller_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperSideScroller_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASuperSideScroller_Player()
	{
		if (!Z_Registration_Info_UClass_ASuperSideScroller_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperSideScroller_Player.OuterSingleton, Z_Construct_UClass_ASuperSideScroller_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperSideScroller_Player.OuterSingleton;
	}
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<ASuperSideScroller_Player>()
	{
		return ASuperSideScroller_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSideScroller_Player);
	ASuperSideScroller_Player::~ASuperSideScroller_Player() {}
	struct Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperSideScroller_Player, ASuperSideScroller_Player::StaticClass, TEXT("ASuperSideScroller_Player"), &Z_Registration_Info_UClass_ASuperSideScroller_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperSideScroller_Player), 3183071416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Player_h_1410635968(TEXT("/Script/SuperSideScroller"),
		Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_SuperSideScroller_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

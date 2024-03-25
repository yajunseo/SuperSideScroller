// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUPERSIDESCROLLER_PlayerProjectile_generated_h
#error "PlayerProjectile.generated.h already included, missing '#pragma once' in PlayerProjectile.h"
#endif
#define SUPERSIDESCROLLER_PlayerProjectile_generated_h

#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_SPARSE_DATA
#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_ACCESSORS
#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerProjectile(); \
	friend struct Z_Construct_UClass_APlayerProjectile_Statics; \
public: \
	DECLARE_CLASS(APlayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSideScroller"), NO_API) \
	DECLARE_SERIALIZER(APlayerProjectile)


#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerProjectile(APlayerProjectile&&); \
	NO_API APlayerProjectile(const APlayerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerProjectile) \
	NO_API virtual ~APlayerProjectile();


#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_9_PROLOG
#define FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_SPARSE_DATA \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_ACCESSORS \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSIDESCROLLER_API UClass* StaticClass<class APlayerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5_Projects_SuperScroller_SuperSideScroller_Source_SuperSideScroller_PlayerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

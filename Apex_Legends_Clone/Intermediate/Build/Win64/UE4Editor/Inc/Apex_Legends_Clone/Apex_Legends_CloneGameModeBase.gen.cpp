// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apex_Legends_Clone/Apex_Legends_CloneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApex_Legends_CloneGameModeBase() {}
// Cross Module References
	APEX_LEGENDS_CLONE_API UClass* Z_Construct_UClass_AApex_Legends_CloneGameModeBase_NoRegister();
	APEX_LEGENDS_CLONE_API UClass* Z_Construct_UClass_AApex_Legends_CloneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Apex_Legends_Clone();
// End Cross Module References
	void AApex_Legends_CloneGameModeBase::StaticRegisterNativesAApex_Legends_CloneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AApex_Legends_CloneGameModeBase_NoRegister()
	{
		return AApex_Legends_CloneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Apex_Legends_Clone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Apex_Legends_CloneGameModeBase.h" },
		{ "ModuleRelativePath", "Apex_Legends_CloneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AApex_Legends_CloneGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::ClassParams = {
		&AApex_Legends_CloneGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AApex_Legends_CloneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AApex_Legends_CloneGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AApex_Legends_CloneGameModeBase, 80010042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AApex_Legends_CloneGameModeBase(Z_Construct_UClass_AApex_Legends_CloneGameModeBase, &AApex_Legends_CloneGameModeBase::StaticClass, TEXT("/Script/Apex_Legends_Clone"), TEXT("AApex_Legends_CloneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AApex_Legends_CloneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Foood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoood() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AFoood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFoood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void AFoood::StaticRegisterNativesAFoood()
	{
	}
	UClass* Z_Construct_UClass_AFoood_NoRegister()
	{
		return AFoood::StaticClass();
	}
	struct Z_Construct_UClass_AFoood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Foood.h" },
		{ "ModuleRelativePath", "Foood.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoood_Statics::ClassParams = {
		&AFoood::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFoood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoood, 650822449);
	template<> SNAKEGAME_API UClass* StaticClass<AFoood>()
	{
		return AFoood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoood(Z_Construct_UClass_AFoood, &AFoood::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AFoood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

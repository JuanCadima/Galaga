// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/ConstructoraNaveEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructoraNaveEnemiga() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_UConstructoraNaveEnemiga_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_UConstructoraNaveEnemiga();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void UConstructoraNaveEnemiga::StaticRegisterNativesUConstructoraNaveEnemiga()
	{
	}
	UClass* Z_Construct_UClass_UConstructoraNaveEnemiga_NoRegister()
	{
		return UConstructoraNaveEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_UConstructoraNaveEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConstructoraNaveEnemiga.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConstructoraNaveEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::ClassParams = {
		&UConstructoraNaveEnemiga::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructoraNaveEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructoraNaveEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructoraNaveEnemiga, 2114089813);
	template<> GALAGA_API UClass* StaticClass<UConstructoraNaveEnemiga>()
	{
		return UConstructoraNaveEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructoraNaveEnemiga(Z_Construct_UClass_UConstructoraNaveEnemiga, &UConstructoraNaveEnemiga::StaticClass, TEXT("/Script/Galaga"), TEXT("UConstructoraNaveEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructoraNaveEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

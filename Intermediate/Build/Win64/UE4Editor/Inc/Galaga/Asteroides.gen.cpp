// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/Asteroides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroides() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AAsteroides_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AAsteroides();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void AAsteroides::StaticRegisterNativesAAsteroides()
	{
	}
	UClass* Z_Construct_UClass_AAsteroides_NoRegister()
	{
		return AAsteroides::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroides_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroides_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroides_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asteroides.h" },
		{ "ModuleRelativePath", "Asteroides.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroides_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroides>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroides_Statics::ClassParams = {
		&AAsteroides::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAsteroides_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroides_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroides()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroides_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroides, 2544206860);
	template<> GALAGA_API UClass* StaticClass<AAsteroides>()
	{
		return AAsteroides::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroides(Z_Construct_UClass_AAsteroides, &AAsteroides::StaticClass, TEXT("/Script/Galaga"), TEXT("AAsteroides"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroides);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

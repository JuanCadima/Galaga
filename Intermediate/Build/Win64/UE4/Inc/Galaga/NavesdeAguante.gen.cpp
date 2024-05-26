// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/NavesdeAguante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesdeAguante() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ANavesdeAguante_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ANavesdeAguante();
	GALAGA_API UClass* Z_Construct_UClass_ACreacionNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void ANavesdeAguante::StaticRegisterNativesANavesdeAguante()
	{
	}
	UClass* Z_Construct_UClass_ANavesdeAguante_NoRegister()
	{
		return ANavesdeAguante::StaticClass();
	}
	struct Z_Construct_UClass_ANavesdeAguante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesdeAguante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreacionNavesEnemigas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesdeAguante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavesdeAguante.h" },
		{ "ModuleRelativePath", "NavesdeAguante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesdeAguante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesdeAguante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesdeAguante_Statics::ClassParams = {
		&ANavesdeAguante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesdeAguante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesdeAguante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesdeAguante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesdeAguante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesdeAguante, 641124502);
	template<> GALAGA_API UClass* StaticClass<ANavesdeAguante>()
	{
		return ANavesdeAguante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesdeAguante(Z_Construct_UClass_ANavesdeAguante, &ANavesdeAguante::StaticClass, TEXT("/Script/Galaga"), TEXT("ANavesdeAguante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesdeAguante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

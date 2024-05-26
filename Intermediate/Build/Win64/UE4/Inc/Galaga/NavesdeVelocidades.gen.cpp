// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/NavesdeVelocidades.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesdeVelocidades() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ANavesdeVelocidades_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ANavesdeVelocidades();
	GALAGA_API UClass* Z_Construct_UClass_ACreacionNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void ANavesdeVelocidades::StaticRegisterNativesANavesdeVelocidades()
	{
	}
	UClass* Z_Construct_UClass_ANavesdeVelocidades_NoRegister()
	{
		return ANavesdeVelocidades::StaticClass();
	}
	struct Z_Construct_UClass_ANavesdeVelocidades_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesdeVelocidades_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreacionNavesEnemigas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesdeVelocidades_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavesdeVelocidades.h" },
		{ "ModuleRelativePath", "NavesdeVelocidades.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesdeVelocidades_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesdeVelocidades>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesdeVelocidades_Statics::ClassParams = {
		&ANavesdeVelocidades::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesdeVelocidades_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesdeVelocidades_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesdeVelocidades()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesdeVelocidades_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesdeVelocidades, 2474556763);
	template<> GALAGA_API UClass* StaticClass<ANavesdeVelocidades>()
	{
		return ANavesdeVelocidades::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesdeVelocidades(Z_Construct_UClass_ANavesdeVelocidades, &ANavesdeVelocidades::StaticClass, TEXT("/Script/Galaga"), TEXT("ANavesdeVelocidades"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesdeVelocidades);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

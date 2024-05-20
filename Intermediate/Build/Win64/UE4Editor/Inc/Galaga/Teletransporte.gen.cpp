// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/Teletransporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeletransporte() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ATeletransporte_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ATeletransporte();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void ATeletransporte::StaticRegisterNativesATeletransporte()
	{
	}
	UClass* Z_Construct_UClass_ATeletransporte_NoRegister()
	{
		return ATeletransporte::StaticClass();
	}
	struct Z_Construct_UClass_ATeletransporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeletransporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeletransporte_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Teletransporte.h" },
		{ "ModuleRelativePath", "Teletransporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeletransporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeletransporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeletransporte_Statics::ClassParams = {
		&ATeletransporte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeletransporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeletransporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeletransporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeletransporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeletransporte, 2256449790);
	template<> GALAGA_API UClass* StaticClass<ATeletransporte>()
	{
		return ATeletransporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeletransporte(Z_Construct_UClass_ATeletransporte, &ATeletransporte::StaticClass, TEXT("/Script/Galaga"), TEXT("ATeletransporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeletransporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

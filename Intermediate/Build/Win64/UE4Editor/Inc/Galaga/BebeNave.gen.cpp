// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/BebeNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBebeNave() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ABebeNave_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ABebeNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void ABebeNave::StaticRegisterNativesABebeNave()
	{
	}
	UClass* Z_Construct_UClass_ABebeNave_NoRegister()
	{
		return ABebeNave::StaticClass();
	}
	struct Z_Construct_UClass_ABebeNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABebeNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABebeNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BebeNave.h" },
		{ "ModuleRelativePath", "BebeNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABebeNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABebeNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABebeNave_Statics::ClassParams = {
		&ABebeNave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABebeNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABebeNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABebeNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABebeNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABebeNave, 2885445381);
	template<> GALAGA_API UClass* StaticClass<ABebeNave>()
	{
		return ABebeNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABebeNave(Z_Construct_UClass_ABebeNave, &ABebeNave::StaticClass, TEXT("/Script/Galaga"), TEXT("ABebeNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABebeNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

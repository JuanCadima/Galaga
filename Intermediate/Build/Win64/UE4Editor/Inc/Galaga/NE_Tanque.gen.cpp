// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/NE_Tanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNE_Tanque() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ANE_Tanque_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ANE_Tanque();
	GALAGA_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga();
// End Cross Module References
	void ANE_Tanque::StaticRegisterNativesANE_Tanque()
	{
	}
	UClass* Z_Construct_UClass_ANE_Tanque_NoRegister()
	{
		return ANE_Tanque::StaticClass();
	}
	struct Z_Construct_UClass_ANE_Tanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANE_Tanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANE_Tanque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NE_Tanque.h" },
		{ "ModuleRelativePath", "NE_Tanque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANE_Tanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANE_Tanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANE_Tanque_Statics::ClassParams = {
		&ANE_Tanque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANE_Tanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANE_Tanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANE_Tanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANE_Tanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANE_Tanque, 1460941967);
	template<> GALAGA_API UClass* StaticClass<ANE_Tanque>()
	{
		return ANE_Tanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANE_Tanque(Z_Construct_UClass_ANE_Tanque, &ANE_Tanque::StaticClass, TEXT("/Script/Galaga"), TEXT("ANE_Tanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANE_Tanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

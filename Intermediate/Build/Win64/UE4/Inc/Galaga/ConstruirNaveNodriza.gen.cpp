// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga/ConstruirNaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstruirNaveNodriza() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AConstruirNaveNodriza_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AConstruirNaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga();
	GALAGA_API UClass* Z_Construct_UClass_UConstructoraNaveEnemiga_NoRegister();
// End Cross Module References
	void AConstruirNaveNodriza::StaticRegisterNativesAConstruirNaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_AConstruirNaveNodriza_NoRegister()
	{
		return AConstruirNaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AConstruirNaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstruirNaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstruirNaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstruirNaveNodriza.h" },
		{ "ModuleRelativePath", "ConstruirNaveNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstruirNaveNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructoraNaveEnemiga_NoRegister, (int32)VTABLE_OFFSET(AConstruirNaveNodriza, IConstructoraNaveEnemiga), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstruirNaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstruirNaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstruirNaveNodriza_Statics::ClassParams = {
		&AConstruirNaveNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstruirNaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstruirNaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstruirNaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstruirNaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstruirNaveNodriza, 1141448014);
	template<> GALAGA_API UClass* StaticClass<AConstruirNaveNodriza>()
	{
		return AConstruirNaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstruirNaveNodriza(Z_Construct_UClass_AConstruirNaveNodriza, &AConstruirNaveNodriza::StaticClass, TEXT("/Script/Galaga"), TEXT("AConstruirNaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstruirNaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

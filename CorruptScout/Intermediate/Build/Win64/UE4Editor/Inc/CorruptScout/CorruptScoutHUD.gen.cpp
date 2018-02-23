// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CorruptScoutHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorruptScoutHUD() {}
// Cross Module References
	CORRUPTSCOUT_API UClass* Z_Construct_UClass_ACorruptScoutHUD_NoRegister();
	CORRUPTSCOUT_API UClass* Z_Construct_UClass_ACorruptScoutHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CorruptScout();
// End Cross Module References
	void ACorruptScoutHUD::StaticRegisterNativesACorruptScoutHUD()
	{
	}
	UClass* Z_Construct_UClass_ACorruptScoutHUD_NoRegister()
	{
		return ACorruptScoutHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ACorruptScoutHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_CorruptScout,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "CorruptScoutHUD.h" },
				{ "ModuleRelativePath", "CorruptScoutHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACorruptScoutHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACorruptScoutHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorruptScoutHUD, 1244297279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorruptScoutHUD(Z_Construct_UClass_ACorruptScoutHUD, &ACorruptScoutHUD::StaticClass, TEXT("/Script/CorruptScout"), TEXT("ACorruptScoutHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorruptScoutHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

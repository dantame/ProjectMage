// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ProjectMage.h"
#include "ProjectMage.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeProjectMage() {}
	void AProjectMageCharacter::StaticRegisterNativesAProjectMageCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(AProjectMageCharacter::StaticClass(),"OnHitpointsReplicated",(Native)&AProjectMageCharacter::execOnHitpointsReplicated);
		FNativeFunctionRegistrar::RegisterFunction(AProjectMageCharacter::StaticClass(),"ServerSetHitpoints",(Native)&AProjectMageCharacter::execServerSetHitpoints);
	}
	IMPLEMENT_CLASS(AProjectMageCharacter, 3096790862);
	void AProjectMageCharacter::ServerSetHitpoints(float hp)
	{
		ProjectMageCharacter_eventServerSetHitpoints_Parms Parms;
		Parms.hp=hp;
		ProcessEvent(FindFunctionChecked(PROJECTMAGE_ServerSetHitpoints),&Parms);
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(APlayerCharacter::StaticClass(),"ServerOnFire",(Native)&APlayerCharacter::execServerOnFire);
	}
	IMPLEMENT_CLASS(APlayerCharacter, 3694139461);
	void APlayerCharacter::ServerOnFire()
	{
		ProcessEvent(FindFunctionChecked(PROJECTMAGE_ServerOnFire),NULL);
	}
	void AProjectMageGameMode::StaticRegisterNativesAProjectMageGameMode()
	{
	}
	IMPLEMENT_CLASS(AProjectMageGameMode, 1923384029);
	void AProjectMageHUD::StaticRegisterNativesAProjectMageHUD()
	{
	}
	IMPLEMENT_CLASS(AProjectMageHUD, 965760998);
	void AProjectMageProjectile::StaticRegisterNativesAProjectMageProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(AProjectMageProjectile::StaticClass(),"OnHit",(Native)&AProjectMageProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(AProjectMageProjectile, 625060322);
FName PROJECTMAGE_ServerOnFire = FName(TEXT("ServerOnFire"));
FName PROJECTMAGE_ServerSetHitpoints = FName(TEXT("ServerSetHitpoints"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_UObject_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_UEngineTypes_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	PROJECTMAGE_API class UFunction* Z_Construct_UFunction_AProjectMageCharacter_OnHitpointsReplicated();
	PROJECTMAGE_API class UFunction* Z_Construct_UFunction_AProjectMageCharacter_ServerSetHitpoints();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageCharacter_NoRegister();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageCharacter();
	PROJECTMAGE_API class UFunction* Z_Construct_UFunction_APlayerCharacter_ServerOnFire();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_APlayerCharacter();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageGameMode_NoRegister();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageGameMode();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageHUD_NoRegister();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageHUD();
	PROJECTMAGE_API class UFunction* Z_Construct_UFunction_AProjectMageProjectile_OnHit();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageProjectile_NoRegister();
	PROJECTMAGE_API class UClass* Z_Construct_UClass_AProjectMageProjectile();
	PROJECTMAGE_API class UPackage* Z_Construct_UPackage_ProjectMage();
	UFunction* Z_Construct_UFunction_AProjectMageCharacter_OnHitpointsReplicated()
	{
		UClass* OuterClass=Z_Construct_UClass_AProjectMageCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnHitpointsReplicated"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AProjectMageCharacter_ServerSetHitpoints()
	{
		UClass* OuterClass=Z_Construct_UClass_AProjectMageCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerSetHitpoints"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x80220CC0, 65535, sizeof(ProjectMageCharacter_eventServerSetHitpoints_Parms));
			UProperty* NewProp_hp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("hp"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(hp, ProjectMageCharacter_eventServerSetHitpoints_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
			MetaData->SetValue(NewProp_hp, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectMageCharacter_NoRegister()
	{
		return AProjectMageCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectMageCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_ProjectMage();
			OuterClass = AProjectMageCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AProjectMageCharacter_OnHitpointsReplicated());
				OuterClass->LinkChild(Z_Construct_UFunction_AProjectMageCharacter_ServerSetHitpoints());

				UProperty* NewProp_TextRender = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TextRender"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(TextRender, AProjectMageCharacter), 0x00000000004a003d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AProjectMageCharacter), 0x0000000000020015);
				UProperty* NewProp_Hitpoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hitpoints"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(Hitpoints, AProjectMageCharacter), 0x0000000100000020);
				NewProp_Hitpoints->RepNotifyFunc = FName(TEXT("OnHitpointsReplicated"));
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AProjectMageCharacter), 0x0000000000020015);
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AProjectMageCharacter_OnHitpointsReplicated()); // 2609858689
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AProjectMageCharacter_ServerSetHitpoints()); // 2756413462
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation Pawn|Character|InternalEvents"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(NewProp_TextRender, TEXT("Category"), TEXT("TextRenderActor"));
				MetaData->SetValue(NewProp_TextRender, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TextRender, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_Hitpoints, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("ProjectMageCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectMageCharacter(Z_Construct_UClass_AProjectMageCharacter, TEXT("AProjectMageCharacter"));
	UFunction* Z_Construct_UFunction_APlayerCharacter_ServerOnFire()
	{
		UClass* OuterClass=Z_Construct_UClass_APlayerCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerOnFire"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AProjectMageCharacter();
			Z_Construct_UPackage_ProjectMage();
			OuterClass = APlayerCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APlayerCharacter_ServerOnFire());

				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, APlayerCharacter), 0x0000000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireSound, APlayerCharacter), 0x0000000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, APlayerCharacter), 0x0000000000010001, Z_Construct_UClass_AProjectMageProjectile_NoRegister());
				UProperty* NewProp_GunOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(GunOffset, APlayerCharacter), 0x0000000000000005, Z_Construct_UScriptStruct_UObject_FVector());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, APlayerCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, APlayerCharacter), 0x00000000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APlayerCharacter_ServerOnFire()); // 1412141579
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation Pawn|Character|InternalEvents"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the characters location"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("PlayerCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacter(Z_Construct_UClass_APlayerCharacter, TEXT("APlayerCharacter"));
	UClass* Z_Construct_UClass_AProjectMageGameMode_NoRegister()
	{
		return AProjectMageGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectMageGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_ProjectMage();
			OuterClass = AProjectMageGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x208802AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectMageGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectMageGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectMageGameMode(Z_Construct_UClass_AProjectMageGameMode, TEXT("AProjectMageGameMode"));
	UClass* Z_Construct_UClass_AProjectMageHUD_NoRegister()
	{
		return AProjectMageHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectMageHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage_ProjectMage();
			OuterClass = AProjectMageHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectMageHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectMageHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectMageHUD(Z_Construct_UClass_AProjectMageHUD, TEXT("AProjectMageHUD"));
	UFunction* Z_Construct_UFunction_AProjectMageProjectile_OnHit()
	{
		struct ProjectMageProjectile_eventOnHit_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UClass* OuterClass=Z_Construct_UClass_AProjectMageProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnHit"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(ProjectMageProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Hit, ProjectMageProjectile_eventOnHit_Parms), 0x0000000008000182, Z_Construct_UScriptStruct_UEngineTypes_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, ProjectMageProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_UObject_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, ProjectMageProjectile_eventOnHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, ProjectMageProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
			MetaData->SetValue(NewProp_NormalImpulse, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
			MetaData->SetValue(NewProp_OtherActor, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectMageProjectile_NoRegister()
	{
		return AProjectMageProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectMageProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_ProjectMage();
			OuterClass = AProjectMageProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AProjectMageProjectile_OnHit());

				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, AProjectMageProjectile), 0x00000000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AProjectMageProjectile), 0x00000000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AProjectMageProjectile_OnHit()); // 1928875721
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectMageProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("ProjectMageProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectMageProjectile(Z_Construct_UClass_AProjectMageProjectile, TEXT("AProjectMageProjectile"));
	UPackage* Z_Construct_UPackage_ProjectMage()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ProjectMage")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x98F85346;
			Guid.B = 0xAF674823;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif


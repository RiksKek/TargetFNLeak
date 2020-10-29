#pragma once
#include "stdafx.h"
namespace Offsets {
	typedef struct {
		LPCWSTR Name;
		DWORD& Offset;
	} OFFSET;
	extern uintptr_t fnGetBounds;
	extern uintptr_t nObjectsCount;
	extern uintptr_t uObjects;
	extern uintptr_t fnLineOfSightTo;
	extern uintptr_t fnGetBoneMatrix;
	extern uintptr_t fnGetWeaponStats;
	extern PVOID* uWorld;
	extern PVOID K2_TeleportTo;
	extern PVOID ServerTickSetup;

	namespace Engine {
		namespace World {
			extern DWORD OwningGameInstance;
			extern DWORD Levels;
			extern DWORD PersistentLevel;
		}

		namespace Level {
			extern DWORD AActors;
		}

		namespace GameInstance {
			extern DWORD LocalPlayers;
		}

		namespace Player {
			extern DWORD PlayerController;
		}

		namespace Controller {
			extern DWORD ControlRotation;
			extern PVOID SetControlRotation;
			extern DWORD RemoteViewPitch;
			extern PVOID ClientSetRotation;
			extern PVOID SetIgnoreLookInput;
		}

		namespace PlayerController { //PlayerCameraManager
			extern DWORD AcknowledgedPawn;
			extern DWORD PlayerCameraManager;
		}

		namespace Pawn {
			extern DWORD PlayerState;
		}
		namespace SceneComponent {
			extern DWORD RelativeLocation;
			extern DWORD ComponentVelocity;
		}
		namespace PlayerState {
			extern PVOID GetPlayerName;
		}

		namespace Actor {
			extern PVOID SetActorHiddenInGame;
			extern DWORD CustomTimeDilation;
			extern DWORD RootComponent;
		}

		namespace Character {
			extern DWORD Mesh;
		}

		namespace SceneComponent {
			extern DWORD RelativeLocation;
			extern DWORD ComponentVelocity;
		}

		namespace StaticMeshComponent {
			extern DWORD ComponentToWorld;
			extern DWORD StaticMesh;
		}

		namespace SkinnedMeshComponent {
			extern DWORD CachedWorldSpaceBounds;
		}

		namespace FortMeatballVehicle {
			extern DWORD FortMeatballVehicleConfigsClass;
		}

		namespace FortMeatballVehicleConfigs {
			extern DWORD BoostMinPushForce;
			extern DWORD BoostTopSpeedForceMultiplier;
			extern DWORD BoostTopSpeedMultiplier;
			extern DWORD LandTopSpeedMultiplier;
			extern DWORD LandPushForceMultiplier;
			extern DWORD BoostSteeringMultiplier;
			extern DWORD LandSteeringMultiplier;
			extern DWORD LandMinSpeedSteeringAngle;
			extern DWORD LandMaxSpeedSteeringAngle;
		}
	}

	namespace FortniteGame {
		namespace FortPawn {
			extern DWORD bIsDBNO;
			extern DWORD bIsDying;
			extern DWORD CurrentWeapon;
		}

		namespace FortMeatballVehicle {
			extern DWORD BoostMinPushForce;
			extern DWORD BoostTopSpeedForceMultiplier;
			extern DWORD BoostTopSpeedMultiplier;
			extern DWORD LandTopSpeedMultiplier;
			extern DWORD LandPushForceMultiplier;
			extern DWORD BoostSteeringMultiplier;
			extern DWORD LandSteeringMultiplier;
			extern DWORD LandMinSpeedSteeringAngle;
			extern DWORD LandMaxSpeedSteeringAngle;
		}

		namespace FortPickup {
			extern DWORD PrimaryPickupItemEntry;
		}

		namespace FortItemEntry {
			extern DWORD ItemDefinition;
		}

		namespace FortItemDefinition {
			extern DWORD DisplayName;
			extern DWORD Tier;
		}

		namespace FortPlayerStateAthena {
			extern DWORD TeamIndex;
			extern DWORD SquadID;
		}

		namespace FortWeapon {
			extern DWORD LastFireTime;
			extern DWORD LastFireTimeVerified;
			extern DWORD WeaponData;
			extern DWORD LastFireAbilityTime;
			extern DWORD IsReloading;
		}

		namespace FortWeaponItemDefinition {
			extern DWORD WeaponStatHandle;
		}

		namespace FortProjectileAthena {
			extern DWORD FireStartLoc;
		}

		namespace FortBaseWeaponStats {
			//Reload
			extern DWORD ReloadTime;
			extern DWORD ReloadScale;
			extern DWORD ChargeDownTime;
		}

		namespace FortRangedWeaponStats {
			//No Recoil
			extern DWORD RecoilHoriz;
			extern DWORD RecoilVert;
			extern DWORD RecoilDownsightsMultiplier;
			//No Spread
			extern DWORD Spread;
			extern DWORD SpreadDownsights;
			extern DWORD StandingStillSpreadMultiplier;
			extern DWORD AthenaJumpingFallingSpreadMultiplier;
			extern DWORD AthenaCrouchingSpreadMultiplier;
			extern DWORD AthenaSprintingSpreadMultiplier;
			extern DWORD MinSpeedForSpreadMultiplier;
			extern DWORD MaxSpeedForSpreadMultiplier;
		}

		namespace BuildingContainer {
			extern DWORD bAlreadySearched;
		}

		namespace BuildingWeakSpot {
			extern DWORD bActive;
		}
	}

	BOOLEAN Initialize();
}
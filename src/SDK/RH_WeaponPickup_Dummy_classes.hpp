#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_WeaponPickup_Dummy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass WeaponPickup_Dummy.WeaponPickup_Dummy_C
// 0x0010 (0x0450 - 0x0440)
class AWeaponPickup_Dummy_C : public AShooterWeaponPickup
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass WeaponPickup_Dummy.WeaponPickup_Dummy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

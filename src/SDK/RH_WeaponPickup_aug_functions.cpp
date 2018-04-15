// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_WeaponPickup_aug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponPickup_aug.WeaponPickup_aug_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeaponPickup_aug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPickup_aug.WeaponPickup_aug_C.UserConstructionScript");

	AWeaponPickup_aug_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
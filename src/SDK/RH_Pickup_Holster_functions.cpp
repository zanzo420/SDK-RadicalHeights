// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Pickup_Holster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pickup_Holster.Pickup_Holster_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void APickup_Holster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pickup_Holster.Pickup_Holster_C.UserConstructionScript");

	APickup_Holster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

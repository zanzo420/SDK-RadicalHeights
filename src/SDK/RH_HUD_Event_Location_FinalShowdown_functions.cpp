// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Event_Location_FinalShowdown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Event_Location_FinalShowdown.HUD_Event_Location_FinalShowdown_C.TriggerOnScreen
// (Final, Native, Event, Public)

void UHUD_Event_Location_FinalShowdown_C::TriggerOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Event_Location_FinalShowdown.HUD_Event_Location_FinalShowdown_C.TriggerOnScreen");

	UHUD_Event_Location_FinalShowdown_C_TriggerOnScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Event_Location_FinalShowdown.HUD_Event_Location_FinalShowdown_C.TriggerOffScreen
// (Final, Native, Event, Public)

void UHUD_Event_Location_FinalShowdown_C::TriggerOffScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Event_Location_FinalShowdown.HUD_Event_Location_FinalShowdown_C.TriggerOffScreen");

	UHUD_Event_Location_FinalShowdown_C_TriggerOffScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

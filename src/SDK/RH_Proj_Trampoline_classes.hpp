#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_Trampoline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Proj_Trampoline.Proj_Trampoline_C
// 0x0008 (0x0648 - 0x0640)
class AProj_Trampoline_C : public AShooterProjectile_GroundDetonate
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Proj_Trampoline.Proj_Trampoline_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

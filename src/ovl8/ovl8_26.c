#include "common.h"

s32 func_ovl8_80385180(s32 arg0, s32* arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xCC);
	if (temp_v0 != 0)
	{
		func_ovl8_803851E4(temp_v0, 0, 0, arg1, arg0, arg1[0x24/4]);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;
	
	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_26/func_ovl8_803851E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_26/func_ovl8_8038533C.s")

void func_ovl8_80385408(s32 arg0)
{
	func_ovl8_803725DC(arg0 + 0x4C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_26/func_ovl8_80385428.s")

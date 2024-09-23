#include "common.h"

s32 func_ovl8_80385640(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xC0);
	if (temp_v0 != 0)
	{
		func_ovl8_80385758(temp_v0, 0, 0, arg1, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_8038569C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_80385758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_803858B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_8038597C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_8038599C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_28/func_ovl8_80385A1C.s")

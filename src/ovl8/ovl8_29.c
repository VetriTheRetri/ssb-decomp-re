#include "common.h"

s32 func_ovl8_80385A50(s32 arg0, s32 arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0x140);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_80385B74(temp_v0, 0, 0, arg1, arg0);
	}
	else
		sp24 = 0;
	
	return sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385D88.s")

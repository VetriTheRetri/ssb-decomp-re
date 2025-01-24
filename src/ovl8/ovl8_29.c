#include "common.h"

// 0x80385A50
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

// 0x80385AAC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385AAC.s")

// 0x80385B74
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385B74.s")

// 0x80385C70
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385C70.s")

// 0x80385D34
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385D34.s")

// 0x80385D54
void func_ovl8_80385D54(s32 arg0, s32 arg1)
{
    func_ovl8_803817C0(arg0 + 0xB8);
    func_ovl8_80373694(arg0, arg1);
}

// 0x80385D88
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_29/func_ovl8_80385D88.s")

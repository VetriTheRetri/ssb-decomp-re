#include <common.h>

void func_ovl8_8037C6DC(void*** arg0, s32* arg1, s32* arg2);

s32 func_ovl8_8037C660(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 sp3C;
	s32 sp34;
	s32 sp30;
	s32 var_v1;

	func_ovl8_8037C6DC(arg1, &sp34, &sp30);
	temp_v0 = func_ovl8_803717A0(0xC4);
	if (temp_v0 != 0)
	{
		func_ovl8_8037C7D4(temp_v0, 0, 0, arg1, sp34, sp30, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

void func_ovl8_8037C6DC(void*** arg0, s32* arg1, s32* arg2)
{
	void** temp_v0;

	temp_v0 = arg0[0x24/4];
	if (temp_v0 != NULL)
	{
		*arg1 = temp_v0[0x0/4];
		*arg2 = arg0[0x24/4][0x4/4];
		return;
	}
	*arg2 = 0;
	*arg1 = 0;
}

// https://decomp.me/scratch/zHMoz
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C9E4.s")

void func_ovl8_8037CA48(s32 arg0) {}

void func_ovl8_8037CA50(s32* arg)
{
	arg[0xb4/4] = 0;
	arg[0xb0/4] = 0;
}
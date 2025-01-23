#include <common.h>

s32 func_ovl8_8037CA60(s32 arg0, s32** arg1)
{
	s32 sp34;
	s32* temp_v0;
	s32 var_v1;
	s32 var_t0;

	temp_v0 = arg1[0x24/4];
	var_v1 = 0;
	var_t0 = 0;
	if (temp_v0 != NULL)
	{
		var_v1 = temp_v0[0x0/4];
		var_t0 = temp_v0[0x4/4];
	}
	sp34 = func_ovl8_803717A0(0xB8);
	if (sp34 != 0)
	{
		func_ovl8_8037CBA0(sp34, 0, 0, arg1, var_v1, var_t0, arg0);
		var_v1 = sp34;
	}
	else
		var_v1 = 0;

	return var_v1;
}

// https://decomp.me/scratch/6KieT
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CBA0.s")

// https://decomp.me/scratch/zhtaK
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CCC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CD64.s")

void func_ovl8_8037CE30(s32 arg0) {}
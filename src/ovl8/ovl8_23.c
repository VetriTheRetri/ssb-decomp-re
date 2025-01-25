#include "common.h"

#include <sys/develop.h>


extern dbUnknownLinkStruct D_ovl8_8038CA10;
extern dbFunction D_ovl8_8038CB58;
extern dbUnknownLink D_ovl8_8038CCB0;


// https://decomp.me/scratch/Rl7lx
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803833A0.s")

// https://decomp.me/scratch/0qc6N
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383450.s")

void func_ovl8_80383510(dbUnknown5* arg0, s32 arg1)
{
	dbUnknownLinkStruct* temp_a0;

	if (arg0 == NULL)
		return;

	arg0->unk_dbunk5_0x30 = &D_ovl8_8038CA10, arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038CB58;
	arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038CCB0;
	temp_a0 = arg0->unk_dbunk5_0x3C;

	if (temp_a0 != NULL)
		func_ovl8_80371764(temp_a0);

	func_ovl8_8037354C(arg0, 0);
	if (arg1 != 0)
	{
		func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
		func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
	}

	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

s32 func_ovl8_803835C4(s32* arg0, s32 arg1)
{
	s32 temp_a2;
	dbUnknownLink**  temp_v0;

	temp_a2 = arg0[0x3C/4];
	if (temp_a2 != 0)
		func_ovl8_80371764(temp_a2);

	temp_v0 = func_ovl8_803716D8(arg1 + 1);
	arg0[0x3C/4] = temp_v0;

	if (temp_v0 != 0)
		return 1;

	return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803836D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_8038374C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803837F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_8038388C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803838B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803838E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803839D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80384000.s")

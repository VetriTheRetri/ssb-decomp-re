#include <sys/develop.h>
#include <db/debug.h>

s32 func_ovl8_80384460(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xC0);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8038456C(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
	}
	else
		sp24 = 0;

	return sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803844C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_8038456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803846F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803846F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803847A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803848CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384C0C.s")

s16 func_ovl8_80384C44(s16* arg0)
{
	return arg0[0x3c/2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80385024.s")

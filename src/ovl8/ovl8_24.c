#include <sys/develop.h>
#include <db/debug.h>

s32 func_ovl8_803840C0(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xD4);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_803841E0(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
	}
	else
		sp24 = 0;
	
	return sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_24/func_ovl8_80384124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_24/func_ovl8_803841E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_24/func_ovl8_80384340.s")

void func_ovl8_8038440C(s32 arg0)
{
	func_ovl8_803725DC(arg0 + 0x58);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_24/func_ovl8_8038442C.s")

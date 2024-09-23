#include <sys/objmanager.h>
#include <sys/develop.h>
#include <debug.h>


s32 func_ovl8_8037EE00(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xA8);
	
	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8037EF0C(temp_v0, 0, 0, arg1, arg1->unk_dbunk3_0x24, arg0);
	}
	else
		sp24 = 0;

	return sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037EE64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037EF0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037F030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037F260.s")
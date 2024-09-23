#include <sys/objmanager.h>
#include <sys/develop.h>
#include <debug.h>


extern dbUnknownLink D_ovl8_8038A170;

void* func_ovl8_8037C2D0(void** arg0)
{
	void* temp_v0;

	if (arg0 != NULL || (temp_v0 = func_ovl8_803717A0(0xC), arg0 = temp_v0, temp_v0 != NULL))
		arg0[0x8/4] = &D_ovl8_8038A170;

	return arg0;
}

void func_ovl8_8037C30C(dbUnknownLink* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;
	
	arg0->unk_dbunklink_0x8 = &D_ovl8_8038A170;

	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

s32 func_ovl8_8037C344(s32 arg0, s32 arg1, s32 arg2)
{
	return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_9/func_ovl8_8037C358.s")

void func_ovl8_8037C3AC(s32* arg0, s32 arg1)
{
	arg0[1] = arg1;
}
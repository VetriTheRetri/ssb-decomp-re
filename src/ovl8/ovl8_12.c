#include "common.h"

#include <sys/develop.h>

extern dbFunction D_ovl8_8038A700;

void* func_ovl8_8037CE40(dbUnknownLinkStruct* arg0)
{
	if ((arg0 != NULL) || ((arg0 = func_ovl8_803717A0(0x68)) != NULL))
	{
		func_ovl8_803717E0(arg0);
		arg0->db_func = &D_ovl8_8038A700;
		func_ovl8_8037CF4C(arg0);
	}
	return arg0;
}

void* func_ovl8_8037CE90(dbUnknownLinkStruct* arg0, dbBytesCopy* arg1)
{
	if ((arg0 != NULL) || ((arg0 = func_ovl8_803717A0(0x68)) != NULL))
	{
		func_ovl8_80371828(arg0, arg1);
		arg0->db_func = &D_ovl8_8038A700;
		func_ovl8_8037CF4C(arg0);
	}
	return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_12/func_ovl8_8037CEE8.s")
// void func_ovl8_8037CEE8(dbUnknownLinkStruct* arg0, s32 arg1)
// {
// 	if (arg0 == NULL)
// 		return;

// 	arg0->db_func = &D_ovl8_8038A700;
// 	gcEjectGObj(arg0->unk_dbunkstruct_0x48);
// 	func_ovl8_803718C4(arg0, 0); // weird swapping
// 	if (arg1 & 1)
// 		func_ovl8_803717C0(arg0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_12/func_ovl8_8037CF4C.s")

void func_ovl8_8037CFAC(void** arg0)
{
	void (*temp_v0)();

	temp_v0 = arg0[0x64/4];

	if (temp_v0 != NULL)
		temp_v0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_12/func_ovl8_8037CFD8.s")
// void func_ovl8_8037CFD8(s32** arg0, s32 arg1) {
// 	arg0[0x48/4][0x84/4] = arg1;
// }

#include "common.h"
#include <sys/develop.h>

extern dbUnknownLinkStruct D_ovl8_8038D650;
extern dbFunction D_ovl8_8038D778;
extern dbUnknownLink D_ovl8_8038D8D0;
extern dbFunction D_ovl8_8038D8F8;

// 0x80385180
s32 func_ovl8_80385180(s32 arg0, s32* arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xCC);
	if (temp_v0 != 0)
	{
		func_ovl8_803851E4(temp_v0, 0, 0, arg1, arg0, arg1[0x24/4]);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

// 0x803851E4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_26/func_ovl8_803851E4.s")

// 0x8038533C
void func_ovl8_8038533C(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038D650,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038D778;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038D8D0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038D8F8;

        if (arg0->unk_dbunk5_0xBC != 0) {
            func_ovl8_8037B3E4(arg0->unk_dbunk5_0xBC);
        }

        func_ovl8_80372554(&arg0->unk_dbunk5_0x4C, 0);
        func_ovl8_803848CC(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
            func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x80385408
void func_ovl8_80385408(s32 arg0)
{
	func_ovl8_803725DC(arg0 + 0x4C);
}

// 0x80385428
void func_ovl8_80385428(dbUnknownS38* arg0)
{
    dbFunction* temp_v0 = arg0->unk_dbunks38_0x30;
    temp_v0[2].unk_dbfunc_0x4(temp_v0[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

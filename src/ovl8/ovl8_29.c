#include "common.h"
#include <sys/develop.h>

void func_ovl8_803817C0(void*, f32);
void func_ovl8_80373694(void*, f32);

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
void func_ovl8_80385D34(s32 arg0)
{
    func_ovl8_80381308(arg0 + 0xB8);
}

// 0x80385D54
void func_ovl8_80385D54(s32 arg0, f32 arg1)
{
    func_ovl8_803817C0(arg0 + 0xB8, arg1);
    func_ovl8_80373694(arg0, arg1);
}

// 0x80385D88
void func_ovl8_80385D88(dbUnknown5* arg0)
{
    dbUnknownLinkStruct *var_v0;
    dbUnknownLinkStruct *var_v1;

    if ((arg0->unk_dbunk5_0x0 != 0.0f) && ((arg0->unk_dbunk5_0xD0 != 0) || (arg0->unk_dbunk5_0x1E != 0)))
    {
        var_v0 = arg0->unk_dbunk5_0xB0;
        var_v1 = (var_v0 != 0) ? var_v0 : arg0->unk_dbunk5_0xB4;
        var_v0 = var_v1;
    }
    else
    {
        var_v0 = arg0->unk_dbunk5_0xB4;
    }

    arg0->unk_dbunk5_0x48 = var_v0;
    func_ovl8_803725DC(&arg0->unk_dbunk5_0x40, arg0);
}

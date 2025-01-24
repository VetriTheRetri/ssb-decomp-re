#include "common.h"
#include <sys/develop.h>

// 0x80385460
s32 func_ovl8_80385460(s32 arg0, dbUnknown3* arg1)
{
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_ovl8_803717A0(0xB4);

    if (temp_v0 != 0)
    {
        func_ovl8_803854C4(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
        var_v1 = temp_v0;
    }
    else
    {
        var_v1 = 0;
    }

    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_27/func_ovl8_803854C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_27/func_ovl8_80385598.s")

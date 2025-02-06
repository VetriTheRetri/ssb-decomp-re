#include "common.h"
#include <sys/develop.h>

extern dbUnknownLinkStruct D_ovl8_8038AF38;
extern dbFunction D_ovl8_8038B018;
extern dbUnknownLink D_ovl8_8038B170;

// 0x8037F300
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F300.s")
// void* func_ovl8_8037F300(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xB4)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x4C;
//             arg2 = &arg0->unk_dbunk5_0xA8;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_803733AC(arg0, arg1, arg2);

//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38;
//         arg1->db_func = &D_ovl8_8038B018;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_8038B170;

//     }

//     return arg0;
// }

// 0x8037F3A8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F3A8.s")

// 0x8037F4F4
void func_ovl8_8037F4F4(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038B018;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038B170;

        func_ovl8_8037354C(arg0, 0);

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8038011C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_803801DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8038045C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_803806B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_803806C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380E14.s")

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

// 0x8037F590
void func_ovl8_8037F590(dbUnknown5* arg0)
{
    s16 sp38[3];
    s16 sp30[3];
    s32 sp2C;
    dbUnknownLinkStruct* temp_a2;
    dbFunction* temp_v1;

    temp_a2 = arg0->unk_dbunk5_0x38;
    temp_v1 = temp_a2->db_func;
    sp2C = temp_v1[23].unk_dbfunc_0x4(temp_v1[23].unk_dbfunc_0x0 + (uintptr_t)temp_a2);

    temp_a2 = arg0->unk_dbunk5_0x38;
    temp_v1 = temp_a2->db_func;
    temp_v1[21].unk_dbfunc_0x4(temp_v1[21].unk_dbfunc_0x0 + (uintptr_t)temp_a2, &sp38);

    func_ovl8_8037B46C(sp2C, &sp38, arg0->unk_dbunk5_0x48, &arg0->unk_dbunk5_0x38->unk_dbunkstruct_0x18);

    temp_v1 = arg0->unk_dbunk5_0x30;
    temp_v1[26].unk_dbfunc_0x4(temp_v1[26].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp30);

    sp30[0] += sp38[0];
    sp30[1] += sp38[1];

    func_ovl8_8037B46C(sp2C, &sp30, arg0->unk_dbunk5_0x44, &arg0->unk_dbunk5_0x38->unk_dbunkstruct_0x18);
}

// 0x8037F654
void func_ovl8_8037F654(dbTestMenu* arg0, s16 arg1)
{
    arg0->unk_dbtestmenu_0x14.unk_dbunkstruct_0x2C = arg1;
}

// 0x8037F668
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F668.s")

// 0x8037F784
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F784.s")

// 0x8037F80C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F80C.s")

// 0x8037FBC0
s32 func_ovl8_8037FBC0(s32 arg0, s32 arg1)
{
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_ovl8_803717A0(0xCC);

    if (temp_v0 != 0)
    {
        func_ovl8_8037FCD8(temp_v0, 0, 0, arg1, arg0);
        var_v1 = temp_v0;
    }
    else
    {
        var_v1 = 0;
    }

    return var_v1;
}

// 0x8037FC1C
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

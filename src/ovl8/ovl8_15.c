#include "common.h"
#include <sys/develop.h>

extern dbUnknownLinkStruct D_ovl8_8038AF38;
extern dbFunction D_ovl8_8038B018;
extern dbUnknownLink D_ovl8_8038B170;
extern dbUnknownLinkStruct D_ovl8_8038B1A0;
extern dbFunction D_ovl8_8038B288;
extern dbUnknownLink D_ovl8_8038B3E0;
extern dbUnknownLinkStruct D_ovl8_8038B408;
extern dbUnknownLinkStruct D_ovl8_8038B470;
extern dbFunction D_ovl8_8038B540;
extern dbUnknownLink D_ovl8_8038B698;
extern s32 D_ovl8_8038B6C0;
extern s32 D_8038EFCC_1AB81C;

extern dbFunction D_ovl8_8038B720;
extern dbFunction D_ovl8_8038B7F0;
extern dbUnknownLink D_ovl8_8038B948;
extern dbUnknown3 D_ovl8_8038B970;

extern void func_ovl8_803724B4(void *, void *, void *, s32, s32);

void *func_ovl8_8037FCD8(dbUnknown5 *arg0, dbUnknownLinkStruct **arg1, dbUnknownLink **arg2, u16 *arg3, s32 arg4);

// 0x8037F300
void* func_ovl8_8037F300(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2);
#ifdef NON_MATCHING
void* func_ovl8_8037F300(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xB4)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x4C;
            arg2 = &arg0->unk_dbunk5_0xA8;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_803733AC(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38;
        arg1->db_func = &D_ovl8_8038B018;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B170;

    }
    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F300.s")
#endif /* NON_MATCHING */

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

    func_ovl8_8037B46C(sp2C, &sp38, arg0->unk_dbunk5_0x48, &arg0->unk_dbunk5_0x38->bg_color);

    temp_v1 = arg0->unk_dbunk5_0x30;
    temp_v1[26].unk_dbfunc_0x4(temp_v1[26].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp30);

    sp30[0] += sp38[0];
    sp30[1] += sp38[1];

    func_ovl8_8037B46C(sp2C, &sp30, arg0->unk_dbunk5_0x44.ls, &arg0->unk_dbunk5_0x38->bg_color);
}

// 0x8037F654
void func_ovl8_8037F654(dbTestMenu* arg0, s16 arg1)
{
    arg0->unk_dbtestmenu_0x14.unk_dbunkstruct_0x2C = arg1;
}

// 0x8037F668
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037F668.s")

// 0x8037F784
s32 func_ovl8_8037F784(dbUnknown5* arg0, db4Bytes arg1)
{
    db4Shorts sp28;
    dbFunction *temp_v0_2;
    db4Bytes sp20;
    dbFunction *temp_v0;

    temp_v0 = arg0->unk_dbunk5_0x38->db_func;
    temp_v0[22].unk_dbfunc_0x4(temp_v0[22].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp20);

    if (TRUE);

    temp_v0_2 = arg0->unk_dbunk5_0x30;
    temp_v0_2[26].unk_dbfunc_0x4(temp_v0_2[26].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp28);

    if (func_ovl8_80377168(arg1, &sp28) == 0)
    {
        return 2;
    }
    else return 1;
}

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
#ifdef NON_MATCHING
dbUnknown5 *func_ovl8_8037FC1C(dbUnknown5 *arg0, dbUnknownLinkStruct **arg1, dbUnknownLink **arg2)
{
    if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xCC), (arg0 != NULL)))
    {
        if (arg1 == NULL)
        {
            func_ovl8_803717E0(arg1 = &arg0->unk_dbunk5_0x60,arg2 = &arg0->unk_dbunk5_0xC0);
            func_ovl8_8037C2D0(arg2);
        }
        func_ovl8_8037F300(arg0, arg1, arg2);
        func_ovl8_80372430((char*) arg0 + 0x4C, arg1);
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0;\
        arg1[0x58/4] = &D_ovl8_8038B288;
        arg2[0x8/4] = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;
    }
    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FC1C.s")
#endif /* NON_MATCHING */

// 0x8037FCD8
#ifdef NON_MATCHING
void *func_ovl8_8037FCD8(dbUnknown5 *arg0, dbUnknownLinkStruct **arg1, dbUnknownLink **arg2, u16 *arg3, s32 arg4)
{
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    u16 temp_v1;

    if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xCC), (arg0 != NULL)))
    {
        if (arg1 == NULL)
        {
            func_ovl8_803717E0(arg1 = &arg0->unk_dbunk5_0x60, arg2 = &arg0->unk_dbunk5_0xC0);
            func_ovl8_8037C2D0(arg2);
        }
        func_ovl8_8037F3A8(arg0, arg1, arg2, arg3, arg4);
        func_ovl8_803724B4((char*) arg0 + 0x4C, arg1, arg3, arg4, 0);
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0,
        arg1[0x58/4] = &D_ovl8_8038B288;
        arg2[0x8/4] = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;
        temp_v1 = arg3[0x10/2];

        if (temp_v1 == 2)
            sp3C = 2;
        else if (temp_v1 == 5)
            sp3C = 3;

        sp44 = (s32) arg3[0x4/2];
        sp40 = (s32) arg3[0x6/2];
        func_ovl8_8037B85C(sp3C, &sp44, &sp40);
        arg0->unk_dbunk5_0xBC = func_ovl8_8037ACAC(arg3[0x4/2], arg3[0x6/2], sp3C, sp44, sp40);
        arg0->unk_dbunk5_0x54 = arg0->unk_dbunk5_0xBC;
    }
    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8037FCD8.s")
#endif /* NON_MATCHING */

// 0x8037FE28
void func_ovl8_8037FE28(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038B288;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;

        if (arg0->unk_dbunk5_0xBC != 0)
        {
            func_ovl8_8037B3E4(arg0->unk_dbunk5_0xBC);
        }

        func_ovl8_80372554(&arg0->unk_dbunk5_0x4C, 0);
        func_ovl8_8037F4F4(arg0, 0);

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

// 0x8037FEF4
void func_ovl8_8037FEF4(dbUnknown5* arg0)
{
    func_ovl8_803725DC(&arg0->unk_dbunk5_0x4C);
}

// 0x8037FF14
void func_ovl8_8037FF14(dbUnknown5* arg0)
{
    dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
    temp_v0[2].unk_dbfunc_0x4(temp_v0[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x8037FF40
void func_ovl8_8037FF40(s32* arg0, s32* arg1, s32* arg2, s32* arg3, s32* arg4)
{
    s32 temp_v0;
    s32 var_s1;
    s32* var_s0;
    s32* var_v0;

    *arg1 = 0;

    for (var_v0 = arg0; var_v0 != NULL && *var_v0 != 0; var_v0++)
    {
        *arg1 += 1;
    }

    if ((arg0 != NULL) && (*arg1 != 0))
    {
        *arg3 = 0;
        *arg2 = 0;

        for (var_s1 = 0; var_s1 < *arg1; var_s1++)
        {
            *arg3 += 0xC;

            temp_v0 = func_ovl8_8037E7A8(arg0[var_s1]);

            if (*arg2 < temp_v0)
            {
                *arg2 = temp_v0;
            }
        }
        *arg2 += 0x10;
        *arg4 = 0xC;
    }
}

// 0x80380048
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380048.s")

// 0x8038011C
void func_ovl8_8038011C(dbUnknown7* arg0, s32 arg1)
{
    s32 temp_a0;

    if (arg0 != NULL)
    {
        arg0->unk18 = &D_ovl8_8038B470,
        arg0->unk20->db_func = &D_ovl8_8038B540;
        arg0->unk1C->unk_dbunklink_0x8 = &D_ovl8_8038B698;
        arg0->unk44 = &D_ovl8_8038B6C0;

        temp_a0 = arg0->unkC0;

        if (temp_a0 != 0)
            func_ovl8_8037B3E4(temp_a0);

        func_ovl8_803768E0(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk1C, 0);
            func_ovl8_803718C4(arg0->unk20, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x803801DC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_803801DC.s")

// 0x80380414
void func_ovl8_80380414(dbUnknownLinkStruct* arg0)
{
    dbUnknownLinkStruct* var_v0 = arg0;

    if (arg0 != NULL)
    {
        var_v0 = arg0->unk_dbunkstruct_0x20;
    }

    if (var_v0->unk_dbunkstruct_0x2C == 0)
    {
        func_ovl8_80380704();
    }
    else func_ovl8_80380920();
}

// 0x8038045C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_8038045C.s")

// 0x803806B0
s32 func_ovl8_803806B0(s32 arg0, s32 arg1)
{
    return 0;
}

// 0x803806C0
void func_ovl8_803806C0(dbUnknown5* arg0, void* arg1, void* arg2, void* arg3, s32 arg4, s32 arg5)
{
    func_ovl8_8037FF40(arg0->unk_dbunk5_0xB4, arg2, arg3, arg4, arg5);
}

// 0x80380704
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380704.s")

// 0x80380920
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380920.s")

// 0x80380AD0
void func_ovl8_80380AD0(dbUnknown7* arg0) 
{
    Vec2h pos;
    u16 sp22;
    u16 sp20;
    dbFunction* temp_v0;

    if (arg0->unkAC[0] != 0) {
        
        pos.x = arg0->unkAC[3] + 2;
        pos.y = arg0->unkAC[4] * arg0->unkAC[0];
    
        temp_v0 = arg0->unk20->db_func;
        temp_v0[9].unk_dbfunc_0x4(((u8*)arg0->unk20 + temp_v0[9].unk_dbfunc_0x0), &pos.x);
        
        func_ovl8_80375BA0(D_8038EFCC_1AB81C, &sp22, &sp20);
        
        pos.x -= sp22;
        pos.y -= sp20;
        func_ovl8_80375BD0(&pos.x);
    }
}


// 0x80380B6C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380B6C.s")

// 0x80380C30
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_15/func_ovl8_80380C30.s")

// 0x80380DD8
void func_ovl8_80380DD8(s32 arg0, db4Shorts* arg1, s32* arg2, s32* arg3, s32* arg4, s32* arg5)
{
    *arg2 = arg1->arr[0];
    *arg3 = arg1->arr[1];
    *arg4 = *arg2 * arg1->arr[2];
    *arg5 = arg1->arr[2];
}

// 0x80380E14
void func_ovl8_80380E14(dbUnknown3* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk3_0x18 = &D_ovl8_8038B720;\
        arg0->unk_dbunk3_0x20->unk_dbunk3_0x58 = &D_ovl8_8038B7F0;
        arg0->unk_dbunk3_0x1C->unk_dbunklink_0x8 = &D_ovl8_8038B948;
        arg0->unk_dbunk3_0x44 = &D_ovl8_8038B970;

        func_ovl8_8038011C(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk3_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunk3_0x20, 0);
        }

        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

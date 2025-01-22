#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

extern dbUnknownLinkStruct D_ovl8_803890A0;
extern dbFunction D_ovl8_80389170;
extern dbUnknownLink D_ovl8_803892C8;
extern dbUnknownLinkStruct D_ovl8_803892F0;
extern dbFunction D_ovl8_803893C8;
extern dbUnknownLink D_ovl8_80389520;

// TODO: move to h file
typedef struct dbUnknown5
{
    f32 unk_dbunk5_0x0;
    f32 unk_dbunk5_0x4;
    f32 unk_dbunk5_0x8;
    s8 unk_dbunk5_0xC;
    u8 filler_0x10[0x8];
    dbFunction *db_func;
    u8 filler_0x1C[0x2];
    s16 unk_dbunk5_0x1E;
    f32 unk_dbunk5_0x20;
    s32 unk_dbunk5_0x24;
    s32 unk_dbunk5_0x28;
    s32 unk_dbunk5_0x2C;
    dbUnknownLinkStruct *unk_dbunk5_0x30;
    dbUnknownLink *unk_dbunk5_0x34;
    dbUnknownLinkStruct *unk_dbunk5_0x38;
    dbUnknownLinkStruct *unk_dbunk5_0x3C;
    dbUnknownLinkStruct *unk_dbunk5_0x40;
    u8 filler_0x44[0x4];
    dbUnknownLinkStruct *unk_dbunk5_0x48;
    u8 filler_0x4C[0xC];
    dbFunction *unk_dbunk5_0x58;
    u8 filler_0x5C[0x40];
    dbUnknownLinkStruct *unk_dbunk5_0x9C;
} dbUnknown5;

typedef struct dbUnknown5_2
{
    u8 dbUnknown5_2_filler_0x0[0xC];
    char dbUnknown5_2_string[0x10];
    u8 dbUnknown5_2_filler_0x1C[0x14];
    dbFunction *dbUnknown5_2_db_func;
} dbUnknown5_2;

// 0x80373350
dbUnknownLinkStruct* func_ovl8_80373350(s32 arg0, s32 arg1)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xA4);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037345C(temp_v0, 0, 0, arg1, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x803733AC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803733AC.s")
// void* func_ovl8_803733AC(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA4)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x48;
//             arg2 = &arg0->unk_dbunk5_0x3C;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         arg0->unk_dbunk5_0x38 = arg1;
//         arg0->unk_dbunk5_0x34 = arg2;
//         arg0->unk_dbunk5_0x30 = &D_ovl8_803890A0;
//         arg1->db_func = &D_ovl8_80389170;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_803892C8;

//         func_ovl8_803735E4(arg0);
//     }

//     return arg0;
// }

// 0x8037345C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037345C.s")
// void* func_ovl8_8037345C(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, dbBytesCopy2* arg3, dbUnknown5* arg4)
// {
//     dbFunction *temp_v0;

//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA4)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x48;
//             arg2 = &arg0->unk_dbunk5_0x3C;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         arg0->unk_dbunk5_0x38 = arg1;
//         arg0->unk_dbunk5_0x34 = arg2;
//         arg0->unk_dbunk5_0x30 = &D_ovl8_803890A0;
//         arg1->db_func = &D_ovl8_80389170;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_803892C8;

//         func_ovl8_80371ECC(arg0->unk_dbunk5_0x38, arg3);
//         func_ovl8_803735E4(arg0);

//         if (arg2 != NULL); // necessary for reg swap

//         temp_v0 = arg0->unk_dbunk5_0x38;
//         ((dbUnknownLinkStruct*)temp_v0)->unk_dbunkstruct_0x4C = arg4;
//         arg0->unk_dbunk5_0x1E = arg3->unk_dbbytescopy_0x1C;
//         temp_v0 = arg4->db_func;
//     	temp_v0[7].unk_dbfunc_0x4(temp_v0[7].unk_dbfunc_0x0 + (uintptr_t)arg4, arg0);
//     }

//     return arg0;
// }

// 0x8037354C
void func_ovl8_8037354C(dbUnknown5 *arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_803890A0;\
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_80389170;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_803892C8;

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

// 0x803735E4
void func_ovl8_803735E4(dbUnknown5 *arg0)
{
    dbUnknown5* var_a1;

    arg0->unk_dbunk5_0xC = 0;
    arg0->unk_dbunk5_0x24 = 0;
    arg0->unk_dbunk5_0x28 = 0;
    arg0->unk_dbunk5_0x2C = 0;
    arg0->unk_dbunk5_0x0 = 0.0f;
    arg0->unk_dbunk5_0x20 = 0.0f;
    arg0->unk_dbunk5_0x4 = 0.0f;
    arg0->unk_dbunk5_0x8 = 1.0f;

    var_a1 = arg0;

    if (arg0 != NULL)
    {
        var_a1 = arg0->unk_dbunk5_0x38;
    }

    func_ovl8_8037C3AC(arg0->unk_dbunk5_0x34, var_a1);
}

// 0x80373640
void func_ovl8_80373640(s32 arg0) {}

// 0x80373648
void func_ovl8_80373648(s32 arg0) {}

// 0x80373650
void func_ovl8_80373650(dbUnknown5* arg0)
{
    dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
    temp_v0[13].unk_dbfunc_0x4(temp_v0[13].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x8037367C
f32 func_ovl8_8037367C(f32* arg0)
{
    return *arg0;
}

// 0x80373684
f32 func_ovl8_80373684(Vec3f* arg0)
{
    return arg0->y;
}

// 0x8037368C
f32 func_ovl8_8037368C(Vec3f* arg0)
{
    return arg0->z;
}

// 0x80373694
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373694.s")

// 0x80373750
void func_ovl8_80373750(dbUnknown5* arg0, f32 arg1)
{
    dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
    ((void (*)(void*, f32))temp_v0[8].unk_dbfunc_0x4)(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)arg0, arg0->unk_dbunk5_0x0 + arg1);
}

// 0x80373790
void func_ovl8_80373790(dbUnknown5* arg0, f32 arg1)
{
    arg0->unk_dbunk5_0x4 = arg1;

    if (arg0->unk_dbunk5_0x0 < arg1)
    {
        dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
        ((void (*)(void*, f32))temp_v0[8].unk_dbfunc_0x4)(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    }
}

// 0x803737DC
void func_ovl8_803737DC(dbUnknown5* arg0, f32 arg1)
{
    arg0->unk_dbunk5_0x8 = arg1;

    if (arg0->unk_dbunk5_0x0 > arg1)
    {
        dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
        ((void (*)(void*, f32))temp_v0[8].unk_dbfunc_0x4)(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    }
}

// 0x80373828
s32 func_ovl8_80373828(dbUnknown5* arg0, s32 arg1)
{
    arg0->unk_dbunk5_0x20 = 0.0f;
    return 0;
}

// 0x8037383C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037383C.s")

// 0x80373930
void func_ovl8_80373930(dbUnknown5_2* arg0, char* arg1)
{
    dbFunction* temp_v0;

    if (arg1 != NULL)
    {
        stringCopyCount(&arg0->dbUnknown5_2_string, arg1, 0x10);
    }
    else
    {
        arg0->dbUnknown5_2_string[0] = 0;
    }

    temp_v0 = arg0->dbUnknown5_2_db_func;
    temp_v0[2].unk_dbfunc_0x4(temp_v0[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80373980
s32 func_ovl8_80373980(dbUnknown5* arg0)
{
    return arg0->unk_dbunk5_0x28;
}

// 0x80373988
void func_ovl8_80373988(dbUnknown5* arg0, s32 arg1)
{
    arg0->unk_dbunk5_0x2C = arg1;
}

// 0x80373990
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373990.s")

// 0x80373A28
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373A28.s")

// 0x80373ABC
void func_ovl8_80373ABC(s32 arg0) {}

// 0x80373AC4
s32 func_ovl8_80373AC4(dbUnknown5* arg0, db4Bytes arg1)
{
    s32 retval;
    s32 sp20;
    dbUnknownLinkStruct* temp_v0;
    dbFunction* temp_v1;

    temp_v0 = arg0->unk_dbunk5_0x38;
    temp_v1 = temp_v0->db_func;
    temp_v1[22].unk_dbfunc_0x4(temp_v1[22].unk_dbfunc_0x0 + (uintptr_t)temp_v0, &sp20);

    if (func_ovl8_80377168(arg1, &sp20) != 0)
    {
        retval = 1;
    }
    else
    {
        retval = 0;
    }

    return retval;
}

// 0x80373B28
void func_ovl8_80373B28(dbUnknown5* arg0, db4Bytes arg1, s32 arg2)
{
    dbFunction* temp_v1;
    s32 sp20;

    temp_v1 = arg0->unk_dbunk5_0x38->db_func;
    temp_v1[22].unk_dbfunc_0x4(temp_v1[22].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp20);

    func_ovl8_80377168(arg1, &sp20);
}

// 0x80373B84
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373B84.s")

// 0x80373BC0
void func_ovl8_80373BC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {}

// 0x80373BD4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373BD4.s")

// 0x80373C10
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373C10.s")
// void* func_ovl8_80373C10(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x40;
//             arg2 = &arg0->unk_dbunk5_0x9C;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_803733AC(arg0, arg1, arg2);
//         arg0->unk_dbunk5_0x30 = &D_ovl8_803892F0;
//         arg1->db_func = &D_ovl8_803893C8;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_80389520;

//         func_ovl8_803743CC(arg0, 0);
//     }

//     return arg0;
// }

// 0x80373CC4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373CC4.s")
// void* func_ovl8_80373CC4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x40;
//             arg2 = &arg0->unk_dbunk5_0x9C;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_8037345C(arg0, arg1, arg2, arg3, arg4);
//         arg0->unk_dbunk5_0x30 = &D_ovl8_803892F0;
//         arg1->db_func = &D_ovl8_803893C8;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_80389520;

//         func_ovl8_803743CC(arg0, 0);
//     }

//     return arg0;
// }

// 0x80373D88
void func_ovl8_80373D88(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_803892F0;\
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_803893C8;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_80389520;

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

// 0x80373E24
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373E24.s")

// 0x80373EA8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373EA8.s")

// 0x803743C0
void func_ovl8_803743C0(u16* arg0, u16 arg1)
{
    arg0[0x3C / 2] = arg1;
}

// 0x803743CC
void func_ovl8_803743CC(u16* arg0, u16 arg1)
{
    arg0[0x3C / 2] = arg1;
}

// 0x803743D8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803743D8.s")

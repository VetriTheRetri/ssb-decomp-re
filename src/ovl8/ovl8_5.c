#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

// TODO: move to h file
typedef struct dbUnknown5
{
    u8 dbUnknown5_filler_0x0[0x20];
    f32 dbUnknown5_20;
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

// 0x8037345C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037345C.s")

// 0x8037354C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037354C.s")

// 0x803735E4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803735E4.s")

// 0x80373640
void func_ovl8_80373640(s32 arg0) {}

// 0x80373648
void func_ovl8_80373648(s32 arg0) {}

// 0x80373650
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373650.s")

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
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373750.s")

// 0x80373790
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373790.s")

// 0x803737DC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803737DC.s")

// 0x80373828
s32 func_ovl8_80373828(dbUnknown5* arg0, s32 arg1)
{
    arg0->dbUnknown5_20 = 0.0f;
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
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373980.s")

// 0x80373988
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373988.s")

// 0x80373990
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373990.s")

// 0x80373A28
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373A28.s")

// 0x80373ABC
void func_ovl8_80373ABC(s32 arg0) {}

// 0x80373AC4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373AC4.s")

// 0x80373B28
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373B28.s")

// 0x80373B84
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373B84.s")

// 0x80373BC0
void func_ovl8_80373BC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {}

// 0x80373BD4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373BD4.s")

// 0x80373C10
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373C10.s")

// 0x80373CC4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373CC4.s")

// 0x80373D88
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373D88.s")

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

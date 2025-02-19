#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

typedef struct dbUnknownStruct_80375C54
{
	GObj* unk0;
	s32* unk4;

} dbUnknownStruct_80375C54;

// probably part of another struct?
typedef struct db2ShortsContainer
{
    db2Shorts unk_db2shortscont_0x0;
} db2ShortsContainer;

extern db2ShortsContainer D_8038EFB0_1AB800;

// 0x80374460
s32 func_ovl8_80374460(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xC4);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037C7D4(temp_v0, 0, 0, arg1, arg2, arg3, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x803744D4
s32 func_ovl8_803744D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xB8);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037CBA0(temp_v0, 0, 0, arg1, arg2, arg3, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x80374548
s32 func_ovl8_80374548(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0x120);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037E97C(temp_v0, 0, 0, arg1, arg2, arg3, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x803745BC
s32 func_ovl8_803745BC(s32 arg0, s32 arg1, s32 arg2)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xA8);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037EF0C(temp_v0, 0, 0, arg1, arg2, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x80374624
s32 func_ovl8_80374624(s32 arg0, s32 arg1)
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

// 0x80374680
s32 func_ovl8_80374680(s32 arg0, s32 arg1)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xB4);
    if (temp_v0 != NULL)
    {
        func_ovl8_80380FC4(temp_v0, 0, 0, arg1, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x803746DC
s32 func_ovl8_803746DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0x140);
    if (temp_v0 != NULL)
    {
        func_ovl8_80382870(temp_v0, 0, 0, arg1, arg2, arg3, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x80374750
s32 func_ovl8_80374750(s32 arg0, s32 arg1, s32 arg2)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xC8);
    if (temp_v0 != NULL)
    {
        func_ovl8_80382B44(temp_v0, 0, 0, arg1, arg2, arg0);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x803747B8
s32 func_ovl8_803747B8(s32 arg0, dbUnknown5 *arg1)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xA8);
    if (temp_v0 != NULL)
    {
        func_ovl8_8038259C(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk5_0x24);
        var_v1 = temp_v0;
    }
    else
        var_v1 = 0;

    return var_v1;
}

// 0x8037481C
void func_ovl8_8037481C(Vec3i* arg0, s32 arg1)
{
    func_ovl8_80373158(arg0, arg1);
}

// 0x8037483
void func_ovl8_8037483C(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x20->db_func;
    temp_v0[39].unk_dbfunc_0x4(temp_v0[39].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunks38_0x20);
}

// 0x8037486C
void func_ovl8_8037486C(dbUnknown3 *arg0)
{
    func_ovl8_80372C00(arg0);
}

// 0x8037488C
void func_ovl8_8037488C(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    if (arg0 != NULL)
    {
        temp_v0 = arg0->unk_dbunks38_0x18;
        temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t)arg0, 3);
    }
}

// 0x803748C0
void func_ovl8_803748C0(dbUnknownS38* arg0, s32 arg1)
{
    dbFunction* temp_v0;
    dbFunction* temp_v0_2;

    if (arg1 != 0)
    {
        temp_v0 = arg0->unk_dbunks38_0x18;
        temp_v0[19].unk_dbfunc_0x4(temp_v0[19].unk_dbfunc_0x0 + (uintptr_t)arg0);
    }
    else {
        temp_v0 = arg0->unk_dbunks38_0x18;
        temp_v0[20].unk_dbfunc_0x4(temp_v0[20].unk_dbfunc_0x0 + (uintptr_t)arg0);
    }
}

// 0x80374910
void func_ovl8_80374910(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x18;
    temp_v0[6].unk_dbfunc_0x4(temp_v0[6].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037493C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037497C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037499C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803749BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803749EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803750CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803750E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803751C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803755C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037588C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803758B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803758E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803759F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375B04.s")

void func_ovl8_80375B8C(u16* arg0, u16 arg1, u16 arg2)
{
	arg0[0x16/2] = arg2;
	arg0[0x14/2] = arg1;
}

void func_ovl8_80375BA0(u16* arg0, u16* arg1, u16* arg2)
{
	*arg1 = arg0[0x14/2];
	*arg2 = arg0[0x16/2];
}

// 0x80375BB4
void func_ovl8_80375BB4(db2Shorts *arg0)
{
    *arg0 = D_8038EFB0_1AB800.unk_db2shortscont_0x0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375BEC.s")

void func_ovl8_80375C54(dbUnknownStruct_80375C54* arg0)
{
	if (arg0->unk0 != 0)
		func_8000A24C(arg0->unk0, 0);

	if (arg0->unk4 != NULL)
	{
		// unk4 is supposed to be GObj* but set to 32 to match
		func_80009C90(arg0->unk4, 0, -1);
		*arg0->unk4 = -0x1FE;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375CB8.s")

void func_ovl8_80375D44(Vec3i* arg0, s32 arg1)
{
	arg0[2].x = arg1;
}

s32 func_ovl8_80375D4C(Vec3i* arg0)
{
	return arg0[2].x;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375D84.s")

void func_ovl8_80375E00(Vec3i* arg0, s32 arg1)
{
	arg0[2].y = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80375E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80376010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80376164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803761F4.s")

s32 func_ovl8_803762AC(Vec3i* arg0)
{
	return arg0[4].z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803762B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803764C8.s")
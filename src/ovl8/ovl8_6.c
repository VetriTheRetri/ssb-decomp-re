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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803744D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803745BC.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803746DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803747B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037481C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037486C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_8037488C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_803748C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6/func_ovl8_80374910.s")

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
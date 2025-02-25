#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

// probably part of another struct?
typedef struct db2ShortsContainer
{
	db2Shorts unk_db2shortscont_0x0;
} db2ShortsContainer;

typedef struct dbUnknownStruct_80375C54
{
	GObj* unk0;
	GObj* unk4;
} dbUnknownStruct_80375C54;

extern db2ShortsContainer D_8038EFB0_1AB800;

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803758B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803758E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803759F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375B04.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375BEC.s")

void func_ovl8_80375C54(dbUnknownStruct_80375C54* arg0)
{
	if (arg0->unk0 != 0)
		func_8000A24C(arg0->unk0, 0);

	if (arg0->unk4 != NULL)
	{
		// unk4 is supposed to be GObj* but set to 32 to match
		func_80009C90(arg0->unk4, 0, -1);
		arg0->unk4->id = -0x1FE;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375CB8.s")

void func_ovl8_80375D44(Vec3i* arg0, s32 arg1)
{
	arg0[2].x = arg1;
}

s32 func_ovl8_80375D4C(Vec3i* arg0)
{
	return arg0[2].x;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375D84.s")

void func_ovl8_80375E00(Vec3i* arg0, s32 arg1)
{
	arg0[2].y = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80376010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80376164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803761F4.s")

s32 func_ovl8_803762AC(Vec3i* arg0)
{
	return arg0[4].z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803762B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803764C8.s")
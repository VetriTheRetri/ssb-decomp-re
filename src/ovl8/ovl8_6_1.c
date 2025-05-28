#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>

// probably part of another struct?
typedef struct db2ShortsContainer
{
	db2Shorts unk_db2shortscont_0x0;
} db2ShortsContainer;

typedef struct dbUnknown6_1_spriteContainer {
    u8 dbUnknown6_1_spriteContainer_0x0[0x10];
    Sprite dbUnknown6_1_spriteContainer_0x10;
} dbUnknown6_1_spriteContainer;

typedef struct dbUnknown6_1 {
    u8 dbUnknown6_1_0x0[0x14];
    u16 dbUnknown6_1_0x14;
    u16 dbUnknown6_1_0x16;
    s32 dbUnknown6_1_0x18;
    s32 dbUnknown6_1_0x1C;
    u8 dbUnknown6_1_0x20[0x74 - 0x20];
    dbUnknown6_1_spriteContainer* dbUnknown6_1_0x74;
} dbUnknown6_1;

extern dbFunction D_ovl8_80389830;
extern dbFunction D_ovl8_80389898;
extern dbFunction D_ovl8_803899F0;
extern dbFunction D_ovl8_80389AA8;
extern dbUnknownLink D_ovl8_80389C00;
extern dbFunction D_ovl8_80389C28;
extern db2ShortsContainer D_8038EFB0_1AB800;
extern dbBytesContainer D_8038EFB8_1AB808;
extern dbTestMenu* D_8038EFCC_1AB81C;

// 0x803758B0
void func_ovl8_803758B0(void)
{
    dbFunction* temp_v0;

    temp_v0 = D_8038EFCC_1AB81C->unk_dbtestmenu_0x10->db_func;
    temp_v0[29].unk_dbfunc_0x4(temp_v0[29].unk_dbfunc_0x0 + (uintptr_t)D_8038EFCC_1AB81C->unk_dbtestmenu_0x10);
}

// 0x803758E8
void func_ovl8_803758E8(void)
{
    dbFunction* temp_v0;

    temp_v0 = D_8038EFCC_1AB81C->unk_dbtestmenu_0x10->db_func;
    temp_v0[30].unk_dbfunc_0x4(temp_v0[30].unk_dbfunc_0x0 + (uintptr_t)D_8038EFCC_1AB81C->unk_dbtestmenu_0x10);
}

// 0x80375920
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375920.s")

// 0x803759F0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803759F0.s")

// 0x80375B04
void func_ovl8_80375B04(dbTestMenu *arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->db_func = &D_ovl8_80389830;\
        arg0->unk_dbtestmenu_0x10->db_func = &D_ovl8_80389898;

        func_ovl8_803720D4(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_803718C4(arg0->unk_dbtestmenu_0x10, 0);
        }

        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x80375B8C
void func_ovl8_80375B8C(u16* arg0, u16 arg1, u16 arg2)
{
	arg0[0x16/2] = arg2;
	arg0[0x14/2] = arg1;
}

// 0x80375BA0
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

// 0x80375BD0
void func_ovl8_80375BD0(db2ShortsContainer* arg0)
{
    D_8038EFB0_1AB800.unk_db2shortscont_0x0 = arg0->unk_db2shortscont_0x0;
}

// 0x80375BEC
void func_ovl8_80375BEC(dbUnknown6_1* arg0, dbUnknown6_1* arg1)
{
    s32 unused[2];
    dbUnknown6_1_spriteContainer *temp_v0;
    s32 x;
    s32 y;

    temp_v0 = arg1->dbUnknown6_1_0x74;
    if (arg0->dbUnknown6_1_0x1C != 0)
    {
        func_ovl8_80375E60(arg0);
    }

    x = D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[0] - arg0->dbUnknown6_1_0x14;
    y = D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[1] - arg0->dbUnknown6_1_0x16;
    spMove(&temp_v0->dbUnknown6_1_spriteContainer_0x10, x, y);
}

// 0x80375C54
void func_ovl8_80375C54(dbMenuSprite* arg0)
{
	if (arg0->unk_dbmenusprite_0x0 != 0)
		func_8000A24C(arg0->unk_dbmenusprite_0x0, 0);

	if (arg0->unk_dbmenusprite_0x4 != NULL)
	{
		func_80009C90(arg0->unk_dbmenusprite_0x4, 0, -1);
		arg0->unk_dbmenusprite_0x4->id = -0x1FE;
	}
}

// 0x80375CB8
s16 func_ovl8_80375CB8(s32 arg0, s16 arg1)
{
    s32 var_v0;
    s16 var_v1 = (arg1 * arg1) / 64;

    if (var_v1 == 0)
    {
        return 0;
    }

    var_v1 = var_v1 / 12;

    if (var_v1 == 0)
	{
        var_v1 = 1;
    }
	else if (var_v1 > 16)
	{
        var_v1 = 16;
    }

    return (arg1 < 0) ? -var_v1 : var_v1;
}

// 0x80375D44
void func_ovl8_80375D44(Vec3i* arg0, s32 arg1)
{
	arg0[2].x = arg1;
}

// 0x80375D4C
s32 func_ovl8_80375D4C(Vec3i* arg0)
{
	return arg0[2].x;
}

// 0x80375D54
void func_ovl8_80375D54(dbTestMenu *arg0, db4Shorts *arg1)
{
    D_8038EFB8_1AB808.unk_dbbytescont_0x0 = *arg1;
}

// 0x80375D84
void func_ovl8_80375D84(s32 arg0)
{
    if (D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[0] < D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[0])
    {
        D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[0] = D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[0];
    }
    else if (D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[2] < D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[0])
    {
        D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[0] = D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[2];
    }

    if (D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[1] < D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[1])
    {
        D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[1] = D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[1];
    }
    else if (D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[3] < D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[1])
    {
        D_8038EFB0_1AB800.unk_db2shortscont_0x0.arr[1] = D_8038EFB8_1AB808.unk_dbbytescont_0x0.arr[3];
    }
}

// 0x80375E00
void func_ovl8_80375E00(Vec3i* arg0, s32 arg1)
{
	arg0[2].y = arg1;
}

// 0x80375E08
void func_ovl8_80375E08(dbTestMenu* arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4);
#ifdef NON_MATCHING
void func_ovl8_80375E08(dbTestMenu* arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;
    temp_v0[10].unk_dbfunc_0x4(temp_v0[10].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);

    func_ovl8_80375B8C(arg0, arg3, arg4);

    if (arg2);
    arg0->unk_dbtestmenu_0x10->unk_dbunkstruct_0xC = arg2;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375E08.s")
#endif /* NON_MATCHING */

// 0x80375E60
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80375E60.s")

// 0x80376010
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80376010.s")

// 0x80376164
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_80376164.s")

// 0x803761F4
void func_ovl8_803761F4(dbUnknownS38 *arg0, s32 arg1);
#ifdef NON_MATCHING
void func_ovl8_803761F4(dbUnknownS38 *arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunks38_0x18 = &D_ovl8_803899F0;\
        arg0->unk_dbunks38_0x20->db_func = &D_ovl8_80389AA8;
        arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = &D_ovl8_80389C00;
        arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = &D_ovl8_80389C28;

        func_ovl8_803720D4(&arg0->unk_dbunks38_0x38, 0);
        func_ovl8_8037295C(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
        }

        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803761F4.s")
#endif /* NON_MATCHING */

// 0x803762AC
s32 func_ovl8_803762AC(Vec3i* arg0)
{
	return arg0[4].z;
}

// 0x803762B4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803762B4.s")

// 0x803764C8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_6_1/func_ovl8_803764C8.s")
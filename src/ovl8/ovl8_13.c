#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>


typedef struct dbUnknownS14 {
    s32 dbUnknownS14_0x0;
    db4Bytes dbUnknownS14_0x4;
    db4Bytes dbUnknownS14_0x8;
    s32 dbUnknownS14_0xC;
    s32 dbUnknownS14_0x10;
} dbUnknownS14;

extern GObj* D_ovl8_8038A860;
extern dbUnknownLinkStruct D_ovl8_8038A8A0;
extern dbFunction D_ovl8_8038A980;
extern dbUnknownLink D_ovl8_8038AAD8;
extern dbUnknownLinkStruct D_ovl8_8038AB00;

extern Vec3i D_8038EFF0_1AB840;
extern s32 D_8038EFEC_1AB83C;
extern Vec3i D_8038EFE0_1AB830;
extern s16 D_8038EFFC_1AB84C;
extern s16 D_8038F000_1AB850[];
extern u16 D_8038F00C_1AB85C;
extern u16 D_8038F044_1AB894;
extern u16 D_8038F046_1AB896;
extern DBFont D_8038F008_1AB858;
extern s16 D_8038F030_1AB880;
extern f32 D_8038F034_1AB884;
extern void* D_8038F03C_1AB88C;
extern u16 D_8038F044_1AB894;
extern u16 D_8038F046_1AB896;

extern dbUnknownS14 D_8038FB90_1AC3E0;
extern db4Bytes D_8038FB98_1AC3E8;

void func_ovl8_8037D000();
void func_ovl8_8037D470();
void func_ovl8_8037D518();
void func_ovl8_8037D45C();
void func_ovl8_8037D5AC();
void func_ovl8_8037D9B4(db4Bytes*);

// 0x8037D000
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D000.s")

// 0x8037D28C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D28C.s")

// 0x8037D2F0
s32 func_ovl8_8037D2F0()
{
    D_ovl8_8038A860 = gcMakeGObjSPAfter(-0x1FA, func_ovl8_8037D000, 0, -1);

    if (D_ovl8_8038A860 == 0)
    {
        return -1;
    }

    func_ovl8_8037D45C();

    D_8038EFFC_1AB84C = 0;

    return 0;
}

// 0x8037D34C
void func_ovl8_8037D34C()
{
	if (D_ovl8_8038A860 != NULL)
	{
		gcEjectGObj(D_ovl8_8038A860);
		D_ovl8_8038A860 = NULL;
	}
}

// 0x8037D384
sb32 func_ovl8_8037D384()
{
    sb32 var_v1 = D_8038EFE0_1AB830.x != 0;

    if (var_v1 == FALSE)
    {
        var_v1 = D_8038EFE0_1AB830.y != 0;
    }

    return var_v1;
}

// 0x8037D3AC
Vec3i* func_ovl8_8037D3AC(Vec3i* arg0)
{
    *arg0 = D_8038EFE0_1AB830;
    D_8038EFE0_1AB830.x = 0;
    D_8038EFE0_1AB830.y = 0;

    return arg0;
}

// 0x8037D3DC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D3DC.s")

// 0x8037D404
void* func_ovl8_8037D404(Vec3i* arg0, s32 arg1)
{
    D_8038EFEC_1AB83C = arg1;
    D_8038EFF0_1AB840 = *arg0;

    return arg0;
}

// 0x8037D434
void* func_ovl8_8037D434(Vec3i* arg0)
{
    D_8038EFE0_1AB830 = *arg0;

    return arg0;
}

// 0x8037D45C
void func_ovl8_8037D45C()
{
    D_8038EFE0_1AB830.y = 0;
    D_8038EFE0_1AB830.x = 0;
}

// 0x8037D470
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D470.s")

// 0x8037D518
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D518.s")

// 0x8037D5AC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D5AC.s")

// 0x8037D63C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D63C.s")

// 0x8037D6D4
void func_ovl8_8037D6D4(DBFont* dbFont)
{
	u16 temp_a1;
	s32 var_v0;

	D_8038F008_1AB858 = *dbFont;
	temp_a1 = (D_8038F008_1AB858.unk_dbfont_0x2 * D_8038F008_1AB858.unk_dbfont_0x8) & 0xFFFF;
	var_v0 = (temp_a1 & 7 ? 1 : 0);

	D_8038F030_1AB880 = ((temp_a1 / 8) + var_v0) * D_8038F008_1AB858.unk_dbfont_0x4;
	D_8038F034_1AB884 = D_8038F008_1AB858.unk_dbfont_0x8 == 1 ? 1.0f : (f32) (1 << D_8038F008_1AB858.unk_dbfont_0x8);

	if (D_8038F008_1AB858.unk_dbfont_0x8 == 1)
	{
		D_8038F03C_1AB88C = func_ovl8_8037D5AC;
		return;
	}
	if (D_8038F008_1AB858.unk_dbfont_0x8 == 2)
	{
		D_8038F03C_1AB88C = func_ovl8_8037D518;
		return;
	}
	D_8038F03C_1AB88C = func_ovl8_8037D470;
}

// 0x8037D7D4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D7D4.s")

// 0x8037D8CC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D8CC.s")

// 0x8037D908
void func_ovl8_8037D908(dbUnknownS14* arg0)
{
    D_8038FB90_1AC3E0 = *arg0;

    func_ovl8_8037D9B4(&D_8038FB98_1AC3E8);
}

// 0x8037D95C
void func_ovl8_8037D95C(dbUnknownS14* arg0)
{
    *arg0 = D_8038FB90_1AC3E0;
}

// 0x8037D990
void func_ovl8_8037D990(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x0 = arg0;
}

// 0x8037D99C
void func_ovl8_8037D99C(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0xC = arg0;
}

// 0x8037D9A8
void func_ovl8_8037D9A8(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x10 = arg0;
}

// 0x8037D9B4
void func_ovl8_8037D9B4(db4Bytes* arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x8 = *arg0;
}

// 0x8037D9D0
void func_ovl8_8037D9D0(db4Bytes* arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x4 = *arg0;
}

// 0x8037D9EC
void func_ovl8_8037D9EC(u16 arg0, u16 arg1)
{
    D_8038F044_1AB894 = arg0;
    D_8038F046_1AB896 = arg1;
}

// 0x8037DA08
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DA08.s")

// 0x8037DAA0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DAA0.s")

void func_ovl8_8037DD60(DBMenuPosition* pos, char* text)
{
	s16 temp_s5;
	char current;

	temp_s5 = D_8038F000_1AB850[0];
	for (current = *text; current != '\0'; text++, current = *text)
	{
		if (current == '\n')
		{
			D_8038F000_1AB850[0] = temp_s5;
			D_8038F000_1AB850[1] = D_8038F008_1AB858.unk_dbfont_0x4 + D_8038F000_1AB850[1] + D_8038F046_1AB896;
		}
		else
			func_ovl8_8037DAA0(pos, current);
	}
}

// 0x8037DE1C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DE1C.s")

void func_ovl8_8037DFCC(s16 arg0, s16 arg1)
{
	D_8038F000_1AB850[1] = arg1;
	D_8038F000_1AB850[0] = arg0;
}

// 0x8037DFF8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DFF8.s")

// 0x8037E6F4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E6F4.s")

// 0x8037E7A8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E7A8.s")

// 0x8037E80C
u16 func_ovl8_8037E80C()
{
    return D_8038F00C_1AB85C;
}

// 0x8037E818
u16 func_ovl8_8037E818()
{
    return D_8038F044_1AB894;
}

// 0x8037E824
u16 func_ovl8_8037E824()
{
    return D_8038F046_1AB896;
}

// 0x8037E830
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E830.s")

// 0x8037E8C8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E8C8.s")

// 0x8037E97C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E97C.s")

// 0x8037EB00
void func_ovl8_8037EB00(dbUnknown5* arg0, s32 arg1)
{
    s32 temp_a0;

    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038A8A0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038A980;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038AAD8;
        arg0->unk_dbunk5_0x4C = &D_ovl8_8038AB00;

        temp_a0 = arg0->unk_dbunk5_0xB0;
        arg0->unk_dbunk5_0x48 = 0;
        arg0->unk_dbunk5_0xB0 = 0;
        arg0->unk_dbunk5_0xB4 = 0;

        if (temp_a0 != 0) {
            func_ovl8_8037B3E4(temp_a0);
        }

        func_ovl8_8037C92C(arg0, 0);

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

// 0x8037EBC8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037EBC8.s")
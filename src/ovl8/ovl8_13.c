#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>


extern DBFont D_8038F008_1AB858;
extern s16 D_8038F030_1AB880;
extern f32 D_8038F034_1AB884;
extern void* D_8038F03C_1AB88C;
extern void func_ovl8_8037D470();
extern void func_ovl8_8037D518();
extern void func_ovl8_8037D5AC();

extern s16 D_8038F000_1AB850[];
extern u16 D_8038F046_1AB896;
extern GObj* D_ovl8_8038A860;


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D2F0.s")

void func_ovl8_8037D34C()
{
	if (D_ovl8_8038A860 != NULL)
	{
		gcEjectGObj(D_ovl8_8038A860);
		D_ovl8_8038A860 = NULL;
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D3DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D63C.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D8CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D9EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DA08.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DE1C.s")

void func_ovl8_8037DFCC(s16 arg0, s16 arg1)
{
	D_8038F000_1AB850[1] = arg1;
	D_8038F000_1AB850[0] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037EB00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037EBC8.s")
#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

extern s16 D_8038F000[];
extern u16 D_8038F008[];
extern u16 D_8038F046;
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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D6D4.s")

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

void func_ovl8_8037DD60(dbMenuPosition* pos, char* text)
{
	s16 temp_s5;
	char current;

	temp_s5 = D_8038F000[0];
	for (current = *text; current != '\0'; text++, current = *text)
	{
		if (current == '\n')
		{
			D_8038F000[0] = temp_s5;
			D_8038F000[1] = D_8038F008[2] + D_8038F000[1] + D_8038F046;
		}
		else
			func_ovl8_8037DAA0(pos, current);
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DE1C.s")

void func_ovl8_8037DFCC(s16 arg0, s16 arg1)
{
	D_8038F000[1] = arg1;
	D_8038F000[0] = arg0;
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
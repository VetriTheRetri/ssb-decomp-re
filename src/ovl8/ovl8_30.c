#include "common.h"

typedef struct dbUnknownStruct_803864CC
{
	u16 unk0;
	u16 unk2;
	u16 unk4;
	u16 unk6;
	s32 unk8[7];
	s32 unk24;

} dbUnknownStruct_803864CC;

extern u16 D_ovl8_8038E1E4;
extern s32 D_803903C0_1ACC10;
extern s32 D_803903C4_1ACC14;
extern s32 D_803903C8_1ACC18;

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_8038612C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80386228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_803863A4.s")

s32 func_ovl8_80386488(s32 arg0, s32 arg1)
{
	D_803903C8_1ACC18 = arg0;
	return 0;
}

void func_ovl8_8038649C()
{
	func_ovl8_8037B3E4(D_803903C4_1ACC14);
	func_ovl8_8037488C(D_803903C0_1ACC10);
}

void func_ovl8_803864CC(s32 arg0, dbUnknownStruct_803864CC* arg1)
{
	s32 temp_v1;
	s32 temp_lo;

	temp_v1 = func_ovl8_8037E7A8(arg1->unk24) + 4;
	temp_lo = arg0 * temp_v1;
	arg1->unk0 = ((D_ovl8_8038E1E4 - temp_lo) - (arg0 * 2)) - 4;
	arg1->unk2 = 4;
	arg1->unk4 = temp_v1;
	arg1->unk6 = 0x10;
}
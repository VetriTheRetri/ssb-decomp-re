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

extern void* D_ovl8_8038E1E0;
extern u16 D_ovl8_8038E1E4;
extern dbUnknownStruct_803864CC D_ovl8_8038E208;
extern dbUnknownStruct_803864CC D_ovl8_8038E564;
extern s32 D_803903C0_1ACC10;
extern s32 D_803903C4_1ACC14;
extern s32 D_803903C8_1ACC18;

s32 func_ovl8_80386488(s32, s32);
void func_ovl8_8038649C();

// 0x80385E10
void func_ovl8_80385E10(s32 arg0, ...)
{
    func_ovl8_803863A4(0x30, 1, &arg0);

    D_ovl8_8038E208 = D_ovl8_8038E564;

    D_803903C0_1ACC10 = func_ovl8_80381C80(&D_ovl8_8038E1E0);
}

// 0x80385E98
void func_ovl8_80385E98(s32 arg0)
{
    s32 temp_v0;

    func_ovl8_803863A4(arg0, 0, 0);
    D_803903C0_1ACC10 = func_ovl8_80381C80(&D_ovl8_8038E1E0);
    func_ovl8_8037481C(D_803903C0_1ACC10, func_ovl8_80386488);
}

// 0x80385EE4
void func_ovl8_80385EE4(void)
{
    func_ovl8_8038649C();
}

// 0x80385F04
void func_ovl8_80385F04(const char *str, ...)
{
    s32 unused;
    char sp18[250];

    func_ovl8_80386BE0(sp18, &str);
    func_ovl8_80385F44(1, sp18);
}

// 0x80385F44
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80385F44.s")

// 0x8038612C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_8038612C.s")

// 0x80386228
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_80386228.s")

// 0x803863A4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_30/func_ovl8_803863A4.s")

// 0x80386488
s32 func_ovl8_80386488(s32 arg0, s32 arg1)
{
	D_803903C8_1ACC18 = arg0;
	return 0;
}

// 0x8038649C
void func_ovl8_8038649C()
{
	func_ovl8_8037B3E4(D_803903C4_1ACC14);
	func_ovl8_8037488C(D_803903C0_1ACC10);
}

// 0x803864CC
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
#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803865D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803866AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803867E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803868C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803868EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387154.s")

// 80387420 seems to copy too
void func_ovl8_80387420(char* target, char* source, s32 count);
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_8038746C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387540.s")

s32 func_ovl8_803879A0(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0x140);

	if (temp_v0 != 0)
	{
		func_ovl8_803879FC(temp_v0, 0, 0, arg1, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803879FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387AF8.s")

void func_ovl8_80387BD0(s32 arg0)
{
	func_ovl8_80381308(arg0 + 0xB8);
}

void func_ovl8_80387BF0(s32 arg0, s32 arg1)
{
	func_ovl8_80381B04(arg0 + 0xB8);
	func_ovl8_80373694(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387C24.s")
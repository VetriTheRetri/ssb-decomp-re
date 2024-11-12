#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

extern dbUnknownLinkStruct D_ovl8_8038BC34;
extern dbUnknownLinkStruct D_ovl8_8038BC8C;

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038116C.s")

void func_ovl8_8038120C(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;
	
	arg0->unk_dbunkstruct_0x1C = &D_ovl8_8038BC34;
	func_ovl8_80381908();
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038125C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_803812BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_803817C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038185C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_803819F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381A88.s")

void func_ovl8_80381AF0(f32** arg0, s32 arg1)
{
	*arg0[1] = (f32) arg1;
}

void func_ovl8_80381B04(s32 arg0, s32 arg1) {}

void func_ovl8_80381B10(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;
	
	arg0->unk_dbunkstruct_0x1C = &D_ovl8_8038BC8C;
	func_ovl8_8038120C(arg0, 0);
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}
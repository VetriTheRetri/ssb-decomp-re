#include <sys/develop.h>
#include <debug.h>


s32 func_ovl8_80382D90(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xAC);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_80382EA8(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
	}
	else
		sp24 = 0;

	return sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80382DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80382EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80382F70.s")

void func_ovl8_8038300C(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80383014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_803831C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_803832A4.s")

void func_ovl8_80383300(dbUnknownLinkStruct* arg0)
{
	s32 temp_v1;
	s32* temp_v0;
	func_ovl8_80371DD0(arg0->unk_dbunkstruct_0x38);
	temp_v1 = arg0->unk_dbunkstruct_0x40;
	temp_v0 = temp_v1 + 0x7C;

	if (temp_v1 != 0)
		*temp_v0 &= ~1;
}

void func_ovl8_80383344(dbUnknownLinkStruct* arg0)
{
	s32 temp_v1;
	s32* temp_v0;
	func_ovl8_80371DDC(arg0->unk_dbunkstruct_0x38);
	temp_v1 = arg0->unk_dbunkstruct_0x40;
	temp_v0 = temp_v1 + 0x7C;

	if (temp_v1 != 0)
		*temp_v0 |= 1;
}
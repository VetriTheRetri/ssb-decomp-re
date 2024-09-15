#include <sys/develop.h>

extern dbUnknownLink D_8038EE70;

void func_ovl8_80371460(dbUnknownLink* arg0, dbUnknownLink* arg1, dbUnknownLink* arg2)
{
	arg0->unk_dbunklink_0xC = arg1;
	arg1->unk_dbunklink_0xC = arg2;
	arg2->unk_dbunklink_0x10 = arg1;
	arg1->unk_dbunklink_0x10 = arg0;
}

void func_ovl8_80371474(dbUnknownLink* arg0)
{
	func_ovl8_80371460(D_8038EE70.unk_dbunklink_0x10, arg0, &D_8038EE70);
}

void func_ovl8_803714A0(dbUnknownLink *arg0)
{
	dbUnknownLink* temp_v0;
	dbUnknownLink* temp_v1;
	temp_v0 = arg0->unk_dbunklink_0x10;
	temp_v1 = arg0->unk_dbunklink_0xC;
	temp_v0->unk_dbunklink_0xC = temp_v1;
	temp_v1->unk_dbunklink_0x10 = temp_v0;
}

dbUnknownLink* func_ovl8_803714B4(s32 arg0)
{
	dbUnknownLink* var_v1;
	for (var_v1 = D_8038EE70.unk_dbunklink_0xC; var_v1 != &D_8038EE70; var_v1 = var_v1->unk_dbunklink_0xC)
	{
		if ((s32)var_v1->unk_dbunklink_0x4 >= arg0)
			return var_v1;
	}
	return NULL;
}
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/func_ovl8_803714F8.s")

// also in snap nonmatchings/unk_end_level/83D730/func_8036A0BC_83D86C.s
void func_ovl8_80371560(dbUnknownLink* arg0);
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/func_ovl8_80371560.s")

// also in snap nonmatchings/unk_end_level/83D730/func_80369FD4_83D784.s
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/func_ovl8_80371638.s")

s32 func_ovl8_8037169C(s32 arg0)
{
	if (arg0 < 8U)
		arg0 = 8U;

	return func_ovl8_803714B4((arg0 + 0xF) & ~3) != 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/func_ovl8_803716D8.s")

void func_ovl8_80371764(s32 arg0)
{
	func_ovl8_80371560(arg0 - 0xC);
}
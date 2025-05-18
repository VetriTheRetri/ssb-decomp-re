#include <common.h>
#include <sys/develop.h>

extern dbUnknownLinkStruct D_ovl8_8038A4A0;
extern dbFunction D_ovl8_8038A578;
extern dbUnknownLink D_ovl8_8038A6D0;

void func_ovl8_8037CE30(s32 arg0);

// 0x8037CA60
s32 func_ovl8_8037CA60(s32 arg0, s32** arg1)
{
	s32 sp34;
	s32* temp_v0;
	s32 var_v1;
	s32 var_t0;

	temp_v0 = arg1[0x24/4];
	var_v1 = 0;
	var_t0 = 0;
	if (temp_v0 != NULL)
	{
		var_v1 = temp_v0[0x0/4];
		var_t0 = temp_v0[0x4/4];
	}
	sp34 = func_ovl8_803717A0(0xB8);
	if (sp34 != 0)
	{
		func_ovl8_8037CBA0(sp34, 0, 0, arg1, var_v1, var_t0, arg0);
		var_v1 = sp34;
	}
	else
		var_v1 = 0;

	return var_v1;
}

// https://decomp.me/scratch/6KieT
// 0x8037CAF0
void* func_ovl8_8037CAF0(dbUnknownLinkStruct* arg0, dbUnknownLinkStruct* arg1, s32* arg2);
#ifdef NON_MATCHING
void* func_ovl8_8037CAF0(dbUnknownLinkStruct* arg0, dbUnknownLinkStruct* arg1, s32* arg2)
{
	dbUnknownLinkStruct* temp_a0;
	if ((arg0 != NULL) || ((arg0 = func_ovl8_803717A0(0xB8)) != NULL))
	{
		temp_a0 = arg0 + 1;
		if (arg1 == NULL)
		{
			arg1 = temp_a0;
			arg2 = &arg0->unk_dbunkstruct_0x50;
			func_ovl8_803717E0(arg1, arg2);
			func_ovl8_8037C2D0(arg2);
		}
		func_ovl8_80373C10(arg0, arg1, arg2);
		arg0->unk_dbunkstruct_0x30 = &D_ovl8_8038A4A0;
		arg1->db_func = &D_ovl8_8038A578;
		arg2[0x8/4] = &D_ovl8_8038A6D0;
		func_ovl8_8037CE30(arg0);
	}
	return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CAF0.s")
#endif /* NON_MATCHING */

// 0x8037CBA0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CBA0.s")

// 0x8037CCC8
void func_ovl8_8037CCC8(dbUnknown5* arg0, s32 arg1)
{
	if (arg0 != NULL)
	{
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038A4A0,
		arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038A578;
		arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038A6D0;

		func_ovl8_80373D88(arg0, 0);

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

// 0x8037CD64
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11_1/func_ovl8_8037CD64.s")

void func_ovl8_8037CE30(s32 arg0) {}
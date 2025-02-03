#include <common.h>
#include <sys/develop.h>

// 0x8037C6DC
void func_ovl8_8037C6DC(void*** arg0, s32* arg1, s32* arg2);

// 0x8037C660
s32 func_ovl8_8037C660(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 sp3C;
	s32 sp34;
	s32 sp30;
	s32 var_v1;

	func_ovl8_8037C6DC(arg1, &sp34, &sp30);
	temp_v0 = func_ovl8_803717A0(0xC4);
	if (temp_v0 != 0)
	{
		func_ovl8_8037C7D4(temp_v0, 0, 0, arg1, sp34, sp30, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

// 0x8037C6DC
void func_ovl8_8037C6DC(void*** arg0, s32* arg1, s32* arg2)
{
	void** temp_v0;

	temp_v0 = arg0[0x24/4];
	if (temp_v0 != NULL)
	{
		*arg1 = temp_v0[0x0/4];
		*arg2 = arg0[0x24/4][0x4/4];
		return;
	}
	*arg2 = 0;
	*arg1 = 0;
}

// https://decomp.me/scratch/zHMoz
// 0x8037C710
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C710.s")

// 0x8037C7D4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C7D4.s")

// 0x8037C92C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_11/func_ovl8_8037C92C.s")
// void func_ovl8_8037C92C(dbUnknown5* arg0, s32 arg1)
// {
//     if (arg0 != NULL)
//     {
//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038A1D0,
//         arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038A2B0;
//         arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038A408;
//         arg0->unk_dbunk5_0x4C = &D_ovl8_8038A430;

//         func_ovl8_80372554(&arg0->unk_dbunk5_0x40, 0);
//         func_ovl8_80373D88(arg0, 0);

//         if (arg1 != 0)
//         {
//             func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
//             func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
//         }
//         if (arg1 & 1)
//         {
//             func_ovl8_803717C0(arg0);
//         }
//     }
// }

// 0x8037C9E4
void func_ovl8_8037C9E4(dbUnknown5* arg0)
{
    dbUnknownLinkStruct *var_v0;
    dbUnknownLinkStruct *var_v1;

    if (arg0->unk_dbunk5_0x0 != 0.0f)
    {
        var_v0 = arg0->unk_dbunk5_0xB0;
        var_v1 = (var_v0 != 0) ? var_v0 : arg0->unk_dbunk5_0xB4;
        var_v0 = var_v1;
    }
    else
    {
        var_v0 = arg0->unk_dbunk5_0xB4;
    }

    arg0->unk_dbunk5_0x48 = var_v0;
    func_ovl8_803725DC(&arg0->unk_dbunk5_0x40, arg0);
}

// 0x8037CA48
void func_ovl8_8037CA48(s32 arg0) {}

// 0x8037CA50
void func_ovl8_8037CA50(s32* arg)
{
	arg[0xb4/4] = 0;
	arg[0xb0/4] = 0;
}
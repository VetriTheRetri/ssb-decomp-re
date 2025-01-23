#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

extern dbUnknownLinkStruct D_ovl8_8038AB70;
extern dbFunction D_ovl8_8038AC48;
extern dbUnknownLink D_ovl8_8038ADA0;

// 0x8037EE00
s32 func_ovl8_8037EE00(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xA8);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8037EF0C(temp_v0, 0, 0, arg1, arg1->unk_dbunk3_0x24, arg0);
	}
	else
		sp24 = 0;

	return sp24;
}

// 0x8037EE64
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037EE64.s")
// void* func_ovl8_8037EE64(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x4C;
//             arg2 = &arg0->unk_dbunk5_0x40;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_80373C10(arg0, arg1, arg2);

//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038AB70;
//         arg1->db_func = &D_ovl8_8038AC48;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_8038ADA0;

//     }

//     return arg0;
// }

// 0x8037EF0C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037EF0C.s")

// 0x8037F030
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037F030.s")

// 0x8037F260
void func_ovl8_8037F260(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038AB70;\
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038AC48;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038ADA0;

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
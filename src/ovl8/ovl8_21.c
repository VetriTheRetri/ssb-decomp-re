#include "common.h"
#include <sys/develop.h>

// 0x80382AE0
s32 func_ovl8_80382AE0(s32 arg0, dbUnknown3* arg1)
{
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_ovl8_803717A0(0xC8);

    if (temp_v0 != 0)
    {
        func_ovl8_80382B44(temp_v0, NULL, NULL, arg1, arg1->unk_dbunk3_0x24, arg0);
        var_v1 = temp_v0;
    }
    else
    {
        var_v1 = 0;
    }

    return var_v1;
}

// 0x80382B44
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_21/func_ovl8_80382B44.s")
// void* func_ovl8_80382B44(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4, s32 arg5)
// {
//     s32 foo;

//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xC8)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x60;\
//             arg2 = &arg0->unk_dbunk5_0xBC;\
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_8037EF0C(arg0, arg1, arg2, arg3, 0, arg5);
//         func_ovl8_8038116C(&arg0->unk_dbunk5_0x40, arg4, arg0);

//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038C4E0,
//         arg1->db_func = &D_ovl8_8038C5B8;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_8038C710;
//         arg0->unk_dbunk5_0x5C = &D_ovl8_8038C738;
//         func_ovl8_80382CDC(arg0);
//     }

//     return arg0;
// }

// 0x80382C24
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_21/func_ovl8_80382C24.s")

// 0x80382CDC
void func_ovl8_80382CDC(dbUnknown5* arg0)
{
    s32 current_value = arg0->unk_dbunk5_0x0;

    arg0->unk_dbunk5_0x0 = 0.0f;

    func_ovl8_8037F030(arg0);

    arg0->unk_dbunk5_0x0 = current_value;
}

// 0x80382D30
void func_ovl8_80382D30(s32 arg0)
{
	func_ovl8_80381308(arg0 + 0x40);
}

// 0x80382D50
void func_ovl8_80382D50(s32 arg0, s32 arg1)
{
	func_ovl8_803817C0(arg0 + 0x40);
	func_ovl8_80373694(arg0, arg1);
}
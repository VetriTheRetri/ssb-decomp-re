#include "common.h"

#include <sys/develop.h>

extern dbUnknownLinkStruct D_ovl8_8038BD20;
extern dbFunction D_ovl8_8038BDF0;
extern dbUnknownLink D_ovl8_8038BF48;
extern dbUnknownLinkStruct D_ovl8_8038BF70;
extern dbFunction D_ovl8_8038C040;
extern dbUnknownLink D_ovl8_8038C198;

extern void stringCopy(char* target, char* source);

void func_ovl8_803822D8(dbUnknownLinkStruct* arg0, s32 arg1);

// 0x803820B0
void* func_ovl8_803820B0(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2);
#ifdef NON_MATCHING
void* func_ovl8_803820B0(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x40;
            arg2 = &arg0->unk_dbunk5_0x9C;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_803733AC(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038BD20;
        arg1->db_func = &D_ovl8_8038BDF0;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038BF48;
        arg0->unk_dbunk5_0x3C.ls = 0;
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_19/func_ovl8_803820B0.s")
#endif /* NON_MATCHING */

// 0x8038215C
void* func_ovl8_8038215C(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, dbUnknown3* arg3, s32 arg4, s32 arg5);
#ifdef NON_MATCHING
void* func_ovl8_8038215C(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, dbUnknown3* arg3, s32 arg4, s32 arg5)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x40;
            arg2 = &arg0->unk_dbunk5_0x9C;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_8037345C(arg0, arg1, arg2, arg3, arg4);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038BD20;
        arg1->db_func = &D_ovl8_8038BDF0;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038BF48;
        arg0->unk_dbunk5_0x3C.ls = 0;

        func_ovl8_803822D8(arg0, arg5);
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_19/func_ovl8_8038215C.s")
#endif /* NON_MATCHING */

// 0x80382224
void func_ovl8_80382224(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038BD20,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038BDF0;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038BF48;

        if (arg0->unk_dbunk5_0x3C.ls != 0)
        {
            func_ovl8_80371764(arg0->unk_dbunk5_0x3C.ls);
        }

        func_ovl8_8037354C(arg0, 0);

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

// 0x803822D8
void func_ovl8_803822D8(dbUnknownLinkStruct* arg0, s32 arg1)
{
	s32 temp_a2;
	s32 temp_v0;
	dbFunction *db_func;
	dbUnknownLinkStruct* temp_v1;

	temp_a2 = arg0->unk_dbunkstruct_0x3C;

	if (temp_a2 != 0)
		func_ovl8_80371764(temp_a2);

	temp_v0 = func_ovl8_803716D8(stringLength(arg1) + 1);
	arg0->unk_dbunkstruct_0x3C = temp_v0;
	stringCopy(temp_v0, arg1);

	db_func = arg0->unk_dbunkstruct_0x38->db_func;
	db_func[35].unk_dbfunc_0x4(db_func[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x38, 1);
}

// 0x80382354
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_19/func_ovl8_80382354.s")

// 0x80382490
s32 func_ovl8_80382490(s32 arg0, s32* arg1)
{
	s32 temp_v0;
	s32 sp24;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xA8);
	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8038259C(temp_v0, 0, 0, arg1, arg0, arg1[0x24/4]);
		var_v1 = sp24;
	}
	else
		var_v1 = 0;
	return var_v1;
}

// 0x803824F4
void* func_ovl8_803824F4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2);
#ifdef NON_MATCHING
void* func_ovl8_803824F4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x4C;
            arg2 = &arg0->unk_dbunk5_0x40;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_803820B0(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038BF70;
        arg1->db_func = &D_ovl8_8038C040;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038C198;
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_19/func_ovl8_803824F4.s")
#endif /* NON_MATCHING */

// 0x8038259C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_19/func_ovl8_8038259C.s")

// 0x80382670
void func_ovl8_80382670(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;
	arg0->unk_dbunkstruct_0x30 = &D_ovl8_8038BF70, arg0->unk_dbunkstruct_0x38->db_func = &D_ovl8_8038C040;
	arg0->unk_dbunkstruct_0x34[0x8/4] = &D_ovl8_8038C198;
	func_ovl8_80382224(arg0, 0);
	if (arg1 != 0)
	{
		func_ovl8_8037C30C(arg0->unk_dbunkstruct_0x34, 0);
		func_ovl8_803718C4(arg0->unk_dbunkstruct_0x38, 0);
	}
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}
#include <sys/develop.h>
#include <db/debug.h>

extern dbUnknownLinkStruct D_ovl8_8038C790;
extern dbFunction D_ovl8_8038C890;
extern dbUnknownLink D_ovl8_8038C9E8;

// 0x80382D90
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

// 0x80382DF4
#ifdef NON_MATCHING
/*
 * NONMATCHING: instruction order around func_ovl8_803717E0
 */

void* func_ovl8_80382DF4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xAC)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x50;\
            arg2 = &arg0->unk_dbunk5_0x44;\
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_80373C10(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
        arg1->db_func = &D_ovl8_8038C890;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;
        arg0->unk_dbunk5_0x40.ls = NULL;
        arg0->unk_dbunk5_0x3C.s_16 = 3;
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80382DF4.s")
#endif /* NON_MATCHING */

// 0x80382EA8
#ifdef NON_MATCHING
/*
 * NONMATCHING: instruction order around func_ovl8_803717E0
 */

void* func_ovl8_80382EA8(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4, s32 arg5)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xAC)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x50;\
            arg2 = &arg0->unk_dbunk5_0x44;\
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_80373CC4(arg0, arg1, arg2, arg3, arg4);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
        arg1->db_func = &D_ovl8_8038C890;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;
        arg0->unk_dbunk5_0x40.ls = arg5;
        arg0->unk_dbunk5_0x3C.s_16 = 3;
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80382EA8.s")
#endif /* NON_MATCHING */

// 0x80382F70
void func_ovl8_80382F70(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038C890;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;

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

// 0x8038300C
void func_ovl8_8038300C(s32 arg0) {}

// 0x80383014
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_80383014.s")

// 0x803831C8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_22/func_ovl8_803831C8.s")

// 0x803832A4
void func_ovl8_803832A4(dbUnknownLinkStruct* arg0)
{
    dbUnknownLinkStruct* temp_a1;
    dbUnknownS38* temp_v0;
    dbFunction* db_func;

    if (arg0->unk_dbunkstruct_0x40 != 0)
    {
        temp_a1 = arg0->unk_dbunkstruct_0x38;
        temp_v0 = (dbUnknownS38*)temp_a1->unk_dbunkstruct_0x4C;
        db_func = temp_v0->unk_dbunks38_0x18;

        func_8000A2B4(arg0->unk_dbunkstruct_0x40, db_func[6].unk_dbfunc_0x4(db_func[6].unk_dbfunc_0x0 + (uintptr_t)temp_v0, temp_a1, arg0));
    }
}

// 0x80383300
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

// 0x80383344
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
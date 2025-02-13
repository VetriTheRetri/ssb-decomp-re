#include <sys/develop.h>
#include <db/debug.h>

typedef struct dbUnknownThing {
    u8 dbUnknownThing_0x0[0x3C - 0x0];
    s16 dbUnknownThing_0x3C;
    s16 dbUnknownThing_0x3E;
    u8 dbUnknownThing_0x40[0x44 - 0x40];
    s16 dbUnknownThing_0x44;
    s16 dbUnknownThing_0x46;
} dbUnknownThing;

extern dbUnknownLinkStruct D_ovl8_8038D0D0;
extern dbFunction D_ovl8_8038D218;
extern dbUnknownLink D_ovl8_8038D370;
extern dbUnknownLinkStruct D_ovl8_8038D3A0;
extern dbFunction D_ovl8_8038D4C0;
extern dbUnknownLink D_ovl8_8038D618;

// 0x80384460
s32 func_ovl8_80384460(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xC0);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8038456C(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
	}
	else
		sp24 = 0;

	return sp24;
}

// 0x803844C4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803844C4.s")
// void* func_ovl8_803844C4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
// {
//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xC0)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x64;
//             arg2 = &arg0->unk_dbunk5_0x58;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_803833A0(arg0, arg1, arg2);

//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038D0D0;
//         arg1->db_func = &D_ovl8_8038D218;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_8038D370;
//     }

//     return arg0;
// }

// 0x8038456C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_8038456C.s")
// void* func_ovl8_8038456C(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, dbUnknown3* arg3, s32 arg4, s32 arg5)
// {
//     dbFunction *db_func;

//     if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xC0)) != NULL))
//     {
//         if (arg1 == NULL)
//         {
//             arg1 = &arg0->unk_dbunk5_0x64;
//             arg2 = &arg0->unk_dbunk5_0x58;
//             func_ovl8_803717E0(arg1);
//             func_ovl8_8037C2D0(arg2);
//         }

//         func_ovl8_80383450(arg0, arg1, arg2, arg3, arg4);

//         arg0->unk_dbunk5_0x30 = &D_ovl8_8038D0D0;
//         arg1->db_func = &D_ovl8_8038D218;
//         arg2->unk_dbunklink_0x8 = &D_ovl8_8038D370;

//         if (arg5 != 0) {
//             db_func = arg0->unk_dbunk5_0x30;
//             db_func[33].unk_dbfunc_0x4(db_func[33].unk_dbfunc_0x0 + (uintptr_t)arg0, arg5);
//         }

//         db_func = arg0->unk_dbunk5_0x30;
//         db_func[2].unk_dbfunc_0x4(db_func[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
//     }

//     return arg0;
// }

// 0x80384654
void func_ovl8_80384654(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038D0D0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038D218;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038D370;

        func_ovl8_80383510(arg0, 0);

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

// 0x803846F0
s16 func_ovl8_803846F0(dbUnknownS38* arg0)
{
    return arg0->unk_dbunks38_0x38.unk_dbunkstruct_0x2.arr[2];
}

// 0x803846F8
void func_ovl8_803846F8(dbUnknownS38* arg0, s32 arg1)
{
    arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x4(arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    arg0->unk_dbunks38_0x30[2].unk_dbfunc_0x4(arg0->unk_dbunks38_0x30[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80384748
void func_ovl8_80384748(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x30;
    temp_v0[29].unk_dbfunc_0x4(temp_v0[29].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80384774
void func_ovl8_80384774(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x30;
    temp_v0[30].unk_dbfunc_0x4(temp_v0[30].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x803847A0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803847A0.s")

// 0x803848CC
void func_ovl8_803848CC(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038D3A0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038D4C0;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038D618;

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

// 0x80384968
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384968.s")

// 0x80384AE8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384AE8.s")

// 0x80384B90
s32 func_ovl8_80384B90(dbUnknownThing* arg0, s32 arg1)
{
    if (arg1 <= 0)
    {
        return 0;
    }
    if (((arg0->dbUnknownThing_0x3E - arg0->dbUnknownThing_0x46) + 1) < arg1)
    {
        return 0;
    }
    arg0->dbUnknownThing_0x3C = arg1;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384C0C.s")

s16 func_ovl8_80384C44(s16* arg0)
{
	return arg0[0x3c/2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80385024.s")

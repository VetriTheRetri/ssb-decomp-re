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
extern SYColorRGBA D_ovl8_8038D640; // = { 0xFF, 0x00, 0x00, 0xFF };

void* func_ovl8_8038456C(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, dbUnknown3* arg3, s32 arg4, s32 arg5);

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
void* func_ovl8_803844C4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2);
#ifdef NON_MATCHING
void* func_ovl8_803844C4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xC0)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x64;
            arg2 = &arg0->unk_dbunk5_0x58;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_803833A0(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038D0D0;
        arg1->db_func = &D_ovl8_8038D218;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038D370;
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_803844C4.s")
#endif /* NON_MATCHING */

// 0x8038456C
#ifdef NON_MATCHING
void* func_ovl8_8038456C(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, dbUnknown3* arg3, s32 arg4, s32 arg5)
{
    dbFunction *db_func;

    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xC0)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x64;
            arg2 = &arg0->unk_dbunk5_0x58;
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
        }

        func_ovl8_80383450(arg0, arg1, arg2, arg3, arg4);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038D0D0;
        arg1->db_func = &D_ovl8_8038D218;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038D370;

        if (arg5 != 0) {
            db_func = arg0->unk_dbunk5_0x30;
            db_func[33].unk_dbfunc_0x4(db_func[33].unk_dbfunc_0x0 + (uintptr_t)arg0, arg5);
        }

        db_func = arg0->unk_dbunk5_0x30;
        db_func[2].unk_dbfunc_0x4(db_func[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
    }

    return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_8038456C.s")
#endif /* NON_MATCHING */

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
    return arg0->unk_dbunks38_0x38.position.w;
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
void func_ovl8_80384AE8(dbUnknown5_2* arg0, s32* arg1) {
    s32* var_v0;
    dbFunction* temp_v0;
    dbFunction* temp_v0_2;

    arg0->dbUnknown5_2_unk_0x3E = 0;
    var_v0 = arg1;
    
    for (var_v0 = arg1; var_v0 != NULL && *var_v0 != 0; var_v0++) {
        arg0->dbUnknown5_2_unk_0x3E++;
    }

    temp_v0 = arg0->dbUnknown5_2_db_func;
    arg0->dbUnknown5_2_unk_0x40 = arg1;
    
    temp_v0[10].unk_dbfunc_0x4(temp_v0[10].unk_dbfunc_0x0 + (uintptr_t) arg0, 0x3F800000, arg0, arg1);
    
    temp_v0_2 = arg0->dbUnknown5_2_db_func;
    
    ((sb32 (*)(uintptr_t, f32))(temp_v0_2[11].unk_dbfunc_0x4))(
        temp_v0_2[11].unk_dbfunc_0x0 + 
            (uintptr_t)arg0,
        arg0->dbUnknown5_2_unk_0x3E
    );
}


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

// 0x80384BD4
void func_ovl8_80384BD4(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x30;
    temp_v0[26].unk_dbfunc_0x4(temp_v0[26].unk_dbfunc_0x0 + (uintptr_t)arg0, arg0->unk_dbunks38_0x38.position.y + 1);
}

// 0x80384C0C
void func_ovl8_80384C0C(dbUnknownS38* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunks38_0x30;
    temp_v0[26].unk_dbfunc_0x4(temp_v0[26].unk_dbfunc_0x0 + (uintptr_t)arg0, arg0->unk_dbunks38_0x38.position.y - 1);
}

// 0x80384C44
s16 func_ovl8_80384C44(s16* arg0)
{
	return arg0[0x3c/2];
}

// 0x80384C4C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384C4C.s")

// 0x80384D58
void func_ovl8_80384D58(dbUnknownS38 *arg0, s32 arg1) 
{
    ((void (*)(void*, s32))arg0->unk_dbunks38_0x30[30].unk_dbfunc_0x4)(
        arg0->unk_dbunks38_0x30[30].unk_dbfunc_0x0 + (uintptr_t)arg0, 
        ((f32 (*)(void*, s32))arg0->unk_dbunks38_0x30[5].unk_dbfunc_0x4)(arg0->unk_dbunks38_0x30[5].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1) - 1.0
    );
}

// 0x80384DC4
void func_ovl8_80384DC4(dbUnknownS38 *arg0, s32 arg1) {
    ((void (*)(void*, s32))arg0->unk_dbunks38_0x30[30].unk_dbfunc_0x4)(
        arg0->unk_dbunks38_0x30[30].unk_dbfunc_0x0 + (uintptr_t)arg0, 
        ((f32 (*)(void*, s32))arg0->unk_dbunks38_0x30[5].unk_dbfunc_0x4)(arg0->unk_dbunks38_0x30[5].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1) + 1.0
    );
}

// 0x80384E30
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80384E30.s")

// 0x80384F3C
void func_ovl8_80384F3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    SYColorRGBA colors;

    *(SYColorRGBA*)&colors = *(SYColorRGBA*)&D_ovl8_8038D640;

    func_ovl8_80378064(arg1, arg2, &colors, 4);
}

// 0x80384F90
s32 func_ovl8_80384F90(dbUnknown5* arg0, s16 arg1)
{
    s32 var_v1;
    db4Shorts sp24;
    dbFunction* temp_v0;

    temp_v0 = arg0->unk_dbunk5_0x38->db_func;
    temp_v0[22].unk_dbfunc_0x4(temp_v0[22].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp24, arg0);

    var_v1 = (arg1 / arg0->unk_dbunk5_0x44.s_16) + arg0->unk_dbunk5_0x3C.s_16;

    if (arg1 < sp24.arr[1])
    {
        var_v1 -= 1;
    }
    return var_v1;
}

// 0x80385024
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_25/func_ovl8_80385024.s")

#include "common.h"

#include <sys/develop.h>
#include <db/debug.h>

typedef struct {
	s32 unk0[0x118/4];
	s16 unk118;
	u16 unk11A;
	s32 (*unk11C)(void*, s32, void*);
} unkStructA;

typedef struct {
	u8 unk0[0x30];
	void* unk30;
	s32 unk34;
	unkStructA** unk38;
	u8* unk3C;
	s16 unk40;
	s16 unk42;
	s16 unk44;
	s32 unk48;
	s32 unk4C;
	s32 unk50;
	s32 unk54;
} unkStructB;

typedef struct {
    u8 pad_0x0[0x30];
    void *unk30;
    u8 pad_0x34[0x4];
    dbUnknownLinkStruct *unk38;
    s32 unk3C;
    u8 pad_0x40[0x8];
    s32 unk48;
    s32 unk4C;
} Arg0Struct;

typedef struct {
    s16 val;
    s16 pad1;
    s32 pad2;
} Sp48Struct;

extern s32 D_ovl8_8038CCD8;
extern dbUnknownLinkStruct D_ovl8_8038CA10;
extern dbFunction D_ovl8_8038CB58;
extern dbUnknownLink D_ovl8_8038CCB0;

void func_ovl8_80383B58(unkStructB* arg0);

// 0x803833A0
void* func_ovl8_803833A0(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2);
#ifdef NON_MATCHING
void* func_ovl8_803833A0(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
	if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xC0)) != NULL)
	{
		if (arg1 == NULL)
		{
			arg1 = &arg0->unk_dbunk5_0x58;
			arg2 = &arg0->unk_dbunk5_0xB4;
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
		}
		func_ovl8_803733AC(arg0, arg1, arg2);
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038CA10;
		arg1->db_func = &D_ovl8_8038CB58;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038CCB0;
		func_ovl8_80383B58(arg0);
	}
	return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803833A0.s")
#endif /* NON_MATCHING */

// 0x80383450
void* func_ovl8_80383450(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4);
#ifdef NON_MATCHING
void* func_ovl8_80383450(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4)
{
	if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xC0)) != NULL)
	{
		if (arg1 == NULL)
		{
			arg1 = &arg0->unk_dbunk5_0x58;
			arg2 = &arg0->unk_dbunk5_0xB4;
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
		}
		func_ovl8_8037345C(arg0, arg1, arg2, arg3, arg4);
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038CA10;
		arg1->db_func = &D_ovl8_8038CB58;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038CCB0;
		func_ovl8_80383B58(arg0);
	}
	return arg0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383450.s")
#endif /* NON_MATCHING */

// 0x80383510
void func_ovl8_80383510(dbUnknown5* arg0, s32 arg1)
{
	dbUnknownLinkStruct* temp_a0;

	if (arg0 == NULL)
		return;

	arg0->unk_dbunk5_0x30 = &D_ovl8_8038CA10, arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038CB58;
	arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038CCB0;
	temp_a0 = arg0->unk_dbunk5_0x3C.ls;

	if (temp_a0 != NULL)
		func_ovl8_80371764(temp_a0);

	func_ovl8_8037354C(arg0, 0);
	if (arg1 != 0)
	{
		func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
		func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
	}

	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

// 0x803835C4
s32 func_ovl8_803835C4(s32* arg0, s32 arg1)
{
	s32 temp_a2;
	dbUnknownLink**  temp_v0;

	temp_a2 = arg0[0x3C/4];
	if (temp_a2 != 0)
		func_ovl8_80371764(temp_a2);

	temp_v0 = func_ovl8_803716D8(arg1 + 1);
	arg0[0x3C/4] = temp_v0;

	if (temp_v0 != 0)
		return 1;

	return 0;
}

// 0x80383618
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383618.s")

// 0x803836D4
void func_ovl8_803836D4(dbUnknownS38* arg0, u16 arg1)
{
	s32 temp_v1 = arg1;

	arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x4(arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x0 + (uintptr_t)arg0, (u8)temp_v1 & 0xFF);

	if (temp_v1 & 0xFF00)
	{
		arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x4(arg0->unk_dbunks38_0x30[26].unk_dbfunc_0x0 + (uintptr_t)arg0, (u8)(temp_v1 >> 8));
	}
}

// 0x8038374C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_8038374C.s")

// 0x803837F0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803837F0.s")

// 0x8038388C
void func_ovl8_8038388C(unkStructB* arg0)
{
	func_ovl8_8037B7F0(arg0->unk3C, arg0->unk42 - 1, arg0);
}

// 0x803838B8
void func_ovl8_803838B8(unkStructB* arg0)
{
	func_ovl8_8037B7F0(arg0->unk3C, arg0->unk42, arg0);
}

// 0x803838E0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803838E0.s")

// 0x803839D0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_803839D0.s")

// 0x80383A78
s32 func_ovl8_80383A78(s32* arg0)
{
	return arg0[0x3c/4];
}

// 0x80383A80
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383A80.s")

// 0x80383B58
void func_ovl8_80383B58(unkStructB* arg0)
{
	dbFunction* db_func;
	db_func = arg0->unk30;
	arg0->unk3C = NULL;
	db_func[25].unk_dbfunc_0x4(db_func[25].unk_dbfunc_0x0 + (uintptr_t)arg0, 0x20, arg0);
	arg0->unk40 = 0x20;
	arg0->unk44 = 0;
	arg0->unk42 = 0;
	*arg0->unk3C = 0;
	arg0->unk50 = 0;
	arg0->unk54 = 0;
	arg0->unk48 = 0;
	arg0->unk4C = 0;
}

// 0x80383BC4
void func_ovl8_80383BC4(Arg0Struct *arg0) {
    s32 sp5C;
    s32 sp58;
    DBMenuPosition sp50;
    Sp48Struct sp48;
    s16 sp44[2];
    s32 sp40;
    dbFunction* temp_v1;
    s32 sp2C[4];
    s32 result;

    if (arg0->unk48 != 0) {
        return;
    }

    temp_v1 = arg0->unk38->db_func;
    sp5C = temp_v1[23].unk_dbfunc_0x4(temp_v1[23].unk_dbfunc_0x0 + (uintptr_t)arg0->unk38);

    if (sp5C == 0) {
        return;
    }

    if (arg0->unk4C != 0) {
        arg0->unk4C = 0;
        func_ovl8_8037D95C(sp2C);
        func_ovl8_8037E7A8(arg0->unk3C);


        temp_v1 = arg0->unk38->db_func;
        temp_v1[21].unk_dbfunc_0x4(temp_v1[21].unk_dbfunc_0x0 + (uintptr_t)arg0->unk38, &sp50);

        func_ovl8_8037B46C(sp5C, &sp50.x, &D_ovl8_8038CCD8, &arg0->unk38->bg_color);
        func_ovl8_8037D990(0x10);
        func_ovl8_8037D9D0(&arg0->unk38->text_color);

        sp44[0] = sp50.x + 6;\
        sp44[1] = sp50.y + 6;
        func_ovl8_8037A5B8(sp5C, sp44, &sp40);
        func_ovl8_8037D9B4(&sp40);

        temp_v1 = arg0->unk30;
        temp_v1[37].unk_dbfunc_0x4(temp_v1[37].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp48.val, 0);

        result = func_ovl8_8037E80C();
        func_ovl8_8037DFCC((s16)(sp50.x + sp48.val), (s16)(sp50.y + (sp50.h / 2) - (result / 2)));

        func_ovl8_8037DD60(sp5C, arg0->unk3C);
        func_ovl8_8037D908(sp2C);
    }

    temp_v1 = arg0->unk30;
    temp_v1[38].unk_dbfunc_0x4(temp_v1[38].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80383D4C
void func_ovl8_80383D4C(dbUnknown5* arg0)
{
	u64 time;
	dbFunction* db_func;

	time = ((u32)osGetTime() - arg0->unk_dbunk5_0x50) * 64ULL / 3000ULL;

	if (time >= 1000000)
	{
		db_func = arg0->unk_dbunk5_0x38->db_func;
		db_func[35].unk_dbfunc_0x4(db_func[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, 1);
	}
}

// 0x80383DD4
void func_ovl8_80383DD4(dbUnknown5* arg0, DBMenuPosition* arg1, s32 arg2)
{
	u8 sp2F;
	DBMenuPosition sp24;
	dbFunction* temp_v0;

	temp_v0 = arg0->unk_dbunk5_0x38->db_func;
	temp_v0[21].unk_dbfunc_0x4(temp_v0[21].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp24);

	arg1->x = 2;

	if (arg2 > 0)
	{
		sp2F = arg0->unk_dbunk5_0x3C.u_8[arg2];
		arg0->unk_dbunk5_0x3C.u_8[arg2] = 0;
		arg1->x += func_ovl8_8037E7A8(arg0->unk_dbunk5_0x3C.u_8);
		arg0->unk_dbunk5_0x3C.u_8[arg2] = sp2F;
	}
	arg1->y = 2;
	arg1->w = 2;
	arg1->h = (s16) (sp24.h - 4);
}

// 0x80383E98
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80383E98.s")

// 0x80383F74
void func_ovl8_80383F74(dbUnknownLinkStruct* arg0)
{
	dbFunction *db_func;
	if (arg0->unk_dbunkstruct_0x54 != NULL)
	{
		db_func = arg0->unk_dbunkstruct_0x38->db_func;
		db_func[35].unk_dbfunc_0x4(db_func[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x38, 1);
		arg0->unk_dbunkstruct_0x54 = NULL;
	}
}

// 0x80383FC8
s32 func_ovl8_80383FC8(dbUnknownS38* arg0, db2Shorts arg1)
{
	dbFunction* temp_v0 = arg0->unk_dbunks38_0x30;
	return temp_v0[35].unk_dbfunc_0x4(temp_v0[35].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1.arr[0]) + 1;
}

// 0x80384000
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_23/func_ovl8_80384000.s")

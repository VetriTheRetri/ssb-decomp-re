#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>

typedef struct dbUnknown17 {
	s32 dbUnknown17_0x0;
	s32 dbUnknown17_0x4;
	s32* dbUnknown17_0x8;
	s32 dbUnknown17_0xC;
	s32 dbUnknown17_0x10;
} dbUnknown17;

typedef struct {
	s16 unk0;
	s32 unk4[0x8/4];
	s32* unkC;
} dbUnknown18;

typedef struct {
	s32 unk0[0x8/4];
	dbUnknown18* unk8;
	s32 unkC;
	s32 unk10;
} dbUnknown19;

typedef struct {
	s32 unk0[0x4/4];
	s32 unk4;
	dbUnknownLink** unk8;
	s32 unkC;
	s32 unk10;
	s32 unk14;
	s32 unk18[0x4/4];
	s32 unk1C;
} dbUnknown20;

void func_ovl8_80381908(dbUnknownLink* arg0);

extern dbUnknownLinkStruct D_ovl8_8038BC34;
extern dbUnknownLinkStruct D_ovl8_8038BC8C;

//0x80381130
dbUnknownLinkStruct* func_ovl8_80381130(dbUnknownLinkStruct* arg0)
{
	if ((arg0 != NULL) || ((arg0 = func_ovl8_803717A0(0x20)) != NULL))
	{
		arg0->unk_dbunkstruct_0x1C = &D_ovl8_8038BC34;
	}
	return arg0;
}

// 0x8038116C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038116C.s")

// 0x8038120C
void func_ovl8_8038120C(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;

	arg0->unk_dbunkstruct_0x1C = &D_ovl8_8038BC34;
	func_ovl8_80381908(arg0);
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

// 0x8038125C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038125C.s")

// 0x80381274
void func_ovl8_80381274(dbUnknown17* arg0, s32 arg1)
{
	if (arg1 == 0)
	{
		arg0->dbUnknown17_0xC = 0;
		*arg0->dbUnknown17_0x8 = 0;
	}
	else
	{
		arg0->dbUnknown17_0x8[arg0->dbUnknown17_0xC - arg1] = 0;
		arg0->dbUnknown17_0xC = arg0->dbUnknown17_0xC - arg1;
	}
}

// 0x803812BC
void func_ovl8_803812BC(dbUnknown17* arg0, s32* arg1)
{
	if (arg0->dbUnknown17_0xC < arg0->dbUnknown17_0x10)
	{
		arg0->dbUnknown17_0xC = arg0->dbUnknown17_0xC + 1;
		arg0->dbUnknown17_0x8[arg0->dbUnknown17_0xC - 1] = *arg1;
		arg0->dbUnknown17_0x8[arg0->dbUnknown17_0xC] = 0;
	}
}

// 0x80381308
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381308.s")

// 0x80381710
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381710.s")

// 0x803817C0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_803817C0.s")

// 0x8038185C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_8038185C.s")

// 0x80381908
void func_ovl8_80381908(dbUnknownLink* arg0)
{
	if (arg0->unk_dbunklink_0x8 != NULL)
	{
		func_ovl8_80371764(arg0->unk_dbunklink_0x8);
	}
}

// 0x80381934
void *func_ovl8_80381934(dbUnknown20 *arg0, s16 *arg1, dbUnknownS38 *arg2)
{
	s32 sp24;
	s16 temp_v1_2;

	if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0x20), (arg0 != NULL)))
	{
		func_ovl8_80381130(arg0);
		arg0->unk1C = &D_ovl8_8038BC8C;
		arg0->unk4 = arg2;
		arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x4(arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x0 + arg0->unk4, 0x4CBEBC20, arg2);
		temp_v1_2 = *arg1;
		arg0->unk14 = 1;
		arg0->unkC = (s32) temp_v1_2;
		arg0->unk10 = (s32) temp_v1_2;
		sp24 = (temp_v1_2 * 8) + 0xC;
		arg0->unk8 =  func_ovl8_803716D8(sp24);
		memcpy(arg0->unk8, arg1, sp24);
	}
	return arg0;
}

// 0x803819F4
void func_ovl8_803819F4(dbUnknown19 *arg0, s32 arg1)
{
	s16 *temp_v0;

	if (arg1 == 0)
	{
		arg0->unkC = 0;
		*arg0->unk8->unkC = 0;
		arg0->unk8->unk0 = 0;
		return;
	}

	*(arg0->unk8->unkC + ((arg0->unkC - arg1) * 2)) = 0;
	temp_v0 = arg0->unk8;
	arg0->unkC = (s32) (arg0->unkC - arg1);
	temp_v0[0] = (s16) (temp_v0[0] - arg1);
}

// 0x80381A58
void func_ovl8_80381A58(dbUnknown19 *arg0, s32 arg1, s32 *arg2)
{
	s32 temp_v0;

	temp_v0 = arg1 * 2;
	arg2[0x0/4] = ((s32*)(arg0->unk8->unkC + temp_v0))[-8/4];
	arg2[0x4/4] = ((s32*)(arg0->unk8->unkC + temp_v0))[-4/4];
}

// 0x80381A88
void func_ovl8_80381A88(dbUnknown19 *arg0, s32 *arg1)
{
	s16 *temp_v1;

	if (arg0->unkC >= arg0->unk10)
		return;

	arg0->unkC = arg0->unkC + 1;
	(arg0->unk8->unkC + (arg0->unkC * 2))[-8/4] = arg1[0/4];
	(arg0->unk8->unkC + (arg0->unkC * 2))[-4/4] = arg1[4/4];
	temp_v1 = arg0->unk8;
	temp_v1[0]++;
}

// 0x80381AF0
void func_ovl8_80381AF0(f32** arg0, s32 arg1)
{
	*arg0[1] = (f32) arg1;
}

// 0x80381B04
void func_ovl8_80381B04(s32 arg0, s32 arg1) {}

// 0x80381B10
void func_ovl8_80381B10(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;

	arg0->unk_dbunkstruct_0x1C = &D_ovl8_8038BC8C;
	func_ovl8_8038120C(arg0, 0);
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}
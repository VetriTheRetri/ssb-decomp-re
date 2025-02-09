#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

typedef struct dbUnknown17 {
    s32 dbUnknown17_0x0;
    s32 dbUnknown17_0x4;
    s32* dbUnknown17_0x8;
    s32 dbUnknown17_0xC;
    s32 dbUnknown17_0x10;
} dbUnknown17;

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
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381934.s")

// 0x803819F4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_803819F4.s")

// 0x80381A58
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381A58.s")

// 0x80381A88
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_17/func_ovl8_80381A88.s")

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
#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

void func_ovl8_80377F50(char*, db4Shorts*);
void func_ovl8_80377FE4(char*, db4Shorts*, db4Shorts*);
void func_ovl8_803780B8(char*, DBMenuPosition*);
void func_ovl8_8037A904(db4Shorts*, db4Shorts*);
void func_ovl8_8037A9C0(db4Shorts*, s32, s32);
void func_ovl8_8037A9F4(DBMenuPosition*, DBMenuPosition*);
void func_ovl8_8037AA28(db4Shorts*, db4Shorts*);
s32 func_ovl8_8037AA5C(DBMenuPosition*);
extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;

// 0x80376B60
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376B60.s")

// 0x80376C40
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376C40.s")

// 0x80376EE0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376EE0.s")

// 0x80376FB4
s32 func_ovl8_80376FB4()
{
	return 2;
}

// 0x80376FBC
s32 stringLength(char* string)
{
	s32 length;

	if (string == NULL)
		return 0;

	for (length = 0; *string != '\0'; string++, length++);
	return length;
}

// 0x80376FFC
void stringCopy(char* target, char* source)
{
	char* sourceCurrent;
	char* targetCurrent;

	if (target == NULL || source == NULL)
		return;

	while (*source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}

	*target = '\0';
}

// 0x80377044
void stringCopyCount(char* target, char* source, s32 count)
{
	char* sourceCurrent;
	char* targetCurrent;

	if (target == NULL || source == NULL)
		return;

	while (count != 0 && *source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		count -= 1;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}

	*target = '\0';
}

// 0x8037709C
void stringConcat(char* target, char* source)
{
	char* sourceCurrent;
	char* targetCurrent;

	if (target == NULL || source == NULL)
		return;

	target += stringLength(target);

	while (*source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}

	*target = '\0';
}

// 0x80377108
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377108.s")
// void func_ovl8_80377108(char *a, int v, int b)
// {
// 	while (b--) { char *csr = a++; *csr = v; }
// }

// 0x80377134
void func_ovl8_80377134(s32 arg0, s32 arg1)
{
	func_ovl8_80376B60(arg1, arg0, &D_ovl8_80389F64, arg1);
}

// 0x80377168
s32 func_ovl8_80377168(db2Shorts arg0, DBMenuPosition* arg1)
{
    if ((arg0.arr[0] >= arg1->x) && (arg0.arr[0] < (arg1->x + arg1->w)))
    {
        if ((arg0.arr[1] >= arg1->y) && (arg0.arr[1] < (arg1->y + arg1->h)))
        {
            return 1;
        }
    }

    return 0;
}

// 0x803771CC
void func_ovl8_803771CC(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
    arg1->x = arg0->x;
    arg1->y = arg0->y;
    arg1->w = arg1->x + arg0->w - 1;
    arg1->h = arg1->y + arg0->h - 1;
}

// 0x80377208
void func_ovl8_80377208(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
    arg1->x = arg0->x;
    arg1->y = arg0->y;
    arg1->w = (s16)arg0->w - arg0->x + 1;
    arg1->h = (s16)arg0->h - arg0->y + 1;
}

// 0x80377244
u32 func_ovl8_80377244()
{
    return func_ovl8_8037D28C() | gSYControllerMain.button_hold;
}

// 0x8037726C
void func_ovl8_8037726C(db2Shorts *arg0)
{
    func_ovl8_80375BB4(arg0);
}

// 0x8037728C
void func_ovl8_8037728C()
{
    func_ovl8_80375BD0();
}

// 0x803772AC
void func_ovl8_803772AC(dbUnknown5* arg0)
{
    s32 probably_rest_of_struct[7];
    s16 arg1, arg2;
    DBMenuPosition sp20;
    dbFunction* db_func;

    func_ovl8_80374A54(arg0, &sp20);

    db_func = arg0->db_func;
    arg1 = 0xA0 - (sp20.w / 2);
    arg2 = 0x78 - (sp20.h / 2);
    db_func[10].unk_dbfunc_0x4(db_func[10].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, arg2);
}

// 0x80377330
void func_ovl8_80377330(dbUnknown5* arg0, s16 arg1, s16 arg2)
{
    dbFunction* db_func;

    db_func = arg0->db_func;
    db_func[10].unk_dbfunc_0x4(db_func[10].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, arg2);
}

// 0x80377374
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377374.s")

// 0x803773CC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803773CC.s")

// 0x80377AEC
void func_ovl8_80377AEC(char* arg0, db4Shorts* arg1, s32 arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0[0x31], arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377B40(arg0, arg1);
}

// 0x80377B40
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377B40.s")

// 0x80377EFC
void func_ovl8_80377EFC(char* arg0, db4Shorts* arg1, s32 arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0[0x31], arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377F50(arg0, arg1);
}

// 0x80377F50
void func_ovl8_80377F50(char* arg0, db4Shorts* arg1)
{
    db4Shorts sp18;

    sp18.arr[0] = arg1->arr[0];
    sp18.arr[1] = arg1->arr[1];
    sp18.arr[2] = sp18.arr[3] = 1;
    func_ovl8_80377B40(arg0, &sp18);
}

// 0x80377F90
void func_ovl8_80377F90(char* arg0, db4Shorts* arg1, s32 arg2, s32 arg3, s32 arg4)
{
	func_ovl8_80376B60(arg0[0x31], arg3, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg4;
	func_ovl8_80377FE4(arg0, arg1, arg2);
}

// 0x80377FE4
void func_ovl8_80377FE4(char* arg0, db4Shorts* arg1, db4Shorts* arg2)
{
    s32 temp_s0;
    s32 unused[12];
    db4Shorts sp3C;
    db4Shorts sp34;

    func_ovl8_8037AA88(arg1->arr[0], arg1->arr[1], arg2->arr[0], arg2->arr[1], &sp3C);

    do
    {
        temp_s0 = func_ovl8_8037ABDC(&sp34, &sp3C);
        func_ovl8_80377F50(arg0, &sp34);
    }
    while (temp_s0 > 0);
}

// 0x80378064
void func_ovl8_80378064(char* arg0, db4Shorts* arg1, s32 arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0[0x31], arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_803780B8(arg0, arg1);
}

// 0x803780B8
void func_ovl8_803780B8(char* arg0, DBMenuPosition* arg1)
{
    DBMenuPosition sp20;

    sp20.x = arg1->x;
    sp20.y = arg1->y;
    sp20.w = arg1->w;
    sp20.h = 1;
    func_ovl8_80377B40(arg0, &sp20);

    sp20.x = arg1->x;
    sp20.y = arg1->y + arg1->h - 1;
    sp20.w = arg1->w;
    sp20.h = 1;
    func_ovl8_80377B40(arg0, &sp20);

    sp20.x = arg1->x;
    sp20.y = arg1->y;
    sp20.w = 1;
    sp20.h = arg1->h;
    func_ovl8_80377B40(arg0, &sp20);

    sp20.x = arg1->x + arg1->w - 1;
    sp20.y = arg1->y;
    sp20.w = 1;
    sp20.h = arg1->h;
    func_ovl8_80377B40(arg0, &sp20);
}

// 0x803781A4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803781A4.s")

// 0x803787C0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803787C0.s")

// 0x80379070
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80379070.s")

// 0x803798A0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803798A0.s")

// 0x80379D74
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80379D74.s")

// 0x8037A0FC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A0FC.s")

// 0x8037A5B8
void func_ovl8_8037A5B8(char* arg0, DBMenuPosition* arg1, s32 arg2)
{
    DBMenuPosition sp28;
    u32 var_a1;
    u32 sp20;

    sp28.x = arg1->x;
    sp28.y = arg1->y;
    sp28.w = sp28.h = 1;
    func_ovl8_8037A0FC(arg0, &sp28, &sp20);

    var_a1 = sp20;
    if (arg0[0x31] == 2)
    {
        var_a1 = sp20 >> 0x10;
    }
    func_ovl8_80376C40(arg0[0x31], var_a1, arg2);
}

// 0x8037A62C
void func_ovl8_8037A62C(db4Shorts* arg0, s32 arg1)
{
    DBMenuPosition sp20;
    db2Shorts sp1C;

    sp20.x = 0;
    sp20.y = arg1;
    sp20.w = arg0->arr[2];
    sp20.h = arg0->arr[3] - arg1;
    sp1C.arr[0] = sp1C.arr[1] = 0;
    func_ovl8_803787C0(arg0, arg0, &sp20, &sp1C);
}

// 0x8037A67C
s32 func_ovl8_8037A67C(void* arg0, void* arg1, s32 arg2)
{
    s32 sp30[2];
    s32 sp28[2];
    s32 sp20[2];
    s32 sp1C;

    func_ovl8_8037A9F4(arg0, &sp30);
    func_ovl8_8037A9F4(arg1, &sp28);
    sp1C = func_ovl8_8037A6D4(&sp30, &sp28, &sp20);
    func_ovl8_8037AA28(&sp20, arg2);
    return sp1C;
}

// 0x8037A6D4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A6D4.s")

// 0x8037A8BC
void func_ovl8_8037A8BC(void* arg0, void* arg1)
{
    s32 sp20[2];
    s32 sp18[2];

    func_ovl8_8037A9F4(arg0, &sp20);
    func_ovl8_8037A9F4(arg1, &sp18);
    func_ovl8_8037A904(&sp20, &sp18);
    func_ovl8_8037AA28(&sp18, arg1);
}

// 0x8037A904
void func_ovl8_8037A904(db4Shorts* arg0, db4Shorts* arg1)
{
    s32 temp_a3;

    temp_a3 = arg0->arr[0] - arg1->arr[0];
    if (temp_a3 > 0)
    {
        func_ovl8_8037A9C0(arg1, temp_a3, 0);
    }

    temp_a3 = arg0->arr[2] - arg1->arr[2];
    if (temp_a3 < 0)
    {
        func_ovl8_8037A9C0(arg1, temp_a3, 0);
    }

    temp_a3 = arg0->arr[1] - arg1->arr[1];
    if (temp_a3 > 0)
    {
        func_ovl8_8037A9C0(arg1, 0, temp_a3);
    }

    temp_a3 = arg0->arr[3] - arg1->arr[3];
    if (temp_a3 < 0)
    {
        func_ovl8_8037A9C0(arg1, 0, temp_a3);
    }
}

// 0x8037A9C0
void func_ovl8_8037A9C0(db4Shorts* arg0, s32 arg1, s32 arg2)
{
    arg0->arr[0] = arg0->arr[0] + arg1;\
    arg0->arr[2] = arg0->arr[2] + arg1;
    arg0->arr[1] = arg0->arr[1] + arg2;\
    arg0->arr[3] = arg0->arr[3] + arg2;
}

// 0x8037A9F4
void func_ovl8_8037A9F4(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
    arg1->x = arg0->x;
    arg1->y = arg0->y;
    arg1->w = arg0->x + arg0->w;
    arg1->h = arg0->y + arg0->h;
}

// 0x8037AA28
void func_ovl8_8037AA28(db4Shorts* arg0, db4Shorts* arg1)
{
    arg1->arr[0] = arg0->arr[0];
    arg1->arr[1] = arg0->arr[1];
    arg1->arr[2] = arg0->arr[2] - arg0->arr[0];
    arg1->arr[3] = arg0->arr[3] - arg0->arr[1];
}

// 0x8037AA5C
s32 func_ovl8_8037AA5C(DBMenuPosition* arg0)
{
    if (arg0->w <= 0 || arg0->h <= 0)
    {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037AA88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ABDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ACAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B46C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B5F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BBF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BCB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BD94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BF68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C1D4.s")
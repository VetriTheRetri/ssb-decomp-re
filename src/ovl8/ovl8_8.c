#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

// TODO: move to h file
typedef struct dbUnknown8_S28 {
	s32 dbUnknown8_S28_0x0[6];
	s32 str;
	s32 dbUnknown8_S28_0x20[3];
} dbUnknown8_S28;

void func_ovl8_80377F50(char*, db4Shorts*);
void func_ovl8_80377FE4(char*, db4Shorts*, db4Shorts*);
void func_ovl8_803780B8(char*, DBMenuPosition*);
void func_ovl8_8037A904(db4Shorts*, db4Shorts*);
void func_ovl8_8037A9C0(db4Shorts*, s32, s32);
void func_ovl8_8037A9F4(DBMenuPosition*, DBMenuPosition*);
void func_ovl8_8037AA28(db4Shorts*, db4Shorts*);
s32 func_ovl8_8037AA5C(DBMenuPosition*);
void func_ovl8_8037BD44();
void func_ovl8_8037BEC8();
void func_ovl8_8037BF34();

// BSS
extern s32 D_ovl8_8038EE60;
extern s32 D_ovl8_8038EE64;
extern s32 D_ovl8_8038EE68[];
extern s32 D_ovl8_8038EE70[];
extern Gfx D_8038EE90_1AB6E0[];

// DATA
s32 D_ovl8_80387CA0[] = { 0xDF000000, 0x00000000 };
s32 D_ovl8_80387CA8[]  =
{
	0xFC00FC00, 0xFC00FFFF, 0xFFFFFC40, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FC00, 0x0001FFFF,
	0xFC40FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0xFFFFFC40,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x0001FFFF, 0x00010001,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0xFFFFFC40, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0xFC00FC00, 0x0001FFFF, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0x00010001, 0xFFFFFC40, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0x0001FFFF, 0x00010001, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0x00010001, 0x00010001, 0xFFFFFC40, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0xFFFFFFFF, 0x0001FFFF, 0xFC40FC00, 0xFFFFFFFF,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0xFFFF0001,
	0x0001FFFF, 0xFC40FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FFFF, 0x0001FFFF,
	0xFFFFFC40, 0x00010001, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0xFFFFFC40, 0xFC00FFFF,
	0x00010001, 0xFFFFFC40, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FC00, 0xFC00FC00,
	0x0001FFFF, 0xFFFF0001, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFFFF0001, 0x0001FFFF, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFFFFFFFF, 0xFC40FFFF, 0xFC40FC00, 0xFC00FC00
};

Bitmap D_ovl8_80387EA8 =
{
	16, 16,
	0, 0,
	D_ovl8_80387CA8,
	16, 0
};

Sprite D_ovl8_80387EB8 =
{
	0, 0,
	16, 16,
	1.0, 1.0,
	0, 0,
	0x200,
	0x1234,
	0xff, 0xff, 0xff, 0xff,
	0, 0,
	NULL,
	0, 1,
	1, 0x24,
	16, 16,
	G_IM_FMT_RGBA,
	G_IM_SIZ_16b,
	&D_ovl8_80387EA8,
	D_8038EE90_1AB6E0,
	NULL,
	0, 0
};

s32 D_ovl8_80387EFC = 0;

char D_ovl8_80387F00[] = "1";
char D_ovl8_80387F04[] = "2";
char D_ovl8_80387F08[] = "3";
char D_ovl8_80387F0C[] = "4";
char D_ovl8_80387F10[] = "5";
char D_ovl8_80387F14[] = "6";
char D_ovl8_80387F18[] = "7";
char D_ovl8_80387F1C[] = "8";
char D_ovl8_80387F20[] = "9";
char D_ovl8_80387F24[] = "0";
char D_ovl8_80387F28[] = ".";
char D_ovl8_80387F2C[] = "OK";
char D_ovl8_80387F30[] = "No";
char D_ovl8_80387F34[] = "B";
char D_ovl8_80387F38[] = "Caption";

extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;
extern void* D_ovl8_80389FB4;
extern void* D_ovl8_8038A068;
extern dbTestMenu* D_8038EFC4_1AB814;
extern dbUnknownLinkStruct* D_8038EFC8_1AB818;
extern dbTestMenu* D_8038EFCC_1AB81C;
extern dbUnknown8_S28 D_ovl8_8038A144;
extern s16 D_ovl8_80389F30;
extern s16 D_ovl8_80389F34;
extern s16 D_ovl8_80389F38;
extern s16 D_ovl8_80389F3C;
extern s16 D_ovl8_80389F40;
extern s16 D_ovl8_80389F44;

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
void func_ovl8_80377108(char *a, int v, int b);
#ifdef NON_MATCHING
void func_ovl8_80377108(char *a, int v, int b)
{
	while (b--) { char *csr = a++; *csr = v; }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377108.s")
#endif /* NON_MATCHING */

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

// 0x8037AA88
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037AA88.s")

// 0x8037ABDC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ABDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ACAC.s")

// 0x8037B3E4
void func_ovl8_8037B3E4(dbUnknown3* arg0)
{
	dbUnknown3 *temp_a0;

	func_ovl8_80371764(arg0->unk_dbunk3_0x44);
	func_ovl8_80371764(arg0->unk_dbunk3_0x34);

	temp_a0 = arg0->unk_dbunk3_0x20;
	if (temp_a0 != NULL)
	{
		func_ovl8_80371764(temp_a0);
	}

	func_ovl8_80371764(arg0);
}

// 0x8037B434
void func_ovl8_8037B434(s32 arg0, s32 arg1, s32 arg2)
{
	s32 var_a2;

	if (arg2 != 0)
	{
		var_a2 = &D_ovl8_8038A068;
	}
	else
	{
		var_a2 = &D_ovl8_80389FB4;
	}

	func_ovl8_8037B46C(arg0, arg1, var_a2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B46C.s")

// 0x8037B5F8
s32 stringToNumberSigned(char* str)
{
	s32 num = 0;
	s32 sign = (str[0] == '-') ? (str++, -1) : 1;

	while (str[0] != '\0')
	{
		num *= 10;
		num += str++[0] - '0';
	}

	return sign * num;
}

// 0x8037B654
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B654.s")

// 0x8037B760
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B760.s")

// 0x8037B7F0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B7F0.s")

// 0x8037B85C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B85C.s")

// 0x8037B98C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B98C.s")

// 0x8037BAD8
void func_ovl8_8037BAD8()
{
	dbFunction* temp_v0;

	if (D_8038EFC4_1AB814 != NULL)
	{
		if (D_8038EFC4_1AB814 != NULL)
		{
			temp_v0 = D_8038EFC4_1AB814->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFC4_1AB814, 3);
		}

		D_8038EFC4_1AB814 = NULL;
	}
}

// 0x8037BB28
void func_ovl8_8037BB28()
{
	dbFunction* temp_v0;

	if (D_8038EFC8_1AB818 != NULL)
	{
		if (D_8038EFC8_1AB818 != NULL)
		{
			temp_v0 = D_8038EFC8_1AB818->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFC8_1AB818, 3);
		}

		D_8038EFC8_1AB818 = NULL;
	}
}

// 0x8037BB78
void func_ovl8_8037BB78()
{
	s32 temp_v0;
	s32 temp_v0_2;

	while(TRUE)
	{
		temp_v0 = func_ovl8_8037499C(1);

		if (temp_v0 != 0)
		{
			func_ovl8_8037488C(temp_v0);
			continue;
		}

		break;
	}

	while (TRUE)
	{
		temp_v0_2 = func_ovl8_8037499C(0);

		if (temp_v0_2 != 0)
		{
			func_ovl8_8037488C(temp_v0_2);
			continue;
		}

		break;
	}

	func_ovl8_8037BD44(temp_v0_2);
	func_ovl8_8037BAD8();
	func_ovl8_8037BB28();
	func_ovl8_8037D34C();
}

// 0x8037BBF0
s32 func_ovl8_8037BBF0(dbUnknown8_S28* arg0, Sprite* sprite, u16 arg2, u16 arg3)
{
	dbTestMenu *temp_v0;
	s32 sp20;
	dbTestMenu *var_v1;

	temp_v0 = func_ovl8_803717A0(0x7C);

	if (temp_v0 != NULL)
	{
		func_ovl8_803759F0(temp_v0, 0, arg0, sprite);
		var_v1 = temp_v0;
	}
	else
		var_v1 = NULL;

	D_8038EFCC_1AB81C = var_v1;
	sp20 = func_ovl8_803723AC(D_8038EFCC_1AB81C, D_8038EFCC_1AB81C, sprite, func_ovl8_8037BEC8, func_ovl8_8037BF34, FALSE);
	func_ovl8_80375B8C(D_8038EFCC_1AB81C, arg2, arg3);

	if (sp20 != 0)
	{
		return sp20;
	}

	func_ovl8_80375C54(D_8038EFCC_1AB81C);

	return 0;
}

// 0x8037BCB8
s32 func_ovl8_8037BCB8()
{
	dbUnknown8_S28 sp18;

	if (D_8038EFCC_1AB81C != NULL)
		return -1;

	sp18 = D_ovl8_8038A144;
	sp18.str = 'Arow'; // 0x41726F77

	return func_ovl8_8037BBF0(&sp18, &D_ovl8_80387EB8, 4, 1);
}

// 0x8037BD44
void func_ovl8_8037BD44()
{
	dbFunction* temp_v0;

	if (D_8038EFCC_1AB81C != NULL)
	{
		if (D_8038EFCC_1AB81C != NULL)
		{
			temp_v0 = D_8038EFCC_1AB81C->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFCC_1AB81C, 3);
		}

		D_8038EFCC_1AB81C = NULL;
	}
}

// 0x8037BD94
void func_ovl8_8037BD94(GObj* arg0)
{
	void *temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		func_ovl8_8037C4A4(temp_s0, arg0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BDF4
void func_ovl8_8037BDF4(GObj* arg0)
{
	void *temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		func_ovl8_8037CFAC(temp_s0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BE34
void func_ovl8_8037BE34(GObj* arg0)
{
	dbUnknown5 *temp_s0;
	dbFunction *temp_v0;

	temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		temp_v0 = temp_s0->db_func;
		temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)temp_s0, arg0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BE94
void func_ovl8_8037BE94(GObj* arg0)
{
	dbUnknownS38* temp_a1;
	dbFunction* temp_v0;

	temp_a1 = arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbunks38_0x20)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbunks38_0x20, temp_a1);
}

// 0x8037BEC8
void func_ovl8_8037BEC8(GObj* arg0)
{
	dbTestMenu* temp_s0;
	dbFunction* temp_v0;

	temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		temp_v0 = ((dbUnknownLinkStruct*)temp_s0->unk_dbtestmenu_0x10)->db_func;
		temp_v0[14].unk_dbfunc_0x4(temp_v0[14].unk_dbfunc_0x0 + (uintptr_t)temp_s0->unk_dbtestmenu_0x10, arg0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BF34
void func_ovl8_8037BF34(GObj* arg0)
{
	dbTestMenu* temp_a1;
	dbFunction* temp_v0;

	temp_a1 = arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbtestmenu_0x10)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbtestmenu_0x10, temp_a1);
}

// 0x8037BF68
s32 func_ovl8_8037BF68(s32 user_data, Sprite* sprite, void (*proc)(GObj*), void (*proc_display)(GObj*), GObj **camera_out, GObj **sprite_out, sb32 low_priority)
{
	GObj *camera_gobj;
	GObj *sprite_gobj;

	camera_gobj = gcMakeCameraGObj(-0x1FF, gcDefaultProcRun, 0, 0x80000000, func_80018300, !low_priority ? 2 : 1, 0x8000000000000000ULL, 0, 1, 0, NULL, 1, 0);
	if (camera_gobj == NULL)
		return -1;

	((CObj*)camera_gobj->obj)->flags = 8;
	camera_gobj->camera_tag = camera_gobj;
	if (!low_priority)
	{
		sprite_gobj = gcMakeGObjSPBefore(-0x1FD, NULL, 0x1F, 1);
		if (sprite_gobj == NULL)
			return -1;
	}
	else
	{
		sprite_gobj = gcMakeGObjSPBefore(-0x1FC, NULL, 0x1F, 2);
		if (sprite_gobj == NULL)
			return -1;
	}
	gcAddGObjDisplay(sprite_gobj, proc_display, 0x3F, 1, camera_gobj);
	gcAddSObjForGObj(sprite_gobj, sprite);
	gcAddGObjProcess(sprite_gobj, proc, 0, 1);
	sprite_gobj->user_data.p = user_data;
	*camera_out = camera_gobj;
	*sprite_out = sprite_gobj;
	return 0;
}

// 0x8037C0CC
dbUnknownLinkStruct* func_ovl8_8037C0CC()
{
	return D_8038EFC8_1AB818;
}

// 0x8037C0D8
void func_ovl8_8037C0D8(u16 arg0, u16 arg1, u16 arg2, u16 arg3, s16 arg4, s16 arg5)
{
	if (D_8038EFCC_1AB81C != NULL)
	{
		D_ovl8_80389F30 = arg0;
		D_ovl8_80389F34 = arg1;
		D_ovl8_80389F3C = arg2;
		D_ovl8_80389F38 = arg3;
		D_ovl8_80389F40 = arg4;
		D_ovl8_80389F44 = arg5;
	}
}

// 0x8037C144
void func_ovl8_8037C144(s32 arg0)
{
	if (D_8038EFCC_1AB81C != NULL)
	{
		func_ovl8_80375D44(D_8038EFCC_1AB81C, arg0);
	}
}

// 0x8037C174
s32 func_ovl8_8037C174()
{
	if (D_8038EFCC_1AB81C == NULL)
	{
		return 0;
	}
	return func_ovl8_80375D4C(D_8038EFCC_1AB81C);
}

// 0x8037C1AC
void func_ovl8_8037C1AC(db4Shorts *arg0)
{
	func_ovl8_80375D54(D_8038EFCC_1AB81C, arg0);
}

// 0x8037C1D4
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C1D4.s")
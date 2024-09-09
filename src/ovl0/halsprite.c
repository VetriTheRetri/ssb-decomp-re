#include "common.h"
#include <sys/objtypes.h>

// Equivalent file in pokemon snap: 4D880.c

#define TAU 2.0f * M_PI
#define SQ(x) ((x) * (x))

typedef struct UnkGreenLeopard {
	/* 0x00 */ s32 unk_00[7];
	/* 0x1C */ Vec3f unk_1C;
} UnkGreenLeopard;

typedef struct UnkAsphaltLeopard {
	/* 0x00 */ u16 unk_00;
	/* 0x02 */ u16 unk_02;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ s32 unk_08;
	/* 0x0C */ f32 unk_0C;
	/* 0x10 */ f32 unk_10;
	/* 0x14 */ Vec3f unk_14;
	/* 0x20 */ f32 unk_20;
	/* 0x24 */ f32 unk_24;
	/* 0x28 */ f32 unk_28;
	/* 0x2C */ f32 unk_2C;
	/* 0x30 */ u8 unk_30[1]; // variable length
} UnkAsphaltLeopard;

typedef struct UnkPinkLeopard {
	/* 0x00 */ u32 unk_00;
	/* 0x04 */ s32 unk_04;
	/* 0x08 */ s32 unk_08;
	/* 0x0C */ s32 unk_0C;
	/* 0x10 */ s32 unk_10;
	/* 0x14 */ s32 unk_14;
	/* 0x18 */ u32 unk_18[1]; // variable length
} UnkPinkLeopard;

typedef struct {
	/* 0x0 */ u8 r;
	/* 0x1 */ u8 g;
	/* 0x2 */ u8 b;
	/* 0x3 */ u8 a;
} ucolor;

typedef struct Unk_800A7114 {
	/* 0x00 */ char unk_00[4];
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
} Unk_800A7114; // size >= 0xC

typedef union UnkPinkRatSub {
	Vec3f data1;
	struct {
		f32 unk_00;
		u16 unk_04;
	} data2;
} UnkPinkRatSub; // size = 0xC

typedef struct UnkPinkRat {
	/* 0x00 */ struct UnkPinkRat* next;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
	/* 0x0A */ s16 unk_0A;
	/* 0x0C */ u16 unk_0C;
	/* 0x0E */ u16 unk_0E;
	/* 0x10 */ u8* unk_10;
	/* 0x14 */ Vec3f unk_14;
	/* 0x20 */ Vec3f unk_20;
	/* 0x2C */ f32 unk_2C;
	/* 0x30 */ f32 unk_30;
	/* 0x34 */ f32 unk_34;
	/* 0x38 */ f32 unk_38;
	/* 0x3C */ f32 unk_3C;
	/* 0x40 */ f32 unk_40;
	/* 0x44 */ f32 unk_44;
	/* 0x48 */ DObj* dobj;
	/* 0x4C */ UnkPinkRatSub unk_4C;
} UnkPinkRat; // size = 0x58


typedef struct UnkRustRat {
	/* 0x00 */ struct UnkRustRat* next;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 flags;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
	/* 0x0A */ u8 unk_0A;
	/* 0x0B */ u8 unk_0B;
	/* 0x0C */ u16 unk_0C;
	/* 0x0E */ u16 unk_0E;
	/* 0x10 */ u16 unk_10;
	/* 0x12 */ u16 unk_12;
	/* 0x14 */ u8* scriptPtr;
	/* 0x18 */ u16 unk_18;
	/* 0x1A */ u16 unk_1A;
	/* 0x1C */ u16 unk_1C;
	/* 0x1E */ u16 unk_1E;
	/* 0x20 */ Vec3f unk_20;
	/* 0x2C */ Vec3f unk_2C;
	/* 0x38 */ f32 unk_38;
	/* 0x3C */ f32 unk_3C;
	/* 0x40 */ f32 unk_40;
	/* 0x44 */ f32 unk_44;
	/* 0x48 */ ucolor unk_48;
	/* 0x4C */ ucolor unk_4C;
	/* 0x50 */ ucolor unk_50;
	/* 0x54 */ ucolor unk_54;
	/* 0x58 */ UnkPinkRat* unk_58;
} UnkRustRat; // size = 0x5C


// extern UnkPinkRat D_800D639C[5];
extern UnkPinkRat* D_800D639C[9];
extern UnkRustRat* D_800D6358[16];
extern s32 D_800D63C0[8];
extern s32 D_800D63E0[8];
extern UnkAsphaltLeopard** D_800D6400[];
extern UnkPinkLeopard** D_800D6420[];


u8 D_ovl0_800D5D50[4] = { 0, 0, 0, 0 };
u8 D_ovl0_800D5D54[4] = { 0, 0, 0, 0 };
s32 D_ovl0_800D5D58 = 0;
u8 D_ovl0_800D5D5C = 0x7B;

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE1DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE218.s")

void func_ovl0_800CE254(s32 arg0, s32* arg1, s32* arg2)
{
	s32 i, j;

	if (arg0 >= 8)
		return;

	D_800D63C0[arg0] = *arg1;
	D_800D63E0[arg0] = *arg2;
	D_800D6400[arg0] = (UnkAsphaltLeopard**) (arg1 + 1);
	D_800D6420[arg0] = (UnkPinkLeopard**) (arg2 + 1);

	for (i = 1; i <= D_800D63C0[arg0]; i++)
		arg1[i] = (u32) (arg1) + arg1[i];

	for (i = 1; i <= D_800D63E0[arg0]; i++)
		arg2[i] = (u32) (arg2) + arg2[i];


	for (i = 0; i < D_800D63E0[arg0]; i++)
	{
		for (j = 0; j < D_800D6420[arg0][i]->unk_00; j++)
			D_800D6420[arg0][i]->unk_18[j] += (u32) arg2;

		if (D_800D6420[arg0][i]->unk_04 == 2)
		{
			if (D_800D6420[arg0][i]->unk_14 & 1)
			{
				j = D_800D6420[arg0][i]->unk_00;
				D_800D6420[arg0][i]->unk_18[j] += (u32) arg2;
			}
			else
			{
				for (j = D_800D6420[arg0][i]->unk_00; j < 2 * D_800D6420[arg0][i]->unk_00; j++)
					D_800D6420[arg0][i]->unk_18[j] += (u32) arg2;
			}
		}
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE4E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE6B8.s")
// UnkRustRat* func_ovl0_800CE6B8(UnkRustRat** arg0, s32 arg1, s32 arg2)
// {
// 	UnkAsphaltLeopard* temp_v0;
// 	s32 id = arg1 & 7;

// 	if (id >= 8)
// 		return NULL;

// 	if (arg2 >= D_800D63C0[id])
// 		return NULL;

// 	temp_v0 = D_800D6400[id][arg2];
// 	return func_ovl0_800CE4E4(arg0, arg1, temp_v0->unk_08, temp_v0->unk_02, temp_v0->unk_30, temp_v0->unk_06,
// 						 0.0f, 0.0f, 0.0f, temp_v0->unk_14.x, temp_v0->unk_14.y, temp_v0->unk_14.z, temp_v0->unk_2C, temp_v0->unk_0C,
// 						 temp_v0->unk_10, D_800D6420[id][temp_v0->unk_02]->unk_14, NULL);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE7A8.s")
// UnkRustRat* func_ovl0_800CE7A8(s32 arg0, s32 arg1, u16 arg2, u8* arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, s32 argE, UnkPinkRat* argF)
// {
// 	UnkRustRat* ret;

// 	ret = func_ovl0_800CE4E4(NULL, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB, argC, argD, argE, argF);

// 	if (ret != NULL)
// 		func_ovl0_800CEF4C(ret, 0, arg0 >> 3);

// 	return ret;
// }

UnkRustRat* func_ovl0_800CE870(s32 arg0, s32 arg1)
{
	UnkRustRat* ret;

	ret = func_ovl0_800CE6B8(NULL, arg0, arg1);
	if (ret != NULL)
		func_ovl0_800CEF4C(ret, 0, arg0 >> 3);

	return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE8C0.s")
// UnkRustRat* func_ovl0_800CE8C0(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
// {
// 	UnkRustRat* ret;
// 	UnkAsphaltLeopard* temp_v0;
// 	s32 id = arg0 & 7;

// 	if (id >= 8)
// 		return NULL;

// 	if (arg1 >= D_800D63C0[id])
// 		return NULL;

// 	temp_v0 = D_800D6400[id][arg1];
// 	ret = func_ovl0_800CE4E4(NULL, arg0, temp_v0->unk_08, temp_v0->unk_02, temp_v0->unk_30, temp_v0->unk_06,
// 						arg2, arg3, arg4, arg5, arg6, arg7, temp_v0->unk_2C, temp_v0->unk_0C,
// 						temp_v0->unk_10, D_800D6420[id][temp_v0->unk_02]->unk_14, NULL);
// 	if (ret != NULL)
// 		func_ovl0_800CEF4C(ret, 0, arg0 >> 3);

// 	return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE9E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEA14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEB50.s")

u8* func_ovl0_800CEBC0(u8* arg0, f32* arg1)
{
	u8 sp4[4];

	sp4[0] = *arg0++;
	sp4[1] = *arg0++;
	sp4[2] = *arg0++;
	sp4[3] = *arg0++;
	*arg1 = *(f32*) sp4;
	return arg0;
}

u8* func_ovl0_800CEBF8(u8* arg0, u16* arg1)
{
	u16 value;

	value = *arg0++;
	if (value & 0x80)
		value = ((value & 0x7F) << 8) + *arg0++;

	*arg1 = value + 1;
	return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEC34.s")
// void func_ovl0_800CEC34(UnkRustRat* arg0, f32 arg1)
// {
// 	f32 unused;
// 	f32 x, y, z;
// 	f32 sp5C;
// 	f32 sp58;
// 	f32 sp54;
// 	f32 temp_f26, sp4C;
// 	f32 sp48, sp44;
// 	f32 temp_f20_2;
// 	f32 temp_f2;

// 	x = arg0->unk_2C.x;
// 	y = arg0->unk_2C.y;
// 	z = unused = arg0->unk_2C.z;

// 	sp58 = atan2f(y, z);
// 	temp_f26 = __sinf(sp58);
// 	sp4C = __cosf(sp58);

// 	sp54 = atan2f(x, y * temp_f26 + z * sp4C);
// 	sp48 = __sinf(sp54);
// 	sp44 = __cosf(sp54);
// 	sp5C = sqrtf(SQ(x) + SQ(y) + SQ(z));

// 	temp_f20_2 = mtTrigGetRandomFloat() * TAU;
// 	z = __sinf(arg1) * sp5C;
// 	x = __cosf(temp_f20_2) * z;
// 	y = __sinf(temp_f20_2) * z;
// 	temp_f2 = __cosf(arg1) * sp5C;

// 	arg0->unk_2C.x = x * sp44 + temp_f2 * sp48;
// 	arg0->unk_2C.y = -x * temp_f26 * sp48 + y * sp4C + temp_f2 * temp_f26 * sp44;
// 	arg0->unk_2C.z = -x * sp4C * sp48 - y * temp_f26 + temp_f2 * sp4C * sp44;
// }

void func_ovl0_800CEDBC(UnkRustRat* arg0, UnkGreenLeopard* arg1)
{
	f32 dx, dy, dz;
	f32 f22;

	if (arg1 == NULL)
		return;

	dx = arg1->unk_1C.x - arg0->unk_20.x;
	dy = arg1->unk_1C.y - arg0->unk_20.y;
	dz = arg1->unk_1C.z - arg0->unk_20.z;

	f22 = sqrtf(SQ(arg0->unk_2C.x) + SQ(arg0->unk_2C.y) + SQ(arg0->unk_2C.z));

	if (SQ(dx) + SQ(dy) + SQ(dz) != 0.0f)
	{
		f22 /= sqrtf(SQ(dx) + SQ(dy) + SQ(dz));
		arg0->unk_2C.x = dx * f22;
		arg0->unk_2C.y = dy * f22;
		arg0->unk_2C.z = dz * f22;
	}
}

void func_ovl0_800CEEB8(UnkRustRat* arg0, UnkGreenLeopard* arg1, f32 arg2)
{
	f32 dx, dy, dz, dist2;

	if (arg1 == NULL)
		return;

	dx = arg1->unk_1C.x - arg0->unk_20.x;
	dy = arg1->unk_1C.y - arg0->unk_20.y;
	dz = arg1->unk_1C.z - arg0->unk_20.z;

	dist2 = SQ(dx) + SQ(dy) + SQ(dz);

	if (dist2 != 0.0f)
	{
		dist2 = arg2 / dist2;
		arg0->unk_2C.x += dist2 * dx;
		arg0->unk_2C.y += dist2 * dy;
		arg0->unk_2C.z += dist2 * dz;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEF4C.s")

void func_ovl0_800D0C74(GObj* camObj)
{
	u32 flags = camObj->flags;
	s32 i;
	UnkRustRat* prev;
	UnkRustRat* it;
	UnkRustRat* next;

	for (i = 0; i < 16; i++, flags >>= 1)
	{
		if (flags & 0x10000)
			continue;

		prev = NULL;
		it = D_800D6358[i];
		while (it != NULL)
		{
			next = func_ovl0_800CEF4C(it, prev, i);
			if (it->next == next)
			{
				prev = it;
				it = next;
			}
			else
				it = next;
		}
	}
}
#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D0D34.s")

void func_ovl0_800D2720(s32 arg0, UnkPinkRat* arg1)
{
	if (arg0 > 0 && arg0 < ARRAY_COUNT(D_800D639C))
		D_800D639C[arg0] = arg1;
}

void func_ovl0_800D2744(s32 arg0, s32 arg1)
{
	D_ovl0_800D5D50[0] = arg0;
	D_ovl0_800D5D54[0] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D2758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D27F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D2C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D353C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D35DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3884.s")

void func_ovl0_800D3978()
{
	UnkPinkRat* it = D_800D639C[0];

	while (it != NULL)
	{
		UnkPinkRat* next = it->next;
		func_ovl0_800D3884(it);
		it = next;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D39C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D39D4.s")

void func_ovl0_800D3BFC(Unk_800A7114* arg0)
{
	func_ovl0_800D39D4(arg0->unk_04, arg0->unk_08 >> 3);
}

void func_ovl0_800D3C28(Unk_800A7114* arg0)
{
	func_ovl0_800D39D4(arg0->unk_04, arg0->unk_09 >> 3);
}

void func_ovl0_800D3C54(GObj* obj)
{
	DObj* node;
	UnkPinkRat* it;
	UnkPinkRat* next;

	if (obj->obj_kind == 1)
	{
		for (node = obj->obj; node != NULL; node = func_8000BAA0(node))
		{
			for (it = D_800D639C[0]; it != NULL; it = next)
			{
				next = it->next;
				if (it->dobj == node)
					func_ovl0_800D3884(it);
			}
		}
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3CE0.s")

void func_ovl0_800D3D64(u16 arg0, s32 arg1)
{
	UnkRustRat* ptr;
	UnkPinkRat* ptr2;

	for (ptr = D_800D6358[arg1]; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->unk_04 == arg0)
			ptr->flags |= 0x800;
	}

	for (ptr2 = D_800D639C[0]; ptr2 != NULL; ptr2 = ptr2->next)
	{
		if (ptr2->unk_04 == arg0)
			ptr2->unk_06 |= 0x800;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3DE8.s")

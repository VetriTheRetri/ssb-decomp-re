#include <sys/objmanager.h>
#include <sys/develop.h>
#include <db/debug.h>

// TODO: move to h file
typedef struct dbUnknown5
{
    u8 dbUnknown5_filler_0x0[0x20];
    f32 dbUnknown5_20;
} dbUnknown5;

dbUnknownLinkStruct* func_ovl8_80373350(s32 arg0, s32 arg1)
{
	dbUnknownLinkStruct *temp_v0;
	dbUnknownLinkStruct *var_v1;

	temp_v0 = func_ovl8_803717A0(0xA4);
	if (temp_v0 != NULL)
	{
		func_ovl8_8037345C(temp_v0, 0, 0, arg1, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803733AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037345C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037354C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803735E4.s")

void func_ovl8_80373640(s32 arg0) {}

void func_ovl8_80373648(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373650.s")

f32 func_ovl8_8037367C(f32* arg0)
{
	return *arg0;
}

f32 func_ovl8_80373684(Vec3f* arg0)
{
	return arg0->y;
}

f32 func_ovl8_8037368C(Vec3f* arg0)
{
	return arg0->z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803737DC.s")

s32 func_ovl8_80373828(dbUnknown5* arg0, s32 arg1)
{
    arg0->dbUnknown5_20 = 0.0f;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_8037383C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373A28.s")

void func_ovl8_80373ABC(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373AC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373B84.s")

void func_ovl8_80373BC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_80373EA8.s")

void func_ovl8_803743C0(u16* arg0, u16 arg1)
{
	arg0[0x3C/2] = arg1;
}

void func_ovl8_803743CC(u16* arg0, u16 arg1)
{
	arg0[0x3C/2] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_5/func_ovl8_803743D8.s")
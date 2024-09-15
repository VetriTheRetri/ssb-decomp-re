#include <sys/objmanager.h>

typedef struct {
	u8 unk00[0x58];
	void* unk58;
} unkstruct;

extern void* D_ovl8_80388980[]; // function pointers it seems
extern GObj* D_ovl8_8038A860;
extern void* func_ovl8_803716D8(s32);
extern void func_ovl8_80371764(s32 arg0);

void func_ovl8_80371ECC(void*, s32);


void* func_ovl8_803717A0(s32 arg0)
{
	return func_ovl8_803716D8(arg0);
}

void func_ovl8_803717C0(s32 arg0)
{
	func_ovl8_80371764(arg0);
}

void* func_ovl8_803717E0(unkstruct* arg0)
{
	void* temp_v0;
	
	if ((arg0 != NULL) || (temp_v0 = func_ovl8_803717A0(0x5C), arg0 = temp_v0, (temp_v0 != NULL)))
	{
		arg0->unk58 = &D_ovl8_80388980;
		func_ovl8_80371EA0(arg0);
	}
	return arg0;
}

void* func_ovl8_80371828(unkstruct* arg0, s32 arg1)
{
	void* temp_v0;

	if ((arg0 != NULL) || (temp_v0 = func_ovl8_803717A0(0x5C), arg0 = temp_v0, (temp_v0 != NULL)))
	{
		arg0->unk58 = &D_ovl8_80388980;
		func_ovl8_80371ECC(arg0, arg1);
	}
	return arg0;
}

s32 func_ovl8_80371878(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0x5C);
	if (temp_v0 != 0)
	{
		func_ovl8_80371828(temp_v0, arg1);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;
	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803718C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803718FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371930.s")

void func_ovl8_80371960(s32 arg0) {}

void func_ovl8_80371968(s32 arg0) {}

void func_ovl8_80371970(s32 arg0) {}

void func_ovl8_80371978(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803719A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803719C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371A2C.s")

void func_ovl8_80371ABC(s32 arg0) {}

void func_ovl8_80371AC4(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371C1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371CB8.s")

void func_ovl8_80371D00(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371DE4.s")

void func_ovl8_80371DEC(s32 arg0) {}

void func_ovl8_80371DF4(s32 arg0) {}

void func_ovl8_80371DFC(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371E0C.s")

void func_ovl8_80371E14(s32 arg0) {}

void func_ovl8_80371E1C(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80371FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037203C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803720D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037217C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803721E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803722A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803722F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372348.s")

s32 func_ovl8_80372358(Vec3i* arg0)
{
	return arg0->z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803723AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803724B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803725DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803726CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037277C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037295C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372D18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372DE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80372FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803730DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373138.s")

void func_ovl8_80373158(Vec3i* arg0, s32 arg1)
{
	arg0[3].x = arg1;
}

s32 func_ovl8_80373160(Vec3i* arg0)
{
	return arg0[3].y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037319C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803732B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803733AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037345C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037354C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803735E4.s")

void func_ovl8_80373640(s32 arg0) {}

void func_ovl8_80373648(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373650.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803737DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037383C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373A28.s")

void func_ovl8_80373ABC(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373AC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80373EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803743C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803743CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803743D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803744D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803745BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803746DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803747B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037481C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037486C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037488C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803748C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037493C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037497C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037499C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803749BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803749EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80374FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803750CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803750E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803751C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803755C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037588C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803758B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803758E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803759F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375CB8.s")

void func_ovl8_80375D44(Vec3i* arg0, s32 arg1)
{
	arg0[2].x = arg1;
}

s32 func_ovl8_80375D4C(Vec3i* arg0)
{
	return arg0[2].x;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375D84.s")

void func_ovl8_80375E00(Vec3i* arg0, s32 arg1)
{
	arg0[2].y = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80375E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803761F4.s")

s32 func_ovl8_803762AC(Vec3i* arg0)
{
	return arg0[4].z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803762B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803764C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803768E0.s")

s32 func_ovl8_803769AC(Vec3i* arg0)
{
	return arg0[4].z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803769B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803769D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376EE0.s")

s32 func_ovl8_80376FB4()
{
	return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80376FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037709C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803771CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037726C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037728C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803772AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803773CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80377FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80378064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803780B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803781A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803787C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80379070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803798A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80379D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A5B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037A9F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037AA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037AA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037AA88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037ABDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037ACAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B46C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B5F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BBF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BCB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BD94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037BF68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C1D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C30C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C4A4.s")

s32 func_ovl8_8037C510(Vec3i* arg0)
{
	return arg0->z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C6DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037C9E4.s")

void func_ovl8_8037CA48(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CBA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CCC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CE30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CE40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CEE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CF4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CFAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037CFD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D2F0.s")

void func_ovl8_8037D34C()
{
	if (D_ovl8_8038A860 != NULL)
	{
		gcEjectGObj(D_ovl8_8038A860);
		D_ovl8_8038A860 = NULL;
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D3DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D63C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D8CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037D9EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DA08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DD60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DFCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037DFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037E97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037EB00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037EBC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037EE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037EE64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037EF0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037F80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8037FF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038011C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803801DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038045C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803806B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803806C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80380FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038116C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038120C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038125C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803812BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803817C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038185C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803819F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80381DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803820B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038215C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803822D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803824F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038259C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803827A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038295C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382AE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80382F70.s")

void func_ovl8_8038300C(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803831C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803832A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803833A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803835C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803836D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038374C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803837F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038388C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803838B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803838E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803839D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80383FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803840C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803841E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038440C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038442C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803844C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803846F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803846F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803847A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803848CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80384F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803851E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038533C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803854C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038569C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803858B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038597C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038599C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80385F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038612C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803863A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038649C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803864CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803865D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803866AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803867E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803868C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803868EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80386FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387154.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_8038746C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803879A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_803879FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_2/func_ovl8_80387C24.s")
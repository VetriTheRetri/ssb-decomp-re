#include "common.h"
#include <sys/develop.h>


extern void func_ovl8_803724B4(void *, void *, void *, s32, s32);

void *func_ovl8_803851E4(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, dbBytesCopy *arg3, s32 arg4, s32 arg5);


extern sb32 func_ovl8_803718FC();
extern sb32 func_ovl8_80371930();
extern sb32 func_ovl8_80371960();
extern sb32 func_ovl8_80371968();
extern sb32 func_ovl8_80371970();
extern sb32 func_ovl8_80371978();
extern sb32 func_ovl8_80371980();
extern sb32 func_ovl8_803719A4();
extern sb32 func_ovl8_803719C8();
extern sb32 func_ovl8_80371A2C();
extern sb32 func_ovl8_80371ACC();
extern sb32 func_ovl8_80371AD8();
extern sb32 func_ovl8_80371B34();
extern sb32 func_ovl8_80371B98();
extern sb32 func_ovl8_80371BCC();
extern sb32 func_ovl8_80371C2C();
extern sb32 func_ovl8_80371C8C();
extern sb32 func_ovl8_80371D08();
extern sb32 func_ovl8_80371D64();
extern sb32 func_ovl8_80371D74();
extern sb32 func_ovl8_80371DC0();
extern sb32 func_ovl8_80371DD0();
extern sb32 func_ovl8_80371DDC();
extern sb32 func_ovl8_80371DE4();
extern sb32 func_ovl8_80371DF4();
extern sb32 func_ovl8_80371DFC();
extern sb32 func_ovl8_80371E04();
extern sb32 func_ovl8_80371E0C();
extern sb32 func_ovl8_80371E14();
extern sb32 func_ovl8_80371E1C();
extern sb32 func_ovl8_80371E24();
extern sb32 func_ovl8_80371E2C();
extern sb32 func_ovl8_80371E58();
extern sb32 func_ovl8_803721E8();
extern sb32 func_ovl8_80372224();
extern sb32 func_ovl8_80372250();
extern sb32 func_ovl8_803722A0();
extern sb32 func_ovl8_803722F0();
extern sb32 func_ovl8_80372348();
extern sb32 func_ovl8_80372358();
extern sb32 func_ovl8_80372360();
extern sb32 func_ovl8_803726CC();
extern sb32 func_ovl8_80373650();
extern sb32 func_ovl8_8037367C();
extern sb32 func_ovl8_80373684();
extern sb32 func_ovl8_8037368C();
extern sb32 func_ovl8_80373694();
extern sb32 func_ovl8_80373750();
extern sb32 func_ovl8_80373790();
extern sb32 func_ovl8_803737DC();
extern sb32 func_ovl8_8037383C();
extern sb32 func_ovl8_80373930();
extern sb32 func_ovl8_80373980();
extern sb32 func_ovl8_80373988();
extern sb32 func_ovl8_80373990();
extern sb32 func_ovl8_80373A28();
extern sb32 func_ovl8_80373ABC();
extern sb32 func_ovl8_80373B28();
extern sb32 func_ovl8_80373B84();
extern sb32 func_ovl8_80373BC0();
extern sb32 func_ovl8_80373BD4();
extern sb32 func_ovl8_8037C344();
extern sb32 func_ovl8_8037C358();
extern sb32 func_ovl8_80384968();
extern sb32 func_ovl8_80384AE8();
extern sb32 func_ovl8_80384B90();
extern sb32 func_ovl8_80384BD4();
extern sb32 func_ovl8_80384C0C();
extern sb32 func_ovl8_80384C44();
extern sb32 func_ovl8_80384C4C();
extern sb32 func_ovl8_80384D58();
extern sb32 func_ovl8_80384DC4();
extern sb32 func_ovl8_80384E30();
extern sb32 func_ovl8_80384F3C();
extern sb32 func_ovl8_80384F90();
extern sb32 func_ovl8_80385024();
void func_ovl8_8038533C();
void func_ovl8_80385408();
void func_ovl8_80385428();

dbFunction D_ovl8_8038D650[] = {
	{0, NULL},
	{0, (sb32(*)())(func_ovl8_8038533C)},
	{0, func_ovl8_80384968},
	{0, (sb32(*)())(func_ovl8_80385408)},
	{0, func_ovl8_80373650},
	{0, func_ovl8_8037367C},
	{0, func_ovl8_80373684},
	{0, func_ovl8_8037368C},
	{0, func_ovl8_80373694},
	{0, func_ovl8_80373750},
	{0, func_ovl8_80373790},
	{0, func_ovl8_803737DC},
	{0, func_ovl8_80385024},
	{0, func_ovl8_8037383C},
	{0, func_ovl8_80373930},
	{0, func_ovl8_80373980},
	{0, func_ovl8_80373988},
	{0, func_ovl8_80373990},
	{0, func_ovl8_80373A28},
	{0, func_ovl8_80373ABC},
	{0, func_ovl8_80384F90},
	{0, func_ovl8_80373B28},
	{0, func_ovl8_80373B84},
	{0, func_ovl8_80373BC0},
	{0, func_ovl8_80373BD4},
	{0, func_ovl8_80384AE8},
	{0, func_ovl8_80384B90},
	{0, func_ovl8_80384BD4},
	{0, func_ovl8_80384C0C},
	{0, func_ovl8_80384C44},
	{0, func_ovl8_80384C4C},
	{0, func_ovl8_80384D58},
	{0, func_ovl8_80384DC4},
	{0, func_ovl8_80384E30},
	{0, func_ovl8_80384F3C},
	{0, (sb32(*)())(func_ovl8_80385428)},
	{0, NULL},
};

dbFunction D_ovl8_8038D778[] = {
	{0, NULL},
	{(s16)0xFFA0, (sb32(*)())(func_ovl8_8038533C)},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFA0, (sb32(*)())(func_ovl8_80385408)},
	{(s16)0xFFA0, (sb32(*)())(func_ovl8_80385428)},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFA0, func_ovl8_80373650},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFEC, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFEC, func_ovl8_80372358},
	{(s16)0xFFA0, func_ovl8_80384968},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{(s16)0xFFEC, func_ovl8_803726CC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_8038D8D0[] = {
	{0, NULL},
	{(s16)0xFF40, (sb32(*)())(func_ovl8_8038533C)},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_8038D8F8[] = {
	{0, NULL},
	{(s16)0xFFB4, (sb32(*)())(func_ovl8_8038533C)},
	{(s16)0xFFB4, (sb32(*)())(func_ovl8_80385408)},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, func_ovl8_803726CC},
	{0, NULL},
};

// 80385180
s32 func_ovl8_80385180(s32 arg0, s32* arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xCC);
	if (temp_v0 != 0)
	{
		func_ovl8_803851E4(temp_v0, 0, 0, arg1, arg0, arg1[0x24/4]);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

// 803851E4
void *func_ovl8_803851E4(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, dbBytesCopy *arg3, s32 arg4, s32 arg5) 
{
	s32 sp44;
	s32 sp40;
	s32 sp3C;
	u16 temp_v1;
	
	if ((arg0 != NULL) || ((arg0 = func_ovl8_803717A0(0xCC)) != NULL)) 
	{
		if (arg1 == NULL) 
		{
			arg1 = &arg0->unk_dbunk5_0x60;\
			arg2 = &arg0->unk_dbunk5_0xC0;
			#line 42
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
			#line 49
		}
		
		func_ovl8_803847A0(arg0, arg1, arg2, arg3, arg4, arg5);
		func_ovl8_803724B4((char*) arg0 + 0x4C, arg1, arg3, arg4, 0);
		
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038D650;\
		arg1->db_func = &D_ovl8_8038D778;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038D8D0;
		arg0->unk_dbunk5_0x58 = &D_ovl8_8038D8F8;
		temp_v1 = arg3->unk_dbbytescopy_0x10;
		
		if (temp_v1 == 2) {
			sp44 = 2;
		} else if (temp_v1 == 5){
			sp44 = 3;
		}
		
		sp40 = (s32) arg3->position.w;
		sp3C = (s32) arg3->position.h;
		func_ovl8_8037B85C(sp44, &sp40, &sp3C);
		arg0->unk_dbunk5_0xBC = func_ovl8_8037ACAC(arg3->position.w, arg3->position.h, sp44, sp40, sp3C);
		arg0->unk_dbunk5_0x54 = arg0->unk_dbunk5_0xBC;
	}
	return arg0;
}

// 8038533C
void func_ovl8_8038533C(dbUnknown5* arg0, s32 arg1)
{
	if (arg0 != NULL)
	{
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038D650,
		arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038D778;
		arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038D8D0;
		arg0->unk_dbunk5_0x58 = &D_ovl8_8038D8F8;

		if (arg0->unk_dbunk5_0xBC != 0) {
			func_ovl8_8037B3E4(arg0->unk_dbunk5_0xBC);
		}

		func_ovl8_80372554(&arg0->unk_dbunk5_0x4C, 0);
		func_ovl8_803848CC(arg0, 0);

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

// 80385408
void func_ovl8_80385408(s32 arg0)
{
	func_ovl8_803725DC(arg0 + 0x4C);
}

// 80385428
void func_ovl8_80385428(dbUnknownS38* arg0)
{
	dbFunction* temp_v0 = arg0->unk_dbunks38_0x30;
	temp_v0[2].unk_dbfunc_0x4(temp_v0[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

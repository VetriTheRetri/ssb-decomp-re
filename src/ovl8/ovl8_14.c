#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>

extern db4Bytes D_ovl8_80389F4C;
extern db4Bytes D_ovl8_80389F50;


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
extern sb32 func_ovl8_80371AC4();
extern sb32 func_ovl8_80371ACC();
extern sb32 func_ovl8_80371AD8();
extern sb32 func_ovl8_80371B34();
extern sb32 func_ovl8_80371B98();
extern sb32 func_ovl8_80371BCC();
extern sb32 func_ovl8_80371C2C();
extern sb32 func_ovl8_80371C50();
extern sb32 func_ovl8_80371C8C();
extern sb32 func_ovl8_80371CB8();
extern sb32 func_ovl8_80371D08();
extern sb32 func_ovl8_80371D64();
extern sb32 func_ovl8_80371D74();
extern sb32 func_ovl8_80371DC0();
extern sb32 func_ovl8_80371DD0();
extern sb32 func_ovl8_80371DDC();
extern sb32 func_ovl8_80371DE4();
extern sb32 func_ovl8_80371DEC();
extern sb32 func_ovl8_80371DF4();
extern sb32 func_ovl8_80371DFC();
extern sb32 func_ovl8_80371E04();
extern sb32 func_ovl8_80371E0C();
extern sb32 func_ovl8_80371E14();
extern sb32 func_ovl8_80371E1C();
extern sb32 func_ovl8_80371E24();
extern sb32 func_ovl8_80371E2C();
extern sb32 func_ovl8_80371E58();
extern sb32 func_ovl8_80373648();
extern sb32 func_ovl8_80373650();
extern sb32 func_ovl8_8037367C();
extern sb32 func_ovl8_80373684();
extern sb32 func_ovl8_8037368C();
extern sb32 func_ovl8_80373694();
extern sb32 func_ovl8_80373750();
extern sb32 func_ovl8_80373790();
extern sb32 func_ovl8_803737DC();
extern sb32 func_ovl8_80373930();
extern sb32 func_ovl8_80373980();
extern sb32 func_ovl8_80373988();
extern sb32 func_ovl8_80373990();
extern sb32 func_ovl8_80373A28();
extern sb32 func_ovl8_80373ABC();
extern sb32 func_ovl8_80373AC4();
extern sb32 func_ovl8_80373B28();
extern sb32 func_ovl8_80373B84();
extern sb32 func_ovl8_80373BD4();
extern sb32 func_ovl8_80373E24();
extern sb32 func_ovl8_80373EA8();
extern sb32 func_ovl8_803743C0();
extern sb32 func_ovl8_803743D8();
extern sb32 func_ovl8_8037C344();
extern sb32 func_ovl8_8037C358();
void func_ovl8_8037F030();
void func_ovl8_8037F260();

dbFunction D_ovl8_8038AB70[] = {
	{0, NULL},
	{0, (sb32(*)())(func_ovl8_8037F260)},
	{0, (sb32(*)())(func_ovl8_8037F030)},
	{0, func_ovl8_80373648},
	{0, func_ovl8_80373650},
	{0, func_ovl8_8037367C},
	{0, func_ovl8_80373684},
	{0, func_ovl8_8037368C},
	{0, func_ovl8_80373694},
	{0, func_ovl8_80373750},
	{0, func_ovl8_80373790},
	{0, func_ovl8_803737DC},
	{0, func_ovl8_80373E24},
	{0, func_ovl8_80373EA8},
	{0, func_ovl8_80373930},
	{0, func_ovl8_80373980},
	{0, func_ovl8_80373988},
	{0, func_ovl8_80373990},
	{0, func_ovl8_80373A28},
	{0, func_ovl8_80373ABC},
	{0, func_ovl8_80373AC4},
	{0, func_ovl8_80373B28},
	{0, func_ovl8_80373B84},
	{0, func_ovl8_803743D8},
	{0, func_ovl8_80373BD4},
	{0, func_ovl8_803743C0},
	{0, NULL},
};

dbFunction D_ovl8_8038AC48[] = {
	{0, NULL},
	{(s16)0xFFB4, (sb32(*)())(func_ovl8_8037F260)},
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
	{(s16)0xFFB4, func_ovl8_80373648},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFB4, func_ovl8_80373650},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{(s16)0xFFB4, (sb32(*)())(func_ovl8_8037F030)},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
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

dbFunction D_ovl8_8038ADA0[] = {
	{0, NULL},
	{(s16)0xFFC0, (sb32(*)())(func_ovl8_8037F260)},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
	{0, NULL},
};

void func_ovl8_8037DFCC(s16, s16);

// 8037EE00
s32 func_ovl8_8037EE00(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xA8);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_8037EF0C(temp_v0, 0, 0, arg1, arg1->unk_dbunk3_0x24, arg0);
	}
	else
		sp24 = 0;

	return sp24;
}

// 8037EE64
dbUnknown5* func_ovl8_8037EE64(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2) 
{
	if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA8)) != NULL)) 
	{
		if (arg1 == NULL) 
		{
			arg1 = &arg0->unk_dbunk5_0x4C;
			arg2 = &arg0->unk_dbunk5_0x40;
			#line 184
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
			#line 191
		}
		
		func_ovl8_80373C10(arg0, arg1, arg2);
		
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038AB70;
		arg1->db_func = &D_ovl8_8038AC48;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038ADA0;
		
	} 
	
	return arg0;
}

// 8037EF0C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_14/func_ovl8_8037EF0C.s")

// 8037F030
void func_ovl8_8037F030(dbUnknown5* arg0) 
{
	s32 sp5C;
	s32 sp58;
	DBMenuPosition sp50;
	Vec2h sp4C;
	db4Bytes sp48;
	s32 unused;
	s32 unused2;
	s32 a0;
	s32 a1;
	dbUnknownS14* sp34;
	dbFunction* temp_v1;
	f32 unused3;

	sp58 = func_ovl8_8037E7A8(&arg0->unk_dbunk5_0xC.str);
	
	func_ovl8_8037D95C(&sp34);

	temp_v1 = arg0->unk_dbunk5_0x38->db_func;
	sp5C = temp_v1[23].unk_dbfunc_0x4(temp_v1[23].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38);
	
	temp_v1 = arg0->unk_dbunk5_0x38->db_func;
	temp_v1[21].unk_dbfunc_0x4(temp_v1[21].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp50);
	
	func_ovl8_8037D990(0x10);

	if (arg0->unk_dbunk5_0x0 != 0.0F) 
	{
		func_ovl8_8037B434(sp5C, &sp50, 1, &arg0->unk_dbunk5_0x38->bg_color);
		func_ovl8_8037D9D0(&D_ovl8_80389F50);
		
		sp4C.x = sp50.x + 6,
		sp4C.y = sp50.y + 6;
		func_ovl8_8037A5B8(sp5C, &sp4C, &sp48);
		func_ovl8_8037D9B4(&sp48);

		a0 = ((sp50.x + sp50.w / 2) - (sp58 / 2)) + 1;
		a1 = sp50.y + 3;
		func_ovl8_8037DFCC(a0, a1);
	} 
	else 
	{
		func_ovl8_8037B434(sp5C, &sp50, 0, &arg0->unk_dbunk5_0x38->bg_color);
		func_ovl8_8037D9D0(&D_ovl8_80389F4C);
		
		sp4C.x = sp50.x + 6,
		sp4C.y = sp50.y + 6;
		func_ovl8_8037A5B8(sp5C, &sp4C, &sp48);
		func_ovl8_8037D9B4(&sp48);

		a1 = (sp50.y + (sp50.h / 2)) - (func_ovl8_8037E80C() / 2);
		a0 = ((sp50.x + sp50.w / 2) - (sp58 / 2));
		func_ovl8_8037DFCC(a0, a1);
	}
	
	func_ovl8_8037DD60(sp5C, &arg0->unk_dbunk5_0xC.str);
	func_ovl8_8037D908(&sp34);
}

// 8037F260
void func_ovl8_8037F260(dbUnknown5* arg0, s32 arg1)
{
	if (arg0 != NULL)
	{
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038AB70;\
		arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038AC48;
		arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038ADA0;

		func_ovl8_80373D88(arg0, 0);

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

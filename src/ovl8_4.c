#include <sys/objmanager.h>
#include <sys/develop.h>
#include <debug.h>


struct dbUnknownStruct_803864CC
{
	u16 unk0;
	u16 unk2;
	u16 unk4;
	u16 unk6;
	s32 unk8[7];
	s32 unk24;
};

struct dbUnknownStruct_80375C54
{
	GObj* unk0;
	s32* unk4;
};


extern void *D_ovl8_80388E60[];
extern dbFunction D_ovl8_80388F18[];
extern dbUnknownLink D_ovl8_80389070[];
extern s32 D_ovl8_8038A1B8;
extern s32 D_ovl8_8038A1BC;
extern GObj* D_ovl8_8038A1C0;
extern s16 D_8038F000[];
extern u16 D_8038F008[];
extern u16 D_8038F046;
extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;
extern GObj* D_ovl8_8038A860;
extern u16 D_ovl8_8038E1E4;
extern u8 D_8038EFD0;
extern s32 D_8038EFD4;
extern s32 D_803903C0;
extern s32 D_803903C4;
extern s32 D_803903C8;




s32 func_ovl8_8037E7A8(s32);
void func_ovl8_8037488C(s32);
void func_ovl8_8037B3E4(s32);
void* func_ovl8_8037C584(ub32);
void* func_ovl8_80373160(dbUnknownS38* arg0);
void* func_ovl8_80373168(dbUnknownS38 *arg0);
s32 func_ovl8_80372B98(dbUnknownS38 *arg0, db4Shorts *arg1);


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80372790.s")
// void* func_ovl8_80372790(dbUnknownS38* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
// {
// 	if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xA0)) != NULL))
// 	{
// 		if (arg1 == NULL)
// 		{
// 			arg1 = &arg0->unk_dbunks38_0x38;
// 			arg2 = &arg0->unk_dbunks38_0x94;
// 			func_ovl8_803717E0(arg1);
// 			func_ovl8_8037C2D0(arg2);
// 		}
// 		func_ovl8_803751C0(arg0, arg1, arg2);
// 		arg0->unk_dbunks38_0x18 = D_ovl8_80388E60;
// 		arg1->db_func = D_ovl8_80388F18;
// 		arg2->unk_dbunklink_0x8 = D_ovl8_80389070;
// 		func_ovl8_80373308(arg0, NULL);
// 	} 
// 	return arg0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80372844.s")
// void* func_ovl8_80372844(dbUnknownS38 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, dbBytesCopy *arg3)
// {
// 	if (arg0 == NULL)
// 	{
// 		arg0 = func_ovl8_803717A0(0xA0);

// 		if (arg0 == NULL)
// 			goto end;
// 	}
// 	if (arg1 == NULL)
// 	{
// 		arg1 = &arg0->unk_dbunks38_0x38;
// 		arg2 = &arg0->unk_dbunks38_0x94;
		
// 		func_ovl8_803717E0(arg1);
// 		func_ovl8_8037C2D0(arg2);
// 	}
// 	func_ovl8_803751C0(arg0, arg1, arg2);
		
// 	arg0->unk_dbunks38_0x18 = D_ovl8_80388E60;
// 	arg1->db_func = D_ovl8_80388F18;
// 	arg2->unk_dbunklink_0x8 = D_ovl8_80389070;

// 	func_ovl8_80371ECC(arg0->unk_dbunks38_0x20, arg3);
		
// 	func_ovl8_80373308(arg0, arg3);
// end:
// 	return arg0;
// }

void* func_ovl8_80372908(void* arg0, void* arg1) 
{
	void *temp_v0 = func_ovl8_803717A0(0xA0);
	void *var_v1;
	
	if (temp_v0 != 0) 
	{
		func_ovl8_80372844(temp_v0, 0, 0, arg1);
		var_v1 = temp_v0;
	} 
	else
		var_v1 = NULL;
	
	return var_v1;
}

void func_ovl8_8037295C(dbUnknownS38* arg0, u32 arg1) 
{
	void* temp_s0;
	void *temp_v0;
	dbFunction *db_func;
	dbUnknownS38 *var_v1;

	if (arg0 != NULL) 
	{
		arg0->unk_dbunks38_0x18 = D_ovl8_80388E60,
		arg0->unk_dbunks38_0x20->db_func = D_ovl8_80388F18,
		arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = D_ovl8_80389070;
		
		temp_v0 = func_ovl8_80373160(arg0);
		
		var_v1 = temp_v0;
		
		if(var_v1 != NULL) 
		{
			while(var_v1 != NULL)
			{
				temp_s0 = var_v1->unk_dbunks38_0x28;
				
				if (var_v1 != NULL) 
				{
					db_func = var_v1->unk_dbunks38_0x30;
					db_func[1].unk_dbfunc_0x4(db_func[1].unk_dbfunc_0x0 + (uintptr_t)var_v1, 3);
				}
				var_v1 = temp_s0;
			}
		}
		func_ovl8_80375270(arg0, 0);
		
		if (arg1 != 0) 
		{
			func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
			func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
		}
		if (arg1 & 1)
		{
			func_ovl8_803717C0(arg0);
		}
	}
}

s32 func_ovl8_80372A3C(s32 arg0)
{
	return 0;
}

void func_ovl8_80372A48(dbUnknownS38 *arg0, dbUnknownS38 *arg1) 
{
	dbUnknownS38 *temp_v0 = func_ovl8_80373168(arg0);
	
	if (temp_v0 != NULL)
	{
		temp_v0->unk_dbunks38_0x28 = arg1;
		arg1->unk_dbunks38_0x24 = temp_v0;
		arg1->unk_dbunks38_0x28 = NULL;
	} 
	else 
	{
		arg0->unk_dbunks38_0x28 = arg1;
		arg1->unk_dbunks38_0x24 = NULL;
		arg1->unk_dbunks38_0x28 = NULL;
	}
}

void func_ovl8_80372A94(dbUnknownLinkStruct *arg0, void *arg1)
{
	s32 sp1C[3]; // should this be a type?
	dbUnknownLinkStruct *var_v1;

	func_ovl8_80371E2C(arg0->unk_dbunkstruct_0x20);
	
	if ((D_ovl8_8038A1BC == 0) && (func_ovl8_8037D384() != 0))
	{
		func_ovl8_8037D3AC(sp1C);
		
		var_v1 = arg0;
		
		if (arg0 != NULL)
			var_v1 = arg0->unk_dbunkstruct_0x20;

		if (sp1C[0] & var_v1->unk_dbunkstruct_0x30) 
		{
			if (func_ovl8_80372B98(arg0, sp1C) == 0) 
				func_ovl8_8037D434(sp1C);
		} 
		else
			func_ovl8_8037D434(sp1C);
	}
}

void func_ovl8_80372B40(dbUnknownS38 *arg0) 
{
	dbFunction *db_func = arg0->unk_dbunks38_0x18;
	db_func[16].unk_dbfunc_0x4(db_func[16].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

void func_ovl8_80372B6C(dbUnknownS38 *arg0)
{
	dbFunction *db_func = arg0->unk_dbunks38_0x18;
	db_func[17].unk_dbfunc_0x4(db_func[17].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

s32 func_ovl8_80372B98(dbUnknownS38 *arg0, db4Shorts *arg1)
{
	dbUnknownLinkStruct *temp_v1 = arg0->unk_dbunks38_0x20;
	dbFunction *db_func = temp_v1->db_func;
	short p = db_func[16].unk_dbfunc_0x0; // ??? This line is required or else it doesn't match
	
	if (db_func[16].unk_dbfunc_0x4(temp_v1->db_func[16].unk_dbfunc_0x0 + (uintptr_t)temp_v1, &arg1[1]) == 0)
	{
		return 0;
	}
	else
	{
		temp_v1 = arg0->unk_dbunks38_0x20;
 
		return temp_v1->db_func[18].unk_dbfunc_0x4(temp_v1->db_func[18].unk_dbfunc_0x0 + (uintptr_t)temp_v1, &arg1[0]);
	}
}

void func_ovl8_80372C00(dbUnknown3 *arg0)
{
	db2Shorts sp34;
	db2Shorts sp30;
	dbUnknown3 *temp;
	dbFunction *db_func;

	func_ovl8_8037726C(&sp30);

	temp = arg0;
	
	if (arg0 != NULL)
	{
		temp = (dbUnknown3*)arg0->unk_dbunk3_0x20;
	}
	while (func_ovl8_80377244() & temp->unk_dbunk3_0x30)
	{
		func_ovl8_8037726C(&sp34);
			
		if ((sp34.arr[0] != sp30.arr[0]) || (sp34.arr[1] != sp30.arr[1])) 
		{
			temp = (void*)arg0->unk_dbunk3_0x18;
				
			((dbFunction*)temp)[11].unk_dbfunc_0x4(((dbFunction*)temp)[11].unk_dbfunc_0x0 + (uintptr_t)arg0, (s16) (sp34.arr[0] - sp30.arr[0]), (s16) (sp34.arr[1] - sp30.arr[1]));
				
			*(db2Shorts*)&sp30 = *(db2Shorts*)&sp34;
		}
		func_ovl8_8037D45C();
		gcStopCurrentGObjThread(1);

		temp = arg0;
			
		if (arg0 != NULL)
		{
			temp = arg0->unk_dbunk3_0x20;
		}
	}
	func_ovl8_8037D45C();
}


void func_ovl8_80372D18(dbUnknown3 *arg0, s16 arg1, s16 arg2) 
{
	func_ovl8_80371D74(arg0->unk_dbunk3_0x20, arg1, arg2);
	arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

void func_ovl8_80372D70(dbUnknown3 *arg0, s16 arg1, s16 arg2)
{
	func_ovl8_80371D08(arg0->unk_dbunk3_0x20, arg1, arg2);
	arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

void func_ovl8_80372DC8(s32 arg0, s32 arg1, s32 arg2) {}

void func_ovl8_80372DD8(s32 arg0, s32 arg1, s32 arg2) {}

void func_ovl8_80372DE8(dbUnknownS38* arg0) 
{
	dbUnknown3 *temp_v0 = func_ovl8_80373160(arg0);
	
	if (temp_v0 != NULL)
	{
		while(temp_v0 != NULL) 
		{
			dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;
			
			db_func[34].unk_dbfunc_0x4(db_func[34].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);
			
			temp_v0 = temp_v0->unk_dbunk3_0x28;
		}
	}
}

void func_ovl8_80372E40(dbUnknownS38* arg0)
{
	dbUnknown3 *temp_v0 = func_ovl8_80373160(arg0);

	if (temp_v0 != NULL)
	{
		while (temp_v0 != NULL)
		{
			dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;

			db_func[32].unk_dbfunc_0x4(db_func[32].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);

			temp_v0 = temp_v0->unk_dbunk3_0x28;
		}
	}
}

sb32 func_ovl8_80372E98(dbUnknown3 *arg0) 
{
	dbUnknown3 *var_v0;
	dbUnknown3 *var_v1_2;
	sb32 var_v1;

	var_v0 = arg0;
	
	if (arg0 != NULL) 
		var_v0 = arg0->unk_dbunk3_0x20;

	var_v1_2 = (void*) ((var_v0->unk_dbunk3_0x48->unk_dbunk3_0x0 == -0x1FD) ? FALSE : TRUE);

	var_v1 = (sb32) var_v1_2; // Why does this keep working? I feel like we're missing something big time with this overlay.

	var_v1_2 = arg0;
	
	if (arg0 != NULL) 
		var_v1_2 = arg0->unk_dbunk3_0x20;
	
	return func_ovl8_8037C584(var_v1) == var_v1_2->unk_dbunk3_0x48;
}

void func_ovl8_80372F04(dbUnknown3 *arg0)
{
	dbUnknown3 *var_v0;
	sb32 st;

	var_v0 = arg0;
	
	if (arg0 != NULL)
		var_v0 = arg0->unk_dbunk3_0x20;

	st = var_v0->unk_dbunk3_0x48->unk_dbunk3_0x0 == -0x1FC;

	var_v0 = arg0;
	
	if (st != FALSE)
	{
		if (arg0 != NULL)
			var_v0 = arg0->unk_dbunk3_0x20;

		func_ovl8_8037C518(var_v0->unk_dbunk3_0x48, 0x1F, 2);

		var_v0 = arg0;
		
		if (arg0 != NULL) 
			var_v0 = arg0->unk_dbunk3_0x20;

		func_8000A24C(var_v0->unk_dbunk3_0x48->unk_dbunk3_0x38, 1);
	}
	else 
	{
		if (arg0 != NULL)
			var_v0 = arg0->unk_dbunk3_0x20;

		func_ovl8_8037C518(var_v0->unk_dbunk3_0x48, 0x1F, 1);

		var_v0 = arg0;
		
		if (arg0 != NULL) 
			var_v0 = arg0->unk_dbunk3_0x20;

		func_8000A24C(var_v0->unk_dbunk3_0x48->unk_dbunk3_0x38, 2);
	}
	arg0->unk_dbunk3_0x18[14].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[14].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

void func_ovl8_80372FEC(dbUnknownS38* arg0)
{
	dbUnknown3 *temp_v0 = func_ovl8_80373160(arg0);

	if (temp_v0 != NULL)
	{
		while (temp_v0 != NULL)
		{
			dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;

			db_func[11].unk_dbfunc_0x4(db_func[11].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);

			temp_v0 = temp_v0->unk_dbunk3_0x28;
		}
	}
}

sb32 func_ovl8_80373044(dbUnknown3 *arg0, s32 arg1) 
{
	dbFunction *db_func;
	dbUnknown3 *var_s0;

	var_s0 = func_ovl8_80373168(arg0);

	if (var_s0 != NULL) 
	{
		while(var_s0 != NULL)
		{
			db_func = var_s0->unk_dbunk3_0x38->db_func;
		
			if (db_func[18].unk_dbfunc_0x4(db_func[18].unk_dbfunc_0x0 + (uintptr_t)var_s0->unk_dbunk3_0x38, arg1) != 0)
			{
				return TRUE;
			}    
			else var_s0 = var_s0->unk_dbunk3_0x24;
		}
	}
	db_func = arg0->unk_dbunk3_0x18;
	db_func[18].unk_dbfunc_0x4(db_func[18].unk_dbfunc_0x0 + (uintptr_t)arg0, -1, arg0);
	
	return FALSE;
}

s32 func_ovl8_803730DC(dbFunction *arg0, s32 arg1, s32 arg2)
{
	if (arg0[4].unk_dbfunc_0x4 != NULL)
		return arg0[4].unk_dbfunc_0x4(arg1, arg2);
	else
		return 0;
}

void func_ovl8_80373118(dbUnknownLinkStruct *arg0) 
{
	func_ovl8_80371DD0(arg0->unk_dbunkstruct_0x20);
}

void func_ovl8_80373138(dbUnknownLinkStruct *arg0) 
{
	func_ovl8_80371DDC(arg0->unk_dbunkstruct_0x20);
}

void func_ovl8_80373158(Vec3i* arg0, s32 arg1)
{
	arg0[3].x = arg1;
}

void* func_ovl8_80373160(dbUnknownS38* arg0)
{
	return arg0->unk_dbunks38_0x28;
}

void* func_ovl8_80373168(dbUnknownS38 *arg0)
{
	dbUnknownS38 *var_v0, *var_v1;

	var_v1 = arg0->unk_dbunks38_0x28;
	
	if (var_v1 != NULL) 
	{
		var_v0 = var_v1->unk_dbunks38_0x28;
		
		while (var_v0 != NULL) 
		{
			var_v1 = var_v0;
			
			if (var_v0 != NULL) 
				var_v0 = var_v0->unk_dbunks38_0x28;
			else
				break;
		}
	}
	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037319C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803732B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803733AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037345C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037354C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803735E4.s")

void func_ovl8_80373640(s32 arg0) {}

void func_ovl8_80373648(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373650.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803737DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037383C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373A28.s")

void func_ovl8_80373ABC(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373AC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80373EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803743C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803743CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803743D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803744D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803745BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803746DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803747B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037481C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037486C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037488C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803748C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037493C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037497C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037499C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803749BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803749EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80374FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803750CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803750E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803751C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803755C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037588C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803758B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803758E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803759F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375B04.s")

void func_ovl8_80375B8C(u16* arg0, u16 arg1, u16 arg2)
{
	arg0[0x16/2] = arg2;
	arg0[0x14/2] = arg1;
}

void func_ovl8_80375BA0(u16* arg0, u16* arg1, u16* arg2)
{
	*arg1 = arg0[0x14/2];
	*arg2 = arg0[0x16/2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375BEC.s")

void func_ovl8_80375C54(dbUnknownStruct_80375C54* arg0)
{
	if (arg0->unk0 != 0)
		func_8000A24C(arg0->unk0, 0);

	if (arg0->unk4 != NULL)
	{
		// unk4 is supposed to be GObj* but set to 32 to match
		func_80009C90(arg0->unk4, 0, -1);
		*arg0->unk4 = -0x1FE;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375CB8.s")

void func_ovl8_80375D44(Vec3i* arg0, s32 arg1)
{
	arg0[2].x = arg1;
}

s32 func_ovl8_80375D4C(Vec3i* arg0)
{
	return arg0[2].x;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375D84.s")

void func_ovl8_80375E00(Vec3i* arg0, s32 arg1)
{
	arg0[2].y = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80375E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803761F4.s")

s32 func_ovl8_803762AC(Vec3i* arg0)
{
	return arg0[4].z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803762B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803764C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803768E0.s")

s32 func_ovl8_803769AC(Vec3i* arg0)
{
	return arg0[4].z;
}

void func_ovl8_803769B4(dbUnknownS38 *arg0, dbUnknownS38 *arg1)
{
	func_ovl8_80372A48(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803769D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80376EE0.s")

s32 func_ovl8_80376FB4()
{
	return 2;
}

// 80376FBC
s32 stringLength(char* string)
{
	s32 length;

	if (string == NULL)
		return 0;

	for (length = 0; *string != '\0'; string++, length++);
	return length;
}

// 80376FFC
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

// 80377044
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

// 8037709C
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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377108.s")
// void func_ovl8_80377108(char *a, int v, int b)
// {
// 	while (b--) { char *csr = a++; *csr = v; }
// }

void func_ovl8_80377134(s32 arg0, s32 arg1)
{
	func_ovl8_80376B60(arg1, arg0, &D_ovl8_80389F64, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803771CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037726C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037728C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803772AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803773CC.s")

void func_ovl8_80377AEC(char* arg0, s32 arg1, s32 arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0[0x31], arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377B40(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80377FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80378064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803780B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803781A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803787C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80379070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803798A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80379D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A5B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037A9F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037AA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037AA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037AA88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037ABDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037ACAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B46C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B5F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BBF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BCB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BD94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037BF68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C1D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C30C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C440.s")

void func_ovl8_8037C498(s32** arg0, s32 arg1)
{
	arg0[2][0x84/4] = arg1;
}

void func_ovl8_8037C4A4(void** arg0, s32 unused)
{
	void (*temp_v0)();

	temp_v0 = arg0[1];

	if (temp_v0 != NULL)
		temp_v0();

	if (D_ovl8_8038A1C0 != 0)
	{
		func_80009CC8(D_ovl8_8038A1C0, D_8038EFD0, D_8038EFD4);
		D_ovl8_8038A1C0 = 0;
		D_ovl8_8038A1B8 = 1;
	}
	D_ovl8_8038A1BC = 0;
}

s32 func_ovl8_8037C510(Vec3i* arg0)
{
	return arg0->z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C6DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037C9E4.s")

void func_ovl8_8037CA48(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CBA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CCC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CE30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CE40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CEE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CF4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CFAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037CFD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D2F0.s")

void func_ovl8_8037D34C()
{
	if (D_ovl8_8038A860 != NULL)
	{
		gcEjectGObj(D_ovl8_8038A860);
		D_ovl8_8038A860 = NULL;
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D3DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D63C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D8CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037D9EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037DA08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037DAA0.s")

void func_ovl8_8037DD60(dbMenuPosition* pos, char* text)
{
	s16 temp_s5;
	char current;

	temp_s5 = D_8038F000[0];
	for (current = *text; current != '\0'; text++, current = *text)
	{
		if (current == '\n')
		{
			D_8038F000[0] = temp_s5;
			D_8038F000[1] = D_8038F008[2] + D_8038F000[1] + D_8038F046;
		}
		else
			func_ovl8_8037DAA0(pos, current);
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037DE1C.s")

void func_ovl8_8037DFCC(s16 arg0, s16 arg1)
{
	D_8038F000[1] = arg1;
	D_8038F000[0] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037DFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037E97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037EB00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037EBC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037EE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037EE64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037EF0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037F80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8037FF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038011C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803801DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038045C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803806B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803806C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80380FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038116C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038120C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038125C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803812BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803817C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038185C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803819F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80381DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803820B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038215C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803822D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803824F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038259C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803827A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038295C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382AE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80382F70.s")

void func_ovl8_8038300C(s32 arg0) {}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803831C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803832A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803833A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803835C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803836D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038374C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803837F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038388C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803838B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803838E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803839D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80383FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803840C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803841E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038440C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038442C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803844C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803846F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803846F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803847A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803848CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384C0C.s")

s16 func_ovl8_80384C44(s16* arg0)
{
	return arg0[0x3c/2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80384F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385024.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803851E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038533C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803854C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385598.s")

s32 func_ovl8_80385640(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0xC0);
	if (temp_v0 != 0)
	{
		func_ovl8_80385758(temp_v0, 0, 0, arg1, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038569C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803858B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038597C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038599C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80385F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_8038612C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_80386228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_4/func_ovl8_803863A4.s")

s32 func_ovl8_80386488(s32 arg0, s32 arg1)
{
	D_803903C8 = arg0;
	return 0;
}

void func_ovl8_8038649C()
{
	func_ovl8_8037B3E4(D_803903C4);
	func_ovl8_8037488C(D_803903C0);
}

void func_ovl8_803864CC(s32 arg0, dbUnknownStruct_803864CC* arg1)
{
	s32 temp_v1;
	s32 temp_lo;

	temp_v1 = func_ovl8_8037E7A8(arg1->unk24) + 4;
	temp_lo = arg0 * temp_v1;
	arg1->unk0 = ((D_ovl8_8038E1E4 - temp_lo) - (arg0 * 2)) - 4;
	arg1->unk2 = 4;
	arg1->unk4 = temp_v1;
	arg1->unk6 = 0x10;
}
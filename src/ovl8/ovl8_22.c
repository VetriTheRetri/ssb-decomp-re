#include <sys/develop.h>
#include <db/debug.h>

#define guardNull(in, alt, out) ((out = in), (in != NULL) ? (out = alt) : (out))



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
extern sb32 func_ovl8_80371DE4();
extern sb32 func_ovl8_80371DF4();
extern sb32 func_ovl8_80371E04();
extern sb32 func_ovl8_80371E0C();
extern sb32 func_ovl8_80371E14();
extern sb32 func_ovl8_80371E1C();
extern sb32 func_ovl8_80371E24();
extern sb32 func_ovl8_80371E2C();
extern sb32 func_ovl8_80371E58();
extern sb32 func_ovl8_80373640();
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
void func_ovl8_80382F70();
void func_ovl8_8038300C();
void func_ovl8_80383014();
void func_ovl8_803831C8();
void func_ovl8_803832A4();
void func_ovl8_80383300();
void func_ovl8_80383344();

dbFunction D_ovl8_8038C790[] = {
	{0, NULL},
	{0, (sb32(*)())(func_ovl8_80382F70)},
	{0, func_ovl8_80373640},
	{0, (sb32(*)())(func_ovl8_8038300C)},
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
	{0, (sb32(*)())(func_ovl8_80383014)},
	{0, (sb32(*)())(func_ovl8_803831C8)},
	{0, (sb32(*)())(func_ovl8_803832A4)},
	{0, (sb32(*)())(func_ovl8_80383300)},
	{0, (sb32(*)())(func_ovl8_80383344)},
	{0, NULL},
};

dbFunction D_ovl8_8038C890[] = {
	{0, NULL},
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_80382F70)},
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
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_8038300C)},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFB0, func_ovl8_80373650},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{(s16)0xFFB0, func_ovl8_80373640},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_80383300)},
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_80383344)},
	{0, func_ovl8_80371DE4},
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_803831C8)},
	{0, func_ovl8_80371DF4},
	{(s16)0xFFB0, (sb32(*)())(func_ovl8_803832A4)},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_8038C9E8[] = {
	{0, NULL},
	{(s16)0xFFBC, (sb32(*)())(func_ovl8_80382F70)},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
};

dbUnknown5* func_ovl8_80382EA8(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4, s32 arg5);

extern void syRdpSetViewport(Vp*, f32, f32, f32, f32);

// 80382D90
s32 func_ovl8_80382D90(s32 arg0, dbUnknown3* arg1)
{
	s32 sp24;
	s32 temp_v0 = func_ovl8_803717A0(0xAC);

	if (temp_v0 != 0)
	{
		sp24 = temp_v0;
		func_ovl8_80382EA8(temp_v0, 0, 0, arg1, arg0, arg1->unk_dbunk3_0x24);
	}
	else
		sp24 = 0;

	return sp24;
}

// 80382DF4
dbUnknown5* func_ovl8_80382DF4(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
	if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xAC)) != NULL))
	{
		if (arg1 == NULL)
		{
			arg1 = &arg0->unk_dbunk5_0x50;\
			arg2 = &arg0->unk_dbunk5_0x44;
			#line 37
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
			#line 44
		}

		func_ovl8_80373C10(arg0, arg1, arg2);

		arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
		arg1->db_func = &D_ovl8_8038C890;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;
		arg0->unk_dbunk5_0x40.ls = NULL;
		arg0->unk_dbunk5_0x3C.s_16 = 3;
	}

	return arg0;
}

// 80382EA8
dbUnknown5* func_ovl8_80382EA8(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, s32 arg3, s32 arg4, s32 arg5)
{
	if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xAC)) != NULL))
	{
		if (arg1 == NULL)
		{
			arg1 = &arg0->unk_dbunk5_0x50;\
			arg2 = &arg0->unk_dbunk5_0x44;
			#line 64
			func_ovl8_803717E0(arg1);
			func_ovl8_8037C2D0(arg2);
			#line 71
		}

		func_ovl8_80373CC4(arg0, arg1, arg2, arg3, arg4);

		arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
		arg1->db_func = &D_ovl8_8038C890;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;
		arg0->unk_dbunk5_0x40.ls = arg5;
		arg0->unk_dbunk5_0x3C.s_16 = 3;
	}

	return arg0;
}

// 80382F70
void func_ovl8_80382F70(dbUnknown5* arg0, s32 arg1)
{
	if (arg0 != NULL)
	{
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038C790,
		arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038C890;
		arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038C9E8;

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

// 8038300C
void func_ovl8_8038300C(s32 arg0) {}

// 80383014
void func_ovl8_80383014(dbUnknownLinkStruct *arg0, GObj *arg1) 
{
	u32 *v0;
	DBMenuPosition sp34;
	void *a3;
	void *v1;
	void *a2;

	arg0->unk_dbunkstruct_0x40 = arg1;

	if (arg0->unk_dbunkstruct_0x40 != NULL) 
	{
		((dbUnknownLinkStruct *)v1) = arg0->unk_dbunkstruct_0x38;
		v0 = ((dbUnknownLinkStruct *)v1)->db_func;
		((dbFunction *)v0)[20].unk_dbfunc_0x4(((dbFunction *)v0)[20].unk_dbfunc_0x0 + (uintptr_t)v1, &sp34);
		
		if (1);
		
		a3 = arg0->unk_dbunkstruct_0x38;
		v0 = ((dbUnknownLinkStruct *)a3)->unk_dbunkstruct_0x4C;
		a2 = ((dbUnknownLinkStruct *)v0)->unk_dbunkstruct_0x20;
		v1 = ((dbUnknownLinkStruct *)a2)->db_func;
		((dbFunction *)v1)[9].unk_dbfunc_0x4(((dbFunction *)v1)[9].unk_dbfunc_0x0 + (uintptr_t)a2, &sp34);
		
		syRdpSetViewport(&CObjGetStruct((GObj*)arg0->unk_dbunkstruct_0x40)->viewport, sp34.x, sp34.y, (sp34.x + sp34.w), (sp34.y + sp34.h));

		CObjGetStruct((GObj*)arg0->unk_dbunkstruct_0x40)->projection.persp.aspect = (sp34.w / (f32) sp34.h);
		
		a3 = arg0->unk_dbunkstruct_0x38;
		v0 = ((dbUnknownLinkStruct*)a3)->unk_dbunkstruct_0x4C;
		v1 = ((dbUnknownS38*)v0)->unk_dbunks38_0x18;
		func_8000A2B4(arg0->unk_dbunkstruct_0x40, ((dbFunction *)v1)[6].unk_dbfunc_0x4(((dbFunction *)v1)[6].unk_dbfunc_0x0 + (uintptr_t)v0));

		if (1);
		
		if (guardNull(arg0, arg0->unk_dbunkstruct_0x38, ((dbUnknownLinkStruct *)v0))->bg_color.a != 0) 
		{
			func_ovl8_80376B60(3, &arg0->unk_dbunkstruct_0x38->bg_color, &CObjGetStruct((GObj*)arg0->unk_dbunkstruct_0x40)->color);
		
			if (1);
			
			v0 = &CObjGetStruct((GObj*)arg0->unk_dbunkstruct_0x40)->flags;
			*v0 |= COBJ_FLAG_FILLCOLOR;
		}
		
		if (guardNull(arg0, arg0->unk_dbunkstruct_0x38, ((dbUnknownLinkStruct *)v0))->unk_dbunkstruct_0x1C.link == NULL)
		{
			v0 = &((GObj*)arg0->unk_dbunkstruct_0x40)->flags;
			*v0 |= 1;
		}
	}
}

// 803831C8
void func_ovl8_803831C8(dbUnknown5 *arg0) 
{
	f32 viewport_ulx;
	f32 viewport_uly;
	Vp *vp;
	dbFunction *temp_v0;
	Vec2h sp3C;
	DBMenuPosition sp34;
	dbUnknownLinkStruct *temp_a3;
	dbUnknownLinkStruct *temp_a2;
	dbUnknownLinkStruct *temp_v1;
	dbUnknownLinkStruct *foo;
	
	((dbUnknownLinkStruct*) temp_v0) = arg0->unk_dbunk5_0x38;

	if (arg0->unk_dbunk5_0x40.gobj != NULL) 
	{
		if (1);
		temp_a3 = arg0->unk_dbunk5_0x38;
		temp_a2 = temp_a3->unk_dbunkstruct_0x4C;
		temp_v1 = temp_a2->unk_dbunkstruct_0x20;
		temp_v0 = temp_v1->db_func;
		temp_v0[20].unk_dbfunc_0x4(temp_v0[20].unk_dbfunc_0x0 + (uintptr_t)temp_v1, &sp3C);
		
		((dbUnknownLinkStruct*)temp_v0) = arg0->unk_dbunk5_0x38;
		((dbFunction*)temp_a2) = ((dbUnknownLinkStruct*)temp_v0)->db_func;
		((dbFunction*)temp_a2)[20].unk_dbfunc_0x4(((dbFunction*)temp_a2)[20].unk_dbfunc_0x0 + (uintptr_t)temp_v0, &sp34);
		
		viewport_ulx = sp3C.x + sp34.x;
		viewport_uly = sp3C.y + sp34.y;
		vp = &CObjGetStruct((GObj*)arg0->unk_dbunk5_0x40.gobj)->viewport;
		syRdpSetViewport(vp, viewport_ulx, viewport_uly, (sp3C.x + sp34.x + sp34.w), (sp3C.y + sp34.y + sp34.h));
	}
}

// 803832A4
void func_ovl8_803832A4(dbUnknownLinkStruct* arg0)
{
	dbUnknownLinkStruct* temp_a1;
	dbUnknownS38* temp_v0;
	dbFunction* db_func;

	if (arg0->unk_dbunkstruct_0x40 != 0)
	{
		temp_a1 = arg0->unk_dbunkstruct_0x38;
		temp_v0 = (dbUnknownS38*)temp_a1->unk_dbunkstruct_0x4C;
		db_func = temp_v0->unk_dbunks38_0x18;

		func_8000A2B4(arg0->unk_dbunkstruct_0x40, db_func[6].unk_dbfunc_0x4(db_func[6].unk_dbfunc_0x0 + (uintptr_t)temp_v0, temp_a1, arg0));
	}
}

// 80383300
void func_ovl8_80383300(dbUnknownLinkStruct* arg0)
{
	s32 temp_v1;
	s32* temp_v0;
	func_ovl8_80371DD0(arg0->unk_dbunkstruct_0x38);
	temp_v1 = arg0->unk_dbunkstruct_0x40;
	temp_v0 = temp_v1 + 0x7C;

	if (temp_v1 != 0)
		*temp_v0 &= ~1;
}

// 80383344
void func_ovl8_80383344(dbUnknownLinkStruct* arg0)
{
	s32 temp_v1;
	s32* temp_v0;
	func_ovl8_80371DDC(arg0->unk_dbunkstruct_0x38);
	temp_v1 = arg0->unk_dbunkstruct_0x40;
	temp_v0 = temp_v1 + 0x7C;

	if (temp_v1 != 0)
		*temp_v0 |= 1;
}
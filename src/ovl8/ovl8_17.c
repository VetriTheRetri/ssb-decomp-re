extern "C" {
#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>
}

extern "C" {

typedef struct dbUnknown17_1 {
    s32 dbUnknown17_1_0x0;
    dbUnknownLinkStruct* dbUnknown17_1_0x4;
    s32 dbUnknown17_1_0x8;
    dbUnknownLinkStruct* dbUnknown17_1_0xC;
    dbUnknownLinkStruct* dbUnknown17_1_0x10;
    s32 dbUnknown17_1_0x14;
    s32 dbUnknown17_1_0x18;
    dbUnknownLinkStruct* dbUnknown17_1_0x1C;
    dbUnknownLinkStruct* dbUnknown17_1_0x20;
    dbUnknownLinkStruct* dbUnknown17_1_0x24;
} dbUnknown17_1;

typedef struct dbUnknown17_2 {
    s32 dbUnknown17_2_0x0;
    s32 dbUnknown17_2_0x4;
    dbFunction* dbUnknown17_2_0x8;
} dbUnknown17_2;

typedef struct dbUnknown17_3 {
    s32 dbUnknown17_3_0x0;
    s32 dbUnknown17_3_0x4;
    Vec2h dbUnknown17_2_0x8;
} dbUnknown17_3;

typedef struct dbUnknown17_4 {
    s32 dbUnknown17_4_0x0;
    s32 dbUnknown17_4_0x4;
    s32 dbUnknown17_4_0x8;
    s32 dbUnknown17_4_0xC;
    s32 dbUnknown17_4_0x10;
    s32 dbUnknown17_4_0x14;
    s32 dbUnknown17_4_0x18;
} dbUnknown17_4;

extern void* func_ovl8_803717A0(s32 arg0);
extern void* func_ovl8_803717E0(dbUnknownLinkStruct* arg0);
extern dbUnknown5* func_ovl8_80380B6C(dbUnknown5*, s32, s32, DBMenu*, s32);
extern dbUnknown5* func_ovl8_80380048(dbUnknown5*, s32, s32, DBMenu*, s32);
extern u32 func_ovl8_80380414(dbUnknown5*);

extern void stringCopy(char* target, char* source);
extern void func_ovl8_803717C0(dbUnknownLinkStruct* arg0);
extern void func_ovl8_8037FF40(s32* arg0, s32* arg1, s32* arg2, s32* arg3, s32* arg4);
extern dbUnknownLink** func_ovl8_803716D8(u32 arg0);
extern void func_ovl8_80371764(s32 arg0);

extern void* memcpy(void*, const void*, size_t);

typedef struct dbUnknown17 {
	s32 dbUnknown17_0x0;
	s32 dbUnknown17_0x4;
	s32* dbUnknown17_0x8;
	s32 dbUnknown17_0xC;
	s32 dbUnknown17_0x10;
} dbUnknown17;

typedef struct {
	s16 unk0;
	s32 unk4[0x8/4];
	s32* unkC;
} dbUnknown18;

typedef struct {
	s32 unk0[0x8/4];
	dbUnknown18* unk8;
	s32 unkC;
	s32 unk10;
} dbUnknown19;

typedef struct {
	s32 unk0[0x4/4];
	s32 unk4;
	dbUnknownLink** unk8;
	s32 unkC;
	s32 unk10;
	s32 unk14;
	s32 unk18[0x4/4];
	s32 unk1C;
} dbUnknown20;

typedef struct {
	s32 unk0[0x30 / 4];
	struct dbUnknown23* handler;
} dbUnknown21;

typedef struct {
	s32 unk0;
	dbUnknown21* obj;
	s32* table;      // pointer table (used in indexed lookup)
	s32 count;
} dbUnknown22;

typedef struct dbUnknown23 {
	s32 unk0[0x70 / 4];
	s16 offset;
	void (*callback)(void* base, void* arg);
} dbUnknown23;

typedef struct {
	s32 unk0[0x8/4];
	s32* unk8;
	s32 unkC;
} dbUnknown24;

void func_ovl8_8038120C(dbUnknownLinkStruct* arg0, s32 arg1);
void func_ovl8_8038125C(s32 **arg0, s32 arg1, s32 *arg2);
void func_ovl8_80381274(dbUnknown17* arg0, s32 arg1);
void func_ovl8_803812BC(dbUnknown17* arg0, s32* arg1);
extern s32 func_ovl8_80381308(dbUnknown17_1* arg0, dbUnknown17_3* arg1);
void func_ovl8_80381710(dbUnknownStructSC* arg0, s32 arg1);
void func_ovl8_803817C0(dbUnknown22*, f32);
void func_ovl8_8038185C(dbUnknown24 *arg0, s32 *arg1);
void func_ovl8_80381908(dbUnknownLink* arg0);
void func_ovl8_803819F4(dbUnknown19 *arg0, s32 arg1);
void func_ovl8_80381A58(dbUnknown19 *arg0, s32 arg1, s32 *arg2);
void func_ovl8_80381A88(dbUnknown19 *arg0, s32 *arg1);
void func_ovl8_80381AF0(f32** arg0, s32 arg1);
void func_ovl8_80381B04(s32 arg0, s32 arg1);
void func_ovl8_80381B10(dbUnknownLinkStruct* arg0, s32 arg1);

s32 D_ovl8_8038BC30 = 0x2D2D2D00;

dbFunction D_ovl8_8038BC34[] = {
	{0, NULL},
	{0, (sb32(*)())func_ovl8_8038120C},
	{0, (sb32(*)())func_ovl8_8038125C},
	{0, (sb32(*)())func_ovl8_80381274},
	{0, (sb32(*)())func_ovl8_803812BC},
	{0, (sb32(*)()) func_ovl8_80381308},
	{0, (sb32(*)())func_ovl8_80381710},
	{0, (sb32(*)())func_ovl8_803817C0},
	{0, (sb32(*)())func_ovl8_8038185C},
	{0, (sb32(*)())func_ovl8_80381908},
	{0, NULL},
};

dbFunction D_ovl8_8038BC8C[] = {
	{0, NULL},
	{0, (sb32(*)())func_ovl8_80381B10},
	{0, (sb32(*)())func_ovl8_80381A58},
	{0, (sb32(*)())func_ovl8_803819F4},
	{0, (sb32(*)())func_ovl8_80381A88},
	{0, (sb32(*)()) func_ovl8_80381308},
	{0, (sb32(*)())func_ovl8_80381AF0},
	{0, (sb32(*)())func_ovl8_80381B04},
	{0, (sb32(*)())func_ovl8_8038185C},
	{0, (sb32(*)())func_ovl8_80381908},
	{0, NULL},
};

DBMenu D_ovl8_8038BCE4 = {
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0xff },
	{ 0, 0, 0, 0xff },
	1, 0, 0x504F504D, 0, 0, 0, 0
};

// 80381130
dbUnknownLinkStruct* func_ovl8_80381130(dbUnknownLinkStruct* arg0)
{
	if ((arg0 != NULL) || ((arg0 = (dbUnknownLinkStruct *) func_ovl8_803717A0(0x20)) != NULL))
	{
		arg0->unk_dbunkstruct_0x1C.link = (dbUnknownLinkStruct *) &D_ovl8_8038BC34;
	}
	return arg0;
}

// 0x8038116C a fn that resets dbUnknownLinkStruct to some degree
dbUnknownLinkStruct* func_ovl8_8038116C(dbUnknownLinkStruct* targetLinkStruct, s32 arg1, dbUnknownS38* arg2) {
	if ( targetLinkStruct || (targetLinkStruct = (dbUnknownLinkStruct *) func_ovl8_803717A0(32))) {
		
		targetLinkStruct->unk_dbunkstruct_0x1C.link = (dbUnknownLinkStruct *) &D_ovl8_8038BC34;
		*(dbUnknownS38**)&targetLinkStruct->position.y = arg2;
		
		((sb32 (*)(uintptr_t, s32, dbUnknownS38*)) arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x4)(arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x0 + (uintptr_t) arg2, 0x4CBEBC20, arg2);
		
		func_ovl8_8038185C((dbUnknown24 *) targetLinkStruct, (s32 *) arg1);
	   
		stringCopy((char*)*(dbUnknownS38**)&targetLinkStruct->position.y + 0xC, (char *) &D_ovl8_8038BC30);
		
		*(u32*)&targetLinkStruct->text_color = 0;
		*(u32*)&targetLinkStruct->bg_color  = 0;
		targetLinkStruct->id = (s32) targetLinkStruct->unk_dbunkstruct_0xC;
	}
	
	return targetLinkStruct;
}

// 8038120C
void func_ovl8_8038120C(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;

	arg0->unk_dbunkstruct_0x1C.link = (dbUnknownLinkStruct *) &D_ovl8_8038BC34;
	func_ovl8_80381908((dbUnknownLink *) arg0);
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

// 8038125C
void func_ovl8_8038125C(s32 **arg0, s32 arg1, s32 *arg2)
{
	*arg2 = (arg0[2] + (arg1))[-1];
}

// 80381274
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

// 803812BC
void func_ovl8_803812BC(dbUnknown17* arg0, s32* arg1)
{
	if (arg0->dbUnknown17_0xC < arg0->dbUnknown17_0x10)
	{
		arg0->dbUnknown17_0xC = arg0->dbUnknown17_0xC + 1;
		arg0->dbUnknown17_0x8[arg0->dbUnknown17_0xC - 1] = *arg1;
		arg0->dbUnknown17_0x8[arg0->dbUnknown17_0xC] = 0;
	}
}

// 80381308
// TODO: when this function is matched, remove D_ovl8_8038BCEC, D_ovl8_8038BCF0, and D_ovl8_8038BCF4 from not_found.txt
s32 func_ovl8_80381308(dbUnknown17_1* arg0, dbUnknown17_3* arg1) 
{
    dbUnknown5* temp_v0;
    dbUnknown5* temp_v0_2;
    dbUnknown5* a2;
    f32 var_f0;
    f32 sp2C;
    s32 var_a3;
    dbUnknownLinkStruct* var_v1;  
    dbUnknownLinkStruct *t4;
    dbUnknownLinkStruct *t42;

    if (arg0->dbUnknown17_1_0xC == 0) 
    {
        return 1;
    } 
    else 
    {        
        var_v1 = arg0->dbUnknown17_1_0x4;
        if (var_v1 != NULL) 
        {
            var_v1 = var_v1->unk_dbunkstruct_0x38;
        }

        var_a3 = (var_v1->unk_dbunkstruct_0x24);
        
        switch (var_a3) 
        {
            case 7:
                D_ovl8_8038BCE4.unk_dbmenu_0x10 = 6;
                break;
            case 2:
                D_ovl8_8038BCE4.unk_dbmenu_0x10 = 1;
                break;
            case 5:
                D_ovl8_8038BCE4.unk_dbmenu_0x10 = 4;
                break;
        }
        
        D_ovl8_8038BCE4.position.x = arg1->dbUnknown17_2_0x8.x;
        D_ovl8_8038BCE4.position.y = arg1->dbUnknown17_2_0x8.y;
        
        var_v1 = arg0->dbUnknown17_1_0x4;
        if (var_v1 != NULL) {
            var_v1 = var_v1->unk_dbunkstruct_0x38;
        }
        
        D_ovl8_8038BCE4.text_color = var_v1->text_color;
        
        var_v1 = arg0->dbUnknown17_1_0x4;
        if (var_v1 != NULL) {
            var_v1 = var_v1->unk_dbunkstruct_0x38;
        }
        
        D_ovl8_8038BCE4.bg_color = var_v1->bg_color;
        
        D_ovl8_8038BCE4.unk_dbmenu_0x24 = arg0->dbUnknown17_1_0x8;
        
        
        var_v1 = (dbUnknownLinkStruct*)arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x30;
        sp2C = ((f32 (*)(intptr_t, void*, dbUnknown17_3*, s32))((dbFunction*) var_v1)[5].unk_dbfunc_0x4)(((dbFunction*) var_v1)[5].unk_dbfunc_0x0 + (uintptr_t)arg0->dbUnknown17_1_0x4, &D_ovl8_8038BCE4, arg1, var_a3);
        
        arg0->dbUnknown17_1_0x18 = 1;
        ((dbUnknown5*)arg0->dbUnknown17_1_0x4)->unk_dbunk5_0x0 = 1.0f;
        ((sb32 (*)(uintptr_t, s32)) arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38->db_func[35].unk_dbfunc_0x4)(arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38->db_func[35].unk_dbfunc_0x0 + (uintptr_t)arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38, 1);
        
        if (arg0->dbUnknown17_1_0x14 != 0) 
        {
            temp_v0 = (dbUnknown5*)func_ovl8_803717A0(0x130);
            if (temp_v0 != NULL) 
            {
                func_ovl8_80380B6C(temp_v0, 0, 0, &D_ovl8_8038BCE4, arg0->dbUnknown17_1_0x8);
                var_a3 = (s32)temp_v0;
            }
            else 
            {
                var_a3 = NULL;
            }
            a2 = (dbUnknown5 *)var_a3;
        } 
        else 
        {
            temp_v0_2 = (dbUnknown5*)func_ovl8_803717A0(0x130);
            if (temp_v0_2 != NULL) 
            {
                func_ovl8_80380048(temp_v0_2, 0, 0, &D_ovl8_8038BCE4, arg0->dbUnknown17_1_0x8);
                var_v1 = (dbUnknownLinkStruct *)temp_v0_2;
            } 
            else 
            {
                var_v1 = NULL;
            }
            a2 = (dbUnknown5 *)var_v1;
        }

        var_v1 = (dbUnknownLinkStruct*)a2->db_func;
        ((sb32 (*)(uintptr_t)) ((dbFunction*) var_v1)[22].unk_dbfunc_0x4)((((dbFunction*) var_v1))[22].unk_dbfunc_0x0 + (uintptr_t)a2);
        
        a2->unk_dbunk5_0xAC = (dbUnknownS38*) (s32) sp2C;
        
        var_v1 = arg0->dbUnknown17_1_0x4;
        if (var_v1 != NULL) {
            var_v1 = var_v1->unk_dbunkstruct_0x38;
        }
        
        *(dbUnknown17_4*)&a2->unk_dbunk5_0x20.ls->unk_dbunkstruct_0x2C = *(dbUnknown17_4*)&var_v1->unk_dbunkstruct_0x2C;
        
        var_f0 = (u32) func_ovl8_80380414(a2);
        
        if (a2 != NULL) {
            var_v1 = (dbUnknownLinkStruct*)a2->db_func;
            ((void (*)(uintptr_t, s32)) ((dbFunction*) var_v1)[1].unk_dbfunc_0x4)(((dbFunction*) var_v1)[1].unk_dbfunc_0x0 + (uintptr_t) a2, 3);
        }
        
        arg0->dbUnknown17_1_0x18 = 0;
        *(f32*)&arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x0 = sp2C;
        
        ((void (*)(uintptr_t, s32)) arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38->db_func[35].unk_dbfunc_0x4)(arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38->db_func[35].unk_dbfunc_0x0 + (uintptr_t)arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x38, 1);
        
        *(f32*)&arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x20 = var_f0;
        
        if (var_f0 != 0.0f) 
        {
            dbFunction* temp_v1;
            dbFunction* temp_v1_2;
            
            t4 = arg0->dbUnknown17_1_0x4;
            temp_v1 = (dbFunction *)t4->unk_dbunkstruct_0x30;
            ((void (*)(uintptr_t, f32))temp_v1[8].unk_dbfunc_0x4)(temp_v1[8].unk_dbfunc_0x0 + (uintptr_t)t4, var_f0);
            
            t4 = arg0->dbUnknown17_1_0x4;
            temp_v1 = (dbFunction *)t4->unk_dbunkstruct_0x30;
            ((void (*)(uintptr_t, f32))temp_v1[18].unk_dbfunc_0x4)(temp_v1[18].unk_dbfunc_0x0 + (uintptr_t)t4, 0.0F);
        }
        
        if ((var_f0 != 0.0f) && (var_f0 == sp2C)) 
        {
            dbFunction* temp_v1;
            
            a2 = (dbUnknown5 *)arg0->dbUnknown17_1_0x4;
            var_v1 = arg0->dbUnknown17_1_0x4;
            if (var_v1 != NULL) {
                var_v1 = var_v1->unk_dbunkstruct_0x38;
            }
            
            temp_v1 = ((dbUnknown17_2*)arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x34)->dbUnknown17_2_0x8;
            t42 = arg0->dbUnknown17_1_0x4;
            if (1);
            ((void (*)(uintptr_t, s32, dbUnknownLinkStruct *)) temp_v1[3].unk_dbfunc_0x4)(temp_v1[3].unk_dbfunc_0x0 + (uintptr_t)arg0->dbUnknown17_1_0x4->unk_dbunkstruct_0x34, var_v1->unk_dbunkstruct_0xC, t42);
        }

        if ((var_f0 == 0.0f) && (sp2C == 0.0f)) 
        {
            dbFunction* temp_v1;
            
            t4 = arg0->dbUnknown17_1_0x4;
            temp_v1 = (dbFunction *)t4->unk_dbunkstruct_0x30;
            ((void (*)(uintptr_t, f32))temp_v1[8].unk_dbfunc_0x4)(temp_v1[8].unk_dbfunc_0x0 + (uintptr_t)t4, 0.0f);
        }
    }
    
    return 1;
}

// 80381710
void func_ovl8_80381710(dbUnknownStructSC* arg0, s32 arg1) {
	dbUnknown5_2* temp_v0;
	dbFunction* temp_v1;

	arg0->unk_0x4->dbUnknown5_2_unk_f32_0x0 = arg1;
	temp_v0 = arg0->unk_0x4;
	
	if ((temp_v0->dbUnknown5_2_unk_f32_0x0 > 0.0f) && (temp_v0->dbUnknown5_2_unk_f32_0x0 <= arg0->unk_0xC)) {
		temp_v1 = temp_v0->dbUnknown5_2_db_func;
		((sb32 (*)(uintptr_t, s32)) temp_v1[14].unk_dbfunc_0x4)(temp_v1[14].unk_dbfunc_0x0 + (uintptr_t)temp_v0, (s32) arg0->unk_0x8[arg1 - 1]);
		return;
	}
	
	temp_v1 = temp_v0->dbUnknown5_2_db_func;
	((sb32 (*)(uintptr_t, void*)) temp_v1[14].unk_dbfunc_0x4)(temp_v1[14].unk_dbfunc_0x0 + (uintptr_t) temp_v0, &D_ovl8_8038BC30);
}


// 803817C0
void func_ovl8_803817C0(dbUnknown22* arg0, f32 arg1)
{
	s32 index;
	dbUnknown23* handler;

	if (arg1 > 0.0f)
	{
		index = arg1;

		if (arg0->count >= index)
		{
			handler = arg0->obj->handler;

			handler->callback(
				(void*)(handler->offset + (uintptr_t)arg0->obj),
				(void*) arg0->table[index - 1]
			);
			return;
		}
	}

	handler = arg0->obj->handler;

	handler->callback(
		(void*)(handler->offset + (uintptr_t)arg0->obj),
		&D_ovl8_8038BC30
	);
}

// 8038185C
void func_ovl8_8038185C(dbUnknown24 *arg0, s32 *arg1) 
{
	s32 i;
	s32 sp40;
	s32 sp3C;
	s32 sp38;
	s32 *var_a1;
	s32 *var_v1;

	func_ovl8_8037FF40(arg1, &arg0->unkC, &sp40, &sp3C, &sp38);
	arg0->unk8 = (s32 *) func_ovl8_803716D8((arg0->unkC * 4) + 4);
	
	if (arg0->unk8 == NULL || arg0->unkC == 0)
		return;
	
	var_a1 = arg0->unk8;
	var_v1 = arg1;
	
	for (i = 0; arg0->unkC > i; i++) { var_a1[i] = *var_v1; var_v1++; }

	var_a1[i] = 0;
}

// 80381908
void func_ovl8_80381908(dbUnknownLink* arg0)
{
	dbUnknownLink* t = arg0->unk_dbunklink_0x8;
	if (t != NULL)
	{
		func_ovl8_80371764((s32) t);
	}
}

// 80381934
void *func_ovl8_80381934(dbUnknown20 *arg0, s16 *arg1, dbUnknownS38 *arg2)
{
	s32 sp24;
	s16 temp_v1_2;

	if ((arg0 != NULL) || (arg0 = (dbUnknown20 *) func_ovl8_803717A0(0x20), (arg0 != NULL)))
	{
		func_ovl8_80381130((dbUnknownLinkStruct *) arg0);
		arg0->unk1C = (s32) &D_ovl8_8038BC8C;
		arg0->unk4 = (s32) arg2;
		((sb32 (*)(uintptr_t, s32, dbUnknownS38*)) arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x4)(arg2->unk_dbunks38_0x30[11].unk_dbfunc_0x0 + arg0->unk4, 0x4CBEBC20, arg2);
		temp_v1_2 = *arg1;
		arg0->unk14 = 1;
		arg0->unkC = (s32) temp_v1_2;
		arg0->unk10 = (s32) temp_v1_2;
		sp24 = (temp_v1_2 * 8) + 0xC;
		arg0->unk8 =  func_ovl8_803716D8(sp24);
		memcpy(arg0->unk8, arg1, sp24);
	}
	return arg0;
}

// 803819F4
void func_ovl8_803819F4(dbUnknown19 *arg0, s32 arg1)
{
	s16 *temp_v0;

	if (arg1 == 0)
	{
		arg0->unkC = 0;
		*arg0->unk8->unkC = 0;
		arg0->unk8->unk0 = 0;
		return;
	}

	*(arg0->unk8->unkC + ((arg0->unkC - arg1) * 2)) = 0;
	temp_v0 = (s16 *) arg0->unk8;
	arg0->unkC = (s32) (arg0->unkC - arg1);
	temp_v0[0] = (s16) (temp_v0[0] - arg1);
}

// 80381A58
void func_ovl8_80381A58(dbUnknown19 *arg0, s32 arg1, s32 *arg2)
{
	s32 temp_v0;

	temp_v0 = arg1 * 2;
	arg2[0x0/4] = ((s32*)(arg0->unk8->unkC + temp_v0))[-8/4];
	arg2[0x4/4] = ((s32*)(arg0->unk8->unkC + temp_v0))[-4/4];
}

// 80381A88
void func_ovl8_80381A88(dbUnknown19 *arg0, s32 *arg1)
{
	s16 *temp_v1;

	if (arg0->unkC >= arg0->unk10)
		return;

	arg0->unkC = arg0->unkC + 1;
	(arg0->unk8->unkC + (arg0->unkC * 2))[-8/4] = arg1[0/4];
	(arg0->unk8->unkC + (arg0->unkC * 2))[-4/4] = arg1[4/4];
	temp_v1 = (s16 *) arg0->unk8;
	temp_v1[0]++;
}

// 80381AF0
void func_ovl8_80381AF0(f32** arg0, s32 arg1)
{
	*arg0[1] = (f32) arg1;
}

// 80381B04
void func_ovl8_80381B04(s32 arg0, s32 arg1) {}

// 80381B10
void func_ovl8_80381B10(dbUnknownLinkStruct* arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;

	arg0->unk_dbunkstruct_0x1C.link = (dbUnknownLinkStruct *) &D_ovl8_8038BC8C;
	func_ovl8_8038120C(arg0, 0);
	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

} // extern "C"

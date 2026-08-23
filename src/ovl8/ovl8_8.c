// ovl8_8, piece 1 of 2 -- built with the IDO 7.1 IRIX 4.1 `accom` frontend
// (decomp.me compiler `ido7.1_irix4`, flags `-O2 -mips2 -Wp,-+`).

#include <sys/develop.h>
#include <db/debug.h>

s32 func_ovl8_8037A6D4(db4Shorts *rect1, db4Shorts *rect2, db4Shorts *intersection);
void func_ovl8_8037AA88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, dbUnknown7* arg4);

typedef struct UiLineStepper {
    s32 startX;                 // dbUnknown8_8_0x0
    s32 startY;                 // dbUnknown8_8_0x4
	
    s32* errorSub;              // dbUnknown8_8_0x8   (usually dx or dy)
    s32* errorAdd;              // dbUnknown8_8_0xC   (usually 2*minor)

    s32 endX;                   // dbUnknown8_8_0x10
    s32 endY;                   // dbUnknown8_8_0x14
	
    s32* stepPrimary;           // dbUnknown8_8_0x18  (dx or dy)
    s32* stepSecondary;         // dbUnknown8_8_0x1C  (other axis)
	
    s32 currentX;               // dbUnknown8_8_0x20
    s32 currentY;               // dbUnknown8_8_0x24
	
    s32* posPrimary;            // dbUnknown8_8_0x28  (&currentX or &currentY)
    s32* posSecondary;          // dbUnknown8_8_0x2C  (&currentY or &currentX)
	
    s32 stepsRemaining;         // dbUnknown8_8_0x30
    s32 totalSteps;             // dbUnknown8_8_0x34

    s32 error;                  // dbUnknown8_8_0x38
} UiLineStepper;

void func_ovl8_80377B40(Sprite*, s16*);
void func_ovl8_80377F50(Sprite*, db4Shorts*);
void func_ovl8_80377FE4(Sprite*, db4Shorts*, db4Shorts*);
void func_ovl8_803780B8(Sprite*, DBMenuPosition*);
s32 func_ovl8_8037A67C(s16*, s16*, s16*);
void func_ovl8_8037A904(db4Shorts*, db4Shorts*);
void func_ovl8_8037A9C0(db4Shorts*, s32, s32);
void func_ovl8_8037A9F4(DBMenuPosition*, DBMenuPosition*);
void func_ovl8_8037AA28(db4Shorts*, db4Shorts*);
s32 func_ovl8_8037AA5C(DBMenuPosition*);
s32 func_ovl8_8037ABDC(Vec2h*, UiLineStepper*);
void func_ovl8_8037B46C(Sprite*, DBMenuPosition*, dbUnknown8_SC*, s32); 
void func_ovl8_8037BD44();
void func_ovl8_8037BEC8();
void func_ovl8_8037BF34();
void* func_ovl8_8037BDF4(GObj*);
void* func_ovl8_8037BD94(GObj*);

// BSS
extern s32 D_ovl8_8038EE60;
extern s32 D_ovl8_8038EE64;
extern s32 D_ovl8_8038EE68[];
extern s32 D_ovl8_8038EE70[];
extern Gfx D_8038EE90_1AB6E0[];

// DATA
s32 D_ovl8_80387CA0[] = { 0xDF000000, 0x00000000 };
// The debug menu's 16x16 RGBA5551 mouse cursor. Extracted from the baserom
// at build time by tools/extractOvl8_8ArrowTex.py rather than hard-coded, so
// the pixels live in assets/ instead of the source tree. D_ovl8_80387EA8
// (Bitmap) points here and D_ovl8_80387EB8 (Sprite) declares the format.
u16 D_ovl8_80387CA8[16 * 16] =
{
	#include <ovl8/ovl8_8_arrow.rgba16.inc.c>
};
// Line numbers in this file are load-bearing scheduler inputs and the include
// above is 31 lines shorter than the array it replaces, so re-anchor here.
#line 97

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
extern Sprite D_ovl8_80389F70;    // Template sprite structure
extern dbUnknown8_SC* D_ovl8_80389FB4;
extern dbUnknown8_SC* D_ovl8_8038A068;
extern DBMenu D_ovl8_8038A11C;
extern GObj *D_8038EFC0_1AB810;
extern dbUnkStruct *D_8038EFC4_1AB814;
extern dbUnknownLinkStruct* D_8038EFC8_1AB818;
extern dbTestMenu* D_8038EFCC_1AB81C;
extern dbUnknown8_S28 D_ovl8_8038A144;
extern s16 D_ovl8_80389F30;
extern s16 D_ovl8_80389F34;
extern s16 D_ovl8_80389F38;
extern s16 D_ovl8_80389F3C;
extern s16 D_ovl8_80389F40;
extern s16 D_ovl8_80389F44;

extern DBMenu D_ovl8_80389F68;

// 0x80376B60
void func_ovl8_80376B60(s32 arg0, u8* arg1, u32* arg2)
{
	if (arg0 == 1) goto c1;
	if (arg0 == 2) goto c2;
	if (arg0 != 3) return;
	goto c3;
	c1:
		*arg2 = (u32) arg1;
		return;
	c2:
		*arg2 = ((u32)arg1[0] << 8) & 0xF800;
		*arg2 |= (((u32)arg1[1] * 8) & 0x7C0);
		*arg2 |= (((u32)arg1[2] >> 2) & 0x3E);
		*arg2 |= arg1[3] ? 1 : 0;
		return;
	c3:
		*arg2 = ((u32)arg1[0] << 24) & 0xFF000000;
		*arg2 |= (((u32)arg1[1] << 16) & 0xFF0000);
		*arg2 |= (((u32)arg1[2] << 8) & 0xFF00);
		*arg2 |= (((u32)arg1[3] << 0) & 0xFF);
		return;
}

// 0x80376C40
void func_ovl8_80376C40(s32 arg0, u32 arg1, u8* arg2)
{
	u32 var_v0;
	if (arg0 != 2)
	{ if (arg0 != 3) { return; } goto c3; }
	c2:;
		arg2[0] = (u32) (((f32) ((arg1 >> 0xB) & 0x1F) / 31.0) * 255.0);
		arg2[1] = (u32) (((f32) ((arg1 >> 6) & 0x1F) / 31.0) * 255.0);
		arg2[2] = (u32) (((f32) ((arg1 >> 1) & 0x1F) / 31.0) * 255.0);
		if (arg1 & 1)
			var_v0 = 0x255;
		else
			var_v0 = 0;
		arg2[3] = var_v0;
		return;
	c3:
		arg2[0] = (arg1 >> 24) & 0xFF;
		arg2[1] = (arg1 >> 16) & 0xFF;
		arg2[2] = (arg1 >> 8) & 0xFF;
		arg2[3] = (arg1 >> 0) & 0xFF;
		return;

}

// 0x80376EE0
void func_ovl8_80376EE0(u8* arg0, u8* arg1, s32 arg2)
{
	f64 temp_f0;

	temp_f0 = (f64) arg2;
	arg1[0] = (s32) (((f32) arg0[0] / 100.0) * temp_f0);
	arg1[1] = (s32) (((f32) arg0[1] / 100.0) * temp_f0);
	arg1[2] = (s32) (((f32) arg0[2] / 100.0) * temp_f0);
	arg1[3] = arg0[3];
}

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

// 0x80377108 Some sort of fill function
void func_ovl8_80377108(char *dest, int value, int count)
{ 
    char * pos; 
    pos = (char *)count--;
    if(pos != 0){
        pos--;
        do {
            pos = dest;
            dest++; *pos = value;
        } while(count--); 
    } 
}


// 0x80377134
void func_ovl8_80377134(u8* arg0, s32 arg1)
{
	func_ovl8_80376B60(arg1, arg0, (u32*)&D_ovl8_80389F64);
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
void func_ovl8_8037728C(Vec2h* arg0)
{
	func_ovl8_80375BD0(arg0);
}

// 0x803772AC
void func_ovl8_803772AC(dbUnknown5* arg0)
{
	DBMenu sp20;
	s16 arg1, arg2;
	dbFunction* db_func;

	func_ovl8_80374A54(arg0, &sp20);

	db_func = arg0->db_func;
	arg1 = 160 - (sp20.position.w / 2);
	arg2 = 120 - (sp20.position.h / 2);
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
void func_ovl8_80377374(DBMenuPosition *arg0) 
{
    if (arg0 != NULL) 
    {
        D_ovl8_80389F68.position = *arg0;
    }
    else
    {
        D_ovl8_80389F68.position.x = D_ovl8_80389F68.position.y = 0;
        D_ovl8_80389F68.position.w = D_ovl8_80389F68.position.h = 32767;
    }
}

// 0x803773CC
void func_ovl8_803773CC(Bitmap* bmp, s16 bmsiz, DBMenuPosition* rect)
{
    s16 width;
    s16 y;
    s16 x;
    s32 mode;
    s32 row;
    s32 is_odd;
    u8 color_u8;
    u8 read_u8;
    u8 tmp_u8;
    u16 color_u16;
    u16 read_u16;
    u16 tmp_u16;
    u32 color_u32;
    u32 read_u32;
    u32 tmp_u32;

    width = bmp->width_img;

    switch (bmsiz)
    {
    case G_IM_SIZ_8b:
        for (y = 0; y < rect->h; y++)
        {
            for (x = 0; x < rect->w; x++)
            {
                mode = D_ovl8_80389F60;

                if (mode == 4)
                {
                    row = rect->y + y;
                    is_odd = row & 1;
                    color_u8 = (u8)D_ovl8_80389F5C; }
                else
                {
                    row = rect->y + y;
                    is_odd = row & 1;

                    if (is_odd)
                    {
                        if ((rect->x + x) & 4)
                        {
                            tmp_u8 = ((u8*)bmp->buf)[(row * width) + rect->x + x - 4];
                        }
                        else
                        {
                            tmp_u8 = ((u8*)bmp->buf)[(row * width) + rect->x + x + 4];
                        }
                        read_u8 = tmp_u8;
                    }
                    else
                    {
                        read_u8 = ((u8*)bmp->buf)[(row * width) + rect->x + x];
                    }

                    color_u8 = read_u8;
                    if (D_ovl8_80389F60 != 2)
                    {
                        if (D_ovl8_80389F60 != 1)
                        {
                            goto blend_end8;
                        }
                        goto blend_xor8;
                    }
                    color_u8 = read_u8 | D_ovl8_80389F5C;
                    goto blend_end8;
                    blend_xor8:
                    color_u8 = read_u8 ^ D_ovl8_80389F5C;
                    blend_end8:
                    ;

                }

                if (is_odd)
                {
                    if ((rect->x + x) & 4)
                    {
                        ((u8*)bmp->buf)[(row * width) + rect->x + x - 4] = color_u8;
                        ((u8*)bmp->buf)[((rect->y + y) * width) + rect->x + x - 4] = color_u8;
                        ((u8*)bmp->buf)[((rect->y + y) * width) + rect->x + x - 4] = color_u8;
                    }
                    else
                    {
                        ((u8*)bmp->buf)[(row * width) + rect->x + x + 4] = color_u8;
                        ((u8*)bmp->buf)[((rect->y + y) * width) + rect->x + x + 4] = color_u8;
                    }
                }
                else
                {
                    ((u8*)bmp->buf)[(row * width) + rect->x + x] = color_u8;
                }
            }
        }
        break;


    case G_IM_SIZ_4b:
        break;

    case G_IM_SIZ_16b:
        for (y = 0; y < rect->h; y++)
        {
            for (x = 0; x < rect->w; x++)
            {
                mode = D_ovl8_80389F60;

                if (mode == 4)
                {
                    row = rect->y + y;
                    is_odd = row & 1;
                    color_u16 = (u16)D_ovl8_80389F5C; }
                else
                {
                    row = rect->y + y;
                    is_odd = row & 1;

                    if (is_odd)
                    {
                        if ((rect->x + x) & 2)
                        {
                            tmp_u16 = ((u16*)bmp->buf + (row * width) + rect->x + x)[-2];
                        }
                        else
                        {
                            tmp_u16 = ((u16*)bmp->buf + (row * width) + rect->x + x)[2];
                        }
                        read_u16 = tmp_u16;
                    }
                    else
                    {
                        read_u16 = ((u16*)bmp->buf + (row * width) + rect->x + x)[0];
                    }

                    color_u16 = read_u16;
                    if (D_ovl8_80389F60 != 2)
                    {
                        if (D_ovl8_80389F60 != 1)
                        {
                            goto blend_end16;
                        }
                        goto blend_xor16;
                    }
                    color_u16 = read_u16 | D_ovl8_80389F5C;
                    goto blend_end16;
                    blend_xor16:
                    color_u16 = read_u16 ^ D_ovl8_80389F5C;
                    blend_end16:
                    ;

                }

                if (is_odd)
                {
                    if ((rect->x + x) & 2)
                    {
                        ((u16*)bmp->buf + (row * width) + rect->x + x)[-2] = color_u16;
                        ((u16*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[-2] = color_u16;
                        ((u16*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[-2] = color_u16;
                    }
                    else
                    {
                        ((u16*)bmp->buf + (row * width) + rect->x + x)[2] = color_u16;
                        ((u16*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[2] = color_u16;
                    }
                }
                else
                {
                    ((u16*)bmp->buf + (row * width) + rect->x + x)[0] = color_u16;
                }
            }
        }
        break;


    case G_IM_SIZ_32b:
        for (y = 0; y < rect->h; y++)
        {
            for (x = 0; x < rect->w; x++)
            {
                mode = D_ovl8_80389F60;

                if (mode == 4)
                {
                    row = rect->y + y;
                    is_odd = row & 1;
                    color_u32 = D_ovl8_80389F5C; }
                else
                {
                    row = rect->y + y;
                    is_odd = row & 1;

                    if (is_odd)
                    {
                        if ((rect->x + x) & 2)
                        {
                            tmp_u32 = ((u32*)bmp->buf + (row * width) + rect->x + x)[-2];
                        }
                        else
                        {
                            tmp_u32 = ((u32*)bmp->buf + (row * width) + rect->x + x)[2];
                        }
                        read_u32 = tmp_u32;
                    }
                    else
                    {
                        read_u32 = ((u32*)bmp->buf + (row * width) + rect->x + x)[0];
                    }

                    color_u32 = read_u32;
                    if (D_ovl8_80389F60 != 2)
                    {
                        if (D_ovl8_80389F60 != 1)
                        {
                            goto blend_end32;
                        }
                        goto blend_xor32;
                    }
                    color_u32 = read_u32 | D_ovl8_80389F5C;
                    goto blend_end32;
                    blend_xor32:
                    color_u32 = read_u32 ^ D_ovl8_80389F5C;
                    blend_end32:
                    ;

                }

                if (is_odd)
                {
                    if ((rect->x + x) & 2)
                    {
                        ((u32*)bmp->buf + (row * width) + rect->x + x)[-2] = color_u32;
                        ((u32*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[-2] = color_u32;
                        ((u32*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[-2] = color_u32;
                    }
                    else
                    {
                        ((u32*)bmp->buf + (row * width) + rect->x + x)[2] = color_u32;
                        ((u32*)bmp->buf + ((rect->y + y) * width) + rect->x + x)[2] = color_u32;
                    }
                }
                else
                {
                    ((u32*)bmp->buf + (row * width) + rect->x + x)[0] = color_u32;
                }
            }
        }
        break;


    }
}

// 0x80377AEC
void func_ovl8_80377AEC(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, (u32*)&D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377B40(arg0, (s16*)arg1);
}

// 0x80377B40
void func_ovl8_80377B40(Sprite *arg0, s16 *arg1) 
{
    DBMenuPosition sp90;
    db4Shorts sp88;
    db4Shorts sp80;
    s16 actualWidth;
    s32 i;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 x;
    s32 y;
    s32 cols;
    s32 rows;
    s32 actualHeight;
    s32 j;
    s32 var_v1;

    sp80.arr[0] = sp80.arr[1] = 0;
    sp80.arr[2]  = arg0->width;
    sp80.arr[3]  = arg0->height;
    func_ovl8_8037A67C((s16*)arg1, (s16*)&sp80, (s16*)&sp90);
    
    if (func_ovl8_8037AA5C(&sp90) == 0) 
    {
        actualWidth = arg0->bitmap->width;
        actualHeight = arg0->bitmap->actualHeight;
        cols = sp90.x / actualWidth;
        rows = sp90.y / actualHeight;
        
        var_v1 = ((arg0->width % actualWidth) != 0) ? 1 : 0;
        sp6C = (arg0->width / actualWidth) + var_v1;
        
        var_v1 = ((sp90.w % actualWidth) != 0) ? 1 : 0;
        sp74 = (sp90.w / actualWidth) + var_v1 + 1;
        
        var_v1 = ((sp90.h % actualHeight) != 0) ? 1 : 0;
        sp70 = (sp90.h / actualHeight) + var_v1 + 1;
        
        for (i = 0; i < sp70; i++) 
        {
            for (j = 0; j < sp74; j++) 
            {
                x = cols + j;
                x *= actualWidth;
                
                y = rows + i;
                y *= actualHeight;

                sp88.arr[0] = x;
                sp88.arr[1] = y;
                sp88.arr[2] = actualWidth;
                sp88.arr[3] = actualHeight;
                if (func_ovl8_8037A67C((s16*)&sp88, (s16*)&sp90, (s16*)&sp80) != 0) 
                {
                    sp80.arr[0] = sp80.arr[0] % actualWidth;
                    sp80.arr[1] = sp80.arr[1] % actualHeight;
                    func_ovl8_803773CC(arg0->bitmap + ((rows + i) * sp6C) + j + cols, arg0->bmsiz, (DBMenuPosition*)&sp80);
                }
            }
        }
    }
}

// 0x80377EFC
void func_ovl8_80377EFC(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, (u32*)&D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377F50(arg0, arg1);
}

// 0x80377F50
void func_ovl8_80377F50(Sprite* arg0, db4Shorts* arg1)
{
	db4Shorts sp18;

	sp18.arr[0] = arg1->arr[0];
	sp18.arr[1] = arg1->arr[1];
	sp18.arr[2] = sp18.arr[3] = 1;
	func_ovl8_80377B40(arg0, (s16*)&sp18);
}

// 0x80377F90
void func_ovl8_80377F90(char* arg0, db4Shorts* arg1, s32 arg2, u8* arg3, s32 arg4)
{
	func_ovl8_80376B60(arg0[0x31], arg3, (u32*)&D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg4;
	func_ovl8_80377FE4((Sprite*)arg0, arg1, (db4Shorts*)arg2);
}

// 0x80377FE4
void func_ovl8_80377FE4(Sprite* arg0, db4Shorts* arg1, db4Shorts* arg2)
{
	s32 temp_s0;
	s32 unused[12];
	db4Shorts sp3C;
	db4Shorts sp34;

	func_ovl8_8037AA88(arg1->arr[0], arg1->arr[1], arg2->arr[0], arg2->arr[1], (dbUnknown7*)&sp3C);

	do
	{
		temp_s0 = func_ovl8_8037ABDC((Vec2h*)&sp34, (UiLineStepper*)&sp3C);
		func_ovl8_80377F50(arg0, &sp34);
	}
	while (temp_s0 > 0);
}

// 0x80378064
void func_ovl8_80378064(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, (u32*)&D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_803780B8(arg0, (DBMenuPosition*)arg1);
}

// 0x803780B8
void func_ovl8_803780B8(Sprite* arg0, DBMenuPosition* arg1)
{
	DBMenuPosition sp20;

	sp20.x = arg1->x;
	sp20.y = arg1->y;
	sp20.w = arg1->w;
	sp20.h = 1;
	func_ovl8_80377B40(arg0, (s16*)&sp20);

	sp20.x = arg1->x;
	sp20.y = arg1->y + arg1->h - 1;
	sp20.w = arg1->w;
	sp20.h = 1;
	func_ovl8_80377B40(arg0, (s16*)&sp20);

	sp20.x = arg1->x;
	sp20.y = arg1->y;
	sp20.w = 1;
	sp20.h = arg1->h;
	func_ovl8_80377B40(arg0, (s16*)&sp20);

	sp20.x = arg1->x + arg1->w - 1;
	sp20.y = arg1->y;
	sp20.w = 1;
	sp20.h = arg1->h;
	func_ovl8_80377B40(arg0, (s16*)&sp20);
}

// 0x803781A4
void func_ovl8_803781A4(u32 bmsiz, Bitmap* src_bmp, Bitmap* dst_bmp, DBMenuPosition* src_rect, DBMenuPosition* dst_rect)
{
    s16 src_width;
    s16 dst_width;
    s32 rect_width;
    s32 rect_height;
    s32 y;
    s32 x;
    s32 src_row_offset;
    s32 dst_row_offset;
    s32 src_is_odd_line;
    s32 dst_is_odd_line;
    u8* src_pixel_ptr_u8;
    u8* dst_pixel_ptr_u8;
    u8 pixel_u8;
    u8 pixel_u8_2;
    u16* src_pixel_ptr_u16;
    u16* dst_pixel_ptr_u16;
    u16 pixel_u16;
    u16 pixel_u16_2;
    s32* src_pixel_ptr_u32;
    s32* dst_pixel_ptr_u32;
    s32 pixel_u32;
    s32 pixel_u32_2;
    s32 src_pixel_offset;
    s32 dst_pixel_offset;

    rect_width = src_rect->w;
    rect_height = src_rect->h;
    src_width = src_bmp->width_img;
    dst_width = dst_bmp->width_img;

    switch (bmsiz)
    {
    case G_IM_SIZ_8b:
        for (y = 0; y < rect_height; y++)
        {
            for (x = 0; x < rect_width; x++)
            {
                src_row_offset = src_rect->y + y;
                src_is_odd_line = src_row_offset & 1;

                if (src_is_odd_line)
                {
                    if ((src_rect->x + x) & 4)
                    {
                        pixel_u8_2 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x - 4];
                    }
                    else
                    {
                        pixel_u8_2 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x + 4];
                    }
                    pixel_u8 = pixel_u8_2;
                }
                else
                {
                    pixel_u8 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x];
                }

                dst_row_offset = dst_rect->y + y;
                dst_is_odd_line = dst_row_offset & 1;

                if (dst_is_odd_line)
                {
                    if ((dst_rect->x + x) & 4)
                    {
                        ((u8*)dst_bmp->buf)[(dst_row_offset * dst_width) + dst_rect->x + x - 4] = pixel_u8;
                        ((u8*)dst_bmp->buf)[((dst_rect->y + y) * dst_width) + dst_rect->x + x - 4] = pixel_u8;
                        ((u8*)dst_bmp->buf)[((dst_rect->y + y) * dst_width) + dst_rect->x + x - 4] = pixel_u8;
                    }
                    else
                    {
                        ((u8*)dst_bmp->buf)[(dst_row_offset * dst_width) + dst_rect->x + x + 4] = pixel_u8;
                        ((u8*)dst_bmp->buf)[((dst_rect->y + y) * dst_width) + dst_rect->x + x + 4] = pixel_u8;
                    }
                }
                else
                {
                    ((u8*)dst_bmp->buf)[(dst_row_offset * dst_width) + dst_rect->x + x] = pixel_u8;
                }
            }
        }
        break;

    case G_IM_SIZ_4b:
        break;

    case G_IM_SIZ_16b:
        for (y = 0; y < rect_height; y++)
        {
            for (x = 0; x < rect_width; x++)
            {
                src_row_offset = src_rect->y + y;
                src_is_odd_line = src_row_offset & 1;

                if (src_is_odd_line)
                {
                    if ((src_rect->x + x) & 2)
                    {
                        pixel_u16_2 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[-2];
                    }
                    else
                    {
                        pixel_u16_2 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[2];
                    }
                    pixel_u16 = pixel_u16_2;
                }
                else
                {
                    pixel_u16 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[0];
                }

                dst_row_offset = dst_rect->y + y;
                dst_is_odd_line = dst_row_offset & 1;

                if (dst_is_odd_line)
                {
                    if ((dst_rect->x + x) & 2)
                    {
                        ((u16*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[-2] = pixel_u16;
                        ((u16*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[-2] = pixel_u16;
                        ((u16*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[-2] = pixel_u16;
                    }
                    else
                    {
                        ((u16*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[2] = pixel_u16;
                        ((u16*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[2] = pixel_u16;
                    }
                }
                else
                {
                    ((u16*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[0] = pixel_u16;
                }
            }
        }
        break;

    case G_IM_SIZ_32b:
        for (y = 0; y < rect_height; y++)
        {
            for (x = 0; x < rect_width; x++)
            {
                src_row_offset = src_rect->y + y;
                src_is_odd_line = src_row_offset & 1;

                if (src_is_odd_line)
                {
                    if ((src_rect->x + x) & 2)
                    {
                        pixel_u32_2 = ((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[-2];
                    }
                    else
                    {
                        pixel_u32_2 = ((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[2];
                    }
                    pixel_u32 = pixel_u32_2;
                }
                else
                {
                    pixel_u32 = ((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[0];
                }

                dst_row_offset = dst_rect->y + y;
                dst_is_odd_line = dst_row_offset & 1;

                if (dst_is_odd_line)
                {
                    if ((dst_rect->x + x) & 2)
                    {
                        ((s32*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[-2] = pixel_u32;
                        ((s32*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[-2] = pixel_u32;
                        ((s32*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[-2] = pixel_u32;
                    }
                    else
                    {
                        ((s32*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[2] = pixel_u32;
                        ((s32*)dst_bmp->buf + ((dst_rect->y + y) * dst_width) + dst_rect->x + x)[2] = pixel_u32;
                    }
                }
                else
                {
                    ((s32*)dst_bmp->buf + (dst_row_offset * dst_width) + dst_rect->x + x)[0] = pixel_u32;
                }
            }
        }
        break;

    }
}

// 0x803787C0
void func_ovl8_803787C0(Sprite* src_sprite, Sprite* dst_sprite, DBMenuPosition* src_rect, Vec2h* dst_rect) 
{
    DBMenuPosition final_rec_dst;
    DBMenuPosition final_rec_src;
    DBMenuPosition clipped_rect;
    DBMenuPosition bounds_dst;
    DBMenuPosition bounds_src;
    s32 src_bitmap_width;
    s32 dst_y_iter;
    s32 num_dst_bitmaps_x;
    s32 num_dst_bitmaps_y;
    s32 dst_bitmaps_per_row;
    s32 dst_bitmap_width;
    s32 dst_bitmap_height;
    s32 dst_bitmap_x;
    s32 dst_bitmap_y;
    s32 src_bitmap_height;
    s32 src_y_iter;
    s32 num_src_bitmaps_x;
    s32 num_src_bitmaps_y;
    s32 src_bitmaps_per_row;
    s32 dst_x_iter;
    s32 src_x_iter;
    s32 src_bitmap_x_start;
    s32 src_bitmap_y_start;
    Bitmap* bitmap;
    Bitmap* bitmap2;
    Vec2h dst_offset;
    
    // Copy destination position
    dst_offset = *dst_rect;
    
    // Copy source rect
    bounds_src = *src_rect;
    
    // Set up source sprite bounds
    clipped_rect.x = clipped_rect.y = 0;
    clipped_rect.w = src_sprite->width;
    clipped_rect.h = src_sprite->height;
    
    // Clip source rect to sprite bounds
    func_ovl8_8037A67C((s16*)src_rect, (s16*)&clipped_rect, (s16*)&bounds_src);
    
    // Adjust destination position based on clipping
    dst_offset.x = (dst_offset.x + bounds_src.x) - src_rect->x;
    dst_offset.y = (dst_offset.y + bounds_src.y) - src_rect->y;
    
    // Check if source rect is valid
    if (func_ovl8_8037AA5C(&bounds_src) == 0) 
    {
        // Set up destination sprite bounds
        clipped_rect.x = clipped_rect.y = 0;
        clipped_rect.w = dst_sprite->width;
        clipped_rect.h = dst_sprite->height;
        
        // Set up destination rect
        bounds_dst.x = dst_offset.x;
        bounds_dst.y = dst_offset.y;
        bounds_dst.w = bounds_src.w;
        bounds_dst.h = bounds_src.h;
        
        // Clip destination to sprite bounds
        func_ovl8_8037A67C((s16*)&clipped_rect, (s16*)&bounds_dst, (s16*)&final_rec_dst);
        
        // Calculate final offsets
        dst_offset.x = (dst_offset.x + final_rec_dst.x) - bounds_dst.x,
        dst_offset.y = (dst_offset.y + final_rec_dst.y) - bounds_dst.y;
        
        // Calculate adjusted source rect
        final_rec_dst.x = dst_offset.x - dst_rect->x;
        final_rec_dst.y = dst_offset.y - dst_rect->y;
        
        // Check if final rect is valid
        if (func_ovl8_8037AA5C(&final_rec_dst) == 0) 
        {
            bounds_dst = final_rec_dst;
            bounds_dst.x = dst_offset.x;
            bounds_dst.y = dst_offset.y;
            
            // Get bitmap arrays from sprites
            dst_bitmap_width = dst_sprite->bitmap->width;      // Individual bitmap width
            dst_bitmap_height = dst_sprite->bitmap->actualHeight;  // Individual bitmap height
            
            src_bitmap_width = src_sprite->bitmap->width;
            src_bitmap_height = src_sprite->bitmap->actualHeight;
            
            // Calculate which destination bitmap to start at
            dst_bitmap_x = dst_offset.x / dst_bitmap_width;
            dst_bitmap_y = dst_offset.y / dst_bitmap_height;
            
            // Calculate bitmaps per row for destination
            dst_bitmaps_per_row = dst_sprite->width / dst_bitmap_width + (((dst_sprite->width % dst_bitmap_width) != 0) ? 1 : 0);
            
            // Calculate which source bitmap to start at
            src_bitmap_x_start = bounds_src.x / src_bitmap_width;
            src_bitmap_y_start = bounds_src.y / src_bitmap_height;
            
            // Calculate bitmaps per row for source
            src_bitmaps_per_row = src_sprite->width / src_bitmap_width + (((src_sprite->width % src_bitmap_width) != 0) ? 1 : 0);
            
            // Calculate number of destination bitmaps to cover (X)
            num_dst_bitmaps_x = (bounds_dst.w / dst_bitmap_width) + 1 + (((bounds_dst.w % dst_bitmap_width) != 0) ? 1 : 0);
            
            // Calculate number of destination bitmaps to cover (Y)
            num_dst_bitmaps_y = (bounds_dst.h / dst_bitmap_height) + 1 + (((bounds_dst.h % dst_bitmap_height) != 0) ? 1 : 0);
            
            // Calculate number of source bitmaps to cover (X)
            num_src_bitmaps_x = (bounds_dst.w / src_bitmap_width) + 1 + (((bounds_dst.w % src_bitmap_width) != 0) ? 1 : 0);
            
            // Calculate number of source bitmaps to cover (Y)
            num_src_bitmaps_y = (bounds_dst.h / src_bitmap_height) + 1 + (((bounds_dst.h % src_bitmap_height) != 0) ? 1 : 0);
            
            // Loop through destination bitmap grid
            for (dst_y_iter = 0; dst_y_iter < num_dst_bitmaps_y; dst_y_iter++) 
            {   
                for (dst_x_iter = 0; dst_x_iter < num_dst_bitmaps_x; dst_x_iter++) 
                {
                    // Calculate destination bitmap rect in sprite coordinates
                    final_rec_dst.x = (dst_bitmap_x + dst_x_iter) * dst_bitmap_width;
                    final_rec_dst.y = (dst_bitmap_y + dst_y_iter) * dst_bitmap_height;
                    final_rec_dst.w = dst_bitmap_width;
                    final_rec_dst.h = dst_bitmap_height;
                    
                    // Loop through source bitmap grid
                    for (src_y_iter = 0; src_y_iter < num_src_bitmaps_y; src_y_iter++) 
                    {
                        for (src_x_iter = 0; src_x_iter < num_src_bitmaps_x; src_x_iter++)
                        {
                            // Calculate source bitmap rect
                            final_rec_src.x = (((src_bitmap_x_start + src_x_iter) * src_bitmap_width) + dst_offset.x) - bounds_src.x;
                            final_rec_src.y = (((src_bitmap_y_start + src_y_iter) * src_bitmap_height) + dst_offset.y) - bounds_src.y;
                            final_rec_src.w = src_bitmap_width;
                            final_rec_src.h = src_bitmap_height;

                            // Check if bitmaps overlap and blit
                            if ((func_ovl8_8037A67C((s16*)&final_rec_dst, (s16*)&bounds_dst, (s16*)&clipped_rect) != 0)) {
                                if ((func_ovl8_8037A67C((s16*)&clipped_rect, (s16*)&final_rec_src, (s16*)&clipped_rect) != 0))
                                {
                                    // Calculate offset within source bitmap
                                    final_rec_src.x = ((clipped_rect.x - dst_offset.x) + bounds_src.x) % src_bitmap_width;
                                    final_rec_src.y = ((clipped_rect.y - dst_offset.y) + bounds_src.y) % src_bitmap_height;
                                    final_rec_src.w = clipped_rect.w;
                                    final_rec_src.h = clipped_rect.h;
                                    clipped_rect.x = clipped_rect.x % dst_bitmap_width;
                                    clipped_rect.y = clipped_rect.y % dst_bitmap_height;
        
                                    // Blit between the two bitmaps
                                    // bitmap array is indexed: [y * bitmaps_per_row + x]
                                    bitmap = src_sprite->bitmap + ((src_bitmap_y_start + src_y_iter) * src_bitmaps_per_row) + src_x_iter + src_bitmap_x_start;
                                    bitmap2 = dst_sprite->bitmap + ((dst_bitmap_y + dst_y_iter) * dst_bitmaps_per_row) + dst_x_iter + dst_bitmap_x;
        
                                    func_ovl8_803781A4(
                                        src_sprite->bmsiz,
                                        bitmap,
                                        bitmap2,
                                        &final_rec_src,
                                        &clipped_rect
                                    );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

#line 1160
// 0x80379070
void func_ovl8_80379070(u8* arg0, s32 arg1, Bitmap* arg2, s16 arg3, DBMenuPosition* arg4)
{
    s16 temp_v0;
    s16 var_a0;
    s16 var_a1;
    s32 temp_t0;
    s32 mode;
    s32 var_t2a;
    s32 var_t2b;
    s32 var_t2c;
    s32 src_byte;
    s32 src_half;
    s32 src_word;
    s32 dest_byte;
    s32 dest_byte2;
    s32 dest_half;
    s32 dest_half2;
    s32 dest_word;
    s32 dest_word2;
    u8* pixel_addr;
    s32 c16;
    s32 c8;
    s32 c2;
    s32 c1;
    u16* pixel_addr16;
    s32* pixel_addr32;
    u8* var_v18;
    u8* var_v116;
    u8* var_v132;
    u8* var_v1b8;
    u8* var_v1b16;
    u8* var_v1b32;

    c16 = 0x10;
    c8 = 8;
    c2 = 2;
    c1 = 1;
    temp_v0 = arg2->width_img;

    switch (arg3)
    {
    case 0:
        break;
    case 1:
        var_v18 = arg0;
        for (var_a1 = 0; var_a1 < (s32)arg4->h; var_a1++)
        {
            for (var_a0 = 0; var_a0 < (s32)arg4->w; var_a0++)
            {
                mode = D_ovl8_80389F60; var_v1b8 = var_v18; var_v18 += 1; src_byte = *var_v1b8; if (!var_v1b8);

                if (mode == 4)
                {
                    temp_t0 = arg4->y + var_a1;
                    if (!var_v1b8);
                    pixel_addr = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0);
#line 1081
                    var_t2a = src_byte & 0xFF;
#line 1077
                }
                else
                {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1)
                    {
                        if ((arg4->x + var_a0) & 4)
                        {
                            pixel_addr = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0);
                            dest_byte2 = pixel_addr[-4];
                        }
                        else
                        {
                            pixel_addr = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0);
                            dest_byte2 = pixel_addr[4];
                        }
                        dest_byte = dest_byte2 & 0xFF;
                    }
                    else
                    {
                        pixel_addr = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0);
                        dest_byte = *pixel_addr;
                    }
                    var_t2a = dest_byte & 0xFF;

                if (c16 != mode) goto t0_1;
                goto blend_k1;
                t0_1:
                ;
                if (c8 == mode) goto blend_nz1;
                if (c2 == mode) goto blend_o1;
                if (c1 != mode) goto t3_1;
                goto blend_x1;
                t3_1:
                ;
                goto blended1;
                blend_k1:
                if (src_byte != D_ovl8_80389F64)
                {
                    var_t2a = src_byte & 0xFF;
                }
                goto blended1;
                blend_nz1:
                if (src_byte != 0)
                {
                    var_t2a = src_byte & 0xFF;
                }
                goto blended1;
                blend_o1:
                if (1)
                {
                    var_t2a = (dest_byte | src_byte) & 0xFF;
                }
                goto blended1;
                blend_x1:
                var_t2a = (dest_byte ^ src_byte) & 0xFF;
                blended1:
                ;
                }

                if (temp_t0 & 1)
                {
                    if ((arg4->x + var_a0) & 4)
                    {
                        pixel_addr[-4] = var_t2a;
                        (((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0))[-4] = var_t2a;
                        (((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0))[-4] = var_t2a;
                    }
                    else
                    {
                        pixel_addr[4] = var_t2a;
                        (((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0))[4] = var_t2a;
                    }
                }
                else
                {
                    *pixel_addr = var_t2a;
                }
            }
            var_v18 += (arg1 - (s32)arg4->w) * 1;
        }
        break;
    case 2:
        var_v116 = arg0;
        for (var_a1 = 0; var_a1 < (s32)arg4->h; var_a1++)
        {
            for (var_a0 = 0; var_a0 < (s32)arg4->w; var_a0++)
            {
                mode = D_ovl8_80389F60; var_v1b16 = var_v116; var_v116 += 2; src_half = *(u16*)var_v1b16;

                if (mode == 4)
                {
                    temp_t0 = arg4->y + var_a1;
                    if (!var_v1b16);
                    pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
#line 1176
                    var_t2b = src_half & 0xFFFF;
#line 1172
                }
                else
                {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1)
                    {
                        if ((arg4->x + var_a0) & 2)
                        {
                            pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                            dest_half2 = pixel_addr16[-2];
                        }
                        else
                        {
                            pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                            dest_half2 = pixel_addr16[2];
                        }
                        dest_half = dest_half2 & 0xFFFF;
                    }
                    else
                    {
                        pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                        dest_half = *pixel_addr16;
                    }
                    var_t2b = dest_half & 0xFFFF;

                if (c16 != mode) goto t0_2;
                goto blend_k2;
                t0_2:
                ;
                if (c8 == mode) goto blend_nz2;
                if (c2 == mode) goto blend_o2;
                if (c1 != mode) goto t3_2;
                goto blend_x2;
                t3_2:
                ;
                goto blended2;
                blend_k2:
                if (src_half != D_ovl8_80389F64)
                {
                    var_t2b = src_half & 0xFFFF;
                }
                goto blended2;
                blend_nz2:
                if (src_half != 0)
                {
                    var_t2b = src_half & 0xFFFF;
                }
                goto blended2;
                blend_o2:
                if (1)
                {
                    var_t2b = (dest_half | src_half) & 0xFFFF;
                }
                goto blended2;
                blend_x2:
                var_t2b = (dest_half ^ src_half) & 0xFFFF;
                blended2:
                ;
                }

                if (temp_t0 & 1)
                {
                    if ((arg4->x + var_a0) & 2)
                    {
                        pixel_addr16[-2] = var_t2b;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[-2] = var_t2b;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[-2] = var_t2b;
                    }
                    else
                    {
                        pixel_addr16[2] = var_t2b;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[2] = var_t2b;
                    }
                }
                else
                {
                    *pixel_addr16 = var_t2b;
                }
            }
            var_v116 += (arg1 - (s32)arg4->w) * 2;
        }
        break;
    case 3:
        var_v132 = arg0;
        for (var_a1 = 0; var_a1 < (s32)arg4->h; var_a1++)
        {
            for (var_a0 = 0; var_a0 < (s32)arg4->w; var_a0++)
            {
                mode = D_ovl8_80389F60; var_v1b32 = var_v132; var_v132 += 4; src_word = *(s32*)var_v1b32;

                if (mode == 4)
                {
                    temp_t0 = arg4->y + var_a1;
                    if (!var_v1b32);
                    pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
#line 1271
                    var_t2c = src_word;
#line 1267
                }
                else
                {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1)
                    {
                        if ((arg4->x + var_a0) & 2)
                        {
                            pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                            dest_word2 = pixel_addr32[-2];
                        }
                        else
                        {
                            pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                            dest_word2 = pixel_addr32[2];
                        }
                        dest_word = dest_word2;
                    }
                    else
                    {
                        pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                        dest_word = *pixel_addr32;
                    }
                    var_t2c = dest_word + 0;

                if (c16 != mode) goto t0_3;
                goto blend_k3;
                t0_3:
                ;
                if (c8 == mode) goto blend_nz3;
                if (c2 == mode) goto blend_o3;
                if (c1 != mode) goto t3_3;
                goto blend_x3;
                t3_3:
                ;
                goto blended3;
                blend_k3:
                if (src_word != D_ovl8_80389F64)
                {
                    var_t2c = src_word;
                }
                goto blended3;
                blend_nz3:
                if (src_word != 0)
                {
                    var_t2c = src_word;
                }
                goto blended3;
                blend_o3:
                if (1)
                {
                    var_t2c = dest_word | src_word;
                }
                goto blended3;
                blend_x3:
                var_t2c = dest_word ^ src_word;
                if (dest_word);
                if (dest_word);
                if (dest_word);
                blended3:
                ;
                }

                if (temp_t0 & 1)
                {
                    if ((arg4->x + var_a0) & 2)
                    {
                        pixel_addr32[-2] = var_t2c;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[-2] = var_t2c;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[-2] = var_t2c;
                    }
                    else
                    {
                        pixel_addr32[2] = var_t2c;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[2] = var_t2c;
                    }
                }
                else
                {
                    *pixel_addr32 = var_t2c;
                }
                if (src_word);
            }
            var_v132 += (arg1 - (s32)arg4->w) * 4;
        }
        break;
    }
}

// 0x803798A0
void func_ovl8_803798A0(Sprite* sprite, u8* dst, s32 dst_w, s32 dst_h, s16* pos, s32 arg5)
{
	DBMenuPosition spB0;
	DBMenuPosition spA8;
	DBMenuPosition spA0;
	DBMenuPosition sp98;
	s32 j;
	s32 i;
	s32 sp8C;
	s32 sp88;
	s32 sp84;
	s32 s3;
	s32 s6;
	s32 sp78;
	s32 sp74;
	s32 sp70;
	s32 sp6C;
	u8* s1;
	s32 s7;
	s32 pad;
	u8* dst_ptr;

	D_ovl8_80389F60 = arg5;
	pad = ((sprite->bmsiz == 1) ? 1 : (sprite->bmsiz == 2) ? 2 : 4);
	if (&sp6C); sp6C = pad;

	spB0.x = pos[0];
	spB0.y = pos[1];
	spB0.h = dst_h;
	spB0.w = dst_w;

	sp98.x = sp98.y = 0;
	sp98.w = sprite->width;
	sp98.h = sprite->height;

	func_ovl8_8037A67C((s16*)&spB0, (s16*)&sp98, (s16*)&spA8);

	if (func_ovl8_8037AA5C(&spA8) == 0)
	{
		func_ovl8_8037A67C((s16*)&spA8, (s16*)&D_ovl8_80389F68, (s16*)&spA8);

		if (func_ovl8_8037AA5C(&spA8) == 0)
		{
			dst_ptr = dst;
            if (!pad); s7 = (spA8.x - spB0.x);
            dst_ptr += (((spA8.y - spB0.y) * dst_w + s7) * pad);

			s3 = sprite->bitmap->width;
			s6 = sprite->bitmap->actualHeight;

			sp78 = spA8.x / s3;
			sp74 = spA8.y / s6;

			sp84 = (sprite->width / s3) + (pad = (sprite->width % s3 ? 1 : 0));
			sp8C = (spA8.w / s3) + (pad = (spA8.w % s3 ? 1 : 0)) + 1;
			sp88 = (spA8.h / s6) + (pad = (spA8.h % s6 ? 1 : 0)) + 1;

			for (i = 0; i < sp88; i++)
			{
				s1 = dst_ptr;
				if (sp8C);

				for (j = 0; j < sp8C; j++)
				{
					spA0.x = (sp78 + j) * s3;
					spA0.y = (sp74 + i) * s6;
					spA0.w = s3;
					spA0.h = s6;

					if (func_ovl8_8037A67C((s16*)&spA0, (s16*)&spA8, (s16*)&sp98) != 0)
					{
						sp98.x = sp98.x % s3;
						sp98.y = sp98.y % s6;

						func_ovl8_80379070(
							s1,
							dst_w,
							sprite->bitmap + ((sp74 + i) * sp84) + j + sp78,
							sprite->bmsiz,
							&sp98
						);

						sp70 = sp98.h;
					}

					s1 += sp98.w * sp6C;
				}

				dst_ptr += sp70 * dst_w * sp6C;
			}
		}
	}
}

// 0x80379D74
/* func_ovl8_80379D74 - SSB64 US, src/ovl8/ovl8_8.c
 * Built with the accom-hybrid pipeline:
 *   IDO 4.1 acpp + accom  ->  IDO 7.1 uopt + ugen + as1
 * Strict C89 (accom): no // comments, all declarations at the top of the block.
 */
void func_ovl8_80379D74(u8* dst_buf, s32 dst_width, Bitmap* src_bmp, s16 bmsiz, DBMenuPosition* src_rect)
{
    s16 src_width;
    s16 x;
    s16 y;
    s32 src_row_offset;
    s32 src_is_odd_line;
    u8* var_v1;
    u8* qq;
    u8 pixel_u8;
    u8 pixel_u8_2;
    u16 pixel_u16;
    u16 pixel_u16_2;
    s32 pixel_u32;
    s32 pixel_u32_2;

    src_width = src_bmp->width_img;

    switch (bmsiz)
    {
        case G_IM_SIZ_8b:
            var_v1 = dst_buf;
            for (y = 0; y < src_rect->h; y++)
            {
                for (x = 0; x < src_rect->w; x++)
                {
                    src_row_offset = src_rect->y + y;
                    src_is_odd_line = src_row_offset & 1;

                    if (src_is_odd_line)
                    {
                        if ((src_rect->x + x) & 4)
                        {
                            pixel_u8_2 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x - 4];
                        }
                        else
                        {
                            pixel_u8_2 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x + 4];
                        }
                        pixel_u8 = pixel_u8_2;
                    }
                    else
                    {
                        pixel_u8 = ((u8*)src_bmp->buf)[(src_row_offset * src_width) + src_rect->x + x];
                    }

                    qq = var_v1;
                    var_v1 += 1;
                    *(u8*)qq = pixel_u8;
                }
                var_v1 += (dst_width - src_rect->w) * 1;
            }
            break;

        case G_IM_SIZ_4b:
            break;

        case G_IM_SIZ_16b:
            var_v1 = dst_buf;
            for (y = 0; y < src_rect->h; y++)
            {
                for (x = 0; x < src_rect->w; x++)
                {
                    src_row_offset = src_rect->y + y;
                    src_is_odd_line = src_row_offset & 1;

                    if (src_is_odd_line)
                    {
                        if ((src_rect->x + x) & 2)
                        {
                            pixel_u16_2 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[-2];
                        }
                        else
                        {
                            pixel_u16_2 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[2];
                        }
                        pixel_u16 = pixel_u16_2;
                    }
                    else
                    {
                        pixel_u16 = ((u16*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[0];
                    }

                    qq = var_v1;
                    var_v1 += 2;
                    *(u16*)qq = pixel_u16;
                }
                var_v1 += (dst_width - src_rect->w) * 2;
            }
            break;

        case G_IM_SIZ_32b:
            var_v1 = dst_buf;
            for (y = 0; y < src_rect->h; y++)
            {
                for (x = 0; x < src_rect->w; x++)
                {
                    src_row_offset = src_rect->y + y;
                    src_is_odd_line = src_row_offset & 1;

                    if (src_is_odd_line)
                    {
                        if ((src_rect->x + x) & 2)
                        {
                            pixel_u32_2 = ((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[-2];
                        }
                        else
                        {
                            pixel_u32_2 = ((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[2];
                        }
                        qq = (u8*)pixel_u32_2;
                    }
                    else
                    {
                        qq = (u8*)((s32*)src_bmp->buf + (src_row_offset * src_width) + src_rect->x + x)[0];
                    }

                    pixel_u32 = (s32)qq;
                    qq = var_v1;
                    var_v1 += 4;
                    *(s32*)qq = pixel_u32;
                }
                var_v1 += (dst_width - src_rect->w) * 4;
            }
            break;

    }
}

// 0x8037A0FC
// 0x8037A0FC
void func_ovl8_8037A0FC(Sprite* sprite, DBMenuPosition* dst_rect, u8* dst_buffer) 
{
    DBMenuPosition spB0;
    DBMenuPosition spA8;
    DBMenuPosition spA0;
    DBMenuPosition sp98;
    s32 s0;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 s3;
    s32 s6;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    u8* s1;
    s32 s7;
    s32 pad;
    u8* sp5C;


    *(DBMenuPosition*)&spB0 = *dst_rect;
    pad = ((sprite->bmsiz == 1) ? 1 : (sprite->bmsiz == 2) ? 2 : 4);
    sp6C = pad;
    sp98.x = sp98.y = 0;
    sp98.w = sprite->width;
    sp98.h = sprite->height;

    func_ovl8_8037A67C((s16*)&spB0, (s16*)&sp98, (s16*)&spA8);

    if (func_ovl8_8037AA5C(&spA8) == 0) 
    {
        sp5C = dst_buffer;
        s7 = (spA8.x - spB0.x);
        sp5C += (((spA8.y - spB0.y) * dst_rect->w + s7) * pad);
        
        s3 = sprite->bitmap->width;
        s6 = sprite->bitmap->actualHeight;
        
        sp78 = spA8.x / s3;
        sp74 = spA8.y / s6;
        
        sp84 = (sprite->width / s3) + (pad = (sprite->width % s3 ? 1 : 0));
        sp8C = (spA8.w / s3) + (pad = (spA8.w % s3 ? 1 : 0)) + 1;
        sp88 = (spA8.h / s6) + (pad = (spA8.h % s6 ? 1 : 0)) + 1;
        
        for (sp90 = 0; sp90 < sp88; sp90++)
        {
            s1 = sp5C;
            
            for (s0 = 0; s0 < sp8C; s0++) 
            {
                spA0.x = (sp78 + s0) * s3;
                spA0.y = (sp74 + sp90) * s6;
                spA0.w = s3;
                spA0.h = s6;
                
                if (func_ovl8_8037A67C((s16*)&spA0, (s16*)&spA8, (s16*)&sp98) != 0) 
                {
                    sp98.x = sp98.x % s3;
                    sp98.y = sp98.y % s6;
                    s7 = (s32)(sprite->bitmap + ((sp74 + sp90) * sp84) + s0 + sp78);
                    func_ovl8_80379D74(s1, dst_rect->w, (Bitmap*)s7, sprite->bmsiz, &sp98);

                    sp70 = sp98.h;
                }
                
                s1 += sp98.w * sp6C;
            }
            
            sp5C += sp70 * dst_rect->w * sp6C;
        }
    }
}

// 0x8037A5B8
void func_ovl8_8037A5B8(Sprite* arg0, DBMenuPosition* arg1, s32 arg2)
{
	DBMenuPosition sp28;
	u32 var_a1;
	u32 sp20;

	sp28.x = arg1->x;
	sp28.y = arg1->y;
	sp28.w = sp28.h = 1;
	func_ovl8_8037A0FC(arg0, &sp28, (u8*)&sp20);

	var_a1 = sp20;
	if (arg0->bmsiz == 2)
	{
		var_a1 = sp20 >> 0x10;
	}
	func_ovl8_80376C40(arg0->bmsiz, var_a1, (u8*)arg2);
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
	func_ovl8_803787C0((Sprite*)arg0, (Sprite*)arg0, &sp20, (Vec2h*)&sp1C);
}

// 0x8037A67C
s32 func_ovl8_8037A67C(s16* arg0, s16* arg1, s16* arg2)
{
	s32 sp30[2];
	s32 sp28[2];
	s32 sp20[2];
	s32 sp1C;

	func_ovl8_8037A9F4((DBMenuPosition*)arg0, (DBMenuPosition*)&sp30);
	func_ovl8_8037A9F4((DBMenuPosition*)arg1, (DBMenuPosition*)&sp28);
	sp1C = func_ovl8_8037A6D4((db4Shorts*)&sp30, (db4Shorts*)&sp28, (db4Shorts*)&sp20);
	func_ovl8_8037AA28((db4Shorts*)&sp20, (db4Shorts*)arg2);
	return sp1C;
}

// 0x8037A6D4
s32 func_ovl8_8037A6D4(db4Shorts *rect1, db4Shorts *rect2, db4Shorts *intersection) {
    s16 rect1_bottom;
    s16 rect1_right;
    s16 rect2_right;
    s16 rect2_left;
    s16 result_value;
    s32 overlapX;
    s32 overlapY;
    
    // Check X-axis overlap
    overlapX = 0;
    rect2_left = rect2->arr[0], rect1_right = rect1->arr[2];
    
    // Case 1: rect2 left edge inside rect1, rect2 extends past rect1 right
    if ((rect2_left < rect1_right) && (rect2->arr[2] >= rect1_right)) {
        overlapX = 1;
    }
    // Case 2: rect1 left edge inside rect2
    else if ((rect1->arr[0] >= rect2_left) && (rect1->arr[0] < rect2->arr[2])) {
        overlapX = 1;
    }
    // Case 3: rect1 completely contains rect2 horizontally
    else if ((rect1->arr[0] < rect2_left) && (rect1_right >= rect2->arr[2])) {
        overlapX = 1;
    }
    
    if (overlapX != 0) {
        // Compute intersection left edge: max(rect1_left, rect2_left)
        result_value = rect2_left < rect1->arr[0] ? rect1->arr[0] : rect2_left;

        intersection->arr[0] = result_value;
        
        // Compute intersection right edge: min(rect1_right, rect2_right)
        rect2_right = rect2->arr[2];
        rect1_right = rect1->arr[2];
        result_value = rect1_right < rect2_right ? rect1_right : rect2_right;
        intersection->arr[2] = result_value;
        
        // Check Y-axis overlap
        rect1_bottom = rect1->arr[3];
        rect2_left = rect2->arr[1];  // reused as rect2_top
        overlapY = 0;
        rect1_right = rect1->arr[1]; // reused as rect1_top
        
        // Case 1: rect2 top edge inside rect1, rect2 extends past rect1 bottom
        if ((rect2_left < rect1_bottom) && (rect2->arr[3] >= rect1_bottom)) {
            overlapY = 1;
        }
        // Case 2: rect1 top edge inside rect2
        else if ((rect1->arr[1] >= rect2_left) && (rect1->arr[1] < rect2->arr[3])) {
            overlapY = 1;
        }
        // Case 3: rect1 completely contains rect2 vertically
        else if ((rect1->arr[1] < rect2_left) && (rect1_bottom >= rect2->arr[3])) {
            overlapY = 1;
        }
        
        if (overlapY != 0) {
            // Compute intersection top edge: max(rect1_top, rect2_top)
            rect1_right = rect1->arr[1]; // reused as rect1_top
            result_value = rect2_left < rect1_right ?  rect1_right : rect2_left;    // rect2_top
            intersection->arr[1] = result_value;
            
            // Compute intersection bottom edge: min(rect1_bottom, rect2_bottom)
            rect2_right = rect2->arr[3]; // reused as rect2_bottom
            rect1_bottom = rect1->arr[3];
            result_value = rect1_bottom < rect2_right ? rect1_bottom : rect2_right;
            intersection->arr[3] = result_value;
            return 1; // Rectangles intersect
        }
    }
    intersection->arr[2] = 0;
    intersection->arr[3] = 0;
    intersection->arr[1] = 0;
    intersection->arr[0] = 0;
    return 0;
}

// 0x8037A8BC
void func_ovl8_8037A8BC(void* arg0, void* arg1)
{
	s32 sp20[2];
	s32 sp18[2];

	func_ovl8_8037A9F4((DBMenuPosition*)arg0, (DBMenuPosition*)&sp20);
	func_ovl8_8037A9F4((DBMenuPosition*)arg1, (DBMenuPosition*)&sp18);
	func_ovl8_8037A904((db4Shorts*)&sp20, (db4Shorts*)&sp18);
	func_ovl8_8037AA28((db4Shorts*)&sp18, (db4Shorts*)arg1);
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

